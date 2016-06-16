<?php
/**
 * Plugin definition.
 */
$plugin = array(
  'title' => t('Posts teaser'),
  'description' => t('Show posts teaser.'),
  'category' => t('Custom'),
  'hook theme' => 'example_posts_teaser_content_type_theme',
);

/**
 * Render callback.
 */
function example_posts_teaser_content_type_render($subtype, $conf, $args, $context) {


  $block = new stdClass();
  $block->module = 'example';
  $block->title = '';

  $image = theme('image', array('path' => 'http://placehold.it/50x50'));

  $block->content = theme('posts_teaser', array('title' => 'Lorem', 'body' => 'Post Body...', 'image' => $image));
  return $block;
}
/**
 * Edit form.
 */
function example_posts_teaser_content_type_edit_form($form, &$form_state) {
  return $form;
}

/**
 * Delegated hook_theme().
 */
function example_posts_teaser_content_type_theme(&$theme, $plugin) {
  $theme['posts_teaser'] = array(
    'variables' => array(
      'title' => NULL,
      'body' => NULL,
      'image' => NULL,
    ),
    'path' => $plugin['path'],
    'template' => 'post-teaser',
  );
}

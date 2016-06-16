<?php
/**
 * @file
 * my_feature.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function my_feature_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'example';
  $page->task = 'page';
  $page->admin_title = 'example';
  $page->admin_description = '';
  $page->path = 'example';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_example__panel';
  $handler->task = 'page';
  $handler->subtask = 'example';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Posts';
  $display->uuid = '2823d83a-779d-4c03-b1ff-2c40a98af5aa';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ae9f1f9a-8d13-4925-9b9a-cafbaefd4da5';
  $pane->panel = 'center';
  $pane->type = 'posts_teaser';
  $pane->subtype = 'posts_teaser';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ae9f1f9a-8d13-4925-9b9a-cafbaefd4da5';
  $display->content['new-ae9f1f9a-8d13-4925-9b9a-cafbaefd4da5'] = $pane;
  $display->panels['center'][0] = 'new-ae9f1f9a-8d13-4925-9b9a-cafbaefd4da5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['example'] = $page;

  return $pages;

}

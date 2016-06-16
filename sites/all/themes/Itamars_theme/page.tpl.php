<?php if ($page['header']): ?>
  <header id="header">

    <?php print render($page['header']); ?>
  </header>
<?php endif; ?>


<section id="wrapper">

  <main id="content">
    <?php print render($page['content']); ?>
  </main>

  <?php if ($page['sidebar_first']): ?>
    <aside id="sidebar_first">
      <?php print render($page['sidebar_first']); ?>
    </aside>
  <?php endif; ?>

</section>

<?php if ($page['footer']): ?>
  <div id="footer">
    <?php print render($page['footer']); ?>
  </div>
<?php endif; ?>

<?php // $Id$
/**
 * @file
 *  page.tpl.php
 *
 * Theme implementation to display a single Drupal page.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 */
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" lang="<?php print $language->language; ?>" xml:lang="<?php print $language->language; ?>">
<head>
  <meta http-equiv="Content-Style-Type" content="text/css" />
  <!--[if IE]>
    <link type="text/css" rel="stylesheet" media="all" href="<?php print $base_path . $directory; ?>/ie.css" >
  <![endif]-->
  <?php //print $scripts; ?>
</head>
<body id="teleco" class="<?php print $classes; ?> <?php print $logo ? 'with-logo' : 'no-logo' ; ?>">
<?php print render($page['$page_top']); ?>
  <div id="skip-to-content">
    <a href="#main-content"><?php print t('Skip to main content'); ?></a>
  </div>

    <div id="page">

      <div id="header">
	    <div id="header-wrapper" class="clearfix">
		
          <div id="head-elements">
            <?php if ($logo): ?>
            <div id="logo">
              <a href="<?php print check_url($front_page) ?>" title="<?php print t('Home') ?>"><img src="<?php print $logo ?>" alt="<?php print t('Home') ?>" /></a>
			  </div>
            <?php endif; ?>
          <?php if ($site_name): ?>
          <div id="site-name">
            <h1><a href="<?php print $base_path ?>" title="<?php print t('Home'); ?>"><?php print $site_name; ?></a></h1>
		  </div>	
          <?php endif; ?>
          <?php if ($site_slogan): ?>
            <div id="site-slogan"><em><?php print $site_slogan; ?></em></div>
          <?php endif; ?>
        </div> <!-- /#head-elements -->
		
      <?php if ($page['header_last']): ?>
		<div id="header-last">
		  <?php print render($page['header_last']); ?>
		</div>
      <?php endif; ?>
      </div> <!-- /#header-wrapper -->
  
        <div id="header-bottom" class="clearfix">
       <?php if($mainmenu): ?>
          <!-- Primary || Superfish -->
          <div id="primary">
            <div id="primary-inner">
              <?php
				if ($main_menu) {
				$pid = variable_get('menu_main_links_source', 'main-menu');
				$tree = menu_tree($pid);
				$tree = str_replace(' class="menu"', '', $tree);
				$main_menu = drupal_render($tree);
				}else{
				$main_menu = FALSE;
				}
			  ?>
			  <?php
				if ($main_menu): print $main_menu; endif;
			  ?>
            </div> <!-- /inner -->
          </div> <!-- /primary || superfish -->
        <?php  endif; ?>
		
    </div> <!--/#header-bottom -->
    </div> <!--/#header -->
	  <div id="top-bar">
       <?php if ($page['highlighted']): ?>
          <div id="highlighted">
          <?php   print render($page['highlighted']); ?>
		  </div>
        <?php endif; ?>
	  </div>
      <div id="header-slide" class="region region-header">
      </div> <!-- /#header-slide -->
	   <?php if ($breadcrumb): ?>
         <?php print $breadcrumb; ?>
        <?php endif; ?>
        <?php if ($secondarylinks) : ?>
		      <div id="secondary-links">
          <?php print $secondarylinks; ?>
      </div>
        <?php endif; ?>
	  

    <?php if ($page['header']): ?>
      <div id="header-blocks" class="region region-header">
        <?php print render($page['header']); ?>
      </div> <!-- /#header-blocks -->
    <?php endif; ?>
	
    <div id="main" class="clearfix">

      <div id="content"><div id="content-inner">

        <?php if ($page['content_top']): ?>
          <div id="content-top" class="region region-content_top">
            <?php print render($page['content_top']); ?>
          </div> <!-- /#content-top -->
        <?php endif; ?>

        <div id="content-header" class="clearfix">
          <?php if ($tabs): ?><div class="tabs"><?php print render($tabs); ?></div><?php endif; ?>
          <a name="main-content" id="main-content"></a>
          <?php if ($title): ?><h1 class="title"><?php print render($title); ?></h1><?php endif; ?>
          <?php if ($messages): print $messages; endif; ?>
          <?php if ($page['help']): print render($page['help']); endif; ?>
          <?php if ($action_links): ?>
            <ul class="action-links"><?php print render($action_links); ?></ul>
          <?php endif; ?>
        </div> <!-- /#content-header -->

        <div id="content-area">
          <?php print render($page['content']); ?>
        </div>

        <?php if ($page['content_bottom']): ?>
          <div id="content-bottom" class="region region-content_bottom">
            <?php print render($page['content_bottom']); ?>
          </div> <!-- /#content-bottom -->
        <?php endif; ?>

        <?php if ($feed_icons): ?>
          <div class="feed-icons"><?php print $feed_icons; ?></div>
        <?php endif; ?>

      </div></div> <!-- /#content-inner, /#content -->

      <?php if ($page['sidebar_first']): ?>
        <div id="sidebar-first" class="region region-sidebar-first">
          <?php print render($page['sidebar_first']); ?>
        </div> <!-- /#sidebar-first -->
      <?php endif; ?>

      <?php if ($page['sidebar_second']): ?>
        <div id="sidebar-second" class="region region-sidebar-second">
          <?php print render($page['sidebar_second']); ?>
        </div> <!-- /sidebar-second -->
      <?php endif; ?>

    </div> <!-- #main -->

    <div id="footer" class="region region-footer">
      <?php if ($page['footer']): 
	  print render($page['footer']); endif; ?>
    </div> <!-- /#footer -->

  </div> <!--/#page -->


  <?php print render($page['page_bottom']); ?>

</body>
</html>
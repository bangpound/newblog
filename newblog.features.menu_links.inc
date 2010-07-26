<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function newblog_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:blog
  $menu_links['features:blog'] = array(
    'menu_name' => 'features',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blogs',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  array(
    t('Blogs'),
  );


  return $menu_links;
}

<?php

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _newblog_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'newblog-page';
  $context->description = '';
  $context->tag = 'newblog';
  $context->conditions = array(
    'flag' => array(
      'values' => array(
        'newblog' => 'newblog',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'blog',
    'theme' => array(
      'title' => '',
      'subtitle' => '',
      'class' => 'newblog',
    ),
  );
  $context->condition_mode = 0;

  $translatables['newblog-page'] = array(
    t('newblog'),
  );

  $export['newblog-page'] = $context;
  return $export;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _newblog_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
}

/**
 * Helper to implementation of hook_flag_default_flags().
 */
function _newblog_flag_default_flags() {
$flags = array();
// Exported flag: "Blog post".
$flags[] = array (
  'content_type' => 'node',
  'name' => 'newblog',
  'title' => 'Blog post',
  'global' => '1',
  'types' =>
  array (
    0 => 'audio',
    1 => 'image',
    2 => 'link',
    3 => 'blog',
    4 => 'video',
  ),
  'flag_short' => 'add to user blog',
  'flag_long' => '',
  'flag_message' => '',
  'unflag_short' => 'remove from user blog',
  'unflag_long' => '',
  'unflag_message' => '',
  'unflag_denied_text' => '',
  'link_type' => 'toggle',
  'roles' =>
  array (
    'flag' =>
    array (
      0 => 1001,
    ),
    'unflag' =>
    array (
      0 => 1001,
    ),
  ),
  'show_on_page' => 0,
  'show_on_teaser' => 0,
  'show_on_form' => 1,
  'access_author' => 'own',
  'i18n' => '1',
  'module' => 'newblog',
  'locked' => 
  array (
    'name' => 'name',
  ),
  'api_version' => 2,
);
return $flags;
}

/**
 * Helper to implementation of hook_menu_default_items().
 */
function _newblog_menu_default_items() {
  $items = array();

  $items[] = array(
    'title' => 'Blogs',
    'path' => 'blog',
    'weight' => '0',
  );
  // Translatables
  array(
    t('Blogs'),
  );


  return $items;
}

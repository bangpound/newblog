<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function newblog_context_default_contexts() {
  module_load_include('inc', 'newblog', 'newblog.defaults');
  $args = func_get_args();
  return call_user_func_array('_newblog_context_default_contexts', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function newblog_ctools_plugin_api() {
  module_load_include('inc', 'newblog', 'newblog.defaults');
  $args = func_get_args();
  return call_user_func_array('_newblog_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_flag_default_flags().
 */
function newblog_flag_default_flags() {
  module_load_include('inc', 'newblog', 'newblog.defaults');
  $args = func_get_args();
  return call_user_func_array('_newblog_flag_default_flags', $args);
}

/**
 * Implementation of hook_menu_default_items().
 */
function newblog_menu_default_items() {
  module_load_include('inc', 'newblog', 'newblog.defaults');
  $args = func_get_args();
  return call_user_func_array('_newblog_menu_default_items', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function newblog_views_default_views() {
  module_load_include('inc', 'newblog', 'newblog.features.views');
  $args = func_get_args();
  return call_user_func_array('_newblog_views_default_views', $args);
}

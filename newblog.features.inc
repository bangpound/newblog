<?php

/**
 * Implementation of hook_views_default_views().
 */
function newblog_views_default_views() {
  module_load_include('inc', 'newblog', 'newblog.features.views');
  $args = func_get_args();
  return call_user_func_array('_newblog_views_default_views', $args);
}

<?php
// $Id: newblog.views.inc,v 1.1.2.2 2008/11/16 23:41:59 bangpound Exp $

/**
 * Implementation of hook_views_default_views_alter()
 */
function newblog_views_default_views_alter(&$views) {
  // filter group blog list view by the vid in newblog_vocabulary.
  if (!empty($views['blog_list'])) {
    $views['blog_list']->display['default']->display_options['filters']['vid']['value'] = array(variable_get('newblog_vocabulary', 0));
  }
}

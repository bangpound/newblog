<?php
// $Id: newblog.views.inc,v 1.1.2.2 2008/11/16 23:41:59 bangpound Exp $

function newblog_views_data() {
  $data = array();
  $data['newblog']['table']['group'] = t('Blog');
  $data['newblog']['table']['title'] = t('Blog');
  $data['newblog']['table']['help'] = t('blog posts');
  $data['newblog']['table']['join']['node'] = array(
    'left_field' => 'nid',
    'field' => 'nid',
  );
  $data['newblog']['table']['join']['users'] = array(
    'left_table' => 'node',
    'left_field' => 'uid',
    'field' => 'nid',
  );
  $data['newblog']['nid'] = array(
    'title' => t('Node'),
    'help' => t('Blog posts'),
    'filter' => array(
      'handler' => 'views_handler_filter_newblog_nid',
    ),
  );

  return $data;
}

/**
 * Implementation of hook_views_handlers()
 */
function newblog_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'newblog'),
    ),
    'handlers' => array(
      'views_handler_filter_newblog_nid' => array(
        'parent' => 'views_handler_filter_boolean_operator',
      ),
    ),
  );
}

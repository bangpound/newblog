<?php

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
  'api_version' => 2,
);
return $flags;
}

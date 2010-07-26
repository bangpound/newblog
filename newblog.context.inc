<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function newblog_context_default_contexts() {
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

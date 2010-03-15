<?php
// $Id$

/**
 * Filter by whether or not a node is a blog post to newblog module.
 */
class views_handler_filter_newblog_nid extends views_handler_filter_boolean_operator {
  function construct() {
    parent::construct();
    $this->value_value = t('Is a blog post');
  }

  function query() {
    // Figure out what base table this relationship brings to the party.
    $table_data = views_fetch_data($this->definition['base']);
    $base_field = empty($this->definition['base field']) ? $table_data['table']['base']['field'] : $this->definition['base field'];

    $this->ensure_my_table();

    $def = $this->definition;
    $def['table'] = 'node';
    $def['field'] = 'nid';
    $def['left_table'] = $this->table_alias;
    $def['left_field'] = $this->field;
    if (!empty($this->options['required'])) {
      $def['type'] = 'INNER';
    }

    if (!empty($def['join_handler']) && class_exists($def['join_handler'])) {
      $join = new $def['join_handler'];
    }
    else {
      $join = new views_join();
    }

    $join->definition = $def;
    $join->construct();
    $join->adjusted = TRUE;

    // use a short alias for this:
    $alias = $def['table'] . '_' . $this->table;

    $this->query->add_relationship($alias, $join, $this->definition['base'], $this->relationship);
    $this->query->add_where($this->options['group'], $this->table_alias .'.'. $this->field .' '. (empty($this->value) ? 'IS NULL' : 'IS NOT NULL'));
  }
}

<?php
/**
 * @file
 * libros.features.inc
 */

/**
 * Implements hook_node_info().
 */
function libros_node_info() {
  $items = array(
    'libros' => array(
      'name' => t('Libros'),
      'base' => 'node_content',
      'description' => t('Práctica de features'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

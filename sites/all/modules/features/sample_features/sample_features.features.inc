<?php
/**
 * @file
 * sample_features.features.inc
 */

/**
 * Implements hook_views_api().
 */
function sample_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function sample_features_node_info() {
  $items = array(
    'custom_content_type' => array(
      'name' => t('Custom Content Type'),
      'base' => 'node_content',
      'description' => t('Sample content type to create data for drupal devops.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

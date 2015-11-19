<?php

/**
 * @file
 * Administration functions for the proud_search module.
 */

/**
 * Menu callback: map settings
 */
function proud_aggregator_admin_form() {
  $form = array();

  $form['proud_aggregator_url'] = array(
    '#type' => 'textfield',
    '#size' => 20,
    '#title' => t('Social feed api url'),
    '#default_value' => variable_get('proud_aggregator_url', 'http://localhost:8084'),
  );

  $form['proud_aggregator_key'] = array(
    '#type' => 'textfield',
    '#size' => 20,
    '#title' => t('Social feed api key'),
    '#default_value' => variable_get('proud_aggregator_key', ''),
  );

  $form['proud_aggregator_secret'] = array(
    '#type' => 'textfield',
    '#size' => 20,
    '#title' => t('Social feed api secret'),
    '#default_value' => variable_get('proud_aggregator_secret', ''),
  );

  // @todo: clear theme cache on submit? 

  return system_settings_form($form);
}

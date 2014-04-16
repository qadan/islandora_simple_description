<?php
/**
 * @file
 * Admin form for the simple description thingy.
 */

function islandora_simple_description_admin_form($form, &$form_state) {
  return system_settings_form(array(
    'islandora_simple_description_dsid' => array(
      '#type' => 'textfield',
      '#title' => t('DSID containing description datastream'),
      '#description' => t('The DSID of the datastream containing XML data you would like to use for the description.'),
      '#default_value' => 'DC',
      '#required' => TRUE,
    ),
    'islandora_simple_description_xpath' => array(
      '#type' => 'textfield',
      '#title' => t('Xpath query used to find the description'),
      '#description' => t('An Xpath query that can be used to find the description metadata in the above-defined datastream.'),
      '#default_value' => '//dc:description',
      '#required' => TRUE,
    ),
    'islandora_simple_description_cmodel' => array(
      '#type' => 'textfield',
      '#title' => t('Downloadable OBJ content model'),
      '#description' => t('The content model PID that renders OBJ download tabs on objects.'),
      '#default_value' => 'islandora:sp_pdf',
      '#required' => TRUE,
    )
  ));
}
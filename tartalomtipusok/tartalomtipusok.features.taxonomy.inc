<?php
/**
 * @file
 * tartalomtipusok.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tartalomtipusok_taxonomy_default_vocabularies() {
  return array(
    'szamla_idoszak' => array(
      'name' => 'Számlázás időszak',
      'machine_name' => 'szamla_idoszak',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}

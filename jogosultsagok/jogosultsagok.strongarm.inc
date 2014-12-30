<?php
/**
 * @file
 * jogosultsagok.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function jogosultsagok_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_access_jogositas_alkalmankent_dj';
  $strongarm->value = array(
    'view' => array(
      0 => 8,
      1 => 10,
      2 => 3,
    ),
    'view_own' => array(
      0 => 4,
      1 => 8,
      2 => 10,
      3 => 3,
    ),
  );
  $export['content_access_jogositas_alkalmankent_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_access_jogositas_alkalmankent_hatterz';
  $strongarm->value = array(
    'view' => array(
      0 => 8,
      1 => 10,
      2 => 3,
    ),
    'view_own' => array(
      0 => 5,
      1 => 8,
      2 => 10,
      3 => 3,
    ),
  );
  $export['content_access_jogositas_alkalmankent_hatterz'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_access_jogositas_atalanydijas_dj';
  $strongarm->value = array(
    'view' => array(
      0 => 8,
      1 => 10,
      2 => 3,
    ),
    'view_own' => array(
      0 => 4,
      1 => 8,
      2 => 10,
      3 => 3,
    ),
  );
  $export['content_access_jogositas_atalanydijas_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_access_jogositas_atalanydijas_hatterz';
  $strongarm->value = array(
    'view' => array(
      0 => 8,
      1 => 10,
      2 => 3,
    ),
    'view_own' => array(
      0 => 5,
      1 => 8,
      2 => 10,
      3 => 3,
    ),
  );
  $export['content_access_jogositas_atalanydijas_hatterz'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_access_jogositas_darabonkent_dj';
  $strongarm->value = array(
    'view' => array(
      0 => 8,
      1 => 10,
      2 => 3,
    ),
    'view_own' => array(
      0 => 4,
      1 => 8,
      2 => 10,
      3 => 3,
    ),
  );
  $export['content_access_jogositas_darabonkent_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_access_jogositas_darabonkent_hatterzene';
  $strongarm->value = array(
    'view' => array(
      0 => 8,
      1 => 10,
      2 => 3,
    ),
    'view_own' => array(
      0 => 5,
      1 => 8,
      2 => 10,
      3 => 3,
    ),
  );
  $export['content_access_jogositas_darabonkent_hatterzene'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_access_jogositas_zenegep';
  $strongarm->value = array(
    'view' => array(
      0 => 8,
      1 => 10,
      2 => 3,
    ),
    'view_own' => array(
      0 => 2,
      1 => 6,
      2 => 8,
      3 => 10,
      4 => 3,
    ),
  );
  $export['content_access_jogositas_zenegep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_access_tobbszorozesenkenti_jogositas';
  $strongarm->value = array(
    'view_own' => array(
      0 => 2,
      1 => 3,
    ),
    'view' => array(
      0 => 3,
    ),
  );
  $export['content_access_tobbszorozesenkenti_jogositas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_access_tobbszorozesi_lista';
  $strongarm->value = array(
    'view' => array(
      0 => 7,
      1 => 8,
      2 => 10,
      3 => 3,
    ),
    'view_own' => array(
      0 => 2,
      1 => 4,
      2 => 5,
      3 => 6,
      4 => 9,
      5 => 10,
      6 => 3,
    ),
  );
  $export['content_access_tobbszorozesi_lista'] = $strongarm;

  return $export;
}

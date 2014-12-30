<?php
/**
 * @file
 * user_fields.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function user_fields_user_default_roles() {
  $roles = array();

  // Exported role: DJ.
  $roles['DJ'] = array(
    'name' => 'DJ',
    'weight' => 2,
  );

  // Exported role: Rendszergazda.
  $roles['Rendszergazda'] = array(
    'name' => 'Rendszergazda',
    'weight' => 10,
  );

  // Exported role: Számlázás.
  $roles['Számlázás'] = array(
    'name' => 'Számlázás',
    'weight' => 6,
  );

  // Exported role: Változatok megtekintése.
  $roles['Változatok megtekintése'] = array(
    'name' => 'Változatok megtekintése',
    'weight' => 8,
  );

  // Exported role: adatszolgaltatas_kezelo.
  $roles['adatszolgaltatas_kezelo'] = array(
    'name' => 'adatszolgaltatas_kezelo',
    'weight' => 9,
  );

  // Exported role: felhasznalo_kezelo.
  $roles['felhasznalo_kezelo'] = array(
    'name' => 'felhasznalo_kezelo',
    'weight' => 5,
  );

  // Exported role: hatterzene_szolgaltato.
  $roles['hatterzene_szolgaltato'] = array(
    'name' => 'hatterzene_szolgaltato',
    'weight' => 3,
  );

  // Exported role: tesztcsoport.
  $roles['tesztcsoport'] = array(
    'name' => 'tesztcsoport',
    'weight' => 7,
  );

  // Exported role: zenegep_uzemelteto.
  $roles['zenegep_uzemelteto'] = array(
    'name' => 'zenegep_uzemelteto',
    'weight' => 4,
  );

  return $roles;
}

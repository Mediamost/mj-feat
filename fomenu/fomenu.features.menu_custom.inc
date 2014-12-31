<?php
/**
 * @file
 * fomenu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function fomenu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Főmenü',
    'description' => 'A <em>Fő</em> menü célja jellemzően a webhely főbb egységeinek hivatkozása, általában a felső navigációs sávban.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('A <em>Fő</em> menü célja jellemzően a webhely főbb egységeinek hivatkozása, általában a felső navigációs sávban.');
  t('Főmenü');


  return $menus;
}

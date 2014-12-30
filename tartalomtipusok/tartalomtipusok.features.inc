<?php
/**
 * @file
 * tartalomtipusok.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tartalomtipusok_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function tartalomtipusok_node_info() {
  $items = array(
    'jogositas_alkalmankent_dj' => array(
      'name' => t('Alkalmankénti jogosítás'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Cím'),
      'help' => t('<strong>A többszörözéshez az engedélyt kizárólag abban az esetben lehet megadottnak tekinteni, amennyiben a jelen jogosítási kérelem megküldésével EGYIDEJŰLEG a többszörözéssel kapcsolatban fizetendő jogdíjat a felhasználó teljes egészében megfizette.</strong><br /><br />
A csillaggal jelölt mezők kitöltése kötelező.'),
    ),
    'jogositas_alkalmankent_hatterz' => array(
      'name' => t('Alkalmankénti háttérzene jogosítás'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Cím'),
      'help' => t('<strong>A többszörözéshez az engedélyt kizárólag abban az esetben lehet megadottnak tekinteni, amennyiben a jelen jogosítási kérelem megküldésével EGYIDEJŰLEG a többszörözéssel kapcsolatban fizetendő jogdíjat a felhasználó teljes egészében megfizette.</strong><br /><br />
A csillaggal jelölt mezők kitöltése kötelező.'),
    ),
    'jogositas_atalanydijas_dj' => array(
      'name' => t('Átalánydíjas jogosítás'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Cím'),
      'help' => t('<strong>A többszörözéshez az engedélyt kizárólag abban az esetben lehet megadottnak tekinteni, amennyiben a jelen jogosítási kérelem megküldésével EGYIDEJŰLEG a többszörözéssel kapcsolatban fizetendő jogdíjat a felhasználó teljes egészében megfizette.</strong><br /><br />
A csillaggal jelölt mezők kitöltése kötelező.'),
    ),
    'jogositas_atalanydijas_hatterz' => array(
      'name' => t('Átalánydíjas háttérzene jogosítás'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Cím'),
      'help' => t('<strong>A többszörözéshez az engedélyt kizárólag abban az esetben lehet megadottnak tekinteni, amennyiben a jelen jogosítási kérelem megküldésével EGYIDEJŰLEG a többszörözéssel kapcsolatban fizetendő jogdíjat a felhasználó teljes egészében megfizette.</strong><br /><br />
A csillaggal jelölt mezők kitöltése kötelező.'),
    ),
    'jogositas_darabonkent_dj' => array(
      'name' => t('Példányonkénti jogosítás'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Cím'),
      'help' => t('<strong>A többszörözéshez az engedélyt kizárólag abban az esetben lehet megadottnak tekinteni, amennyiben a jelen jogosítási kérelem megküldésével EGYIDEJŰLEG a többszörözéssel kapcsolatban fizetendő jogdíjat a felhasználó teljes egészében megfizette.</strong><br /><br />
A csillaggal jelölt mezők kitöltése kötelező.'),
    ),
    'jogositas_darabonkent_hatterzene' => array(
      'name' => t('Háttérzene példányonkénti jogosítása'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Cím'),
      'help' => t('<strong>A többszörözéshez az engedélyt kizárólag abban az esetben lehet megadottnak tekinteni, amennyiben a jelen jogosítási kérelem megküldésével EGYIDEJŰLEG a többszörözéssel kapcsolatban fizetendő jogdíjat a felhasználó teljes egészében megfizette.</strong><br /><br />
A csillaggal jelölt mezők kitöltése kötelező.'),
    ),
    'jogositas_zenegep' => array(
      'name' => t('Zenegép'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Cím'),
      'help' => t('Kérjük a tulajdonában lévő valamennyi zenegépet regisztrálja és kérjük a <strong>raktárban lévő</strong> zenegépek esetében is válasszon jogdíj típust. Amennyiben ezt elmulasztja, úgy a raktárban lévő zenegépeire az idei évben – díjszabásunk értelmében – kizárólag többszörözésenkénti jogosítást vehet igénybe.<br /><br />
A csillaggal jelölt mezők kitöltése kötelező.'),
    ),
    'tobbszorozesenkenti_jogositas' => array(
      'name' => t('Többszörözésenkénti jogosítás'),
      'base' => 'node_content',
      'description' => t('Zenegépekhez tartozó jogosítás'),
      'has_title' => '1',
      'title_label' => t('Jogosítás'),
      'help' => t('<strong>FIGYELEM! Kizárólag a megfelelő formátumú és tartalmú listákat tudjuk elfogadni!<br>
A feltöltést követően az oldalon láthatja a lista elfogadásának aktuális státuszát.<br>
A lista elfogadásáról vagy visszautasításáról e-mail-t küldünk.</strong>'),
    ),
    'tobbszorozesi_lista' => array(
      'name' => t('Többszörözési lista'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Cím'),
      'help' => t('<h3><a>2014. I. félév</a></h3><strong>FIGYELEM! Kizárólag a megfelelő formátumú és tartalmú listákat tudjuk elfogadni!<br>
A feltöltést követően az oldalon láthatja a lista elfogadásának aktuális státuszát.<br>
A lista elfogadásáról vagy visszautasításáról e-mail-t küldünk.</strong>'),
    ),
  );
  return $items;
}

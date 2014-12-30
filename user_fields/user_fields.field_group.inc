<?php
/**
 * @file
 * user_fields.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function user_fields_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_abszolut|user|user|default';
  $field_group->group_name = 'group_abszolut';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_htab_nevcim';
  $field_group->data = array(
    'label' => 'Azonosításhoz szükséges adatok',
    'weight' => '14',
    'children' => array(
      0 => 'field_teljes_nev',
      1 => 'field_cegnev',
      2 => 'field_adoszam',
      3 => 'field_weboldal',
      4 => 'field_bankszamla',
      5 => 'field_telefon',
      6 => 'field_szuletesi_ido',
      7 => 'field_anyja_neve',
      8 => 'field_ceg_jogosult',
      9 => 'field_muvesznev',
      10 => 'field_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Azonosításhoz szükséges adatok',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-abszolut field-group-fieldset ',
        'description' => 'Kérjük adja meg az alábbi adatokat, melyek az esetleges visszaélések elkerüléséhez szükségesek.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_abszolut|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_abszolut|user|user|form';
  $field_group->group_name = 'group_abszolut';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_nevescim';
  $field_group->data = array(
    'label' => 'Azonosításhoz szükséges adatok',
    'weight' => '45',
    'children' => array(
      0 => 'field_teljes_nev',
      1 => 'field_cegnev',
      2 => 'field_adoszam',
      3 => 'field_weboldal',
      4 => 'field_bankszamla',
      5 => 'field_telefon',
      6 => 'field_szuletesi_ido',
      7 => 'field_anyja_neve',
      8 => 'field_ceg_jogosult',
      9 => 'field_muvesznev',
      10 => 'field_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Azonosításhoz szükséges adatok',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-abszolut field-group-fieldset ',
        'description' => 'Az Ön regisztrációjának biztonságos működése, a mások általi visszaélések esetleges elkerülése végett kérjük, adja meg az alábbi azonosító adatokat is',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_abszolut|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_alap|user|user|form';
  $field_group->group_name = 'group_alap';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_mezocsoport';
  $field_group->data = array(
    'label' => 'Felhasználói adatok',
    'weight' => '12',
    'children' => array(
      0 => 'field_indoklal',
      1 => 'field_belso_megjegyzes',
      2 => 'field_buntetougy',
      3 => 'mimemail',
      4 => 'account',
      5 => 'timezone',
      6 => 'locale',
      7 => 'wysiwyg',
      8 => 'field_szamlatartozas',
      9 => 'group_djszovetseg',
    ),
    'format_type' => 'multipage',
    'format_settings' => array(
      'label' => 'Felhasználói adatok',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-alap field-group-multipage',
        'description' => 'Kérjük válasszon magának felhasználó nevet és adja meg e-mail címét!
A csillaggal jelölt mezők kitöltése kötelező',
      ),
      'formatter' => 'no-start',
    ),
  );
  $export['group_alap|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cimoldal|user|user|form';
  $field_group->group_name = 'group_cimoldal';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_mezocsoport';
  $field_group->data = array(
    'label' => 'Cím',
    'weight' => '10',
    'children' => array(
      0 => 'group_postacim',
      1 => 'group_cim',
    ),
    'format_type' => 'multipage',
    'format_settings' => array(
      'label' => 'Cím',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-cimoldal ',
        'description' => 'A csillaggal jelölt mezők kitöltése kötelező',
      ),
      'formatter' => 'no-start',
    ),
  );
  $export['group_cimoldal|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cim|user|user|default';
  $field_group->group_name = 'group_cim';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_htab_cim';
  $field_group->data = array(
    'label' => 'Cím',
    'weight' => '12',
    'children' => array(
      0 => 'field_orszag',
      1 => 'field_iranyitoszam',
      2 => 'field_varos',
      3 => 'field_utca',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-cim field-group-fieldset ',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_cim|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cim|user|user|form';
  $field_group->group_name = 'group_cim';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_cimoldal';
  $field_group->data = array(
    'label' => 'Cím',
    'weight' => '37',
    'children' => array(
      0 => 'field_orszag',
      1 => 'field_iranyitoszam',
      2 => 'field_varos',
      3 => 'field_utca',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-cim field-group-fieldset ',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_cim|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_djszovetseg|user|user|form';
  $field_group->group_name = 'group_djszovetseg';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_alap';
  $field_group->data = array(
    'label' => 'DJ szövetség',
    'weight' => '9',
    'children' => array(
      0 => 'field_dj_szovetseg',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-djszovetseg field-group-fieldset ',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_djszovetseg|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_horizontal|user|user|default';
  $field_group->group_name = 'group_horizontal';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Horizontal group',
    'weight' => '0',
    'children' => array(
      0 => 'group_htab_jogdij',
      1 => 'group_htab_nevcim',
      2 => 'group_htab_cim',
      3 => 'group_htab_felhasznaloi',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-horizontal field-group-htabs ',
      ),
    ),
  );
  $export['group_horizontal|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_htab_cim|user|user|default';
  $field_group->group_name = 'group_htab_cim';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Cím',
    'weight' => '42',
    'children' => array(
      0 => 'group_postacim',
      1 => 'group_cim',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_htab_cim|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_htab_felhasznaloi|user|user|default';
  $field_group->group_name = 'group_htab_felhasznaloi';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Felhasználói adatok',
    'weight' => '49',
    'children' => array(
      0 => 'field_indoklal',
      1 => 'field_belso_megjegyzes',
      2 => 'field_buntetougy',
      3 => 'field_szamlatartozas',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-htab-felhasznaloi field-group-htab ',
      ),
    ),
  );
  $export['group_htab_felhasznaloi|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_htab_jogdij|user|user|default';
  $field_group->group_name = 'group_htab_jogdij';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Jogdíj csoport',
    'weight' => '40',
    'children' => array(
      0 => 'field_jogi_csoport',
      1 => 'field_regisztralo_szemelye',
      2 => 'field_dj_szovetseg',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-htab-jogdij field-group-htab ',
      ),
    ),
  );
  $export['group_htab_jogdij|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_htab_nevcim|user|user|default';
  $field_group->group_name = 'group_htab_nevcim';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Név és cím',
    'weight' => '41',
    'children' => array(
      0 => 'group_abszolut',
      1 => 'group_kapcsolattarto',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_htab_nevcim|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_jogi|user|user|form';
  $field_group->group_name = 'group_jogi';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_mezocsoport';
  $field_group->data = array(
    'label' => 'Jogdíj csoport',
    'weight' => '8',
    'children' => array(
      0 => 'field_jogi_csoport',
      1 => 'field_regisztralo_szemelye',
    ),
    'format_type' => 'multipage',
    'format_settings' => array(
      'label' => 'Jogdíj csoport',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-jogi field-group-multipage',
        'description' => 'A csillaggal jelölt mezők kitöltése kötelező',
      ),
      'formatter' => 'start',
    ),
  );
  $export['group_jogi|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_kapcsolattarto|user|user|default';
  $field_group->group_name = 'group_kapcsolattarto';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_htab_nevcim';
  $field_group->data = array(
    'label' => 'Kapcsolattartó',
    'weight' => '26',
    'children' => array(
      0 => 'field_kapcsolattarto_neve',
      1 => 'field_kapcsolattart_telefon',
      2 => 'field_kapcsolattarto_email',
      3 => 'field_penzugyi_kapcsolat_neve',
      4 => 'field_penzugyi_kapcsolat_tel',
      5 => 'field_penzugyi_kapcsolat_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-kapcsolattarto field-group-fieldset ',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_kapcsolattarto|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_kapcsolattarto|user|user|form';
  $field_group->group_name = 'group_kapcsolattarto';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_nevescim';
  $field_group->data = array(
    'label' => 'Kapcsolattartó',
    'weight' => '48',
    'children' => array(
      0 => 'field_kapcsolattarto_neve',
      1 => 'field_kapcsolattart_telefon',
      2 => 'field_kapcsolattarto_email',
      3 => 'field_penzugyi_kapcsolat_neve',
      4 => 'field_penzugyi_kapcsolat_tel',
      5 => 'field_penzugyi_kapcsolat_email',
      6 => 'field_kapcs_megegyezik',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-kapcsolattarto field-group-fieldset ',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_kapcsolattarto|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mezocsoport|user|user|form';
  $field_group->group_name = 'group_mezocsoport';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'mezocsoport',
    'weight' => '0',
    'children' => array(
      0 => 'group_alap',
      1 => 'group_jogi',
      2 => 'group_nevescim',
      3 => 'group_cimoldal',
    ),
    'format_type' => 'multipage-group',
    'format_settings' => array(
      'label' => 'mezocsoport',
      'instance_settings' => array(
        'classes' => ' group-mezocsoport field-group-multipage-group',
        'page_header' => '3',
        'page_counter' => '0',
        'move_button' => '1',
        'move_additional' => '1',
      ),
    ),
  );
  $export['group_mezocsoport|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nevescim|user|user|form';
  $field_group->group_name = 'group_nevescim';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_mezocsoport';
  $field_group->data = array(
    'label' => 'Név és cím',
    'weight' => '9',
    'children' => array(
      0 => 'group_abszolut',
      1 => 'group_kapcsolattarto',
    ),
    'format_type' => 'multipage',
    'format_settings' => array(
      'label' => 'Név és cím',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-nevescim ',
        'description' => 'A csillaggal jelölt mezők kitöltése kötelező',
      ),
      'formatter' => 'no-start',
    ),
  );
  $export['group_nevescim|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_postacim|user|user|default';
  $field_group->group_name = 'group_postacim';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_htab_cim';
  $field_group->data = array(
    'label' => 'Levelezési cím',
    'weight' => '13',
    'children' => array(
      0 => 'field_posta_iranyitoszam',
      1 => 'field_posta_varos',
      2 => 'field_posta_utca',
      3 => 'field_posta_orszag',
      4 => 'field_posta_nev',
      5 => 'field_kiegeszites',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Levelezési cím',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_postacim|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_postacim|user|user|form';
  $field_group->group_name = 'group_postacim';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_cimoldal';
  $field_group->data = array(
    'label' => 'Levelezési cím',
    'weight' => '39',
    'children' => array(
      0 => 'field_posta_iranyitoszam',
      1 => 'field_posta_varos',
      2 => 'field_posta_utca',
      3 => 'field_posta_orszag',
      4 => 'field_megegyezik',
      5 => 'field_posta_nev',
      6 => 'field_kiegeszites',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Levelezési cím',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_postacim|user|user|form'] = $field_group;

  return $export;
}

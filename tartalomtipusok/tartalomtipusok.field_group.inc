<?php
/**
 * @file
 * tartalomtipusok.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tartalomtipusok_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_adatszolgaltatas|node|jogositas_alkalmankent_dj|form';
  $field_group->group_name = 'group_adatszolgaltatas';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_alkalmankent_dj';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Adatszolgáltatás',
    'weight' => '5',
    'children' => array(
      0 => 'field_tobbszorozesi_lista',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Adatszolgáltatás',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-adatszolgaltatas field-group-fieldset ',
        'description' => 'A felhasználó a felhasználási igény benyújtásával és a jogdíj megfizetésével egyidőben köteles részletes adatszolgáltatást nyújtani a birtokában lévő összes olyan többszörözött hangfelvételről, a melyek az adott helyszínen és időpontban a birtokában lesznek.',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_adatszolgaltatas|node|jogositas_alkalmankent_dj|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_adatszolgaltatas|node|jogositas_alkalmankent_hatterz|form';
  $field_group->group_name = 'group_adatszolgaltatas';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_alkalmankent_hatterz';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Adatszolgáltatás',
    'weight' => '5',
    'children' => array(
      0 => 'field_tobbszorozesi_lista',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Adatszolgáltatás',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-adatszolgaltatas field-group-fieldset ',
        'description' => 'A felhasználó a felhasználási igény benyújtásával és a jogdíj megfizetésével egyidőben köteles részletes adatszolgáltatást nyújtani a birtokában lévő összes olyan többszörözött hangfelvételről, a melyek az adott helyszínen és időpontban a birtokában lesznek.',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_adatszolgaltatas|node|jogositas_alkalmankent_hatterz|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_alap|node|jogositas_alkalmankent_dj|default';
  $field_group->group_name = 'group_alap';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_alkalmankent_dj';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Alap adatok',
    'weight' => '0',
    'children' => array(
      0 => 'field_statusz',
      1 => 'field_jogosult_nev',
      2 => 'field_rendezveny_ideje',
      3 => 'field_feltetelek',
      4 => 'field_tobbszorozesi_lista',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_alap|node|jogositas_alkalmankent_dj|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_alap|node|jogositas_alkalmankent_hatterz|default';
  $field_group->group_name = 'group_alap';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_alkalmankent_hatterz';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Alap adatok',
    'weight' => '0',
    'children' => array(
      0 => 'field_statusz',
      1 => 'field_jogosult_nev',
      2 => 'field_feltetelek',
      3 => 'field_tobbszorozesi_lista',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_alap|node|jogositas_alkalmankent_hatterz|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_alap|node|jogositas_atalanydijas_dj|default';
  $field_group->group_name = 'group_alap';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_atalanydijas_dj';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Alap adatok',
    'weight' => '0',
    'children' => array(
      0 => 'field_statusz',
      1 => 'field_tobbszorozesi_lista',
      2 => 'field_jogosult_nev',
      3 => 'field_feltetelek',
      4 => 'field_atalanyeve',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-alap field-group-fieldset ',
      ),
    ),
  );
  $export['group_alap|node|jogositas_atalanydijas_dj|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_alap|node|jogositas_atalanydijas_hatterz|default';
  $field_group->group_name = 'group_alap';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_atalanydijas_hatterz';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Alap adatok',
    'weight' => '0',
    'children' => array(
      0 => 'field_statusz',
      1 => 'field_jogosult_nev',
      2 => 'field_tobbszorozesi_lista',
      3 => 'field_feltetelek',
      4 => 'field_atalanyeve',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_alap|node|jogositas_atalanydijas_hatterz|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_alap|node|jogositas_darabonkent_dj|default';
  $field_group->group_name = 'group_alap';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_darabonkent_dj';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Alap adatok',
    'weight' => '1',
    'children' => array(
      0 => 'field_statusz',
      1 => 'field_mennyiseg',
      2 => 'field_tobbszorozesi_lista',
      3 => 'field_jogosult_nev',
      4 => 'field_feltetelek',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-alap field-group-fieldset ',
      ),
    ),
  );
  $export['group_alap|node|jogositas_darabonkent_dj|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_alap|node|jogositas_darabonkent_hatterzene|default';
  $field_group->group_name = 'group_alap';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_darabonkent_hatterzene';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Alap adatok',
    'weight' => '0',
    'children' => array(
      0 => 'field_statusz',
      1 => 'field_jogosult_nev',
      2 => 'field_mennyiseg',
      3 => 'field_tobbszorozesi_lista',
      4 => 'field_feltetelek',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_alap|node|jogositas_darabonkent_hatterzene|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_alap|node|jogositas_zenegep|default';
  $field_group->group_name = 'group_alap';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_zenegep';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Alap adatok',
    'weight' => '0',
    'children' => array(
      0 => 'field_jogositas',
      1 => 'field_gyszam',
      2 => 'field_ujgep',
      3 => 'field_tobbszorozesi_lista',
      4 => 'field_raktarban',
      5 => 'field_feltetelek',
      6 => 'field_raktar_ido',
      7 => 'field_raktar_feltetelek',
      8 => 'field_jogosult_nev',
      9 => 'field_statusz',
      10 => 'field_jogositas_2014',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-alap field-group-fieldset ',
      ),
    ),
  );
  $export['group_alap|node|jogositas_zenegep|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_helyszin_cim|node|jogositas_alkalmankent_dj|default';
  $field_group->group_name = 'group_helyszin_cim';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_alkalmankent_dj';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Helyszín',
    'weight' => '1',
    'children' => array(
      0 => 'field_helyszin_nev',
      1 => 'field_iranyitoszam',
      2 => 'field_utca',
      3 => 'field_helyseg',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_helyszin_cim|node|jogositas_alkalmankent_dj|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_helyszin_cim|node|jogositas_alkalmankent_dj|form';
  $field_group->group_name = 'group_helyszin_cim';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_alkalmankent_dj';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Helyszín',
    'weight' => '1',
    'children' => array(
      0 => 'field_helyszin_nev',
      1 => 'field_iranyitoszam',
      2 => 'field_utca',
      3 => 'field_helyseg',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Helyszín',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-helyszin-cim field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_helyszin_cim|node|jogositas_alkalmankent_dj|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_helyszin|node|jogositas_alkalmankent_hatterz|default';
  $field_group->group_name = 'group_helyszin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_alkalmankent_hatterz';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Helyszín',
    'weight' => '1',
    'children' => array(
      0 => 'field_helyszin_nev',
      1 => 'field_helyseg',
      2 => 'field_iranyitoszam',
      3 => 'field_utca',
      4 => 'field_rendezveny_ideje',
      5 => 'field_helyszinek_szama',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Helyszín',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-helyszin field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_helyszin|node|jogositas_alkalmankent_hatterz|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_helyszin|node|jogositas_alkalmankent_hatterz|form';
  $field_group->group_name = 'group_helyszin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_alkalmankent_hatterz';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Helyszín',
    'weight' => '1',
    'children' => array(
      0 => 'field_helyszin_nev',
      1 => 'field_helyseg',
      2 => 'field_iranyitoszam',
      3 => 'field_utca',
      4 => 'field_helyszinek_szama',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Helyszín',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-helyszin field-group-fieldset ',
        'description' => 'Külön-külön helyszínként kell jogosítani az egy épületben/rendezvényen működő minden egyes olyan helyszínt, ahol többszörözött hangfelvételeket használnak zeneszolgáltatás céljából.',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_helyszin|node|jogositas_alkalmankent_hatterz|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_helyszin|node|jogositas_atalanydijas_hatterz|default';
  $field_group->group_name = 'group_helyszin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_atalanydijas_hatterz';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Helyszín',
    'weight' => '1',
    'children' => array(
      0 => 'field_helyszin_nev',
      1 => 'field_helyseg',
      2 => 'field_iranyitoszam',
      3 => 'field_utca',
      4 => 'field_01h_utan_nyitva',
      5 => 'field_helyszinek_szama',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Helyszín',
      'instance_settings' => array(
        'classes' => 'group-helyszin field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_helyszin|node|jogositas_atalanydijas_hatterz|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_helyszin|node|jogositas_atalanydijas_hatterz|form';
  $field_group->group_name = 'group_helyszin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_atalanydijas_hatterz';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Helyszín',
    'weight' => '1',
    'children' => array(
      0 => 'field_helyszin_nev',
      1 => 'field_helyseg',
      2 => 'field_iranyitoszam',
      3 => 'field_utca',
      4 => 'field_01h_utan_nyitva',
      5 => 'field_helyszinek_szama',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Helyszín',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-helyszin field-group-fieldset ',
        'description' => 'Külön-külön helyszínként kell jogosítani az egy épületben/rendezvényen működő minden egyes olyan helyszínt, ahol többszörözött hangfelvételeket használnak zeneszolgáltatás céljából.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_helyszin|node|jogositas_atalanydijas_hatterz|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_helyszin|node|jogositas_darabonkent_hatterzene|default';
  $field_group->group_name = 'group_helyszin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_darabonkent_hatterzene';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Helyszín',
    'weight' => '2',
    'children' => array(
      0 => 'field_helyszin_nev',
      1 => 'field_helyseg',
      2 => 'field_iranyitoszam',
      3 => 'field_utca',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Helyszín',
      'instance_settings' => array(
        'classes' => 'group-helyszin field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_helyszin|node|jogositas_darabonkent_hatterzene|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_helyszin|node|jogositas_darabonkent_hatterzene|form';
  $field_group->group_name = 'group_helyszin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_darabonkent_hatterzene';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Helyszín',
    'weight' => '1',
    'children' => array(
      0 => 'field_helyszin_nev',
      1 => 'field_helyseg',
      2 => 'field_iranyitoszam',
      3 => 'field_utca',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Helyszín',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-helyszin field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_helyszin|node|jogositas_darabonkent_hatterzene|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hely|node|jogositas_zenegep|default';
  $field_group->group_name = 'group_hely';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_zenegep';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Üzemeltetési hely',
    'weight' => '1',
    'children' => array(
      0 => 'field_helyszin_nev',
      1 => 'field_iranyitoszam',
      2 => 'field_helyseg',
      3 => 'field_utca',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-hely field-group-fieldset ',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_hely|node|jogositas_zenegep|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hely|node|jogositas_zenegep|form';
  $field_group->group_name = 'group_hely';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_zenegep';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_kotelezo';
  $field_group->data = array(
    'label' => 'Üzemeltetési hely',
    'weight' => '15',
    'children' => array(
      0 => 'field_helyszin_nev',
      1 => 'field_iranyitoszam',
      2 => 'field_helyseg',
      3 => 'field_utca',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-hely field-group-fieldset ',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_hely|node|jogositas_zenegep|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_idoszak_tip|node|tobbszorozesi_lista|form';
  $field_group->group_name = 'group_idoszak_tip';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tobbszorozesi_lista';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Időszak: 2014. II. félév',
    'weight' => '2',
    'children' => array(
      0 => 'field_adatszolgaltatas_idoszak',
      1 => 'field_tobbszorozesi_lista',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Időszak: 2014. II. félév',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-idoszak-tip field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_idoszak_tip|node|tobbszorozesi_lista|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_kotelezo|node|jogositas_alkalmankent_dj|form';
  $field_group->group_name = 'group_kotelezo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_alkalmankent_dj';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Kötelező mezők',
    'weight' => '0',
    'children' => array(
      0 => 'field_statusz',
      1 => 'field_jogosult_nev',
      2 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Kötelező mezők',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-kotelezo field-group-div ',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_kotelezo|node|jogositas_alkalmankent_dj|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_kotelezo|node|jogositas_alkalmankent_hatterz|form';
  $field_group->group_name = 'group_kotelezo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_alkalmankent_hatterz';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Kötelező mezők',
    'weight' => '0',
    'children' => array(
      0 => 'field_statusz',
      1 => 'field_jogosult_nev',
      2 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Kötelező mezők',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-kotelezo field-group-div ',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_kotelezo|node|jogositas_alkalmankent_hatterz|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_kotelezo|node|jogositas_atalanydijas_dj|form';
  $field_group->group_name = 'group_kotelezo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_atalanydijas_dj';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Kötelező mezők',
    'weight' => '0',
    'children' => array(
      0 => 'field_statusz',
      1 => 'field_tobbszorozesi_lista',
      2 => 'field_jogosult_nev',
      3 => 'field_dj_tagsag',
      4 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Kötelező mezők',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-kotelezo field-group-div ',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_kotelezo|node|jogositas_atalanydijas_dj|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_kotelezo|node|jogositas_atalanydijas_hatterz|form';
  $field_group->group_name = 'group_kotelezo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_atalanydijas_hatterz';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Kötelező mezők',
    'weight' => '0',
    'children' => array(
      0 => 'field_statusz',
      1 => 'field_jogosult_nev',
      2 => 'field_tobbszorozesi_lista',
      3 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Kötelező mezők',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-kotelezo field-group-div ',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_kotelezo|node|jogositas_atalanydijas_hatterz|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_kotelezo|node|jogositas_darabonkent_dj|form';
  $field_group->group_name = 'group_kotelezo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_darabonkent_dj';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Kötelező mezők',
    'weight' => '0',
    'children' => array(
      0 => 'field_statusz',
      1 => 'field_mennyiseg',
      2 => 'field_tobbszorozesi_lista',
      3 => 'field_jogosult_nev',
      4 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Kötelező mezők',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-kotelezo field-group-div ',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_kotelezo|node|jogositas_darabonkent_dj|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_kotelezo|node|jogositas_darabonkent_hatterzene|form';
  $field_group->group_name = 'group_kotelezo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_darabonkent_hatterzene';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Kötelező mezők',
    'weight' => '0',
    'children' => array(
      0 => 'field_statusz',
      1 => 'field_jogosult_nev',
      2 => 'field_mennyiseg',
      3 => 'field_tobbszorozesi_lista',
      4 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Kötelező mezők',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-kotelezo field-group-div ',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_kotelezo|node|jogositas_darabonkent_hatterzene|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_kotelezo|node|jogositas_zenegep|form';
  $field_group->group_name = 'group_kotelezo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_zenegep';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Kötelező mezők',
    'weight' => '0',
    'children' => array(
      0 => 'field_jogositas',
      1 => 'field_gyszam',
      2 => 'field_ujgep',
      3 => 'field_tobbszorozesi_lista',
      4 => 'field_jogosult_nev',
      5 => 'field_statusz',
      6 => 'field_szamla_sorszam',
      7 => 'field_jogdijertesito',
      8 => 'field_zg_buntetogy',
      9 => 'field_collection_szamlazas',
      10 => 'field_atalany_valtas_feltetelei',
      11 => 'field_jogositas_2014',
      12 => 'title',
      13 => 'group_hely',
      14 => 'group_raktar',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Kötelező mezők',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-kotelezo field-group-div ',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_kotelezo|node|jogositas_zenegep|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lent|node|jogositas_alkalmankent_hatterz|form';
  $field_group->group_name = 'group_lent';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_alkalmankent_hatterz';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Lent',
    'weight' => '6',
    'children' => array(
      0 => 'field_feltetelek',
      1 => 'field_adatszolgaltatasok',
      2 => 'field_belso_megjegyzes',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Lent',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-lent field-group-div ',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_lent|node|jogositas_alkalmankent_hatterz|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lent|node|jogositas_atalanydijas_dj|form';
  $field_group->group_name = 'group_lent';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_atalanydijas_dj';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Lent',
    'weight' => '3',
    'children' => array(
      0 => 'field_feltetelek',
      1 => 'field_adatszolgaltatasok',
      2 => 'field_dj_szovetseg',
      3 => 'field_belso_megjegyzes',
      4 => 'field_atalanyeve',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Lent',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-lent field-group-div ',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_lent|node|jogositas_atalanydijas_dj|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lent|node|jogositas_atalanydijas_hatterz|form';
  $field_group->group_name = 'group_lent';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_atalanydijas_hatterz';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Lent',
    'weight' => '4',
    'children' => array(
      0 => 'field_feltetelek',
      1 => 'field_adatszolgaltatasok',
      2 => 'field_belso_megjegyzes',
      3 => 'field_atalanyeve',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Lent',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-lent field-group-div ',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_lent|node|jogositas_atalanydijas_hatterz|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lent|node|jogositas_darabonkent_dj|form';
  $field_group->group_name = 'group_lent';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_darabonkent_dj';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Lent',
    'weight' => '3',
    'children' => array(
      0 => 'field_feltetelek',
      1 => 'field_dj_szovetseg',
      2 => 'field_belso_megjegyzes',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Lent',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-lent field-group-div ',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_lent|node|jogositas_darabonkent_dj|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lent|node|jogositas_darabonkent_hatterzene|form';
  $field_group->group_name = 'group_lent';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_darabonkent_hatterzene';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Lent',
    'weight' => '5',
    'children' => array(
      0 => 'field_feltetelek',
      1 => 'field_belso_megjegyzes',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Lent',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-lent field-group-div ',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_lent|node|jogositas_darabonkent_hatterzene|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lent|node|jogositas_zenegep|form';
  $field_group->group_name = 'group_lent';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_zenegep';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Lent',
    'weight' => '1',
    'children' => array(
      0 => 'field_feltetelek',
      1 => 'field_eszamla',
      2 => 'field_elozo_uzemeltetok',
      3 => 'field_adatszolgaltatasok',
      4 => 'field_tobbszorozesenkenti_jgsts',
      5 => 'field_belso_megjegyzes',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Lent',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-lent field-group-div ',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_lent|node|jogositas_zenegep|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lenz|node|jogositas_alkalmankent_dj|form';
  $field_group->group_name = 'group_lenz';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_alkalmankent_dj';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Lent',
    'weight' => '6',
    'children' => array(
      0 => 'field_feltetelek',
      1 => 'field_adatszolgaltatasok',
      2 => 'field_belso_megjegyzes',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Lent',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-lenz field-group-div ',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_lenz|node|jogositas_alkalmankent_dj|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_levelezes|node|jogositas_zenegep|default';
  $field_group->group_name = 'group_levelezes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_zenegep';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Levelezési cím',
    'weight' => '3',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-levelezes field-group-fieldset ',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_levelezes|node|jogositas_zenegep|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_postacim|node|jogositas_alkalmankent_dj|default';
  $field_group->group_name = 'group_postacim';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_alkalmankent_dj';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Levelezési cím',
    'weight' => '3',
    'children' => array(
      0 => 'field_posta_varos',
      1 => 'field_posta_iranyitoszam',
      2 => 'field_posta_utca',
      3 => 'field_posta_nev',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_postacim|node|jogositas_alkalmankent_dj|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_postacim|node|jogositas_alkalmankent_dj|form';
  $field_group->group_name = 'group_postacim';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_alkalmankent_dj';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Levelezési cím',
    'weight' => '4',
    'children' => array(
      0 => 'field_posta_varos',
      1 => 'field_posta_iranyitoszam',
      2 => 'field_posta_utca',
      3 => 'field_posta_nev',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Levelezési cím',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-postacim field-group-fieldset ',
        'description' => 'Ha az alábbi adataitól eltérő címre kéri a küldeményeit, a módosítás engedélyezéséhez <a href=# id="ena-postamod">először kattintson ide</a>.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_postacim|node|jogositas_alkalmankent_dj|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_postacim|node|jogositas_alkalmankent_hatterz|default';
  $field_group->group_name = 'group_postacim';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_alkalmankent_hatterz';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Levelezési cím',
    'weight' => '3',
    'children' => array(
      0 => 'field_posta_nev',
      1 => 'field_posta_varos',
      2 => 'field_posta_iranyitoszam',
      3 => 'field_posta_utca',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Levelezési cím',
      'instance_settings' => array(
        'classes' => 'group-postacim field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_postacim|node|jogositas_alkalmankent_hatterz|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_postacim|node|jogositas_alkalmankent_hatterz|form';
  $field_group->group_name = 'group_postacim';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_alkalmankent_hatterz';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Levelezési cím',
    'weight' => '4',
    'children' => array(
      0 => 'field_posta_nev',
      1 => 'field_posta_varos',
      2 => 'field_posta_iranyitoszam',
      3 => 'field_posta_utca',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Levelezési cím',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-postacim field-group-fieldset ',
        'description' => 'Ha az alábbi adataitól eltérő címre kéri a küldeményeit, a módosítás engedélyezéséhez <a href=# id="ena-postamod">először kattintson ide</a>.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_postacim|node|jogositas_alkalmankent_hatterz|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_postacim|node|jogositas_atalanydijas_dj|default';
  $field_group->group_name = 'group_postacim';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_atalanydijas_dj';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Levelezési cím',
    'weight' => '5',
    'children' => array(
      0 => 'field_posta_nev',
      1 => 'field_posta_varos',
      2 => 'field_posta_iranyitoszam',
      3 => 'field_posta_utca',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Levelezési cím',
      'instance_settings' => array(
        'classes' => 'group-postacim field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_postacim|node|jogositas_atalanydijas_dj|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_postacim|node|jogositas_atalanydijas_dj|form';
  $field_group->group_name = 'group_postacim';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_atalanydijas_dj';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Levelezési cím',
    'weight' => '2',
    'children' => array(
      0 => 'field_posta_nev',
      1 => 'field_posta_varos',
      2 => 'field_posta_iranyitoszam',
      3 => 'field_posta_utca',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Levelezési cím',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-postacim field-group-fieldset ',
        'description' => 'Ha az alábbi adataitól eltérő címre kéri a küldeményeit, a módosítás engedélyezéséhez <a href=# id="ena-postamod">először kattintson ide</a>.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_postacim|node|jogositas_atalanydijas_dj|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_postacim|node|jogositas_atalanydijas_hatterz|default';
  $field_group->group_name = 'group_postacim';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_atalanydijas_hatterz';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Levelezési cím',
    'weight' => '3',
    'children' => array(
      0 => 'field_posta_nev',
      1 => 'field_posta_varos',
      2 => 'field_posta_iranyitoszam',
      3 => 'field_posta_utca',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Levelezési cím',
      'instance_settings' => array(
        'classes' => 'group-postacim field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_postacim|node|jogositas_atalanydijas_hatterz|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_postacim|node|jogositas_atalanydijas_hatterz|form';
  $field_group->group_name = 'group_postacim';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_atalanydijas_hatterz';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Levelezési cím',
    'weight' => '3',
    'children' => array(
      0 => 'field_posta_nev',
      1 => 'field_posta_varos',
      2 => 'field_posta_iranyitoszam',
      3 => 'field_posta_utca',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Levelezési cím',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-postacim field-group-fieldset ',
        'description' => 'Ha az alábbi adataitól eltérő címre kéri a küldeményeit, a módosítás engedélyezéséhez <a href=# id="ena-postamod">először kattintson ide</a>.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_postacim|node|jogositas_atalanydijas_hatterz|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_postacim|node|jogositas_darabonkent_dj|default';
  $field_group->group_name = 'group_postacim';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_darabonkent_dj';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Levelezési cím',
    'weight' => '3',
    'children' => array(
      0 => 'field_posta_varos',
      1 => 'field_posta_nev',
      2 => 'field_posta_iranyitoszam',
      3 => 'field_posta_utca',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Levelezési cím',
      'instance_settings' => array(
        'classes' => 'group-levelcim field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_postacim|node|jogositas_darabonkent_dj|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_postacim|node|jogositas_darabonkent_dj|form';
  $field_group->group_name = 'group_postacim';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_darabonkent_dj';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Levelezési cím',
    'weight' => '2',
    'children' => array(
      0 => 'field_posta_varos',
      1 => 'field_posta_nev',
      2 => 'field_posta_iranyitoszam',
      3 => 'field_posta_utca',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Levelezési cím',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-levelcim field-group-fieldset ',
        'description' => 'Ha az alábbi adataitól eltérő címre kéri a küldeményeit, a módosítás engedélyezéséhez <a href=# id="ena-postamod">először kattintson ide</a>.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_postacim|node|jogositas_darabonkent_dj|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_postacim|node|jogositas_darabonkent_hatterzene|default';
  $field_group->group_name = 'group_postacim';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_darabonkent_hatterzene';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Levelezési cím',
    'weight' => '6',
    'children' => array(
      0 => 'field_posta_nev',
      1 => 'field_posta_varos',
      2 => 'field_posta_iranyitoszam',
      3 => 'field_posta_utca',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Levelezési cím',
      'instance_settings' => array(
        'classes' => 'group-postacim field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_postacim|node|jogositas_darabonkent_hatterzene|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_postacim|node|jogositas_darabonkent_hatterzene|form';
  $field_group->group_name = 'group_postacim';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_darabonkent_hatterzene';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Levelezési cím',
    'weight' => '4',
    'children' => array(
      0 => 'field_posta_nev',
      1 => 'field_posta_varos',
      2 => 'field_posta_iranyitoszam',
      3 => 'field_posta_utca',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Levelezési cím',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-postacim field-group-fieldset ',
        'description' => 'Ha az alábbi adataitól eltérő címre kéri a küldeményeit, a módosítás engedélyezéséhez <a href=# id="ena-postamod">először kattintson ide</a>.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_postacim|node|jogositas_darabonkent_hatterzene|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_raktar|node|jogositas_zenegep|form';
  $field_group->group_name = 'group_raktar';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_zenegep';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_kotelezo';
  $field_group->data = array(
    'label' => 'Raktár',
    'weight' => '14',
    'children' => array(
      0 => 'field_raktarban',
      1 => 'field_raktar_ido',
      2 => 'field_raktar_feltetelek',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Raktár',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-raktar field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_raktar|node|jogositas_zenegep|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_szamla|node|jogositas_alkalmankent_dj|default';
  $field_group->group_name = 'group_szamla';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_alkalmankent_dj';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Számlázási név',
    'weight' => '2',
    'children' => array(
      0 => 'field_szamla_nev',
      1 => 'field_szamla_helyiseg',
      2 => 'field_szamla_iranyitoszam',
      3 => 'field_szamla_utca',
      4 => 'field_bankszamla',
      5 => 'field_eszamla',
      6 => 'field_szamla_sorszam',
      7 => 'field_matrica_szamok',
      8 => 'field_kartya_kiadva',
      9 => 'field_adoszam',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_szamla|node|jogositas_alkalmankent_dj|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_szamla|node|jogositas_alkalmankent_dj|form';
  $field_group->group_name = 'group_szamla';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_alkalmankent_dj';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Számlázási név',
    'weight' => '3',
    'children' => array(
      0 => 'field_szamla_nev',
      1 => 'field_szamla_helyiseg',
      2 => 'field_szamla_iranyitoszam',
      3 => 'field_szamla_utca',
      4 => 'field_bankszamla',
      5 => 'field_eszamla',
      6 => 'field_szamla_sorszam',
      7 => 'field_matrica_szamok',
      8 => 'field_kartya_kiadva',
      9 => 'field_adoszam',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Számlázási név',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-szamla field-group-fieldset ',
        'description' => 'Ha az alábbi adataitól eltérő névre kér számlát, a módosítás engedélyezéséhez <a href=# id="ena-szlamod">először kattintson ide</a>.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_szamla|node|jogositas_alkalmankent_dj|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_szamla|node|jogositas_alkalmankent_hatterz|default';
  $field_group->group_name = 'group_szamla';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_alkalmankent_hatterz';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Számlázási név',
    'weight' => '2',
    'children' => array(
      0 => 'field_szamla_nev',
      1 => 'field_szamla_helyiseg',
      2 => 'field_szamla_iranyitoszam',
      3 => 'field_szamla_utca',
      4 => 'field_bankszamla',
      5 => 'field_eszamla',
      6 => 'field_szamla_sorszam',
      7 => 'field_adoszam',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Számlázási név',
      'instance_settings' => array(
        'classes' => 'group-szamla field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_szamla|node|jogositas_alkalmankent_hatterz|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_szamla|node|jogositas_alkalmankent_hatterz|form';
  $field_group->group_name = 'group_szamla';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_alkalmankent_hatterz';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Számlázási név',
    'weight' => '3',
    'children' => array(
      0 => 'field_szamla_nev',
      1 => 'field_szamla_helyiseg',
      2 => 'field_szamla_iranyitoszam',
      3 => 'field_szamla_utca',
      4 => 'field_bankszamla',
      5 => 'field_eszamla',
      6 => 'field_szamla_sorszam',
      7 => 'field_adoszam',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Számlázási név',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-szamla field-group-fieldset ',
        'description' => 'Ha az alábbi adataitól eltérő névre kér számlát, a módosítás engedélyezéséhez <a href=# id="ena-szlamod">először kattintson ide</a>.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_szamla|node|jogositas_alkalmankent_hatterz|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_szamla|node|jogositas_atalanydijas_dj|default';
  $field_group->group_name = 'group_szamla';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_atalanydijas_dj';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Számlázási név',
    'weight' => '4',
    'children' => array(
      0 => 'field_szamla_nev',
      1 => 'field_szamla_helyiseg',
      2 => 'field_szamla_iranyitoszam',
      3 => 'field_szamla_utca',
      4 => 'field_eszamla',
      5 => 'field_bankszamla',
      6 => 'field_szamla_sorszam',
      7 => 'field_matrica_szamok',
      8 => 'field_kartya_kiadva',
      9 => 'field_adoszam',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Számlázási név',
      'instance_settings' => array(
        'classes' => 'group-szamla field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_szamla|node|jogositas_atalanydijas_dj|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_szamla|node|jogositas_atalanydijas_dj|form';
  $field_group->group_name = 'group_szamla';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_atalanydijas_dj';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Számlázási név',
    'weight' => '1',
    'children' => array(
      0 => 'field_szamla_nev',
      1 => 'field_szamla_helyiseg',
      2 => 'field_szamla_iranyitoszam',
      3 => 'field_szamla_utca',
      4 => 'field_eszamla',
      5 => 'field_bankszamla',
      6 => 'field_szamla_sorszam',
      7 => 'field_matrica_szamok',
      8 => 'field_kartya_kiadva',
      9 => 'field_adoszam',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Számlázási név',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-szamla field-group-fieldset ',
        'description' => 'Ha az alábbi adataitól eltérő névre kér számlát, a módosítás engedélyezéséhez <a href=# id="ena-szlamod">először kattintson ide</a>.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_szamla|node|jogositas_atalanydijas_dj|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_szamla|node|jogositas_atalanydijas_hatterz|default';
  $field_group->group_name = 'group_szamla';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_atalanydijas_hatterz';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Számlázási név',
    'weight' => '2',
    'children' => array(
      0 => 'field_szamla_nev',
      1 => 'field_szamla_helyiseg',
      2 => 'field_szamla_iranyitoszam',
      3 => 'field_szamla_utca',
      4 => 'field_bankszamla',
      5 => 'field_eszamla',
      6 => 'field_szamla_sorszam',
      7 => 'field_adoszam',
      8 => 'field_kartya_kiadva',
      9 => 'field_matrica_szamok',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Számlázási név',
      'instance_settings' => array(
        'classes' => 'group-szamla field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_szamla|node|jogositas_atalanydijas_hatterz|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_szamla|node|jogositas_atalanydijas_hatterz|form';
  $field_group->group_name = 'group_szamla';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_atalanydijas_hatterz';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Számlázási név',
    'weight' => '2',
    'children' => array(
      0 => 'field_szamla_nev',
      1 => 'field_szamla_helyiseg',
      2 => 'field_szamla_iranyitoszam',
      3 => 'field_szamla_utca',
      4 => 'field_bankszamla',
      5 => 'field_eszamla',
      6 => 'field_szamla_sorszam',
      7 => 'field_adoszam',
      8 => 'field_kartya_kiadva',
      9 => 'field_matrica_szamok',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Számlázási név',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-szamla field-group-fieldset ',
        'description' => 'Ha az alábbi adataitól eltérő névre kér számlát, a módosítás engedélyezéséhez <a href=# id="ena-szlamod">először kattintson ide</a>.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_szamla|node|jogositas_atalanydijas_hatterz|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_szamla|node|jogositas_darabonkent_dj|default';
  $field_group->group_name = 'group_szamla';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_darabonkent_dj';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Számlázási név',
    'weight' => '2',
    'children' => array(
      0 => 'field_szamla_nev',
      1 => 'field_szamla_helyiseg',
      2 => 'field_szamla_iranyitoszam',
      3 => 'field_szamla_utca',
      4 => 'field_bankszamla',
      5 => 'field_eszamla',
      6 => 'field_szamla_sorszam',
      7 => 'field_matrica_szamok',
      8 => 'field_kartya_kiadva',
      9 => 'field_adoszam',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Számlázási név',
      'instance_settings' => array(
        'classes' => 'group-szamla field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_szamla|node|jogositas_darabonkent_dj|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_szamla|node|jogositas_darabonkent_dj|form';
  $field_group->group_name = 'group_szamla';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_darabonkent_dj';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Számlázási név',
    'weight' => '1',
    'children' => array(
      0 => 'field_szamla_nev',
      1 => 'field_szamla_helyiseg',
      2 => 'field_szamla_iranyitoszam',
      3 => 'field_szamla_utca',
      4 => 'field_bankszamla',
      5 => 'field_eszamla',
      6 => 'field_szamla_sorszam',
      7 => 'field_matrica_szamok',
      8 => 'field_kartya_kiadva',
      9 => 'field_adoszam',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Számlázási név',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-szamla field-group-fieldset ',
        'description' => 'Ha az alábbi adataitól eltérő névre kér számlát, a módosítás engedélyezéséhez <a href=# id="ena-szlamod">először kattintson ide</a>.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_szamla|node|jogositas_darabonkent_dj|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_szamla|node|jogositas_darabonkent_hatterzene|default';
  $field_group->group_name = 'group_szamla';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_darabonkent_hatterzene';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Számlázási név',
    'weight' => '4',
    'children' => array(
      0 => 'field_szamla_nev',
      1 => 'field_szamla_helyiseg',
      2 => 'field_szamla_iranyitoszam',
      3 => 'field_szamla_utca',
      4 => 'field_bankszamla',
      5 => 'field_eszamla',
      6 => 'field_szamla_sorszam',
      7 => 'field_adoszam',
      8 => 'field_matrica_szamok',
      9 => 'field_kartya_kiadva',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Számlázási név',
      'instance_settings' => array(
        'classes' => 'group-szamla field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_szamla|node|jogositas_darabonkent_hatterzene|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_szamla|node|jogositas_darabonkent_hatterzene|form';
  $field_group->group_name = 'group_szamla';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_darabonkent_hatterzene';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Számlázási név',
    'weight' => '2',
    'children' => array(
      0 => 'field_szamla_nev',
      1 => 'field_szamla_helyiseg',
      2 => 'field_szamla_iranyitoszam',
      3 => 'field_szamla_utca',
      4 => 'field_bankszamla',
      5 => 'field_eszamla',
      6 => 'field_szamla_sorszam',
      7 => 'field_adoszam',
      8 => 'field_matrica_szamok',
      9 => 'field_kartya_kiadva',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Számlázási név',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-szamla field-group-fieldset ',
        'description' => 'Ha az alábbi adataitól eltérő névre kér számlát, a módosítás engedélyezéséhez <a href=# id="ena-szlamod">először kattintson ide</a>.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_szamla|node|jogositas_darabonkent_hatterzene|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_szamla|node|jogositas_zenegep|default';
  $field_group->group_name = 'group_szamla';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jogositas_zenegep';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Számlázás',
    'weight' => '2',
    'children' => array(
      0 => 'field_eszamla',
      1 => 'field_szamla_sorszam',
      2 => 'field_jogdijertesito',
      3 => 'field_collection_szamlazas',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Számlázás',
      'instance_settings' => array(
        'classes' => 'group-szamla field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_szamla|node|jogositas_zenegep|default'] = $field_group;

  return $export;
}

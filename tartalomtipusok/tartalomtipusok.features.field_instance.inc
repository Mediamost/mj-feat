<?php
/**
 * @file
 * tartalomtipusok.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function tartalomtipusok_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'field_collection_item-field_collection_szamlazas-field_idoszak'
  $field_instances['field_collection_item-field_collection_szamlazas-field_idoszak'] = array(
    'bundle' => 'field_collection_szamlazas',
    'default_value' => array(
      0 => array(
        'tid' => 11,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_idoszak',
    'label' => 'Időszak',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_collection_szamlazas-field_jogdijertesito'
  $field_instances['field_collection_item-field_collection_szamlazas-field_jogdijertesito'] = array(
    'bundle' => 'field_collection_szamlazas',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_jogdijertesito',
    'label' => 'Értesítő száma',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_collection_szamlazas-field_szamla_sorszam'
  $field_instances['field_collection_item-field_collection_szamlazas-field_szamla_sorszam'] = array(
    'bundle' => 'field_collection_szamlazas',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_szamla_sorszam',
    'label' => 'Számla sorszám',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_elozo_uzemeltetok-field_elozo_uzemelteto'
  $field_instances['field_collection_item-field_elozo_uzemeltetok-field_elozo_uzemelteto'] = array(
    'bundle' => 'field_elozo_uzemeltetok',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Felhasználó neve akihez a megadott dátumot megelőzően tartozott a zenegép.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_elozo_uzemelteto',
    'label' => 'Előző üzemeltető',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_elozo_uzemeltetok-field_uzemelteto_datum'
  $field_instances['field_collection_item-field_elozo_uzemeltetok-field_uzemelteto_datum'] = array(
    'bundle' => 'field_elozo_uzemeltetok',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_uzemelteto_datum',
    'label' => 'Dátum',
    'required' => 1,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 30,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_dj-field_adatszolgaltatasok'
  $field_instances['node-jogositas_alkalmankent_dj-field_adatszolgaltatasok'] = array(
    'bundle' => 'jogositas_alkalmankent_dj',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_adatszolgaltatasok',
    'label' => 'Beküldött adatszolgáltatások',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'field_extrawidgets',
      'settings' => array(
        'display_empty' => 1,
        'formatter' => 'entityreference_label',
        'formatter_settings' => array(
          'link' => 1,
        ),
      ),
      'type' => 'field_extrawidgets_hidden',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_dj-field_adoszam'
  $field_instances['node-jogositas_alkalmankent_dj-field_adoszam'] = array(
    'bundle' => 'jogositas_alkalmankent_dj',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_adoszam',
    'label' => 'Adószám',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_dj-field_bankszamla'
  $field_instances['node-jogositas_alkalmankent_dj-field_bankszamla'] = array(
    'bundle' => 'jogositas_alkalmankent_dj',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Az esetleges túlfizetéseket, erre a számlaszámra utaljuk vissza.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_bankszamla',
    'label' => 'Bankszámlaszám',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_dj-field_belso_megjegyzes'
  $field_instances['node-jogositas_alkalmankent_dj-field_belso_megjegyzes'] = array(
    'bundle' => 'jogositas_alkalmankent_dj',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_belso_megjegyzes',
    'label' => 'Megjegyzés',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_dj-field_eszamla'
  $field_instances['node-jogositas_alkalmankent_dj-field_eszamla'] = array(
    'bundle' => 'jogositas_alkalmankent_dj',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Felhívjuk figyelmét, hogy az elektronikus számla az  „XSD Informatikai Zrt. – e-szamla.hu”  e-mail címről fog érkezni (nem a MAHASZ-tól). 
Az e-mail tartalmazza azt a linket, melyen a számla 30 napon keresztül megtekinthető, de az e-szamla.hu oldalon korlátlan ideig elérhető.
FIGYELEM! 1 db e-mail címhez csak 1 db felhasználó (vevő név) rendelhető, mert a rendszer nem enged azonos e-mail címet rögzíteni több partnernél.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_eszamla',
    'label' => 'Hozzájárulok, hogy részemre elektronikus számlát küldjenek',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_dj-field_feltetelek'
  $field_instances['node-jogositas_alkalmankent_dj-field_feltetelek'] = array(
    'bundle' => 'jogositas_alkalmankent_dj',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A jelen pont elfogadásával büntetőjogi felelősségem tudatában kijelentem, hogy a jelen űrlapot, mint jognyilatkozatot az űrlapon általam megjelölt felhasználó tettem, vagy a jognyilatkozatban megjelölt felhasználó által a jelen űrlapba foglalt jognyilatkozatok megtételére jogosult (meghatalmazott) vagyok. Tudomásul veszem továbbá, hogy amennyiben a jelen űrlapban foglalt adatokban változás áll be, azt a változást követően legfeljebb 3 munkanappal, a www.mahaszjogdij.hu weboldal űrlapjának módosításával vagyok köteles bejelenteni.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_feltetelek',
    'label' => 'Felhasználási feltételek',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_dj-field_helyseg'
  $field_instances['node-jogositas_alkalmankent_dj-field_helyseg'] = array(
    'bundle' => 'jogositas_alkalmankent_dj',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_helyseg',
    'label' => 'Település',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_dj-field_helyszin_nev'
  $field_instances['node-jogositas_alkalmankent_dj-field_helyszin_nev'] = array(
    'bundle' => 'jogositas_alkalmankent_dj',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_helyszin_nev',
    'label' => 'Helyszín neve',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_dj-field_iranyitoszam'
  $field_instances['node-jogositas_alkalmankent_dj-field_iranyitoszam'] = array(
    'bundle' => 'jogositas_alkalmankent_dj',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_iranyitoszam',
    'label' => 'Irányítószám',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_dj-field_jogosult_nev'
  $field_instances['node-jogositas_alkalmankent_dj-field_jogosult_nev'] = array(
    'bundle' => 'jogositas_alkalmankent_dj',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_szamitott_nev]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_jogosult_nev',
    'label' => 'Jogosítást kérő neve',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'display_empty' => 0,
        'formatter' => '',
        'formatter_settings' => array(),
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_dj-field_kartya_kiadva'
  $field_instances['node-jogositas_alkalmankent_dj-field_kartya_kiadva'] = array(
    'bundle' => 'jogositas_alkalmankent_dj',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_kartya_kiadva',
    'label' => 'Kártya kiadás dátuma',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-1:+1',
      ),
      'type' => 'date_popup',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_dj-field_matrica_szamok'
  $field_instances['node-jogositas_alkalmankent_dj-field_matrica_szamok'] = array(
    'bundle' => 'jogositas_alkalmankent_dj',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_matrica_szamok',
    'label' => 'Matrica számok',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_dj-field_posta_iranyitoszam'
  $field_instances['node-jogositas_alkalmankent_dj-field_posta_iranyitoszam'] = array(
    'bundle' => 'jogositas_alkalmankent_dj',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_posta_iranyitoszam]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_posta_iranyitoszam',
    'label' => 'Irányítószám',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_dj-field_posta_nev'
  $field_instances['node-jogositas_alkalmankent_dj-field_posta_nev'] = array(
    'bundle' => 'jogositas_alkalmankent_dj',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_szamitott_nev]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_posta_nev',
    'label' => 'Név',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_dj-field_posta_utca'
  $field_instances['node-jogositas_alkalmankent_dj-field_posta_utca'] = array(
    'bundle' => 'jogositas_alkalmankent_dj',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_posta_utca]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_posta_utca',
    'label' => 'Utca, házszám',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_dj-field_posta_varos'
  $field_instances['node-jogositas_alkalmankent_dj-field_posta_varos'] = array(
    'bundle' => 'jogositas_alkalmankent_dj',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_posta_varos]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_posta_varos',
    'label' => 'Település',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_dj-field_rendezveny_ideje'
  $field_instances['node-jogositas_alkalmankent_dj-field_rendezveny_ideje'] = array(
    'bundle' => 'jogositas_alkalmankent_dj',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_rendezveny_ideje',
    'label' => 'Rendezvény ideje (maximum 24 óra)',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'strtotime',
      'default_value_code' => '',
      'default_value_code2' => '+1 hours',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 5,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-0:+1',
      ),
      'type' => 'date_popup',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_dj-field_statusz'
  $field_instances['node-jogositas_alkalmankent_dj-field_statusz'] = array(
    'bundle' => 'jogositas_alkalmankent_dj',
    'default_value' => array(
      0 => array(
        'value' => 'Jóváhagyásra vár',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_statusz',
    'label' => 'Státusz',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_dj-field_szamla_helyiseg'
  $field_instances['node-jogositas_alkalmankent_dj-field_szamla_helyiseg'] = array(
    'bundle' => 'jogositas_alkalmankent_dj',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_varos]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_szamla_helyiseg',
    'label' => 'Település',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_dj-field_szamla_iranyitoszam'
  $field_instances['node-jogositas_alkalmankent_dj-field_szamla_iranyitoszam'] = array(
    'bundle' => 'jogositas_alkalmankent_dj',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_iranyitoszam]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_szamla_iranyitoszam',
    'label' => 'Irányítószám',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_dj-field_szamla_nev'
  $field_instances['node-jogositas_alkalmankent_dj-field_szamla_nev'] = array(
    'bundle' => 'jogositas_alkalmankent_dj',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_szamitott_nev]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_szamla_nev',
    'label' => 'Számlázási név',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_dj-field_szamla_sorszam'
  $field_instances['node-jogositas_alkalmankent_dj-field_szamla_sorszam'] = array(
    'bundle' => 'jogositas_alkalmankent_dj',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_szamla_sorszam',
    'label' => 'Számla sorszám',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_dj-field_szamla_utca'
  $field_instances['node-jogositas_alkalmankent_dj-field_szamla_utca'] = array(
    'bundle' => 'jogositas_alkalmankent_dj',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_utca]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_szamla_utca',
    'label' => 'Utca, házszám',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_dj-field_tobbszorozesi_lista'
  $field_instances['node-jogositas_alkalmankent_dj-field_tobbszorozesi_lista'] = array(
    'bundle' => 'jogositas_alkalmankent_dj',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<br/>
Az üres sablon és egy minta fájl letöltéséhez kattintson a fájlok nevére: <a href="/files/public/minta/tracklista_minta.xlsx">tracklista_minta.xlsx</a>, <a href="/files/public/minta/tracklista_sablon.xlsx">tracklista_sablon.xlsx</a>',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tobbszorozesi_lista',
    'label' => 'Töbszörözési lista',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'tracklista_DJ/[current-user:uid]',
      'file_extensions' => 'xls xlsx',
      'max_filesize' => '30M',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'bar',
      ),
      'type' => 'file_generic',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_dj-field_utca'
  $field_instances['node-jogositas_alkalmankent_dj-field_utca'] = array(
    'bundle' => 'jogositas_alkalmankent_dj',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_utca',
    'label' => 'Utca, házszám',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_hatterz-field_adatszolgaltatasok'
  $field_instances['node-jogositas_alkalmankent_hatterz-field_adatszolgaltatasok'] = array(
    'bundle' => 'jogositas_alkalmankent_hatterz',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_adatszolgaltatasok',
    'label' => 'Beküldött adatszolgáltatások',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'field_extrawidgets',
      'settings' => array(
        'display_empty' => 1,
        'formatter' => 'entityreference_label',
        'formatter_settings' => array(
          'link' => 1,
        ),
      ),
      'type' => 'field_extrawidgets_hidden',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_hatterz-field_adoszam'
  $field_instances['node-jogositas_alkalmankent_hatterz-field_adoszam'] = array(
    'bundle' => 'jogositas_alkalmankent_hatterz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_adoszam',
    'label' => 'Adószám',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_hatterz-field_bankszamla'
  $field_instances['node-jogositas_alkalmankent_hatterz-field_bankszamla'] = array(
    'bundle' => 'jogositas_alkalmankent_hatterz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Az esetleges túlfizetéseket, erre a számlaszámra utaljuk vissza.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_bankszamla',
    'label' => 'Bankszámlaszám',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_hatterz-field_belso_megjegyzes'
  $field_instances['node-jogositas_alkalmankent_hatterz-field_belso_megjegyzes'] = array(
    'bundle' => 'jogositas_alkalmankent_hatterz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_belso_megjegyzes',
    'label' => 'Megjegyzés',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_hatterz-field_eszamla'
  $field_instances['node-jogositas_alkalmankent_hatterz-field_eszamla'] = array(
    'bundle' => 'jogositas_alkalmankent_hatterz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Felhívjuk figyelmét, hogy az elektronikus számla az  „XSD Informatikai Zrt. – e-szamla.hu”  e-mail címről fog érkezni (nem a MAHASZ-tól). 
Az e-mail tartalmazza azt a linket, melyen a számla 30 napon keresztül megtekinthető, de az e-szamla.hu oldalon korlátlan ideig elérhető.
FIGYELEM! 1 db e-mail címhez csak 1 db felhasználó (vevő név) rendelhető, mert a rendszer nem enged azonos e-mail címet rögzíteni több partnernél.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_eszamla',
    'label' => 'Hozzájárulok, hogy részemre elektronikus számlát küldjenek',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_hatterz-field_feltetelek'
  $field_instances['node-jogositas_alkalmankent_hatterz-field_feltetelek'] = array(
    'bundle' => 'jogositas_alkalmankent_hatterz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A jelen pont elfogadásával büntetőjogi felelősségem tudatában kijelentem, hogy a jelen űrlapot, mint jognyilatkozatot az űrlapon általam megjelölt felhasználó tettem, vagy a jognyilatkozatban megjelölt felhasználó által a jelen űrlapba foglalt jognyilatkozatok megtételére jogosult (meghatalmazott) vagyok. Tudomásul veszem továbbá, hogy amennyiben a jelen űrlapban foglalt adatokban változás áll be, azt a változást követően legfeljebb 3 munkanappal, a www.mahaszjogdij.hu weboldal űrlapjának módosításával vagyok köteles bejelenteni.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_feltetelek',
    'label' => 'Felhasználási feltételek',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_hatterz-field_helyseg'
  $field_instances['node-jogositas_alkalmankent_hatterz-field_helyseg'] = array(
    'bundle' => 'jogositas_alkalmankent_hatterz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_helyseg',
    'label' => 'Település',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_hatterz-field_helyszin_nev'
  $field_instances['node-jogositas_alkalmankent_hatterz-field_helyszin_nev'] = array(
    'bundle' => 'jogositas_alkalmankent_hatterz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_helyszin_nev',
    'label' => 'Helyszín neve',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_hatterz-field_helyszinek_szama'
  $field_instances['node-jogositas_alkalmankent_hatterz-field_helyszinek_szama'] = array(
    'bundle' => 'jogositas_alkalmankent_hatterz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_helyszinek_szama',
    'label' => 'Jogosítandó helyszínek száma',
    'required' => 1,
    'settings' => array(
      'max' => 999,
      'min' => 1,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_hatterz-field_iranyitoszam'
  $field_instances['node-jogositas_alkalmankent_hatterz-field_iranyitoszam'] = array(
    'bundle' => 'jogositas_alkalmankent_hatterz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_iranyitoszam',
    'label' => 'Irányítószám',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_hatterz-field_jogosult_nev'
  $field_instances['node-jogositas_alkalmankent_hatterz-field_jogosult_nev'] = array(
    'bundle' => 'jogositas_alkalmankent_hatterz',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_szamitott_nev]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_jogosult_nev',
    'label' => 'Jogosítást kérő neve',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_hatterz-field_posta_iranyitoszam'
  $field_instances['node-jogositas_alkalmankent_hatterz-field_posta_iranyitoszam'] = array(
    'bundle' => 'jogositas_alkalmankent_hatterz',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_posta_iranyitoszam]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_posta_iranyitoszam',
    'label' => 'Irányítószám',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_hatterz-field_posta_nev'
  $field_instances['node-jogositas_alkalmankent_hatterz-field_posta_nev'] = array(
    'bundle' => 'jogositas_alkalmankent_hatterz',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_szamitott_nev]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_posta_nev',
    'label' => 'Név',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_hatterz-field_posta_utca'
  $field_instances['node-jogositas_alkalmankent_hatterz-field_posta_utca'] = array(
    'bundle' => 'jogositas_alkalmankent_hatterz',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_posta_utca]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_posta_utca',
    'label' => 'Utca, házszám',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_hatterz-field_posta_varos'
  $field_instances['node-jogositas_alkalmankent_hatterz-field_posta_varos'] = array(
    'bundle' => 'jogositas_alkalmankent_hatterz',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_posta_varos]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_posta_varos',
    'label' => 'Település',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_hatterz-field_rendezveny_ideje'
  $field_instances['node-jogositas_alkalmankent_hatterz-field_rendezveny_ideje'] = array(
    'bundle' => 'jogositas_alkalmankent_hatterz',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_rendezveny_ideje',
    'label' => 'Rendezvény ideje (maximum 24 óra)',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 5,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-0:+1',
      ),
      'type' => 'date_popup',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_hatterz-field_statusz'
  $field_instances['node-jogositas_alkalmankent_hatterz-field_statusz'] = array(
    'bundle' => 'jogositas_alkalmankent_hatterz',
    'default_value' => array(
      0 => array(
        'value' => 'Jóváhagyásra vár',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_statusz',
    'label' => 'Státusz',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_hatterz-field_szamla_helyiseg'
  $field_instances['node-jogositas_alkalmankent_hatterz-field_szamla_helyiseg'] = array(
    'bundle' => 'jogositas_alkalmankent_hatterz',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_varos]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_szamla_helyiseg',
    'label' => 'Település',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_hatterz-field_szamla_iranyitoszam'
  $field_instances['node-jogositas_alkalmankent_hatterz-field_szamla_iranyitoszam'] = array(
    'bundle' => 'jogositas_alkalmankent_hatterz',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_iranyitoszam]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_szamla_iranyitoszam',
    'label' => 'Irányítószám',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_hatterz-field_szamla_nev'
  $field_instances['node-jogositas_alkalmankent_hatterz-field_szamla_nev'] = array(
    'bundle' => 'jogositas_alkalmankent_hatterz',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_szamitott_nev]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_szamla_nev',
    'label' => 'Számlázási név',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_hatterz-field_szamla_sorszam'
  $field_instances['node-jogositas_alkalmankent_hatterz-field_szamla_sorszam'] = array(
    'bundle' => 'jogositas_alkalmankent_hatterz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_szamla_sorszam',
    'label' => 'Számla sorszám',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_hatterz-field_szamla_utca'
  $field_instances['node-jogositas_alkalmankent_hatterz-field_szamla_utca'] = array(
    'bundle' => 'jogositas_alkalmankent_hatterz',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_posta_utca]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_szamla_utca',
    'label' => 'Utca, házszám',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_hatterz-field_tobbszorozesi_lista'
  $field_instances['node-jogositas_alkalmankent_hatterz-field_tobbszorozesi_lista'] = array(
    'bundle' => 'jogositas_alkalmankent_hatterz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<br/>
Az üres sablon és egy minta fájl letöltéséhez kattintson a fájlok nevére: <a href="/files/public/minta/tracklista_minta.xlsx">tracklista_minta.xlsx</a>, <a href="/files/public/minta/tracklista_sablon.xlsx">tracklista_sablon.xlsx</a>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tobbszorozesi_lista',
    'label' => 'Többszörözési lista',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'tracklista_HZ/[current-user:uid]',
      'file_extensions' => 'xls xlsx',
      'max_filesize' => '30M',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-jogositas_alkalmankent_hatterz-field_utca'
  $field_instances['node-jogositas_alkalmankent_hatterz-field_utca'] = array(
    'bundle' => 'jogositas_alkalmankent_hatterz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_utca',
    'label' => 'Utca, házszám',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_dj-field_adatszolgaltatasok'
  $field_instances['node-jogositas_atalanydijas_dj-field_adatszolgaltatasok'] = array(
    'bundle' => 'jogositas_atalanydijas_dj',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_adatszolgaltatasok',
    'label' => 'Beküldött adatszolgáltatások',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'field_extrawidgets',
      'settings' => array(
        'display_empty' => 1,
        'formatter' => 'entityreference_label',
        'formatter_settings' => array(
          'link' => 1,
        ),
      ),
      'type' => 'field_extrawidgets_read_only',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_dj-field_adoszam'
  $field_instances['node-jogositas_atalanydijas_dj-field_adoszam'] = array(
    'bundle' => 'jogositas_atalanydijas_dj',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_adoszam',
    'label' => 'Adószám',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_dj-field_atalanyeve'
  $field_instances['node-jogositas_atalanydijas_dj-field_atalanyeve'] = array(
    'bundle' => 'jogositas_atalanydijas_dj',
    'default_value' => array(
      0 => array(
        'value' => '[current-date:custom:Y]',
      ),
    ),
    'deleted' => 0,
    'description' => 'Átalánydíjas jogosítások automatikus nevéhez, és szűréséhez használt mező.
Alapértelmezett értéke a jogosítás létrehozásának éve, de adminisztrátor átírhatja.
Általános felhasználó nem látja, nem szerkesztheti.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_atalanyeve',
    'label' => 'Átalány éve',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_dj-field_bankszamla'
  $field_instances['node-jogositas_atalanydijas_dj-field_bankszamla'] = array(
    'bundle' => 'jogositas_atalanydijas_dj',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Az esetleges túlfizetéseket, erre a számlaszámra utaljuk vissza.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_bankszamla',
    'label' => 'Bankszámlaszám',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_dj-field_belso_megjegyzes'
  $field_instances['node-jogositas_atalanydijas_dj-field_belso_megjegyzes'] = array(
    'bundle' => 'jogositas_atalanydijas_dj',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_belso_megjegyzes',
    'label' => 'Megjegyzés',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_dj-field_dj_szovetseg'
  $field_instances['node-jogositas_atalanydijas_dj-field_dj_szovetseg'] = array(
    'bundle' => 'jogositas_atalanydijas_dj',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_dj_szovetseg',
    'label' => 'DJ szövetség',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_dj-field_dj_tagsag'
  $field_instances['node-jogositas_atalanydijas_dj-field_dj_tagsag'] = array(
    'bundle' => 'jogositas_atalanydijas_dj',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_dj_tagsag',
    'label' => 'DJ szövetség tagság',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_extrawidgets',
      'settings' => array(),
      'type' => 'field_extrawidgets_hidden',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_dj-field_eszamla'
  $field_instances['node-jogositas_atalanydijas_dj-field_eszamla'] = array(
    'bundle' => 'jogositas_atalanydijas_dj',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Felhívjuk figyelmét, hogy az elektronikus számla az  „XSD Informatikai Zrt. – e-szamla.hu”  e-mail címről fog érkezni (nem a MAHASZ-tól). 
Az e-mail tartalmazza azt a linket, melyen a számla 30 napon keresztül megtekinthető, de az e-szamla.hu oldalon korlátlan ideig elérhető.
FIGYELEM! 1 db e-mail címhez csak 1 db felhasználó (vevő név) rendelhető, mert a rendszer nem enged azonos e-mail címet rögzíteni több partnernél.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_eszamla',
    'label' => 'Hozzájárulok, hogy részemre elektronikus számlát küldjenek',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_dj-field_feltetelek'
  $field_instances['node-jogositas_atalanydijas_dj-field_feltetelek'] = array(
    'bundle' => 'jogositas_atalanydijas_dj',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A jelen pont elfogadásával büntetőjogi felelősségem tudatában kijelentem, hogy a jelen űrlapot, mint jognyilatkozatot az űrlapon általam megjelölt felhasználó tettem, vagy a jognyilatkozatban megjelölt felhasználó által a jelen űrlapba foglalt jognyilatkozatok megtételére jogosult (meghatalmazott) vagyok. Tudomásul veszem továbbá, hogy amennyiben a jelen űrlapban foglalt adatokban változás áll be, azt a változást követően legfeljebb 3 munkanappal, a www.mahaszjogdij.hu weboldal űrlapjának módosításával vagyok köteles bejelenteni.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_feltetelek',
    'label' => 'Felhasználási feltételek',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_dj-field_jogosult_nev'
  $field_instances['node-jogositas_atalanydijas_dj-field_jogosult_nev'] = array(
    'bundle' => 'jogositas_atalanydijas_dj',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_szamitott_nev]',
        'format' => 'filtered_html',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_jogosult_nev',
    'label' => 'Jogosítást kérő neve',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_dj-field_kartya_kiadva'
  $field_instances['node-jogositas_atalanydijas_dj-field_kartya_kiadva'] = array(
    'bundle' => 'jogositas_atalanydijas_dj',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_kartya_kiadva',
    'label' => 'Kártya kiadás dátuma',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'Y/m/d - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-1:+1',
      ),
      'type' => 'date_popup',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_dj-field_matrica_szamok'
  $field_instances['node-jogositas_atalanydijas_dj-field_matrica_szamok'] = array(
    'bundle' => 'jogositas_atalanydijas_dj',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_matrica_szamok',
    'label' => 'Matrica számok',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_dj-field_posta_iranyitoszam'
  $field_instances['node-jogositas_atalanydijas_dj-field_posta_iranyitoszam'] = array(
    'bundle' => 'jogositas_atalanydijas_dj',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_posta_iranyitoszam]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_posta_iranyitoszam',
    'label' => 'Irányítószám',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_dj-field_posta_nev'
  $field_instances['node-jogositas_atalanydijas_dj-field_posta_nev'] = array(
    'bundle' => 'jogositas_atalanydijas_dj',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_szamitott_nev]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_posta_nev',
    'label' => 'Név',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_dj-field_posta_utca'
  $field_instances['node-jogositas_atalanydijas_dj-field_posta_utca'] = array(
    'bundle' => 'jogositas_atalanydijas_dj',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_posta_utca]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_posta_utca',
    'label' => 'Utca, házszám',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_dj-field_posta_varos'
  $field_instances['node-jogositas_atalanydijas_dj-field_posta_varos'] = array(
    'bundle' => 'jogositas_atalanydijas_dj',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_posta_varos]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_posta_varos',
    'label' => 'Település',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_dj-field_statusz'
  $field_instances['node-jogositas_atalanydijas_dj-field_statusz'] = array(
    'bundle' => 'jogositas_atalanydijas_dj',
    'default_value' => array(
      0 => array(
        'value' => 'Jóváhagyásra vár',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_statusz',
    'label' => 'Státusz',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_dj-field_szamla_helyiseg'
  $field_instances['node-jogositas_atalanydijas_dj-field_szamla_helyiseg'] = array(
    'bundle' => 'jogositas_atalanydijas_dj',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_varos]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_szamla_helyiseg',
    'label' => 'Település',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_dj-field_szamla_iranyitoszam'
  $field_instances['node-jogositas_atalanydijas_dj-field_szamla_iranyitoszam'] = array(
    'bundle' => 'jogositas_atalanydijas_dj',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_iranyitoszam]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_szamla_iranyitoszam',
    'label' => 'Irányítószám',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_dj-field_szamla_nev'
  $field_instances['node-jogositas_atalanydijas_dj-field_szamla_nev'] = array(
    'bundle' => 'jogositas_atalanydijas_dj',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_szamitott_nev]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_szamla_nev',
    'label' => 'Számlázási név',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_dj-field_szamla_sorszam'
  $field_instances['node-jogositas_atalanydijas_dj-field_szamla_sorszam'] = array(
    'bundle' => 'jogositas_atalanydijas_dj',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_szamla_sorszam',
    'label' => 'Számla sorszám',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_dj-field_szamla_utca'
  $field_instances['node-jogositas_atalanydijas_dj-field_szamla_utca'] = array(
    'bundle' => 'jogositas_atalanydijas_dj',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_utca]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_szamla_utca',
    'label' => 'Utca, házszám',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_dj-field_tobbszorozesi_lista'
  $field_instances['node-jogositas_atalanydijas_dj-field_tobbszorozesi_lista'] = array(
    'bundle' => 'jogositas_atalanydijas_dj',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<strong>Feltöltés, legkésőbb 2014.07.31-ig és 2015.01.31-ig.</strong><br />
Az üres sablon és egy minta fájl letöltéséhez kattintson a fájlok nevére: <a href="/files/public/minta/tracklista_minta.xlsx">tracklista_minta.xlsx</a>, <a href="/files/public/minta/tracklista_sablon.xlsx">tracklista_sablon.xlsx</a>',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tobbszorozesi_lista',
    'label' => 'Többszörözési lista',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'tracklista_atalanydijas_DJ/[current-user:uid]',
      'file_extensions' => 'xls xlsx',
      'max_filesize' => '30M',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'field_extrawidgets',
      'settings' => array(
        'progress_indicator' => 'bar',
      ),
      'type' => 'field_extrawidgets_hidden',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_hatterz-field_01h_utan_nyitva'
  $field_instances['node-jogositas_atalanydijas_hatterz-field_01h_utan_nyitva'] = array(
    'bundle' => 'jogositas_atalanydijas_hatterz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_01h_utan_nyitva',
    'label' => '01h után is nyitva tartó vendéglátóhely',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_hatterz-field_adatszolgaltatasok'
  $field_instances['node-jogositas_atalanydijas_hatterz-field_adatszolgaltatasok'] = array(
    'bundle' => 'jogositas_atalanydijas_hatterz',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_adatszolgaltatasok',
    'label' => 'Beküldött adatszolgáltatások',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'field_extrawidgets',
      'settings' => array(
        'display_empty' => 1,
        'formatter' => 'entityreference_label',
        'formatter_settings' => array(
          'link' => 1,
        ),
      ),
      'type' => 'field_extrawidgets_read_only',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_hatterz-field_adoszam'
  $field_instances['node-jogositas_atalanydijas_hatterz-field_adoszam'] = array(
    'bundle' => 'jogositas_atalanydijas_hatterz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_adoszam',
    'label' => 'Adószám',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_hatterz-field_atalanyeve'
  $field_instances['node-jogositas_atalanydijas_hatterz-field_atalanyeve'] = array(
    'bundle' => 'jogositas_atalanydijas_hatterz',
    'default_value' => array(
      0 => array(
        'value' => '[current-date:custom:Y]',
      ),
    ),
    'deleted' => 0,
    'description' => 'Átalánydíjas jogosítások automatikus nevéhez, és szűréséhez használt mező.
Alapértelmezett értéke a jogosítás létrehozásának éve, de adminisztrátor átírhatja.
Általános felhasználó nem látja, nem szerkesztheti.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_atalanyeve',
    'label' => 'Átalány éve',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_hatterz-field_bankszamla'
  $field_instances['node-jogositas_atalanydijas_hatterz-field_bankszamla'] = array(
    'bundle' => 'jogositas_atalanydijas_hatterz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Az esetleges túlfizetéseket, erre a számlaszámra utaljuk vissza.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_bankszamla',
    'label' => 'Bankszámlaszám',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_hatterz-field_belso_megjegyzes'
  $field_instances['node-jogositas_atalanydijas_hatterz-field_belso_megjegyzes'] = array(
    'bundle' => 'jogositas_atalanydijas_hatterz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_belso_megjegyzes',
    'label' => 'Megjegyzés',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_hatterz-field_eszamla'
  $field_instances['node-jogositas_atalanydijas_hatterz-field_eszamla'] = array(
    'bundle' => 'jogositas_atalanydijas_hatterz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Felhívjuk figyelmét, hogy az elektronikus számla az  „XSD Informatikai Zrt. – e-szamla.hu”  e-mail címről fog érkezni (nem a MAHASZ-tól). 
Az e-mail tartalmazza azt a linket, melyen a számla 30 napon keresztül megtekinthető, de az e-szamla.hu oldalon korlátlan ideig elérhető.
FIGYELEM! 1 db e-mail címhez csak 1 db felhasználó (vevő név) rendelhető, mert a rendszer nem enged azonos e-mail címet rögzíteni több partnernél.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_eszamla',
    'label' => 'Hozzájárulok, hogy részemre elektronikus számlát küldjenek',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_hatterz-field_feltetelek'
  $field_instances['node-jogositas_atalanydijas_hatterz-field_feltetelek'] = array(
    'bundle' => 'jogositas_atalanydijas_hatterz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A jelen pont elfogadásával büntetőjogi felelősségem tudatában kijelentem, hogy a jelen űrlapot, mint jognyilatkozatot az űrlapon általam megjelölt felhasználó tettem, vagy a jognyilatkozatban megjelölt felhasználó által a jelen űrlapba foglalt jognyilatkozatok megtételére jogosult (meghatalmazott) vagyok. Tudomásul veszem továbbá, hogy amennyiben a jelen űrlapban foglalt adatokban változás áll be, azt a változást követően legfeljebb 3 munkanappal, a www.mahaszjogdij.hu weboldal űrlapjának módosításával vagyok köteles bejelenteni.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_feltetelek',
    'label' => 'Felhasználási feltételek',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_hatterz-field_helyseg'
  $field_instances['node-jogositas_atalanydijas_hatterz-field_helyseg'] = array(
    'bundle' => 'jogositas_atalanydijas_hatterz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_helyseg',
    'label' => 'Település',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_hatterz-field_helyszin_nev'
  $field_instances['node-jogositas_atalanydijas_hatterz-field_helyszin_nev'] = array(
    'bundle' => 'jogositas_atalanydijas_hatterz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_helyszin_nev',
    'label' => 'Jogosítást kérő vendéglátó-, kereskedelmi- vagy szálláshely neve ',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_hatterz-field_helyszinek_szama'
  $field_instances['node-jogositas_atalanydijas_hatterz-field_helyszinek_szama'] = array(
    'bundle' => 'jogositas_atalanydijas_hatterz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_helyszinek_szama',
    'label' => 'Jogosítandó helyszínek száma',
    'required' => 1,
    'settings' => array(
      'max' => 999,
      'min' => 1,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_hatterz-field_iranyitoszam'
  $field_instances['node-jogositas_atalanydijas_hatterz-field_iranyitoszam'] = array(
    'bundle' => 'jogositas_atalanydijas_hatterz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_iranyitoszam',
    'label' => 'Irányítószám',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_hatterz-field_jogosult_nev'
  $field_instances['node-jogositas_atalanydijas_hatterz-field_jogosult_nev'] = array(
    'bundle' => 'jogositas_atalanydijas_hatterz',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_szamitott_nev]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_jogosult_nev',
    'label' => 'Jogosítást kérő neve',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_hatterz-field_kartya_kiadva'
  $field_instances['node-jogositas_atalanydijas_hatterz-field_kartya_kiadva'] = array(
    'bundle' => 'jogositas_atalanydijas_hatterz',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_kartya_kiadva',
    'label' => 'Kártya kiadás dátuma',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-1:+1',
      ),
      'type' => 'date_popup',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_hatterz-field_matrica_szamok'
  $field_instances['node-jogositas_atalanydijas_hatterz-field_matrica_szamok'] = array(
    'bundle' => 'jogositas_atalanydijas_hatterz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_matrica_szamok',
    'label' => 'Matrica számok',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_hatterz-field_posta_iranyitoszam'
  $field_instances['node-jogositas_atalanydijas_hatterz-field_posta_iranyitoszam'] = array(
    'bundle' => 'jogositas_atalanydijas_hatterz',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_posta_iranyitoszam]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_posta_iranyitoszam',
    'label' => 'Irányítószám',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_hatterz-field_posta_nev'
  $field_instances['node-jogositas_atalanydijas_hatterz-field_posta_nev'] = array(
    'bundle' => 'jogositas_atalanydijas_hatterz',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_szamitott_nev]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_posta_nev',
    'label' => 'Név',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_hatterz-field_posta_utca'
  $field_instances['node-jogositas_atalanydijas_hatterz-field_posta_utca'] = array(
    'bundle' => 'jogositas_atalanydijas_hatterz',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_posta_utca]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_posta_utca',
    'label' => 'Utca, házszám',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_hatterz-field_posta_varos'
  $field_instances['node-jogositas_atalanydijas_hatterz-field_posta_varos'] = array(
    'bundle' => 'jogositas_atalanydijas_hatterz',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_posta_varos]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_posta_varos',
    'label' => 'Település',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_hatterz-field_statusz'
  $field_instances['node-jogositas_atalanydijas_hatterz-field_statusz'] = array(
    'bundle' => 'jogositas_atalanydijas_hatterz',
    'default_value' => array(
      0 => array(
        'value' => 'Jóváhagyásra vár',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_statusz',
    'label' => 'Státusz',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_hatterz-field_szamla_helyiseg'
  $field_instances['node-jogositas_atalanydijas_hatterz-field_szamla_helyiseg'] = array(
    'bundle' => 'jogositas_atalanydijas_hatterz',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_varos]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_szamla_helyiseg',
    'label' => 'Település',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_hatterz-field_szamla_iranyitoszam'
  $field_instances['node-jogositas_atalanydijas_hatterz-field_szamla_iranyitoszam'] = array(
    'bundle' => 'jogositas_atalanydijas_hatterz',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_iranyitoszam]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_szamla_iranyitoszam',
    'label' => 'Irányítószám',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_hatterz-field_szamla_nev'
  $field_instances['node-jogositas_atalanydijas_hatterz-field_szamla_nev'] = array(
    'bundle' => 'jogositas_atalanydijas_hatterz',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_szamitott_nev]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_szamla_nev',
    'label' => 'Számlázási név',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_hatterz-field_szamla_sorszam'
  $field_instances['node-jogositas_atalanydijas_hatterz-field_szamla_sorszam'] = array(
    'bundle' => 'jogositas_atalanydijas_hatterz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_szamla_sorszam',
    'label' => 'Számla sorszám',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_hatterz-field_szamla_utca'
  $field_instances['node-jogositas_atalanydijas_hatterz-field_szamla_utca'] = array(
    'bundle' => 'jogositas_atalanydijas_hatterz',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_posta_utca]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_szamla_utca',
    'label' => 'Utca, házszám',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_hatterz-field_tobbszorozesi_lista'
  $field_instances['node-jogositas_atalanydijas_hatterz-field_tobbszorozesi_lista'] = array(
    'bundle' => 'jogositas_atalanydijas_hatterz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<strong>Feltöltés, legkésőbb 2014.07.31-ig és 2015.01.31-ig.</strong><br />
Az üres sablon és egy minta fájl letöltéséhez kattintson a fájlok nevére: <a href="/files/public/minta/tracklista_minta.xlsx">tracklista_minta.xlsx</a>, <a href="/files/public/minta/tracklista_sablon.xlsx">tracklista_sablon.xlsx</a>',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tobbszorozesi_lista',
    'label' => 'Többszörözési lista',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'tracklista_atalanydijas_HZ/[current-user:uid]',
      'file_extensions' => 'xls xlsx',
      'max_filesize' => '30M',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'field_extrawidgets',
      'settings' => array(
        'progress_indicator' => 'bar',
      ),
      'type' => 'field_extrawidgets_hidden',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-jogositas_atalanydijas_hatterz-field_utca'
  $field_instances['node-jogositas_atalanydijas_hatterz-field_utca'] = array(
    'bundle' => 'jogositas_atalanydijas_hatterz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_utca',
    'label' => 'Utca, házszám',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_dj-field_adoszam'
  $field_instances['node-jogositas_darabonkent_dj-field_adoszam'] = array(
    'bundle' => 'jogositas_darabonkent_dj',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_adoszam',
    'label' => 'Adószám',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_dj-field_bankszamla'
  $field_instances['node-jogositas_darabonkent_dj-field_bankszamla'] = array(
    'bundle' => 'jogositas_darabonkent_dj',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Az esetleges túlfizetéseket, erre a számlaszámra utaljuk vissza.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_bankszamla',
    'label' => 'Bankszámlaszám',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_dj-field_belso_megjegyzes'
  $field_instances['node-jogositas_darabonkent_dj-field_belso_megjegyzes'] = array(
    'bundle' => 'jogositas_darabonkent_dj',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_belso_megjegyzes',
    'label' => 'Megjegyzés',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_dj-field_dj_szovetseg'
  $field_instances['node-jogositas_darabonkent_dj-field_dj_szovetseg'] = array(
    'bundle' => 'jogositas_darabonkent_dj',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_dj_szovetseg',
    'label' => 'DJ szövetség',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_dj-field_eszamla'
  $field_instances['node-jogositas_darabonkent_dj-field_eszamla'] = array(
    'bundle' => 'jogositas_darabonkent_dj',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Felhívjuk figyelmét, hogy az elektronikus számla az  „XSD Informatikai Zrt. – e-szamla.hu”  e-mail címről fog érkezni (nem a MAHASZ-tól). 
Az e-mail tartalmazza azt a linket, melyen a számla 30 napon keresztül megtekinthető, de az e-szamla.hu oldalon korlátlan ideig elérhető.
FIGYELEM! 1 db e-mail címhez csak 1 db felhasználó (vevő név) rendelhető, mert a rendszer nem enged azonos e-mail címet rögzíteni több partnernél.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_eszamla',
    'label' => 'Hozzájárulok, hogy részemre elektronikus számlát küldjenek',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_dj-field_feltetelek'
  $field_instances['node-jogositas_darabonkent_dj-field_feltetelek'] = array(
    'bundle' => 'jogositas_darabonkent_dj',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A jelen pont elfogadásával büntetőjogi felelősségem tudatában kijelentem, hogy a jelen űrlapot, mint jognyilatkozatot az űrlapon általam megjelölt felhasználó tettem, vagy a jognyilatkozatban megjelölt felhasználó által a jelen űrlapba foglalt jognyilatkozatok megtételére jogosult (meghatalmazott) vagyok. Tudomásul veszem továbbá, hogy amennyiben a jelen űrlapban foglalt adatokban változás áll be, azt a változást követően legfeljebb 3 munkanappal, a www.mahaszjogdij.hu weboldal űrlapjának módosításával vagyok köteles bejelenteni.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_feltetelek',
    'label' => 'Felhasználási feltételek',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_dj-field_jogosult_nev'
  $field_instances['node-jogositas_darabonkent_dj-field_jogosult_nev'] = array(
    'bundle' => 'jogositas_darabonkent_dj',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_szamitott_nev]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_jogosult_nev',
    'label' => 'Jogosítást kérő neve',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_dj-field_kartya_kiadva'
  $field_instances['node-jogositas_darabonkent_dj-field_kartya_kiadva'] = array(
    'bundle' => 'jogositas_darabonkent_dj',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_kartya_kiadva',
    'label' => 'Kártya kiadás dátuma',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-1:+1',
      ),
      'type' => 'date_popup',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_dj-field_matrica_szamok'
  $field_instances['node-jogositas_darabonkent_dj-field_matrica_szamok'] = array(
    'bundle' => 'jogositas_darabonkent_dj',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_matrica_szamok',
    'label' => 'Matrica számok',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_dj-field_mennyiseg'
  $field_instances['node-jogositas_darabonkent_dj-field_mennyiseg'] = array(
    'bundle' => 'jogositas_darabonkent_dj',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Jogosítani kívánt lemezek száma',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_mennyiseg',
    'label' => 'Mennyiség',
    'required' => 1,
    'settings' => array(
      'max' => 999,
      'min' => 1,
      'prefix' => '',
      'suffix' => ' lemez',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_dj-field_posta_iranyitoszam'
  $field_instances['node-jogositas_darabonkent_dj-field_posta_iranyitoszam'] = array(
    'bundle' => 'jogositas_darabonkent_dj',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_posta_iranyitoszam]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_posta_iranyitoszam',
    'label' => 'Irányítószám',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_dj-field_posta_nev'
  $field_instances['node-jogositas_darabonkent_dj-field_posta_nev'] = array(
    'bundle' => 'jogositas_darabonkent_dj',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_szamitott_nev]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_posta_nev',
    'label' => 'Név',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_dj-field_posta_utca'
  $field_instances['node-jogositas_darabonkent_dj-field_posta_utca'] = array(
    'bundle' => 'jogositas_darabonkent_dj',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_posta_utca]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_posta_utca',
    'label' => 'Utca, házszám',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_dj-field_posta_varos'
  $field_instances['node-jogositas_darabonkent_dj-field_posta_varos'] = array(
    'bundle' => 'jogositas_darabonkent_dj',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_posta_varos]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_posta_varos',
    'label' => 'Település',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_dj-field_statusz'
  $field_instances['node-jogositas_darabonkent_dj-field_statusz'] = array(
    'bundle' => 'jogositas_darabonkent_dj',
    'default_value' => array(
      0 => array(
        'value' => 'Jóváhagyásra vár',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_statusz',
    'label' => 'Státusz',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_dj-field_szamla_helyiseg'
  $field_instances['node-jogositas_darabonkent_dj-field_szamla_helyiseg'] = array(
    'bundle' => 'jogositas_darabonkent_dj',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_varos]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_szamla_helyiseg',
    'label' => 'Település',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_dj-field_szamla_iranyitoszam'
  $field_instances['node-jogositas_darabonkent_dj-field_szamla_iranyitoszam'] = array(
    'bundle' => 'jogositas_darabonkent_dj',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_iranyitoszam]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_szamla_iranyitoszam',
    'label' => 'Irányítószám',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_dj-field_szamla_nev'
  $field_instances['node-jogositas_darabonkent_dj-field_szamla_nev'] = array(
    'bundle' => 'jogositas_darabonkent_dj',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_szamitott_nev]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_szamla_nev',
    'label' => 'Számlázási név',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_dj-field_szamla_sorszam'
  $field_instances['node-jogositas_darabonkent_dj-field_szamla_sorszam'] = array(
    'bundle' => 'jogositas_darabonkent_dj',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_szamla_sorszam',
    'label' => 'Számla sorszám',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_dj-field_szamla_utca'
  $field_instances['node-jogositas_darabonkent_dj-field_szamla_utca'] = array(
    'bundle' => 'jogositas_darabonkent_dj',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_utca]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_szamla_utca',
    'label' => 'Utca, házszám',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_dj-field_tobbszorozesi_lista'
  $field_instances['node-jogositas_darabonkent_dj-field_tobbszorozesi_lista'] = array(
    'bundle' => 'jogositas_darabonkent_dj',
    'deleted' => 0,
    'description' => 'Ha egyszerre több lemezt kíván jogosítani, a hangfelvtételek listáit ugyanabban az EGY táblázatban töltse fel. Az egyes lemezekhez tartozó listák közé illesszen be egy-egy üres sort.<br />
Az üres sablon és egy minta fájl letöltéséhez kattintson a fájlok nevére: <a href="/files/public/minta/tracklista_minta.xlsx">tracklista_minta.xlsx</a>, <a href="/files/public/minta/tracklista_sablon.xlsx">tracklista_sablon.xlsx</a>',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tobbszorozesi_lista',
    'label' => 'Többszörözési lista',
    'required' => 1,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'tracklista_darabonkenti_DJ/[current-user:uid]',
      'file_extensions' => 'xls xlsx',
      'max_filesize' => '30M',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'bar',
      ),
      'type' => 'file_generic',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_hatterzene-field_adoszam'
  $field_instances['node-jogositas_darabonkent_hatterzene-field_adoszam'] = array(
    'bundle' => 'jogositas_darabonkent_hatterzene',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_adoszam',
    'label' => 'Adószám',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_hatterzene-field_bankszamla'
  $field_instances['node-jogositas_darabonkent_hatterzene-field_bankszamla'] = array(
    'bundle' => 'jogositas_darabonkent_hatterzene',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Az esetleges túlfizetéseket, erre a számlaszámra utaljuk vissza.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_bankszamla',
    'label' => 'Bankszámlaszám',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_hatterzene-field_belso_megjegyzes'
  $field_instances['node-jogositas_darabonkent_hatterzene-field_belso_megjegyzes'] = array(
    'bundle' => 'jogositas_darabonkent_hatterzene',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_belso_megjegyzes',
    'label' => 'Megjegyzés',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_hatterzene-field_eszamla'
  $field_instances['node-jogositas_darabonkent_hatterzene-field_eszamla'] = array(
    'bundle' => 'jogositas_darabonkent_hatterzene',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Felhívjuk figyelmét, hogy az elektronikus számla az  „XSD Informatikai Zrt. – e-szamla.hu”  e-mail címről fog érkezni (nem a MAHASZ-tól). 
Az e-mail tartalmazza azt a linket, melyen a számla 30 napon keresztül megtekinthető, de az e-szamla.hu oldalon korlátlan ideig elérhető.
FIGYELEM! 1 db e-mail címhez csak 1 db felhasználó (vevő név) rendelhető, mert a rendszer nem enged azonos e-mail címet rögzíteni több partnernél.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_eszamla',
    'label' => 'Hozzájárulok, hogy részemre elektronikus számlát küldjenek',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_hatterzene-field_feltetelek'
  $field_instances['node-jogositas_darabonkent_hatterzene-field_feltetelek'] = array(
    'bundle' => 'jogositas_darabonkent_hatterzene',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A jelen pont elfogadásával büntetőjogi felelősségem tudatában kijelentem, hogy a jelen űrlapot, mint jognyilatkozatot az űrlapon általam megjelölt felhasználó tettem, vagy a jognyilatkozatban megjelölt felhasználó által a jelen űrlapba foglalt jognyilatkozatok megtételére jogosult (meghatalmazott) vagyok. Tudomásul veszem továbbá, hogy amennyiben a jelen űrlapban foglalt adatokban változás áll be, azt a változást követően legfeljebb 3 munkanappal, a www.mahaszjogdij.hu weboldal űrlapjának módosításával vagyok köteles bejelenteni.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_feltetelek',
    'label' => 'Felhasználási feltételek',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_hatterzene-field_helyseg'
  $field_instances['node-jogositas_darabonkent_hatterzene-field_helyseg'] = array(
    'bundle' => 'jogositas_darabonkent_hatterzene',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_helyseg',
    'label' => 'Település',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_hatterzene-field_helyszin_nev'
  $field_instances['node-jogositas_darabonkent_hatterzene-field_helyszin_nev'] = array(
    'bundle' => 'jogositas_darabonkent_hatterzene',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_helyszin_nev',
    'label' => 'Jogosítást kérő vendéglátó-, kereskedelmi- vagy szálláshely neve',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_hatterzene-field_iranyitoszam'
  $field_instances['node-jogositas_darabonkent_hatterzene-field_iranyitoszam'] = array(
    'bundle' => 'jogositas_darabonkent_hatterzene',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_iranyitoszam',
    'label' => 'Irányítószám',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_hatterzene-field_jogosult_nev'
  $field_instances['node-jogositas_darabonkent_hatterzene-field_jogosult_nev'] = array(
    'bundle' => 'jogositas_darabonkent_hatterzene',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_szamitott_nev]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_jogosult_nev',
    'label' => 'Jogosítást kérő neve',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_hatterzene-field_kartya_kiadva'
  $field_instances['node-jogositas_darabonkent_hatterzene-field_kartya_kiadva'] = array(
    'bundle' => 'jogositas_darabonkent_hatterzene',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_kartya_kiadva',
    'label' => 'Matrica kiadás dátuma',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_hatterzene-field_matrica_szamok'
  $field_instances['node-jogositas_darabonkent_hatterzene-field_matrica_szamok'] = array(
    'bundle' => 'jogositas_darabonkent_hatterzene',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_matrica_szamok',
    'label' => 'Matrica számok',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_hatterzene-field_mennyiseg'
  $field_instances['node-jogositas_darabonkent_hatterzene-field_mennyiseg'] = array(
    'bundle' => 'jogositas_darabonkent_hatterzene',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Jogosítani kívánt lemezek száma',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_mennyiseg',
    'label' => 'Mennyiség',
    'required' => 1,
    'settings' => array(
      'max' => 999,
      'min' => 1,
      'prefix' => '',
      'suffix' => ' lemez',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_hatterzene-field_posta_iranyitoszam'
  $field_instances['node-jogositas_darabonkent_hatterzene-field_posta_iranyitoszam'] = array(
    'bundle' => 'jogositas_darabonkent_hatterzene',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_posta_iranyitoszam]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_posta_iranyitoszam',
    'label' => 'Irányítószám',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_hatterzene-field_posta_nev'
  $field_instances['node-jogositas_darabonkent_hatterzene-field_posta_nev'] = array(
    'bundle' => 'jogositas_darabonkent_hatterzene',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_szamitott_nev]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_posta_nev',
    'label' => 'Név',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_hatterzene-field_posta_utca'
  $field_instances['node-jogositas_darabonkent_hatterzene-field_posta_utca'] = array(
    'bundle' => 'jogositas_darabonkent_hatterzene',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_posta_utca]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_posta_utca',
    'label' => 'Utca, házszám',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_hatterzene-field_posta_varos'
  $field_instances['node-jogositas_darabonkent_hatterzene-field_posta_varos'] = array(
    'bundle' => 'jogositas_darabonkent_hatterzene',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_posta_varos]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_posta_varos',
    'label' => 'Település',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_hatterzene-field_statusz'
  $field_instances['node-jogositas_darabonkent_hatterzene-field_statusz'] = array(
    'bundle' => 'jogositas_darabonkent_hatterzene',
    'default_value' => array(
      0 => array(
        'value' => 'Jóváhagyásra vár',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_statusz',
    'label' => 'Státusz',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_hatterzene-field_szamla_helyiseg'
  $field_instances['node-jogositas_darabonkent_hatterzene-field_szamla_helyiseg'] = array(
    'bundle' => 'jogositas_darabonkent_hatterzene',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_varos]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_szamla_helyiseg',
    'label' => 'Település',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_hatterzene-field_szamla_iranyitoszam'
  $field_instances['node-jogositas_darabonkent_hatterzene-field_szamla_iranyitoszam'] = array(
    'bundle' => 'jogositas_darabonkent_hatterzene',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_iranyitoszam]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_szamla_iranyitoszam',
    'label' => 'Irányítószám',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_hatterzene-field_szamla_nev'
  $field_instances['node-jogositas_darabonkent_hatterzene-field_szamla_nev'] = array(
    'bundle' => 'jogositas_darabonkent_hatterzene',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_szamitott_nev]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_szamla_nev',
    'label' => 'Számlázási név',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_hatterzene-field_szamla_sorszam'
  $field_instances['node-jogositas_darabonkent_hatterzene-field_szamla_sorszam'] = array(
    'bundle' => 'jogositas_darabonkent_hatterzene',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_szamla_sorszam',
    'label' => 'Számla sorszám',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_hatterzene-field_szamla_utca'
  $field_instances['node-jogositas_darabonkent_hatterzene-field_szamla_utca'] = array(
    'bundle' => 'jogositas_darabonkent_hatterzene',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_posta_utca]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_szamla_utca',
    'label' => 'Utca, házszám',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_hatterzene-field_tobbszorozesi_lista'
  $field_instances['node-jogositas_darabonkent_hatterzene-field_tobbszorozesi_lista'] = array(
    'bundle' => 'jogositas_darabonkent_hatterzene',
    'deleted' => 0,
    'description' => 'Ha egyszerre több lemezt kíván jogosítani, a hangfelvtételek listáit ugyanabban az EGY táblázatban töltse fel. Az egyes lemezekhez tartozó listák közé illesszen be egy-egy üres sort.<br />
Az üres sablon és egy minta fájl letöltéséhez kattintson a fájlok nevére: <a href="/files/public/minta/tracklista_minta.xlsx">tracklista_minta.xlsx</a>, <a href="/files/public/minta/tracklista_sablon.xlsx">tracklista_sablon.xlsx</a>',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tobbszorozesi_lista',
    'label' => 'Többszörözési lista',
    'required' => 1,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'tracklista_darabonkenti_HZ/[current-user:uid]',
      'file_extensions' => 'xls xlsx',
      'max_filesize' => '30M',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'bar',
      ),
      'type' => 'file_generic',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-jogositas_darabonkent_hatterzene-field_utca'
  $field_instances['node-jogositas_darabonkent_hatterzene-field_utca'] = array(
    'bundle' => 'jogositas_darabonkent_hatterzene',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_utca',
    'label' => 'Utca, házszám',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-jogositas_zenegep-field_adatszolgaltatasok'
  $field_instances['node-jogositas_zenegep-field_adatszolgaltatasok'] = array(
    'bundle' => 'jogositas_zenegep',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_adatszolgaltatasok',
    'label' => 'Beküldött adatszolgáltatások',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'field_extrawidgets',
      'settings' => array(
        'display_empty' => 0,
        'formatter' => 'entityreference_label',
        'formatter_settings' => array(
          'link' => 1,
        ),
      ),
      'type' => 'field_extrawidgets_read_only',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-jogositas_zenegep-field_atalany_valtas_feltetelei'
  $field_instances['node-jogositas_zenegep-field_atalany_valtas_feltetelei'] = array(
    'bundle' => 'jogositas_zenegep',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Ezúton tájékoztatjuk, hogy az átalánydíjas rendszerből többszörözésenkénti jogosításra való áttérés esetén a felhasználó e szándékának írásbeli bejelentésével egyidejűleg ugyancsak írásban közli a közös jogkezelő szervezettel a gépének az átalánydíjra való átjelentkezésekor rögzített tartalma és a bejelentés napján fennálló tartalmi közötti eltérést. <strong>Mindazon hangfelvételek után, melyek a korábbi időpontban nem szerepeltek a zenegép tárolóján a felhasználó megfizeti a többszörözésenként 177 Ft + áfa/bruttó 225 Ft fizetendő jogdíjat.</strong>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 33,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_atalany_valtas_feltetelei',
    'label' => 'Az átalánydíjasról többszörözésenkénti jogdíj típusra áttérés feltételeit',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-jogositas_zenegep-field_belso_megjegyzes'
  $field_instances['node-jogositas_zenegep-field_belso_megjegyzes'] = array(
    'bundle' => 'jogositas_zenegep',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 34,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_belso_megjegyzes',
    'label' => 'Megjegyzés',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-jogositas_zenegep-field_collection_szamlazas'
  $field_instances['node-jogositas_zenegep-field_collection_szamlazas'] = array(
    'bundle' => 'jogositas_zenegep',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Hozzáadás',
          'delete' => 'Törlés',
          'description' => TRUE,
          'edit' => 'Szerkesztés',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_collection_szamlazas',
    'label' => 'Számlázás',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-jogositas_zenegep-field_elozo_uzemeltetok'
  $field_instances['node-jogositas_zenegep-field_elozo_uzemeltetok'] = array(
    'bundle' => 'jogositas_zenegep',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Hozzáadás',
          'delete' => 'Törlés',
          'description' => 1,
          'edit' => 'Szerkesztés',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_elozo_uzemeltetok',
    'label' => 'Előző üzemeltetők',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-jogositas_zenegep-field_eszamla'
  $field_instances['node-jogositas_zenegep-field_eszamla'] = array(
    'bundle' => 'jogositas_zenegep',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Felhívjuk figyelmét, hogy az elektronikus számla az  „XSD Informatikai Zrt. – e-szamla.hu”  e-mail címről fog érkezni (nem a MAHASZ-tól). 
Az e-mail tartalmazza azt a linket, melyen a számla 30 napon keresztül megtekinthető, de az e-szamla.hu oldalon korlátlan ideig elérhető.
FIGYELEM! 1 db e-mail címhez csak 1 db felhasználó (vevő név) rendelhető, mert a rendszer nem enged azonos e-mail címet rögzíteni több partnernél.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_eszamla',
    'label' => 'Hozzájárulok, hogy részemre elektronikus számlát küldjenek',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-jogositas_zenegep-field_feltetelek'
  $field_instances['node-jogositas_zenegep-field_feltetelek'] = array(
    'bundle' => 'jogositas_zenegep',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A jelen pont elfogadásával büntetőjogi felelősségem tudatában kijelentem, hogy a jelen űrlapot, mint jognyilatkozatot az űrlapon általam megjelölt felhasználó tettem, vagy a jognyilatkozatban megjelölt felhasználó által a jelen űrlapba foglalt jognyilatkozatok megtételére jogosult (meghatalmazott) vagyok. Tudomásul veszem továbbá, hogy amennyiben a jelen űrlapban foglalt adatokban változás áll be, azt a változást követően legfeljebb 3 munkanappal, a www.mahaszjogdij.hu weboldal űrlapjának módosításával vagyok köteles bejelenteni.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 32,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_feltetelek',
    'label' => 'Felhasználási feltételek',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-jogositas_zenegep-field_gyszam'
  $field_instances['node-jogositas_zenegep-field_gyszam'] = array(
    'bundle' => 'jogositas_zenegep',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 26,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_gyszam',
    'label' => 'Gyári szám',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-jogositas_zenegep-field_helyseg'
  $field_instances['node-jogositas_zenegep-field_helyseg'] = array(
    'bundle' => 'jogositas_zenegep',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_helyseg',
    'label' => 'Település',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-jogositas_zenegep-field_helyszin_nev'
  $field_instances['node-jogositas_zenegep-field_helyszin_nev'] = array(
    'bundle' => 'jogositas_zenegep',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_helyszin_nev',
    'label' => 'Üzemeltetési hely neve',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-jogositas_zenegep-field_iranyitoszam'
  $field_instances['node-jogositas_zenegep-field_iranyitoszam'] = array(
    'bundle' => 'jogositas_zenegep',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_iranyitoszam',
    'label' => 'Irányítószám',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-jogositas_zenegep-field_jogdijertesito'
  $field_instances['node-jogositas_zenegep-field_jogdijertesito'] = array(
    'bundle' => 'jogositas_zenegep',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_jogdijertesito',
    'label' => 'Fizetési értesítő száma',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-jogositas_zenegep-field_jogositas'
  $field_instances['node-jogositas_zenegep-field_jogositas'] = array(
    'bundle' => 'jogositas_zenegep',
    'default_value' => array(
      0 => array(
        'value' => 'nincs',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_jogositas',
    'label' => 'Jogdíj típus 2013',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-jogositas_zenegep-field_jogositas_2014'
  $field_instances['node-jogositas_zenegep-field_jogositas_2014'] = array(
    'bundle' => 'jogositas_zenegep',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 25,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_jogositas_2014',
    'label' => 'Jogdíj típus 2014',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-jogositas_zenegep-field_jogosult_nev'
  $field_instances['node-jogositas_zenegep-field_jogosult_nev'] = array(
    'bundle' => 'jogositas_zenegep',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:field_szamitott_nev]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 23,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_jogosult_nev',
    'label' => 'Jogosítást kérő neve',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-jogositas_zenegep-field_raktar_feltetelek'
  $field_instances['node-jogositas_zenegep-field_raktar_feltetelek'] = array(
    'bundle' => 'jogositas_zenegep',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A jelen pont elfogadásával büntetőjogi felelősségem tudatában kijelentem, hogy a zenegép nem üzemel nyilvános helyen. <br />
Tudomásul veszem továbbá, hogy amennyiben a zenegépet nyilvános helyen kívánom üzemeltetni, azt az üzemelés megkezdését megelőzően legalább 3 munkanappal, a www.mahaszjogdij.hu weboldal űrlapjának módosításával vagyok köteles bejelenteni.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 30,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_raktar_feltetelek',
    'label' => 'Feltételek elfogadása',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-jogositas_zenegep-field_raktar_ido'
  $field_instances['node-jogositas_zenegep-field_raktar_ido'] = array(
    'bundle' => 'jogositas_zenegep',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 31,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_raktar_ido',
    'label' => 'Raktárba helyezés ideje',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-1:+1',
      ),
      'type' => 'date_popup',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-jogositas_zenegep-field_raktarban'
  $field_instances['node-jogositas_zenegep-field_raktarban'] = array(
    'bundle' => 'jogositas_zenegep',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Raktárba helyezett zenegépek után nem kell kifizetni az átalánydíjat a raktárba helyezett időszakra.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 29,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_raktarban',
    'label' => 'A zenegép jelenleg raktárban van',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-jogositas_zenegep-field_statusz'
  $field_instances['node-jogositas_zenegep-field_statusz'] = array(
    'bundle' => 'jogositas_zenegep',
    'default_value' => array(
      0 => array(
        'value' => 'Jóváhagyásra vár',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_statusz',
    'label' => 'Státusz',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-jogositas_zenegep-field_szamla_sorszam'
  $field_instances['node-jogositas_zenegep-field_szamla_sorszam'] = array(
    'bundle' => 'jogositas_zenegep',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_szamla_sorszam',
    'label' => 'Számla sorszám',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-jogositas_zenegep-field_tobbszorozesenkenti_jgsts'
  $field_instances['node-jogositas_zenegep-field_tobbszorozesenkenti_jgsts'] = array(
    'bundle' => 'jogositas_zenegep',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tobbszorozesenkenti_jgsts',
    'label' => 'Többszörözésenkénti jogosítás',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'field_extrawidgets',
      'settings' => array(
        'display_empty' => 0,
        'formatter' => 'entityreference_label',
        'formatter_settings' => array(
          'link' => 1,
        ),
      ),
      'type' => 'field_extrawidgets_read_only',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-jogositas_zenegep-field_tobbszorozesi_lista'
  $field_instances['node-jogositas_zenegep-field_tobbszorozesi_lista'] = array(
    'bundle' => 'jogositas_zenegep',
    'deleted' => 0,
    'description' => '<strong>Feltöltés, legkésőbb 2014.07.31-ig és 2015.01.31-ig.</strong><br />
Az üres sablon és egy minta fájl letöltése: <ul>
<li>Tracklista minta: <a href="/files/public/minta/tracklista_minta_zenegep.xls">XLS formátum</a>, <a href="/files/public/minta/tracklista_minta_zenegep.xlsx">XLSX formátum</a></li>
<li>Üres, kitöltendő sablon: <a href="/files/public/minta/tracklista_sablon_zenegep.xls">XLS formátum</a>, <a href="/files/public/minta/tracklista_sablon_zenegep.xlsx">XLSX formátum</a></li>
</ul>',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 28,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tobbszorozesi_lista',
    'label' => 'Többszörözési lista',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'tracklista_ZG/[current-user:uid]',
      'file_extensions' => 'xls xlsx',
      'max_filesize' => '30M',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'bar',
      ),
      'type' => 'file_generic',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-jogositas_zenegep-field_ujgep'
  $field_instances['node-jogositas_zenegep-field_ujgep'] = array(
    'bundle' => 'jogositas_zenegep',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '2013. december 31. után üzembe helyezett zenegépek esetében az üzembe helyezéskor a felhasználó egyszeri, 49.764 Ft +áfa, bruttó 63.200 Ft összeget köteles megfizetni üzembe helyezési díjként.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 27,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ujgep',
    'label' => 'Új gép',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-jogositas_zenegep-field_utca'
  $field_instances['node-jogositas_zenegep-field_utca'] = array(
    'bundle' => 'jogositas_zenegep',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_utca',
    'label' => 'Utca, házszám',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-jogositas_zenegep-field_zg_buntetogy'
  $field_instances['node-jogositas_zenegep-field_zg_buntetogy'] = array(
    'bundle' => 'jogositas_zenegep',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_zg_buntetogy',
    'label' => 'ZG büntetőügy',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-tobbszorozesenkenti_jogositas-field_belso_megjegyzes'
  $field_instances['node-tobbszorozesenkenti_jogositas-field_belso_megjegyzes'] = array(
    'bundle' => 'tobbszorozesenkenti_jogositas',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_belso_megjegyzes',
    'label' => 'Megjegyzés',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-tobbszorozesenkenti_jogositas-field_fizetendo_jogdij'
  $field_instances['node-tobbszorozesenkenti_jogositas-field_fizetendo_jogdij'] = array(
    'bundle' => 'tobbszorozesenkenti_jogositas',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'computed_field',
        'settings' => array(),
        'type' => 'computed_field_plain',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fizetendo_jogdij',
    'label' => 'Fizetendő jogdíj mértéke',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'field_extrawidgets',
      'settings' => array(
        'display_empty' => 0,
        'formatter' => 'computed_field_plain',
        'formatter_settings' => array(),
      ),
      'type' => 'field_extrawidgets_read_only',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-tobbszorozesenkenti_jogositas-field_hangfelvetel_db'
  $field_instances['node-tobbszorozesenkenti_jogositas-field_hangfelvetel_db'] = array(
    'bundle' => 'tobbszorozesenkenti_jogositas',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Jogdíj mértéke: hangfelvételenként 177 Ft + áfa (bruttó 225 Ft)',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_hangfelvetel_db',
    'label' => 'Többszörözni kívánt hangfelvételek száma',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => 1,
      'prefix' => '',
      'suffix' => ' db hangfelvétel',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-tobbszorozesenkenti_jogositas-field_jogdijertesito'
  $field_instances['node-tobbszorozesenkenti_jogositas-field_jogdijertesito'] = array(
    'bundle' => 'tobbszorozesenkenti_jogositas',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_jogdijertesito',
    'label' => 'Jogdíjfizetési értesítő száma',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-tobbszorozesenkenti_jogositas-field_kapcsolt_zenegep'
  $field_instances['node-tobbszorozesenkenti_jogositas-field_kapcsolt_zenegep'] = array(
    'bundle' => 'tobbszorozesenkenti_jogositas',
    'default_value' => NULL,
    'default_value_function' => 'entityreference_prepopulate_field_default_value',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_kapcsolt_zenegep',
    'label' => 'Kapcsolt zenegép',
    'required' => 1,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'action' => 'hide',
          'action_on_edit' => 1,
          'fallback' => 'form_error',
          'og_context' => 0,
          'skip_perm' => 0,
          'status' => 1,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-tobbszorozesenkenti_jogositas-field_tobbszorozesi_lista'
  $field_instances['node-tobbszorozesenkenti_jogositas-field_tobbszorozesi_lista'] = array(
    'bundle' => 'tobbszorozesenkenti_jogositas',
    'deleted' => 0,
    'description' => 'Az üres sablon és egy minta fájl letöltése: <ul>
<li>Tracklista minta: <a href="/files/public/minta/tracklista_minta.xls">XLS formátum</a>, <a href="/files/public/minta/tracklista_minta.xlsx">XLSX formátum</a></li>
<li>Üres, kitöltendő sablon: <a href="/files/public/minta/tracklista_sablon.xls">XLS formátum</a>, <a href="/files/public/minta/tracklista_sablon.xlsx">XLSX formátum</a></li>
</ul>
<p>A feltöltött jogosítási kérelmét adminisztrátorunk elbírálja, az elfogadásról vagy a visszautasításról e-mail-ben kap üzenetet.</p>
<p>Ha a többszörözési listáját elfogadjuk, akkor e-mail-ben jogdíjfizetési értesítőt küldünk a regisztrációkor megadott e-mail címére.<br>
A jogdíjfizetési értesítő tartalmazza a fizetendő jogdíj mértékét.<br>
Jogdíj befizetésekor, kérem, hogy hivatkozzon a jogdíjfizetési értesítő számára.</p>',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tobbszorozesi_lista',
    'label' => 'Többszörözési lista',
    'required' => 1,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'tobbszorozesi_lista/[current-user:uid]',
      'file_extensions' => 'xls xlsx csv',
      'max_filesize' => '20 MB',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'bar',
      ),
      'type' => 'file_generic',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-tobbszorozesenkenti_jogositas-field_visszautasitas_indok'
  $field_instances['node-tobbszorozesenkenti_jogositas-field_visszautasitas_indok'] = array(
    'bundle' => 'tobbszorozesenkenti_jogositas',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_visszautasitas_indok',
    'label' => 'Visszautasítás indoklása ZG',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-tobbszorozesenkenti_jogositas-field_zg_tobbsz_statusz'
  $field_instances['node-tobbszorozesenkenti_jogositas-field_zg_tobbsz_statusz'] = array(
    'bundle' => 'tobbszorozesenkenti_jogositas',
    'default_value' => array(
      0 => array(
        'value' => 'feldolgozás alatt',
      ),
    ),
    'deleted' => 0,
    'description' => 'Automatizmus része, kézzel ne állítsd!<br>
(Helyette használd a visszautasít / elfogad gombokat!)',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_zg_tobbsz_statusz',
    'label' => 'Státusz',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-tobbszorozesi_lista-field_adatszolgaltatas_idoszak'
  $field_instances['node-tobbszorozesi_lista-field_adatszolgaltatas_idoszak'] = array(
    'bundle' => 'tobbszorozesi_lista',
    'default_value' => array(
      0 => array(
        'value' => '2014. II. félév',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_adatszolgaltatas_idoszak',
    'label' => 'Időszak',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-tobbszorozesi_lista-field_entity_reference'
  $field_instances['node-tobbszorozesi_lista-field_entity_reference'] = array(
    'bundle' => 'tobbszorozesi_lista',
    'default_value' => NULL,
    'default_value_function' => 'entityreference_prepopulate_field_default_value',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_entity_reference',
    'label' => 'Kapcsolódó jogosítás',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'action' => 'hide',
          'action_on_edit' => 0,
          'fallback' => 'form_error',
          'og_context' => 0,
          'skip_perm' => 0,
          'status' => 1,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-tobbszorozesi_lista-field_file_frissitve'
  $field_instances['node-tobbszorozesi_lista-field_file_frissitve'] = array(
    'bundle' => 'tobbszorozesi_lista',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_file_frissitve',
    'label' => 'Fájl frissítve',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-tobbszorozesi_lista-field_tobbszorozes_status'
  $field_instances['node-tobbszorozesi_lista-field_tobbszorozes_status'] = array(
    'bundle' => 'tobbszorozesi_lista',
    'default_value' => array(
      0 => array(
        'value' => 'feldolgozás alatt',
      ),
    ),
    'deleted' => 0,
    'description' => 'Automatizmus része, kézzel ne állítsd!<br>
(Helyette használd a visszautasít / elfogad gombokat!)',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tobbszorozes_status',
    'label' => 'Státusz',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-tobbszorozesi_lista-field_tobbszorozesi_lista'
  $field_instances['node-tobbszorozesi_lista-field_tobbszorozesi_lista'] = array(
    'bundle' => 'tobbszorozesi_lista',
    'deleted' => 0,
    'description' => '<strong>Feltöltés legkésőbb 2015.01.31-ig.</strong><br/ ><br/ >
Az üres sablon és egy minta fájl letöltése: <ul>
<li>Tracklista minta: <a href="/files/public/minta/tracklista_minta.xls">XLS formátum</a>, <a href="/files/public/minta/tracklista_minta.xlsx">XLSX formátum</a></li>
<li>Üres, kitöltendő sablon: <a href="/files/public/minta/tracklista_sablon.xls">XLS formátum</a>, <a href="/files/public/minta/tracklista_sablon.xlsx">XLSX formátum</a></li>
</ul>',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tobbszorozesi_lista',
    'label' => 'Többszörözési lista',
    'required' => 1,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'tobbszorozesi_lista/[current-user:uid]',
      'file_extensions' => 'xls xlsx csv',
      'max_filesize' => '20 MB',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'bar',
      ),
      'type' => 'file_generic',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-tobbszorozesi_lista-field_visszautasitas_indok'
  $field_instances['node-tobbszorozesi_lista-field_visszautasitas_indok'] = array(
    'bundle' => 'tobbszorozesi_lista',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Ez a szöveg kerül be az automata e-mailbe visszautasítás esetén. <br>
Sablonok: 
<ul class="indoklas-sablon">
  <li>A visszautasítás oka: a beküldött adatállomány üres.</li>
  <li>A visszautasítás oka: a beküldött adatállomány formátuma nem megfelelő.</li>
  <li>A visszautasítás oka: a beküldött adatállomány nem a sablonnak megfelelően lett kitöltve</li>
  <li>Elégtelen adatmennyiség</li>

</ul>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_visszautasitas_indok',
    'label' => 'Visszautasítás indoklása',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 110,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('01h után is nyitva tartó vendéglátóhely');
  t('2013. december 31. után üzembe helyezett zenegépek esetében az üzembe helyezéskor a felhasználó egyszeri, 49.764 Ft +áfa, bruttó 63.200 Ft összeget köteles megfizetni üzembe helyezési díjként.');
  t('<br/>
Az üres sablon és egy minta fájl letöltéséhez kattintson a fájlok nevére: <a href="/files/public/minta/tracklista_minta.xlsx">tracklista_minta.xlsx</a>, <a href="/files/public/minta/tracklista_sablon.xlsx">tracklista_sablon.xlsx</a>');
  t('<strong>Feltöltés legkésőbb 2015.01.31-ig.</strong><br/ ><br/ >
Az üres sablon és egy minta fájl letöltése: <ul>
<li>Tracklista minta: <a href="/files/public/minta/tracklista_minta.xls">XLS formátum</a>, <a href="/files/public/minta/tracklista_minta.xlsx">XLSX formátum</a></li>
<li>Üres, kitöltendő sablon: <a href="/files/public/minta/tracklista_sablon.xls">XLS formátum</a>, <a href="/files/public/minta/tracklista_sablon.xlsx">XLSX formátum</a></li>
</ul>');
  t('<strong>Feltöltés, legkésőbb 2014.07.31-ig és 2015.01.31-ig.</strong><br />
Az üres sablon és egy minta fájl letöltése: <ul>
<li>Tracklista minta: <a href="/files/public/minta/tracklista_minta_zenegep.xls">XLS formátum</a>, <a href="/files/public/minta/tracklista_minta_zenegep.xlsx">XLSX formátum</a></li>
<li>Üres, kitöltendő sablon: <a href="/files/public/minta/tracklista_sablon_zenegep.xls">XLS formátum</a>, <a href="/files/public/minta/tracklista_sablon_zenegep.xlsx">XLSX formátum</a></li>
</ul>');
  t('<strong>Feltöltés, legkésőbb 2014.07.31-ig és 2015.01.31-ig.</strong><br />
Az üres sablon és egy minta fájl letöltéséhez kattintson a fájlok nevére: <a href="/files/public/minta/tracklista_minta.xlsx">tracklista_minta.xlsx</a>, <a href="/files/public/minta/tracklista_sablon.xlsx">tracklista_sablon.xlsx</a>');
  t('A jelen pont elfogadásával büntetőjogi felelősségem tudatában kijelentem, hogy a jelen űrlapot, mint jognyilatkozatot az űrlapon általam megjelölt felhasználó tettem, vagy a jognyilatkozatban megjelölt felhasználó által a jelen űrlapba foglalt jognyilatkozatok megtételére jogosult (meghatalmazott) vagyok. Tudomásul veszem továbbá, hogy amennyiben a jelen űrlapban foglalt adatokban változás áll be, azt a változást követően legfeljebb 3 munkanappal, a www.mahaszjogdij.hu weboldal űrlapjának módosításával vagyok köteles bejelenteni.');
  t('A jelen pont elfogadásával büntetőjogi felelősségem tudatában kijelentem, hogy a zenegép nem üzemel nyilvános helyen. <br />
Tudomásul veszem továbbá, hogy amennyiben a zenegépet nyilvános helyen kívánom üzemeltetni, azt az üzemelés megkezdését megelőzően legalább 3 munkanappal, a www.mahaszjogdij.hu weboldal űrlapjának módosításával vagyok köteles bejelenteni.');
  t('A zenegép jelenleg raktárban van');
  t('Adószám');
  t('Automatizmus része, kézzel ne állítsd!<br>
(Helyette használd a visszautasít / elfogad gombokat!)');
  t('Az esetleges túlfizetéseket, erre a számlaszámra utaljuk vissza.');
  t('Az átalánydíjasról többszörözésenkénti jogdíj típusra áttérés feltételeit');
  t('Az üres sablon és egy minta fájl letöltése: <ul>
<li>Tracklista minta: <a href="/files/public/minta/tracklista_minta.xls">XLS formátum</a>, <a href="/files/public/minta/tracklista_minta.xlsx">XLSX formátum</a></li>
<li>Üres, kitöltendő sablon: <a href="/files/public/minta/tracklista_sablon.xls">XLS formátum</a>, <a href="/files/public/minta/tracklista_sablon.xlsx">XLSX formátum</a></li>
</ul>
<p>A feltöltött jogosítási kérelmét adminisztrátorunk elbírálja, az elfogadásról vagy a visszautasításról e-mail-ben kap üzenetet.</p>
<p>Ha a többszörözési listáját elfogadjuk, akkor e-mail-ben jogdíjfizetési értesítőt küldünk a regisztrációkor megadott e-mail címére.<br>
A jogdíjfizetési értesítő tartalmazza a fizetendő jogdíj mértékét.<br>
Jogdíj befizetésekor, kérem, hogy hivatkozzon a jogdíjfizetési értesítő számára.</p>');
  t('Bankszámlaszám');
  t('Beküldött adatszolgáltatások');
  t('DJ szövetség');
  t('DJ szövetség tagság');
  t('Dátum');
  t('Előző üzemeltető');
  t('Előző üzemeltetők');
  t('Ez a szöveg kerül be az automata e-mailbe visszautasítás esetén. <br>
Sablonok: 
<ul class="indoklas-sablon">
  <li>A visszautasítás oka: a beküldött adatállomány üres.</li>
  <li>A visszautasítás oka: a beküldött adatállomány formátuma nem megfelelő.</li>
  <li>A visszautasítás oka: a beküldött adatállomány nem a sablonnak megfelelően lett kitöltve</li>
  <li>Elégtelen adatmennyiség</li>

</ul>');
  t('Ezúton tájékoztatjuk, hogy az átalánydíjas rendszerből többszörözésenkénti jogosításra való áttérés esetén a felhasználó e szándékának írásbeli bejelentésével egyidejűleg ugyancsak írásban közli a közös jogkezelő szervezettel a gépének az átalánydíjra való átjelentkezésekor rögzített tartalma és a bejelentés napján fennálló tartalmi közötti eltérést. <strong>Mindazon hangfelvételek után, melyek a korábbi időpontban nem szerepeltek a zenegép tárolóján a felhasználó megfizeti a többszörözésenként 177 Ft + áfa/bruttó 225 Ft fizetendő jogdíjat.</strong>');
  t('Felhasználási feltételek');
  t('Felhasználó neve akihez a megadott dátumot megelőzően tartozott a zenegép.');
  t('Felhívjuk figyelmét, hogy az elektronikus számla az  „XSD Informatikai Zrt. – e-szamla.hu”  e-mail címről fog érkezni (nem a MAHASZ-tól). 
Az e-mail tartalmazza azt a linket, melyen a számla 30 napon keresztül megtekinthető, de az e-szamla.hu oldalon korlátlan ideig elérhető.
FIGYELEM! 1 db e-mail címhez csak 1 db felhasználó (vevő név) rendelhető, mert a rendszer nem enged azonos e-mail címet rögzíteni több partnernél.');
  t('Feltételek elfogadása');
  t('Fizetendő jogdíj mértéke');
  t('Fizetési értesítő száma');
  t('Fájl frissítve');
  t('Gyári szám');
  t('Ha egyszerre több lemezt kíván jogosítani, a hangfelvtételek listáit ugyanabban az EGY táblázatban töltse fel. Az egyes lemezekhez tartozó listák közé illesszen be egy-egy üres sort.<br />
Az üres sablon és egy minta fájl letöltéséhez kattintson a fájlok nevére: <a href="/files/public/minta/tracklista_minta.xlsx">tracklista_minta.xlsx</a>, <a href="/files/public/minta/tracklista_sablon.xlsx">tracklista_sablon.xlsx</a>');
  t('Helyszín neve');
  t('Hozzájárulok, hogy részemre elektronikus számlát küldjenek');
  t('Időszak');
  t('Irányítószám');
  t('Jogdíj mértéke: hangfelvételenként 177 Ft + áfa (bruttó 225 Ft)');
  t('Jogdíj típus 2013');
  t('Jogdíj típus 2014');
  t('Jogdíjfizetési értesítő száma');
  t('Jogosítandó helyszínek száma');
  t('Jogosítani kívánt lemezek száma');
  t('Jogosítást kérő neve');
  t('Jogosítást kérő vendéglátó-, kereskedelmi- vagy szálláshely neve');
  t('Jogosítást kérő vendéglátó-, kereskedelmi- vagy szálláshely neve ');
  t('Kapcsolt zenegép');
  t('Kapcsolódó jogosítás');
  t('Kártya kiadás dátuma');
  t('Matrica kiadás dátuma');
  t('Matrica számok');
  t('Megjegyzés');
  t('Mennyiség');
  t('Név');
  t('Raktárba helyezett zenegépek után nem kell kifizetni az átalánydíjat a raktárba helyezett időszakra.');
  t('Raktárba helyezés ideje');
  t('Rendezvény ideje (maximum 24 óra)');
  t('Státusz');
  t('Számla sorszám');
  t('Számlázás');
  t('Számlázási név');
  t('Település');
  t('Többszörözni kívánt hangfelvételek száma');
  t('Többszörözésenkénti jogosítás');
  t('Többszörözési lista');
  t('Töbszörözési lista');
  t('Utca, házszám');
  t('Visszautasítás indoklása');
  t('Visszautasítás indoklása ZG');
  t('ZG büntetőügy');
  t('Átalány éve');
  t('Átalánydíjas jogosítások automatikus nevéhez, és szűréséhez használt mező.
Alapértelmezett értéke a jogosítás létrehozásának éve, de adminisztrátor átírhatja.
Általános felhasználó nem látja, nem szerkesztheti.');
  t('Értesítő száma');
  t('Új gép');
  t('Üzemeltetési hely neve');

  return $field_instances;
}

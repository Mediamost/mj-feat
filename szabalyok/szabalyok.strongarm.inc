<?php
/**
 * @file
 * szabalyok.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function szabalyok_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rules_empty_sets';
  $strongarm->value = array(
    'field_collection_item_insert' => 0,
    'field_collection_item_update' => 1,
    'field_collection_item_presave' => 2,
    'field_collection_item_delete' => 3,
    'field_collection_item_view' => 4,
    'flag_unflagged_jovahagy' => 5,
    'relation_insert' => 6,
    'relation_update' => 7,
    'session_limit_collision' => 8,
    'session_limit_disconnect' => 9,
    'views_send_all_email_added_to_spool' => 10,
    'views_send_email_added_to_spool' => 11,
    'node_view' => 12,
    'node_delete' => 13,
    'init' => 14,
    'cron' => 15,
    'watchdog' => 16,
    'user_presave' => 17,
    'user_view' => 18,
    'user_delete' => 19,
    'user_logout' => 20,
    'comment_insert' => 21,
    'comment_update' => 22,
    'comment_presave' => 23,
    'comment_view' => 24,
    'comment_delete' => 25,
    'taxonomy_term_insert' => 26,
    'taxonomy_term_update' => 27,
    'taxonomy_term_presave' => 28,
    'taxonomy_term_delete' => 29,
    'taxonomy_vocabulary_insert' => 30,
    'taxonomy_vocabulary_update' => 31,
    'taxonomy_vocabulary_presave' => 32,
    'taxonomy_vocabulary_delete' => 33,
    'rules_forms_views_form_levelkuldes_page_form_submit' => 34,
    'rules_forms_views_form_levelkuldes_page_form_validate' => 35,
    'rules_forms_user_register_form_form_built' => 36,
    'rules_forms_user_register_form_form_submit' => 37,
    'rules_forms_user_register_form_form_validate' => 38,
    'rules_forms_jogositas_zenegep_node_form_form_submit' => 39,
    'rules_forms_jogositas_zenegep_node_form_form_validate' => 40,
    'rules_forms_jogositas_atalanydijas_hatterz_node_form_form_submit' => 41,
    'rules_forms_jogositas_atalanydijas_hatterz_node_form_form_validate' => 42,
    'rules_forms_jogositas_atalanydijas_dj_node_form_form_submit' => 43,
    'rules_forms_jogositas_atalanydijas_dj_node_form_form_validate' => 44,
  );
  $export['rules_empty_sets'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rules_forms_event_info';
  $strongarm->value = array(
    'views_form_levelkuldes_page' => array(
      'label' => 'Views form levelkuldes page',
      'elements' => array(
        'submit:actions:submit' => array(
          'type' => 'submit',
          'label' => 'Mentés',
        ),
        'fieldset:select' => array(
          'type' => 'fieldset',
          'label' => 'Műveletek',
        ),
        'submit:select:submit' => array(
          'type' => 'submit',
          'label' => 'Végrehajt',
        ),
      ),
      'path' => 'levelkuldes',
      'buttons' => FALSE,
      'validate' => array(),
      'submit' => array(),
    ),
    'user_register_form' => array(
      'label' => 'User register form',
      'elements' => array(
        'textfield:account:name' => array(
          'type' => 'textfield',
          'label' => 'Felhasználónév',
        ),
        'textfield:account:mail' => array(
          'type' => 'textfield',
          'label' => 'Email cím',
        ),
        'radios:account:status' => array(
          'type' => 'radios',
          'label' => 'Állapot',
        ),
        'radio:account:status:0' => array(
          'type' => 'radio',
          'label' => 'Zárolt',
        ),
        'radio:account:status:1' => array(
          'type' => 'radio',
          'label' => 'Aktív',
        ),
        'checkboxes:account:roles' => array(
          'type' => 'checkboxes',
          'label' => 'Szerepkörök',
        ),
        'checkbox:account:roles:2' => array(
          'type' => 'checkbox',
          'label' => 'Azonosított felhasználó',
        ),
        'checkbox:account:roles:3' => array(
          'type' => 'checkbox',
          'label' => 'Rendszergazda',
        ),
        'checkbox:account:roles:4' => array(
          'type' => 'checkbox',
          'label' => 'DJ',
        ),
        'checkbox:account:roles:5' => array(
          'type' => 'checkbox',
          'label' => 'Háttérzene szolgáltató',
        ),
        'checkbox:account:roles:6' => array(
          'type' => 'checkbox',
          'label' => 'Zenegép üzemeltető',
        ),
        'checkbox:account:notify' => array(
          'type' => 'checkbox',
          'label' => 'Új felhasználó értesítése emailben',
        ),
        'fieldset:signature_settings' => array(
          'type' => 'fieldset',
          'label' => 'Aláírás beállítása',
        ),
        'text_format:signature_settings:signature' => array(
          'type' => 'text_format',
          'label' => 'Aláírás',
        ),
        'textarea:signature_settings:signature:value' => array(
          'type' => 'textarea',
          'label' => 'Aláírás',
        ),
        'select:signature_settings:signature:format:format' => array(
          'type' => 'select',
          'label' => 'Szövegformátum',
        ),
        'fieldset:picture' => array(
          'type' => 'fieldset',
          'label' => 'Kép',
        ),
        'checkbox:picture:picture_delete' => array(
          'type' => 'checkbox',
          'label' => 'Kép törlése',
        ),
        'file:picture:picture_upload' => array(
          'type' => 'file',
          'label' => 'Kép feltöltése',
        ),
        'checkboxes:field_jogi_csoport:und' => array(
          'type' => 'checkboxes',
          'label' => 'Mely jogdíjakhoz szeretne regisztrálni?',
        ),
        'checkbox:field_jogi_csoport:und:dj' => array(
          'type' => 'checkbox',
          'label' => 'DJ',
        ),
        'checkbox:field_jogi_csoport:und:zenegep' => array(
          'type' => 'checkbox',
          'label' => 'Zenegép üzemeltető',
        ),
        'checkbox:field_jogi_csoport:und:hatterzene' => array(
          'type' => 'checkbox',
          'label' => 'Háttérzene szolgáltató (disco is)',
        ),
        'textfield:field_teljes_nev:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Magánszemély neve',
        ),
        'textfield:field_cegnev:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Cég neve',
        ),
        'textfield:field_adoszam:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Adószám',
        ),
        'textfield:field_weboldal:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Weboldal',
        ),
        'select:field_orszag:und' => array(
          'type' => 'select',
          'label' => 'Ország',
        ),
        'textfield:field_iranyitoszam:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Irányítószám',
        ),
        'textfield:field_varos:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Város',
        ),
        'textfield:field_utca:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Utca, házszám',
        ),
        'textfield:field_bankszamla:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Bankszámlaszám',
        ),
        'textfield:field_posta_iranyitoszam:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Irányítószám',
        ),
        'textfield:field_posta_varos:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Város',
        ),
        'textfield:field_posta_utca:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Utca, házszám',
        ),
        'select:field_posta_orszag:und' => array(
          'type' => 'select',
          'label' => 'Ország',
        ),
        'textfield:field_telefon:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Telefonszám',
        ),
        'select:field_regisztralo_szemelye:und' => array(
          'type' => 'select',
          'label' => 'Regisztráló személye',
        ),
        'textfield:field_kapcsolattarto_neve:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Kapcsolattartó neve',
        ),
        'textfield:field_kapcsolattart_telefon:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Kapcsolattartó telefonszáma',
        ),
        'textfield:field_kapcsolattarto_email:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Kapcsolattartó e-mail címe',
        ),
        'textfield:field_penzugyi_kapcsolat_neve:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Pénzügyi kapcsolattartó neve',
        ),
        'textfield:field_penzugyi_kapcsolat_tel:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Pénzügyi kapcsolattartó telefonszáma',
        ),
        'textfield:field_penzugyi_kapcsolat_email:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Pénzügyi kapcsolattartó e-mail címe',
        ),
        'date_combo:field_szuletesi_ido:und:0' => array(
          'type' => 'date_combo',
          'label' => 'Születési idő',
        ),
        'checkbox:field_szuletesi_ido:und:0:show_todate' => array(
          'type' => 'checkbox',
          'label' => 'Befejező dátum mutatása',
        ),
        'textfield:field_anyja_neve:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Anyja neve',
        ),
        'textarea:field_indoklal:und:0:value' => array(
          'type' => 'textarea',
          'label' => 'Indoklás',
        ),
        'checkboxes:field_megegyezik:und' => array(
          'type' => 'checkboxes',
          'label' => 'Megegyezik a fenti címmel',
        ),
        'checkbox:field_megegyezik:und:Másolás' => array(
          'type' => 'checkbox',
          'label' => 'Másolás',
        ),
        'submit:actions:submit' => array(
          'type' => 'submit',
          'label' => 'Regisztráció',
        ),
        'fieldset:legal' => array(
          'type' => 'fieldset',
          'label' => 'Az oldal felhasználási feltételei',
        ),
        'checkbox:legal:legal_accept' => array(
          'type' => 'checkbox',
          'label' => 'A <a href="/legal">felhasználási feltételeket</a> <strong>elfogadom</strong>',
        ),
      ),
      'path' => 'user/register',
      'buttons' => TRUE,
      'validate' => array(),
      'submit' => array(),
    ),
    'jogositas_zenegep_node_form' => array(
      'label' => 'Jogositas zenegep node form',
      'elements' => array(
        'value:title' => array(
          'type' => 'value',
          'label' => 'Cím',
        ),
        'fieldset:revision_information' => array(
          'type' => 'fieldset',
          'label' => 'Változatinformáció',
        ),
        'checkbox:revision_information:revision' => array(
          'type' => 'checkbox',
          'label' => 'Új változat készítése',
        ),
        'textarea:revision_information:log' => array(
          'type' => 'textarea',
          'label' => 'Szerkesztés oka/tartalma',
        ),
        'fieldset:author' => array(
          'type' => 'fieldset',
          'label' => 'Szerzői információk',
        ),
        'textfield:author:name' => array(
          'type' => 'textfield',
          'label' => 'Szerző',
        ),
        'textfield:author:date' => array(
          'type' => 'textfield',
          'label' => 'Beküldés ideje',
        ),
        'fieldset:options' => array(
          'type' => 'fieldset',
          'label' => 'Közzétételi beállítások',
        ),
        'checkbox:options:status' => array(
          'type' => 'checkbox',
          'label' => 'Közzétéve',
        ),
        'checkbox:options:promote' => array(
          'type' => 'checkbox',
          'label' => 'Címlapra helyezve',
        ),
        'checkbox:options:sticky' => array(
          'type' => 'checkbox',
          'label' => 'Kiemelt, az oldal tetejére',
        ),
        'submit:actions:submit' => array(
          'type' => 'submit',
          'label' => 'Mentés',
        ),
        'submit:actions:preview' => array(
          'type' => 'submit',
          'label' => 'Adatok ellenőrzése',
        ),
        'select:field_jogositas:und' => array(
          'type' => 'select',
          'label' => 'Jogdíj típus 2013',
        ),
        'textfield:field_gyszam:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Gyári szám',
        ),
        'checkboxes:field_ujgep:und' => array(
          'type' => 'checkboxes',
          'label' => 'Új gép',
        ),
        'checkbox:field_ujgep:und:uj' => array(
          'type' => 'checkbox',
          'label' => 'Új gép',
        ),
        'managed_file:field_tobbszorozesi_lista:und:0' => array(
          'type' => 'managed_file',
          'label' => 'Többszörözési lista',
        ),
        'submit:field_tobbszorozesi_lista:und:0:upload_button' => array(
          'type' => 'submit',
          'label' => 'Feltöltés',
        ),
        'submit:field_tobbszorozesi_lista:und:0:remove_button' => array(
          'type' => 'submit',
          'label' => 'Eltávolítás',
        ),
        'file:field_tobbszorozesi_lista:und:0:upload' => array(
          'type' => 'file',
          'label' => 'Fájl választás',
        ),
        'checkboxes:field_raktarban:und' => array(
          'type' => 'checkboxes',
          'label' => 'A zenegép jelenleg raktárban van',
        ),
        'checkbox:field_raktarban:und:Igen' => array(
          'type' => 'checkbox',
          'label' => 'Igen',
        ),
        'checkboxes:field_feltetelek:und' => array(
          'type' => 'checkboxes',
          'label' => 'Felhasználási feltételek',
        ),
        'checkbox:field_feltetelek:und:elfogadom' => array(
          'type' => 'checkbox',
          'label' => 'Az alábbi felhasználási feltételeket elfogadom',
        ),
        'date_combo:field_raktar_ido:und:0' => array(
          'type' => 'date_combo',
          'label' => 'Raktárba helyezés ideje',
        ),
        'checkbox:field_raktar_ido:und:0:show_todate' => array(
          'type' => 'checkbox',
          'label' => 'Befejező dátum mutatása',
        ),
        'textfield:field_raktar_ido:und:0:value:date' => array(
          'type' => 'textfield',
          'label' => 'Dátum',
        ),
        'textfield:field_helyszin_nev:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Üzemeltetési hely neve',
        ),
        'textfield:field_iranyitoszam:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Irányítószám',
        ),
        'textfield:field_helyseg:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Település',
        ),
        'textfield:field_utca:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Utca, házszám',
        ),
        'radios:field_eszamla:und' => array(
          'type' => 'radios',
          'label' => 'Hozzájárulok, hogy részemre elektronikus számlát küldjenek',
        ),
        'radio:field_eszamla:und:Igen' => array(
          'type' => 'radio',
          'label' => 'Igen',
        ),
        'radio:field_eszamla:und:Nem' => array(
          'type' => 'radio',
          'label' => 'Nem',
        ),
        'checkboxes:field_raktar_feltetelek:und' => array(
          'type' => 'checkboxes',
          'label' => 'Feltételek elfogadása',
        ),
        'checkbox:field_raktar_feltetelek:und:Elfogadom' => array(
          'type' => 'checkbox',
          'label' => 'Elfogadom',
        ),
        'textfield:field_jogosult_nev:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Jogosítást kérő neve',
        ),
        'select:field_statusz:und' => array(
          'type' => 'select',
          'label' => 'Státusz',
        ),
        'textfield:field_szamla_sorszam:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Számla sorszám',
        ),
        'textfield:field_jogdijertesito:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Fizetési értesítő száma',
        ),
        'textarea:field_zg_buntetogy:und:0:value' => array(
          'type' => 'textarea',
          'label' => 'ZG büntetőügy',
        ),
        'select:field_collection_szamlazas:und:0:field_idoszak:und' => array(
          'type' => 'select',
          'label' => 'Időszak',
        ),
        'textfield:field_collection_szamlazas:und:0:field_jogdijertesito:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Értesítő száma',
        ),
        'textfield:field_collection_szamlazas:und:0:field_szamla_sorszam:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Számla sorszám',
        ),
        'submit:field_collection_szamlazas:und:0:remove_button' => array(
          'type' => 'submit',
          'label' => 'Eltávolítás',
        ),
        'select:field_collection_szamlazas:und:0:_weight' => array(
          'type' => 'select',
          'label' => '1. sor súlya',
        ),
        'submit:field_collection_szamlazas:und:add_more' => array(
          'type' => 'submit',
          'label' => 'Újabb elem hozzáadása',
        ),
        'date_combo:field_elozo_uzemeltetok:und:0:field_uzemelteto_datum:und:0' => array(
          'type' => 'date_combo',
          'label' => 'Dátum',
        ),
        'checkbox:field_elozo_uzemeltetok:und:0:field_uzemelteto_datum:und:0:show_todate' => array(
          'type' => 'checkbox',
          'label' => 'Befejező dátum mutatása',
        ),
        'textfield:field_elozo_uzemeltetok:und:0:field_uzemelteto_datum:und:0:value:date' => array(
          'type' => 'textfield',
          'label' => 'Dátum',
        ),
        'textfield:field_elozo_uzemeltetok:und:0:field_elozo_uzemelteto:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Előző üzemeltető',
        ),
        'submit:field_elozo_uzemeltetok:und:0:remove_button' => array(
          'type' => 'submit',
          'label' => 'Eltávolítás',
        ),
        'select:field_elozo_uzemeltetok:und:0:_weight' => array(
          'type' => 'select',
          'label' => '1. sor súlya',
        ),
        'submit:field_elozo_uzemeltetok:und:add_more' => array(
          'type' => 'submit',
          'label' => 'Újabb elem hozzáadása',
        ),
        'checkboxes:field_atalany_valtas_feltetelei:und' => array(
          'type' => 'checkboxes',
          'label' => 'Az átalánydíjasról többszörözésenkénti jogdíj típusra áttérés feltételeit',
        ),
        'checkbox:field_atalany_valtas_feltetelei:und:Elfogadom' => array(
          'type' => 'checkbox',
          'label' => 'Elfogadom',
        ),
        'select:field_jogositas_2014:und' => array(
          'type' => 'select',
          'label' => 'Jogdíj típus 2014',
        ),
        'textarea:field_belso_megjegyzes:und:0:value' => array(
          'type' => 'textarea',
          'label' => 'Megjegyzés',
        ),
        'select:field_jogositas_2015:und' => array(
          'type' => 'select',
          'label' => 'Jogdíj típus 2015',
        ),
        'fieldset:comment_settings' => array(
          'type' => 'fieldset',
          'label' => 'Hozzászólás-beküldési beállítások',
        ),
        'radios:comment_settings:comment' => array(
          'type' => 'radios',
          'label' => 'Hozzászólások',
        ),
        'radio:comment_settings:comment:2' => array(
          'type' => 'radio',
          'label' => 'Nyitott',
        ),
        'radio:comment_settings:comment:1' => array(
          'type' => 'radio',
          'label' => 'Lezárt',
        ),
        'radio:comment_settings:comment:0' => array(
          'type' => 'radio',
          'label' => 'Rejtett',
        ),
        'fieldset:path' => array(
          'type' => 'fieldset',
          'label' => 'Útvonal beállításai',
        ),
        'textfield:path:alias' => array(
          'type' => 'textfield',
          'label' => 'Webcímálnév',
        ),
        'checkbox:path:pathauto' => array(
          'type' => 'checkbox',
          'label' => 'Automatikusan hoz létre webcímálneveket',
        ),
      ),
      'path' => 'node/5765/edit',
      'buttons' => FALSE,
      'validate' => array(),
      'submit' => array(),
      'reset' => FALSE,
    ),
    'jogositas_atalanydijas_hatterz_node_form' => array(
      'label' => 'Jogositas atalanydijas hatterz node form',
      'elements' => array(
        'value:title' => array(
          'type' => 'value',
          'label' => 'Cím',
        ),
        'fieldset:revision_information' => array(
          'type' => 'fieldset',
          'label' => 'Változatinformáció',
        ),
        'checkbox:revision_information:revision' => array(
          'type' => 'checkbox',
          'label' => 'Új változat készítése',
        ),
        'textarea:revision_information:log' => array(
          'type' => 'textarea',
          'label' => 'Szerkesztés oka/tartalma',
        ),
        'fieldset:author' => array(
          'type' => 'fieldset',
          'label' => 'Szerzői információk',
        ),
        'textfield:author:name' => array(
          'type' => 'textfield',
          'label' => 'Szerző',
        ),
        'textfield:author:date' => array(
          'type' => 'textfield',
          'label' => 'Beküldés ideje',
        ),
        'fieldset:options' => array(
          'type' => 'fieldset',
          'label' => 'Közzétételi beállítások',
        ),
        'checkbox:options:status' => array(
          'type' => 'checkbox',
          'label' => 'Közzétéve',
        ),
        'checkbox:options:promote' => array(
          'type' => 'checkbox',
          'label' => 'Címlapra helyezve',
        ),
        'checkbox:options:sticky' => array(
          'type' => 'checkbox',
          'label' => 'Kiemelt, az oldal tetejére',
        ),
        'submit:actions:submit' => array(
          'type' => 'submit',
          'label' => 'Mentés',
        ),
        'submit:actions:preview' => array(
          'type' => 'submit',
          'label' => 'Adatok ellenőrzése',
        ),
        'select:field_statusz:und' => array(
          'type' => 'select',
          'label' => 'Státusz',
        ),
        'textfield:field_szamla_nev:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Számlázási név',
        ),
        'textfield:field_szamla_helyiseg:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Település',
        ),
        'textfield:field_szamla_iranyitoszam:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Irányítószám',
        ),
        'textfield:field_szamla_utca:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Utca, házszám',
        ),
        'textfield:field_bankszamla:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Bankszámlaszám',
        ),
        'radios:field_eszamla:und' => array(
          'type' => 'radios',
          'label' => 'Hozzájárulok, hogy részemre elektronikus számlát küldjenek',
        ),
        'radio:field_eszamla:und:Igen' => array(
          'type' => 'radio',
          'label' => 'Igen',
        ),
        'radio:field_eszamla:und:Nem' => array(
          'type' => 'radio',
          'label' => 'Nem',
        ),
        'textfield:field_posta_nev:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Név',
        ),
        'textfield:field_posta_varos:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Település',
        ),
        'textfield:field_posta_iranyitoszam:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Irányítószám',
        ),
        'textfield:field_posta_utca:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Utca, házszám',
        ),
        'textfield:field_jogosult_nev:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Jogosítást kérő neve',
        ),
        'textfield:field_helyszin_nev:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Jogosítást kérő vendéglátó-, kereskedelmi- vagy szálláshely neve ',
        ),
        'textfield:field_helyseg:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Település',
        ),
        'textfield:field_iranyitoszam:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Irányítószám',
        ),
        'textfield:field_utca:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Utca, házszám',
        ),
        'radios:field_01h_utan_nyitva:und' => array(
          'type' => 'radios',
          'label' => '01h után is nyitva tartó vendéglátóhely',
        ),
        'radio:field_01h_utan_nyitva:und:Igen' => array(
          'type' => 'radio',
          'label' => 'Igen',
        ),
        'radio:field_01h_utan_nyitva:und:Nem' => array(
          'type' => 'radio',
          'label' => 'Nem',
        ),
        'checkboxes:field_feltetelek:und' => array(
          'type' => 'checkboxes',
          'label' => 'Felhasználási feltételek',
        ),
        'checkbox:field_feltetelek:und:elfogadom' => array(
          'type' => 'checkbox',
          'label' => 'Az alábbi felhasználási feltételeket elfogadom',
        ),
        'textfield:field_helyszinek_szama:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Jogosítandó helyszínek száma',
        ),
        'textfield:field_szamla_sorszam:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Számla sorszám',
        ),
        'textfield:field_adoszam:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Adószám',
        ),
        'date_combo:field_kartya_kiadva:und:0' => array(
          'type' => 'date_combo',
          'label' => 'Kártya kiadás dátuma',
        ),
        'checkbox:field_kartya_kiadva:und:0:show_todate' => array(
          'type' => 'checkbox',
          'label' => 'Befejező dátum mutatása',
        ),
        'textfield:field_kartya_kiadva:und:0:value:date' => array(
          'type' => 'textfield',
          'label' => 'Dátum',
        ),
        'textarea:field_matrica_szamok:und:0:value' => array(
          'type' => 'textarea',
          'label' => 'Matrica számok',
        ),
        'textarea:field_belso_megjegyzes:und:0:value' => array(
          'type' => 'textarea',
          'label' => 'Megjegyzés',
        ),
        'textfield:field_atalanyeve:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Átalány éve',
        ),
        'fieldset:comment_settings' => array(
          'type' => 'fieldset',
          'label' => 'Hozzászólás-beküldési beállítások',
        ),
        'radios:comment_settings:comment' => array(
          'type' => 'radios',
          'label' => 'Hozzászólások',
        ),
        'radio:comment_settings:comment:2' => array(
          'type' => 'radio',
          'label' => 'Nyitott',
        ),
        'radio:comment_settings:comment:1' => array(
          'type' => 'radio',
          'label' => 'Lezárt',
        ),
        'radio:comment_settings:comment:0' => array(
          'type' => 'radio',
          'label' => 'Rejtett',
        ),
        'fieldset:path' => array(
          'type' => 'fieldset',
          'label' => 'Útvonal beállításai',
        ),
        'textfield:path:alias' => array(
          'type' => 'textfield',
          'label' => 'Webcímálnév',
        ),
        'checkbox:path:pathauto' => array(
          'type' => 'checkbox',
          'label' => 'Automatikusan hoz létre webcímálneveket',
        ),
      ),
      'path' => 'node/add/jogositas-atalanydijas-hatterz',
      'buttons' => FALSE,
      'validate' => array(),
      'submit' => array(),
    ),
    'jogositas_atalanydijas_dj_node_form' => array(
      'label' => 'Jogositas atalanydijas dj node form',
      'elements' => array(
        'value:title' => array(
          'type' => 'value',
          'label' => 'Cím',
        ),
        'fieldset:revision_information' => array(
          'type' => 'fieldset',
          'label' => 'Változatinformáció',
        ),
        'checkbox:revision_information:revision' => array(
          'type' => 'checkbox',
          'label' => 'Új változat készítése',
        ),
        'textarea:revision_information:log' => array(
          'type' => 'textarea',
          'label' => 'Szerkesztés oka/tartalma',
        ),
        'fieldset:author' => array(
          'type' => 'fieldset',
          'label' => 'Szerzői információk',
        ),
        'textfield:author:name' => array(
          'type' => 'textfield',
          'label' => 'Szerző',
        ),
        'textfield:author:date' => array(
          'type' => 'textfield',
          'label' => 'Beküldés ideje',
        ),
        'fieldset:options' => array(
          'type' => 'fieldset',
          'label' => 'Közzétételi beállítások',
        ),
        'checkbox:options:status' => array(
          'type' => 'checkbox',
          'label' => 'Közzétéve',
        ),
        'checkbox:options:promote' => array(
          'type' => 'checkbox',
          'label' => 'Címlapra helyezve',
        ),
        'checkbox:options:sticky' => array(
          'type' => 'checkbox',
          'label' => 'Kiemelt, az oldal tetejére',
        ),
        'submit:actions:submit' => array(
          'type' => 'submit',
          'label' => 'Mentés',
        ),
        'submit:actions:preview' => array(
          'type' => 'submit',
          'label' => 'Adatok ellenőrzése',
        ),
        'select:field_statusz:und' => array(
          'type' => 'select',
          'label' => 'Státusz',
        ),
        'textfield:field_szamla_nev:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Számlázási név',
        ),
        'textfield:field_szamla_helyiseg:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Település',
        ),
        'textfield:field_szamla_iranyitoszam:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Irányítószám',
        ),
        'textfield:field_szamla_utca:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Utca, házszám',
        ),
        'textfield:field_posta_nev:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Név',
        ),
        'textfield:field_posta_varos:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Település',
        ),
        'textfield:field_posta_iranyitoszam:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Irányítószám',
        ),
        'textfield:field_posta_utca:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Utca, házszám',
        ),
        'radios:field_eszamla:und' => array(
          'type' => 'radios',
          'label' => 'Hozzájárulok, hogy részemre elektronikus számlát küldjenek',
        ),
        'radio:field_eszamla:und:Igen' => array(
          'type' => 'radio',
          'label' => 'Igen',
        ),
        'radio:field_eszamla:und:Nem' => array(
          'type' => 'radio',
          'label' => 'Nem',
        ),
        'textfield:field_bankszamla:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Bankszámlaszám',
        ),
        'textfield:field_jogosult_nev:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Jogosítást kérő neve',
        ),
        'textfield:field_szamla_sorszam:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Számla sorszám',
        ),
        'textarea:field_matrica_szamok:und:0:value' => array(
          'type' => 'textarea',
          'label' => 'Matrica számok',
        ),
        'date_combo:field_kartya_kiadva:und:0' => array(
          'type' => 'date_combo',
          'label' => 'Kártya kiadás dátuma',
        ),
        'checkbox:field_kartya_kiadva:und:0:show_todate' => array(
          'type' => 'checkbox',
          'label' => 'Befejező dátum mutatása',
        ),
        'textfield:field_kartya_kiadva:und:0:value:date' => array(
          'type' => 'textfield',
          'label' => 'Dátum',
        ),
        'checkboxes:field_feltetelek:und' => array(
          'type' => 'checkboxes',
          'label' => 'Felhasználási feltételek',
        ),
        'checkbox:field_feltetelek:und:elfogadom' => array(
          'type' => 'checkbox',
          'label' => 'Az alábbi felhasználási feltételeket elfogadom',
        ),
        'textfield:field_adoszam:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Adószám',
        ),
        'checkboxes:field_dj_szovetseg:und' => array(
          'type' => 'checkboxes',
          'label' => 'DJ szövetség',
        ),
        'checkbox:field_dj_szovetseg:und:Tag' => array(
          'type' => 'checkbox',
          'label' => 'Rendelkezem érvényes DJ szövetség tagsággal, a jogosításnál szeretném a tagok számára járó kedvezményt igénybe venni.',
        ),
        'textarea:field_belso_megjegyzes:und:0:value' => array(
          'type' => 'textarea',
          'label' => 'Megjegyzés',
        ),
        'textfield:field_atalanyeve:und:0:value' => array(
          'type' => 'textfield',
          'label' => 'Átalány éve',
        ),
        'fieldset:comment_settings' => array(
          'type' => 'fieldset',
          'label' => 'Hozzászólás-beküldési beállítások',
        ),
        'radios:comment_settings:comment' => array(
          'type' => 'radios',
          'label' => 'Hozzászólások',
        ),
        'radio:comment_settings:comment:2' => array(
          'type' => 'radio',
          'label' => 'Nyitott',
        ),
        'radio:comment_settings:comment:1' => array(
          'type' => 'radio',
          'label' => 'Lezárt',
        ),
        'radio:comment_settings:comment:0' => array(
          'type' => 'radio',
          'label' => 'Rejtett',
        ),
        'fieldset:path' => array(
          'type' => 'fieldset',
          'label' => 'Útvonal beállításai',
        ),
        'textfield:path:alias' => array(
          'type' => 'textfield',
          'label' => 'Webcímálnév',
        ),
        'checkbox:path:pathauto' => array(
          'type' => 'checkbox',
          'label' => 'Automatikusan hoz létre webcímálneveket',
        ),
      ),
      'path' => 'node/add/jogositas-atalanydijas-dj',
      'buttons' => FALSE,
      'validate' => array(),
      'submit' => array(),
    ),
  );
  $export['rules_forms_event_info'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rules_path_cleaning_callback';
  $strongarm->value = 'rules_path_default_cleaning_method';
  $export['rules_path_cleaning_callback'] = $strongarm;

  return $export;
}

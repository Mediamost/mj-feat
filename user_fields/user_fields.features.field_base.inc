<?php
/**
 * @file
 * user_fields.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function user_fields_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_anyja_neve'
  $field_bases['field_anyja_neve'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_anyja_neve',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 100,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_belso_megjegyzes'
  $field_bases['field_belso_megjegyzes'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_belso_megjegyzes',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_buntetougy'
  $field_bases['field_buntetougy'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_buntetougy',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_ceg_jogosult'
  $field_bases['field_ceg_jogosult'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ceg_jogosult',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_cegnev'
  $field_bases['field_cegnev'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_cegnev',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_dj_szovetseg'
  $field_bases['field_dj_szovetseg'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_dj_szovetseg',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Tag' => 'Rendelkezem érvényes DJ szövetség tagsággal, a jogosításnál szeretném a tagok számára járó kedvezményt igénybe venni.',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_email'
  $field_bases['field_email'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_email',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'email',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'email',
  );

  // Exported field_base: 'field_indoklal'
  $field_bases['field_indoklal'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_indoklal',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_jogi_csoport'
  $field_bases['field_jogi_csoport'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_jogi_csoport',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'dj' => 'DJ',
        'zenegep' => 'Zenegép üzemeltető',
        'hatterzene' => 'Háttérzene szolgáltató (DISCO – rendezvény is)',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_kapcs_megegyezik'
  $field_bases['field_kapcs_megegyezik'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_kapcs_megegyezik',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Megegyezik a fentiekkel' => 'Megegyezik a fentiekkel',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_kapcsolattart_telefon'
  $field_bases['field_kapcsolattart_telefon'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_kapcsolattart_telefon',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 50,
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_kapcsolattarto_email'
  $field_bases['field_kapcsolattarto_email'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_kapcsolattarto_email',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_kapcsolattarto_neve'
  $field_bases['field_kapcsolattarto_neve'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_kapcsolattarto_neve',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_kiegeszites'
  $field_bases['field_kiegeszites'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_kiegeszites',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_megegyezik'
  $field_bases['field_megegyezik'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_megegyezik',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Megegyezik a fenti címmel' => 'Megegyezik a fenti címmel',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_muvesznev'
  $field_bases['field_muvesznev'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_muvesznev',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_orszag'
  $field_bases['field_orszag'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_orszag',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'AF' => 'Afganisztán',
        'AL' => 'Albánia',
        'DZ' => 'Algéria',
        'AD' => 'Andorra',
        'AO' => 'Angola',
        'AG' => 'Antigua és Barbuda',
        'AE' => 'Arab Emírségek',
        'AR' => 'Argentína',
        'AU' => 'Ausztrália',
        'AT' => 'Ausztria',
        'AZ' => 'Azerbajdzsán',
        'BS' => 'Bahama-szigetek',
        'BH' => 'Bahrein',
        'BD' => 'Banglades',
        'BB' => 'Barbados',
        'BY' => 'Belarusz',
        'BE' => 'Belgium',
        'BZ' => 'Belize',
        'BJ' => 'Benin',
        'BT' => 'Bhután',
        'GW' => 'Bissau-Guinea',
        'BO' => 'Bolívia',
        'BA' => 'Bosznia-Hercegovina',
        'BW' => 'Botswana',
        'BR' => 'Brazília',
        'BN' => 'Brunei',
        'BG' => 'Bulgária',
        'BF' => 'Burkina Faso',
        'BI' => 'Burundi',
        'CL' => 'Chile',
        'CY' => 'Ciprus',
        'KM' => 'Comore-szigetek',
        'CR' => 'Costa Rica',
        'TD' => 'Csád',
        'CZ' => 'Csehország',
        'DK' => 'Dánia',
        'ZA' => 'Dél-afrikai Köztársaság',
        'KR' => 'Dél-Korea',
        'DM' => 'Dominikai Közösség',
        'DO' => 'Dominikai Köztársaság',
        'DJ' => 'Dzsibuti',
        'EC' => 'Ecuador',
        'GQ' => 'Egyenlítői-Guinea',
        'GB' => 'Egyesült Királyság',
        'EG' => 'Egyiptom',
        'CI' => 'Elefántcsontpart',
        'ER' => 'Eritrea',
        'KP' => 'Észak-Korea',
        'EE' => 'Észtország',
        'ET' => 'Etiópia',
        'FJ' => 'Fidzsi',
        'FI<br>SF' => 'Finnország',
        'FR' => 'Franciaország',
        'PH' => 'Fülöp-szigetek',
        'GA' => 'Gabon',
        'GM' => 'Gambia',
        'GH' => 'Ghána',
        'GR' => 'Görögország',
        'GD' => 'Grenada',
        'GE' => 'Grúzia',
        'GT' => 'Guatemala',
        'GN' => 'Guinea',
        'GY' => 'Guyana',
        'HT' => 'Haiti',
        'NL' => 'Hollandia',
        'HN' => 'Honduras',
        'HR' => 'Horvátország',
        'IN' => 'India',
        'ID' => 'Indonézia',
        'IQ' => 'Irak',
        'IR' => 'Irán',
        'IE' => 'Írország',
        'IS' => 'Izland',
        'IL' => 'Izrael',
        'JM' => 'Jamaica',
        'JP' => 'Japán',
        'YE' => 'Jemen',
        'JO' => 'Jordánia',
        'KH' => 'Kambodzsa',
        'CM' => 'Kamerun',
        'CA' => 'Kanada',
        'QA' => 'Katar',
        'KZ' => 'Kazahsztán',
        'TL' => 'Kelet-Timor',
        'KE' => 'Kenya',
        'CN' => 'Kína',
        'KG' => 'Kirgizisztán',
        'KI' => 'Kiribati',
        'CO' => 'Kolumbia',
        'CD' => 'Kongói Demokratikus Köztársaság',
        'CG' => 'Kongói Köztársaság',
        'CF' => 'Közép-Afrika',
        'CU' => 'Kuba',
        'KW' => 'Kuvait',
        'LA' => 'Laosz',
        'PL' => 'Lengyelország',
        'LS' => 'Lesotho',
        'LV' => 'Lettország',
        'LB' => 'Libanon',
        'LR' => 'Libéria',
        'LY' => 'Líbia',
        'LI' => 'Liechtenstein',
        'LT' => 'Litvánia',
        'LU' => 'Luxemburg',
        'MK' => 'Macedónia',
        'MG' => 'Madagaszkár',
        'HU' => 'Magyarország',
        'MY' => 'Malájzia',
        'MW' => 'Malawi',
        'MV' => 'Maldív-szigetek',
        'ML' => 'Mali',
        'MT' => 'Málta',
        'MA' => 'Marokkó',
        'MH' => 'Marshall-szigetek',
        'MR' => 'Mauritánia',
        'MU' => 'Mauritius',
        'MX' => 'Mexikó',
        'FM' => 'Mikronézia',
        'MD' => 'Moldova',
        'MC' => 'Monaco',
        'MN' => 'Mongólia',
        'ME' => 'Montenegró',
        'MZ' => 'Mozambik',
        'MM' => 'Myanmar',
        'NA' => 'Namíbia',
        'NR' => 'Nauru',
        'DE' => 'Németország',
        'NP' => 'Nepál',
        'NI' => 'Nicaragua',
        'NE' => 'Niger',
        'NG' => 'Nigéria',
        'NO' => 'Norvégia',
        'IT' => 'Olaszország',
        'OM' => 'Omán',
        'AM' => 'Örményország',
        'RU' => 'Oroszország',
        'PK' => 'Pakisztán',
        'PW' => 'Palau',
        'PA' => 'Panama',
        'PG' => 'Pápua Új-Guinea',
        'PY' => 'Paraguay',
        'PE' => 'Peru',
        'PT' => 'Portugália',
        'RO' => 'Románia',
        'RW' => 'Ruanda',
        'KN' => 'Saint Kitts és Nevis',
        'LC' => 'Saint Lucia',
        'VC' => 'Saint Vincent',
        'SB' => 'Salamon-szigetek',
        'SV' => 'Salvador',
        'SM' => 'San Marino',
        'ST' => 'Sao Tomé és Príncipe',
        'SC' => 'Seychelle-szigetek',
        'SL' => 'Sierra Leone',
        'ES' => 'Spanyolország',
        'LK' => 'Srí Lanka',
        'SR' => 'Suriname',
        'CH' => 'Svájc',
        'SE' => 'Svédország',
        'WS' => 'Szamoa',
        'SA' => 'Szaúd-Arábia',
        'SN' => 'Szenegál',
        'CS' => 'Szerbia',
        'SG' => 'Szingapúr',
        'SY' => 'Szíria',
        'SK' => 'Szlovákia',
        'SI' => 'Szlovénia',
        'SO' => 'Szomália',
        'SD' => 'Szudán',
        'SZ' => 'Szváziföld',
        'TJ' => 'Tádzsikisztán',
        'TZ' => 'Tanzánia',
        'TH' => 'Thaiföld',
        'TG' => 'Togo',
        'TO' => 'Tonga',
        'TR' => 'Törökország',
        'TT' => 'Trinidad és Tobago',
        'TN' => 'Tunézia',
        'TM' => 'Türkmenisztán',
        'TV' => 'Tuvalu',
        'UG' => 'Uganda',
        'NZ' => 'Új-Zéland',
        'UA' => 'Ukrajna',
        'UY' => 'Uruguay',
        'US' => 'USA',
        'UZ' => 'Üzbegisztán',
        'VU' => 'Vanuatu',
        'VA' => 'Vatikán',
        'VE' => 'Venezuela',
        'VN' => 'Vietnam',
        'ZM' => 'Zambia',
        'ZW' => 'Zimbabwe',
        'CV' => 'Zöld-foki-szigetek',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_penzugyi_kapcsolat_email'
  $field_bases['field_penzugyi_kapcsolat_email'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_penzugyi_kapcsolat_email',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_penzugyi_kapcsolat_neve'
  $field_bases['field_penzugyi_kapcsolat_neve'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_penzugyi_kapcsolat_neve',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_penzugyi_kapcsolat_tel'
  $field_bases['field_penzugyi_kapcsolat_tel'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_penzugyi_kapcsolat_tel',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 50,
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_posta_orszag'
  $field_bases['field_posta_orszag'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_posta_orszag',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'AF' => 'Afganisztán',
        'AL' => 'Albánia',
        'DZ' => 'Algéria',
        'AD' => 'Andorra',
        'AO' => 'Angola',
        'AG' => 'Antigua és Barbuda',
        'AE' => 'Arab Emírségek',
        'AR' => 'Argentína',
        'AU' => 'Ausztrália',
        'AT' => 'Ausztria',
        'AZ' => 'Azerbajdzsán',
        'BS' => 'Bahama-szigetek',
        'BH' => 'Bahrein',
        'BD' => 'Banglades',
        'BB' => 'Barbados',
        'BY' => 'Belarusz',
        'BE' => 'Belgium',
        'BZ' => 'Belize',
        'BJ' => 'Benin',
        'BT' => 'Bhután',
        'GW' => 'Bissau-Guinea',
        'BO' => 'Bolívia',
        'BA' => 'Bosznia-Hercegovina',
        'BW' => 'Botswana',
        'BR' => 'Brazília',
        'BN' => 'Brunei',
        'BG' => 'Bulgária',
        'BF' => 'Burkina Faso',
        'BI' => 'Burundi',
        'CL' => 'Chile',
        'CY' => 'Ciprus',
        'KM' => 'Comore-szigetek',
        'CR' => 'Costa Rica',
        'TD' => 'Csád',
        'CZ' => 'Csehország',
        'DK' => 'Dánia',
        'ZA' => 'Dél-afrikai Köztársaság',
        'KR' => 'Dél-Korea',
        'DM' => 'Dominikai Közösség',
        'DO' => 'Dominikai Köztársaság',
        'DJ' => 'Dzsibuti',
        'EC' => 'Ecuador',
        'GQ' => 'Egyenlítői-Guinea',
        'GB' => 'Egyesült Királyság',
        'EG' => 'Egyiptom',
        'CI' => 'Elefántcsontpart',
        'ER' => 'Eritrea',
        'KP' => 'Észak-Korea',
        'EE' => 'Észtország',
        'ET' => 'Etiópia',
        'FJ' => 'Fidzsi',
        'FI<br>SF' => 'Finnország',
        'FR' => 'Franciaország',
        'PH' => 'Fülöp-szigetek',
        'GA' => 'Gabon',
        'GM' => 'Gambia',
        'GH' => 'Ghána',
        'GR' => 'Görögország',
        'GD' => 'Grenada',
        'GE' => 'Grúzia',
        'GT' => 'Guatemala',
        'GN' => 'Guinea',
        'GY' => 'Guyana',
        'HT' => 'Haiti',
        'NL' => 'Hollandia',
        'HN' => 'Honduras',
        'HR' => 'Horvátország',
        'IN' => 'India',
        'ID' => 'Indonézia',
        'IQ' => 'Irak',
        'IR' => 'Irán',
        'IE' => 'Írország',
        'IS' => 'Izland',
        'IL' => 'Izrael',
        'JM' => 'Jamaica',
        'JP' => 'Japán',
        'YE' => 'Jemen',
        'JO' => 'Jordánia',
        'KH' => 'Kambodzsa',
        'CM' => 'Kamerun',
        'CA' => 'Kanada',
        'QA' => 'Katar',
        'KZ' => 'Kazahsztán',
        'TL' => 'Kelet-Timor',
        'KE' => 'Kenya',
        'CN' => 'Kína',
        'KG' => 'Kirgizisztán',
        'KI' => 'Kiribati',
        'CO' => 'Kolumbia',
        'CD' => 'Kongói Demokratikus Köztársaság',
        'CG' => 'Kongói Köztársaság',
        'CF' => 'Közép-Afrika',
        'CU' => 'Kuba',
        'KW' => 'Kuvait',
        'LA' => 'Laosz',
        'PL' => 'Lengyelország',
        'LS' => 'Lesotho',
        'LV' => 'Lettország',
        'LB' => 'Libanon',
        'LR' => 'Libéria',
        'LY' => 'Líbia',
        'LI' => 'Liechtenstein',
        'LT' => 'Litvánia',
        'LU' => 'Luxemburg',
        'MK' => 'Macedónia',
        'MG' => 'Madagaszkár',
        'HU' => 'Magyarország',
        'MY' => 'Malájzia',
        'MW' => 'Malawi',
        'MV' => 'Maldív-szigetek',
        'ML' => 'Mali',
        'MT' => 'Málta',
        'MA' => 'Marokkó',
        'MH' => 'Marshall-szigetek',
        'MR' => 'Mauritánia',
        'MU' => 'Mauritius',
        'MX' => 'Mexikó',
        'FM' => 'Mikronézia',
        'MD' => 'Moldova',
        'MC' => 'Monaco',
        'MN' => 'Mongólia',
        'ME' => 'Montenegró',
        'MZ' => 'Mozambik',
        'MM' => 'Myanmar',
        'NA' => 'Namíbia',
        'NR' => 'Nauru',
        'DE' => 'Németország',
        'NP' => 'Nepál',
        'NI' => 'Nicaragua',
        'NE' => 'Niger',
        'NG' => 'Nigéria',
        'NO' => 'Norvégia',
        'IT' => 'Olaszország',
        'OM' => 'Omán',
        'AM' => 'Örményország',
        'RU' => 'Oroszország',
        'PK' => 'Pakisztán',
        'PW' => 'Palau',
        'PA' => 'Panama',
        'PG' => 'Pápua Új-Guinea',
        'PY' => 'Paraguay',
        'PE' => 'Peru',
        'PT' => 'Portugália',
        'RO' => 'Románia',
        'RW' => 'Ruanda',
        'KN' => 'Saint Kitts és Nevis',
        'LC' => 'Saint Lucia',
        'VC' => 'Saint Vincent',
        'SB' => 'Salamon-szigetek',
        'SV' => 'Salvador',
        'SM' => 'San Marino',
        'ST' => 'Sao Tomé és Príncipe',
        'SC' => 'Seychelle-szigetek',
        'SL' => 'Sierra Leone',
        'ES' => 'Spanyolország',
        'LK' => 'Srí Lanka',
        'SR' => 'Suriname',
        'CH' => 'Svájc',
        'SE' => 'Svédország',
        'WS' => 'Szamoa',
        'SA' => 'Szaúd-Arábia',
        'SN' => 'Szenegál',
        'CS' => 'Szerbia',
        'SG' => 'Szingapúr',
        'SY' => 'Szíria',
        'SK' => 'Szlovákia',
        'SI' => 'Szlovénia',
        'SO' => 'Szomália',
        'SD' => 'Szudán',
        'SZ' => 'Szváziföld',
        'TJ' => 'Tádzsikisztán',
        'TZ' => 'Tanzánia',
        'TH' => 'Thaiföld',
        'TG' => 'Togo',
        'TO' => 'Tonga',
        'TR' => 'Törökország',
        'TT' => 'Trinidad és Tobago',
        'TN' => 'Tunézia',
        'TM' => 'Türkmenisztán',
        'TV' => 'Tuvalu',
        'UG' => 'Uganda',
        'NZ' => 'Új-Zéland',
        'UA' => 'Ukrajna',
        'UY' => 'Uruguay',
        'US' => 'USA',
        'UZ' => 'Üzbegisztán',
        'VU' => 'Vanuatu',
        'VA' => 'Vatikán',
        'VE' => 'Venezuela',
        'VN' => 'Vietnam',
        'ZM' => 'Zambia',
        'ZW' => 'Zimbabwe',
        'CV' => 'Zöld-foki-szigetek',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_regisztralo_szemelye'
  $field_bases['field_regisztralo_szemelye'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_regisztralo_szemelye',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'magan' => 'Magánszemély',
        'ceg' => 'Cég',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_szamitott_nev'
  $field_bases['field_szamitott_nev'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_szamitott_nev',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'computed_field',
    'settings' => array(
      'code' => '//magánszemély esetén számlázási névnek a magánszemély neve kell
$szemely = field_get_items($entity_type, $entity, \'field_regisztralo_szemelye\');
$field = ($szemely[0][\'value\'] == \'magan\') ? \'field_teljes_nev\' : \'field_cegnev\';
$ceg_field = array_pop( field_get_items($entity_type, $entity, $field ) );

$ceg = is_array($ceg_field)?array_pop($ceg_field):$ceg_field;
//watchdog(\'debug\', \'computed ceges:\' . print_r($ceg,1));

$mag_field = array_pop( field_get_items($entity_type, $entity, \'field_teljes_nev\') );
$mag = is_array($mag_field)?array_pop($mag_field):$mag_field;
//watchdog(\'debug\', \'computed magan:\' . print_r($mag,1));

$entity_field[0][\'value\'] = (isset($ceg) && !empty($ceg)) ? str_replace(\'&amp;\', \'&\', $ceg) : $mag;
//watchdog(\'debug\', \'computed mezo:\' . print_r($entity_field[0][\'value\'],1));',
      'database' => array(
        'data_default' => '',
        'data_index' => 0,
        'data_length' => 255,
        'data_not_NULL' => 0,
        'data_precision' => 10,
        'data_scale' => 2,
        'data_size' => 'normal',
        'data_type' => 'varchar',
      ),
      'display_format' => '$display_output = str_replace(\'&amp;\', \'&\', $entity_field_item[\'value\']);',
      'store' => 1,
    ),
    'translatable' => 0,
    'type' => 'computed',
  );

  // Exported field_base: 'field_szamlatartozas'
  $field_bases['field_szamlatartozas'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_szamlatartozas',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_szuletesi_ido'
  $field_bases['field_szuletesi_ido'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_szuletesi_ido',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'granularity' => array(
        'day' => 'day',
        'hour' => 0,
        'minute' => 0,
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'repeat' => 0,
      'timezone_db' => '',
      'todate' => '',
      'tz_handling' => 'none',
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

  // Exported field_base: 'field_telefon'
  $field_bases['field_telefon'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_telefon',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_teljes_nev'
  $field_bases['field_teljes_nev'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_teljes_nev',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_varos'
  $field_bases['field_varos'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_varos',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_weboldal'
  $field_bases['field_weboldal'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_weboldal',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}

<?php
/**
 * @file
 * jogosultsagok.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function jogosultsagok_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access private fields'.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer field permissions'.
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'node',
  );

  // Exported permission: 'choose user revisions'.
  $permissions['choose user revisions'] = array(
    'name' => 'choose user revisions',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'user_revision',
  );

  // Exported permission: 'create field_adatszolgaltatas_idoszak'.
  $permissions['create field_adatszolgaltatas_idoszak'] = array(
    'name' => 'create field_adatszolgaltatas_idoszak',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_adatszolgaltatasok'.
  $permissions['create field_adatszolgaltatasok'] = array(
    'name' => 'create field_adatszolgaltatasok',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_anyja_neve'.
  $permissions['create field_anyja_neve'] = array(
    'name' => 'create field_anyja_neve',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_atalany_valtas_feltetelei'.
  $permissions['create field_atalany_valtas_feltetelei'] = array(
    'name' => 'create field_atalany_valtas_feltetelei',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_atalanyeve'.
  $permissions['create field_atalanyeve'] = array(
    'name' => 'create field_atalanyeve',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_bankszamla'.
  $permissions['create field_bankszamla'] = array(
    'name' => 'create field_bankszamla',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_belso_megjegyzes'.
  $permissions['create field_belso_megjegyzes'] = array(
    'name' => 'create field_belso_megjegyzes',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
      'felhasznalo_kezelo' => 'felhasznalo_kezelo',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_buntetougy'.
  $permissions['create field_buntetougy'] = array(
    'name' => 'create field_buntetougy',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_cegnev'.
  $permissions['create field_cegnev'] = array(
    'name' => 'create field_cegnev',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_collection_szamlazas'.
  $permissions['create field_collection_szamlazas'] = array(
    'name' => 'create field_collection_szamlazas',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_dj_tagsag'.
  $permissions['create field_dj_tagsag'] = array(
    'name' => 'create field_dj_tagsag',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_elozo_uzemelteto'.
  $permissions['create field_elozo_uzemelteto'] = array(
    'name' => 'create field_elozo_uzemelteto',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_elozo_uzemeltetok'.
  $permissions['create field_elozo_uzemeltetok'] = array(
    'name' => 'create field_elozo_uzemeltetok',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_eszamla'.
  $permissions['create field_eszamla'] = array(
    'name' => 'create field_eszamla',
    'roles' => array(
      'DJ' => 'DJ',
      'Rendszergazda' => 'Rendszergazda',
      'hatterzene_szolgaltato' => 'hatterzene_szolgaltato',
      'zenegep_uzemelteto' => 'zenegep_uzemelteto',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_feltetelek'.
  $permissions['create field_feltetelek'] = array(
    'name' => 'create field_feltetelek',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_file_frissitve'.
  $permissions['create field_file_frissitve'] = array(
    'name' => 'create field_file_frissitve',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_gyszam'.
  $permissions['create field_gyszam'] = array(
    'name' => 'create field_gyszam',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'authenticated user' => 'authenticated user',
      'zenegep_uzemelteto' => 'zenegep_uzemelteto',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_idoszak'.
  $permissions['create field_idoszak'] = array(
    'name' => 'create field_idoszak',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_indoklal'.
  $permissions['create field_indoklal'] = array(
    'name' => 'create field_indoklal',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'felhasznalo_kezelo' => 'felhasznalo_kezelo',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_jogdijertesito'.
  $permissions['create field_jogdijertesito'] = array(
    'name' => 'create field_jogdijertesito',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_jogi_csoport'.
  $permissions['create field_jogi_csoport'] = array(
    'name' => 'create field_jogi_csoport',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_jogositas'.
  $permissions['create field_jogositas'] = array(
    'name' => 'create field_jogositas',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_jogositas_2014'.
  $permissions['create field_jogositas_2014'] = array(
    'name' => 'create field_jogositas_2014',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_jogositas_2015'.
  $permissions['create field_jogositas_2015'] = array(
    'name' => 'create field_jogositas_2015',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'zenegep_uzemelteto' => 'zenegep_uzemelteto',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_jogosult_nev'.
  $permissions['create field_jogosult_nev'] = array(
    'name' => 'create field_jogosult_nev',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_kartya_kiadva'.
  $permissions['create field_kartya_kiadva'] = array(
    'name' => 'create field_kartya_kiadva',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_matrica_szamok'.
  $permissions['create field_matrica_szamok'] = array(
    'name' => 'create field_matrica_szamok',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_raktar_feltetelek'.
  $permissions['create field_raktar_feltetelek'] = array(
    'name' => 'create field_raktar_feltetelek',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_raktar_ido'.
  $permissions['create field_raktar_ido'] = array(
    'name' => 'create field_raktar_ido',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_regisztralo_szemelye'.
  $permissions['create field_regisztralo_szemelye'] = array(
    'name' => 'create field_regisztralo_szemelye',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_statusz'.
  $permissions['create field_statusz'] = array(
    'name' => 'create field_statusz',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_szamla_sorszam'.
  $permissions['create field_szamla_sorszam'] = array(
    'name' => 'create field_szamla_sorszam',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_szamlatartozas'.
  $permissions['create field_szamlatartozas'] = array(
    'name' => 'create field_szamlatartozas',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_szuletesi_ido'.
  $permissions['create field_szuletesi_ido'] = array(
    'name' => 'create field_szuletesi_ido',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_teljes_nev'.
  $permissions['create field_teljes_nev'] = array(
    'name' => 'create field_teljes_nev',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_tobbszorozes_status'.
  $permissions['create field_tobbszorozes_status'] = array(
    'name' => 'create field_tobbszorozes_status',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'adatszolgaltatas_kezelo' => 'adatszolgaltatas_kezelo',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ujgep'.
  $permissions['create field_ujgep'] = array(
    'name' => 'create field_ujgep',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'authenticated user' => 'authenticated user',
      'zenegep_uzemelteto' => 'zenegep_uzemelteto',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_uzemelteto_datum'.
  $permissions['create field_uzemelteto_datum'] = array(
    'name' => 'create field_uzemelteto_datum',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_visszautasitas_indok'.
  $permissions['create field_visszautasitas_indok'] = array(
    'name' => 'create field_visszautasitas_indok',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'adatszolgaltatas_kezelo' => 'adatszolgaltatas_kezelo',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_zg_buntetogy'.
  $permissions['create field_zg_buntetogy'] = array(
    'name' => 'create field_zg_buntetogy',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_zg_tobbsz_statusz'.
  $permissions['create field_zg_tobbsz_statusz'] = array(
    'name' => 'create field_zg_tobbsz_statusz',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'adatszolgaltatas_kezelo' => 'adatszolgaltatas_kezelo',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create jogositas_alkalmankent_dj content'.
  $permissions['create jogositas_alkalmankent_dj content'] = array(
    'name' => 'create jogositas_alkalmankent_dj content',
    'roles' => array(
      'DJ' => 'DJ',
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create jogositas_alkalmankent_hatterz content'.
  $permissions['create jogositas_alkalmankent_hatterz content'] = array(
    'name' => 'create jogositas_alkalmankent_hatterz content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'hatterzene_szolgaltato' => 'hatterzene_szolgaltato',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create jogositas_atalanydijas_dj content'.
  $permissions['create jogositas_atalanydijas_dj content'] = array(
    'name' => 'create jogositas_atalanydijas_dj content',
    'roles' => array(
      'DJ' => 'DJ',
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create jogositas_atalanydijas_hatterz content'.
  $permissions['create jogositas_atalanydijas_hatterz content'] = array(
    'name' => 'create jogositas_atalanydijas_hatterz content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'hatterzene_szolgaltato' => 'hatterzene_szolgaltato',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create jogositas_darabonkent_dj content'.
  $permissions['create jogositas_darabonkent_dj content'] = array(
    'name' => 'create jogositas_darabonkent_dj content',
    'roles' => array(
      'DJ' => 'DJ',
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create jogositas_darabonkent_hatterzene content'.
  $permissions['create jogositas_darabonkent_hatterzene content'] = array(
    'name' => 'create jogositas_darabonkent_hatterzene content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'hatterzene_szolgaltato' => 'hatterzene_szolgaltato',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create jogositas_zenegep content'.
  $permissions['create jogositas_zenegep content'] = array(
    'name' => 'create jogositas_zenegep content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'zenegep_uzemelteto' => 'zenegep_uzemelteto',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create tobbszorozesenkenti_jogositas content'.
  $permissions['create tobbszorozesenkenti_jogositas content'] = array(
    'name' => 'create tobbszorozesenkenti_jogositas content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'tesztcsoport' => 'tesztcsoport',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create tobbszorozesi_lista content'.
  $permissions['create tobbszorozesi_lista content'] = array(
    'name' => 'create tobbszorozesi_lista content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'adatszolgaltatas_kezelo' => 'adatszolgaltatas_kezelo',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any jogositas_alkalmankent_dj content'.
  $permissions['delete any jogositas_alkalmankent_dj content'] = array(
    'name' => 'delete any jogositas_alkalmankent_dj content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any jogositas_alkalmankent_hatterz content'.
  $permissions['delete any jogositas_alkalmankent_hatterz content'] = array(
    'name' => 'delete any jogositas_alkalmankent_hatterz content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any jogositas_atalanydijas_dj content'.
  $permissions['delete any jogositas_atalanydijas_dj content'] = array(
    'name' => 'delete any jogositas_atalanydijas_dj content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any jogositas_atalanydijas_hatterz content'.
  $permissions['delete any jogositas_atalanydijas_hatterz content'] = array(
    'name' => 'delete any jogositas_atalanydijas_hatterz content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any jogositas_darabonkent_dj content'.
  $permissions['delete any jogositas_darabonkent_dj content'] = array(
    'name' => 'delete any jogositas_darabonkent_dj content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any jogositas_darabonkent_hatterzene content'.
  $permissions['delete any jogositas_darabonkent_hatterzene content'] = array(
    'name' => 'delete any jogositas_darabonkent_hatterzene content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any jogositas_zenegep content'.
  $permissions['delete any jogositas_zenegep content'] = array(
    'name' => 'delete any jogositas_zenegep content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any tobbszorozesenkenti_jogositas content'.
  $permissions['delete any tobbszorozesenkenti_jogositas content'] = array(
    'name' => 'delete any tobbszorozesenkenti_jogositas content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any tobbszorozesi_lista content'.
  $permissions['delete any tobbszorozesi_lista content'] = array(
    'name' => 'delete any tobbszorozesi_lista content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own jogositas_alkalmankent_dj content'.
  $permissions['delete own jogositas_alkalmankent_dj content'] = array(
    'name' => 'delete own jogositas_alkalmankent_dj content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own jogositas_alkalmankent_hatterz content'.
  $permissions['delete own jogositas_alkalmankent_hatterz content'] = array(
    'name' => 'delete own jogositas_alkalmankent_hatterz content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own jogositas_atalanydijas_dj content'.
  $permissions['delete own jogositas_atalanydijas_dj content'] = array(
    'name' => 'delete own jogositas_atalanydijas_dj content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own jogositas_atalanydijas_hatterz content'.
  $permissions['delete own jogositas_atalanydijas_hatterz content'] = array(
    'name' => 'delete own jogositas_atalanydijas_hatterz content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own jogositas_darabonkent_dj content'.
  $permissions['delete own jogositas_darabonkent_dj content'] = array(
    'name' => 'delete own jogositas_darabonkent_dj content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own jogositas_darabonkent_hatterzene content'.
  $permissions['delete own jogositas_darabonkent_hatterzene content'] = array(
    'name' => 'delete own jogositas_darabonkent_hatterzene content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own jogositas_zenegep content'.
  $permissions['delete own jogositas_zenegep content'] = array(
    'name' => 'delete own jogositas_zenegep content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own tobbszorozesenkenti_jogositas content'.
  $permissions['delete own tobbszorozesenkenti_jogositas content'] = array(
    'name' => 'delete own tobbszorozesenkenti_jogositas content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own tobbszorozesi_lista content'.
  $permissions['delete own tobbszorozesi_lista content'] = array(
    'name' => 'delete own tobbszorozesi_lista content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own user revisions'.
  $permissions['delete own user revisions'] = array(
    'name' => 'delete own user revisions',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'user_revision',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete user revisions'.
  $permissions['delete user revisions'] = array(
    'name' => 'delete user revisions',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'user_revision',
  );

  // Exported permission: 'edit any jogositas_alkalmankent_dj content'.
  $permissions['edit any jogositas_alkalmankent_dj content'] = array(
    'name' => 'edit any jogositas_alkalmankent_dj content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
      'adatszolgaltatas_kezelo' => 'adatszolgaltatas_kezelo',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any jogositas_alkalmankent_hatterz content'.
  $permissions['edit any jogositas_alkalmankent_hatterz content'] = array(
    'name' => 'edit any jogositas_alkalmankent_hatterz content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
      'adatszolgaltatas_kezelo' => 'adatszolgaltatas_kezelo',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any jogositas_atalanydijas_dj content'.
  $permissions['edit any jogositas_atalanydijas_dj content'] = array(
    'name' => 'edit any jogositas_atalanydijas_dj content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
      'adatszolgaltatas_kezelo' => 'adatszolgaltatas_kezelo',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any jogositas_atalanydijas_hatterz content'.
  $permissions['edit any jogositas_atalanydijas_hatterz content'] = array(
    'name' => 'edit any jogositas_atalanydijas_hatterz content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
      'adatszolgaltatas_kezelo' => 'adatszolgaltatas_kezelo',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any jogositas_darabonkent_dj content'.
  $permissions['edit any jogositas_darabonkent_dj content'] = array(
    'name' => 'edit any jogositas_darabonkent_dj content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
      'adatszolgaltatas_kezelo' => 'adatszolgaltatas_kezelo',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any jogositas_darabonkent_hatterzene content'.
  $permissions['edit any jogositas_darabonkent_hatterzene content'] = array(
    'name' => 'edit any jogositas_darabonkent_hatterzene content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
      'adatszolgaltatas_kezelo' => 'adatszolgaltatas_kezelo',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any jogositas_zenegep content'.
  $permissions['edit any jogositas_zenegep content'] = array(
    'name' => 'edit any jogositas_zenegep content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
      'adatszolgaltatas_kezelo' => 'adatszolgaltatas_kezelo',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tobbszorozesenkenti_jogositas content'.
  $permissions['edit any tobbszorozesenkenti_jogositas content'] = array(
    'name' => 'edit any tobbszorozesenkenti_jogositas content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tobbszorozesi_lista content'.
  $permissions['edit any tobbszorozesi_lista content'] = array(
    'name' => 'edit any tobbszorozesi_lista content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'adatszolgaltatas_kezelo' => 'adatszolgaltatas_kezelo',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_adatszolgaltatas_idoszak'.
  $permissions['edit field_adatszolgaltatas_idoszak'] = array(
    'name' => 'edit field_adatszolgaltatas_idoszak',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_adatszolgaltatasok'.
  $permissions['edit field_adatszolgaltatasok'] = array(
    'name' => 'edit field_adatszolgaltatasok',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_anyja_neve'.
  $permissions['edit field_anyja_neve'] = array(
    'name' => 'edit field_anyja_neve',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_atalany_valtas_feltetelei'.
  $permissions['edit field_atalany_valtas_feltetelei'] = array(
    'name' => 'edit field_atalany_valtas_feltetelei',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_atalanyeve'.
  $permissions['edit field_atalanyeve'] = array(
    'name' => 'edit field_atalanyeve',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_bankszamla'.
  $permissions['edit field_bankszamla'] = array(
    'name' => 'edit field_bankszamla',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_belso_megjegyzes'.
  $permissions['edit field_belso_megjegyzes'] = array(
    'name' => 'edit field_belso_megjegyzes',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
      'felhasznalo_kezelo' => 'felhasznalo_kezelo',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_buntetougy'.
  $permissions['edit field_buntetougy'] = array(
    'name' => 'edit field_buntetougy',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_cegnev'.
  $permissions['edit field_cegnev'] = array(
    'name' => 'edit field_cegnev',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_collection_szamlazas'.
  $permissions['edit field_collection_szamlazas'] = array(
    'name' => 'edit field_collection_szamlazas',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_dj_tagsag'.
  $permissions['edit field_dj_tagsag'] = array(
    'name' => 'edit field_dj_tagsag',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_elozo_uzemelteto'.
  $permissions['edit field_elozo_uzemelteto'] = array(
    'name' => 'edit field_elozo_uzemelteto',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_elozo_uzemeltetok'.
  $permissions['edit field_elozo_uzemeltetok'] = array(
    'name' => 'edit field_elozo_uzemeltetok',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_eszamla'.
  $permissions['edit field_eszamla'] = array(
    'name' => 'edit field_eszamla',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_feltetelek'.
  $permissions['edit field_feltetelek'] = array(
    'name' => 'edit field_feltetelek',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_file_frissitve'.
  $permissions['edit field_file_frissitve'] = array(
    'name' => 'edit field_file_frissitve',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_gyszam'.
  $permissions['edit field_gyszam'] = array(
    'name' => 'edit field_gyszam',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_idoszak'.
  $permissions['edit field_idoszak'] = array(
    'name' => 'edit field_idoszak',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_indoklal'.
  $permissions['edit field_indoklal'] = array(
    'name' => 'edit field_indoklal',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'felhasznalo_kezelo' => 'felhasznalo_kezelo',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_jogdijertesito'.
  $permissions['edit field_jogdijertesito'] = array(
    'name' => 'edit field_jogdijertesito',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_jogi_csoport'.
  $permissions['edit field_jogi_csoport'] = array(
    'name' => 'edit field_jogi_csoport',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_jogositas'.
  $permissions['edit field_jogositas'] = array(
    'name' => 'edit field_jogositas',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_jogositas_2014'.
  $permissions['edit field_jogositas_2014'] = array(
    'name' => 'edit field_jogositas_2014',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_jogositas_2015'.
  $permissions['edit field_jogositas_2015'] = array(
    'name' => 'edit field_jogositas_2015',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_jogosult_nev'.
  $permissions['edit field_jogosult_nev'] = array(
    'name' => 'edit field_jogosult_nev',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_kartya_kiadva'.
  $permissions['edit field_kartya_kiadva'] = array(
    'name' => 'edit field_kartya_kiadva',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_matrica_szamok'.
  $permissions['edit field_matrica_szamok'] = array(
    'name' => 'edit field_matrica_szamok',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_raktar_feltetelek'.
  $permissions['edit field_raktar_feltetelek'] = array(
    'name' => 'edit field_raktar_feltetelek',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_raktar_ido'.
  $permissions['edit field_raktar_ido'] = array(
    'name' => 'edit field_raktar_ido',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_regisztralo_szemelye'.
  $permissions['edit field_regisztralo_szemelye'] = array(
    'name' => 'edit field_regisztralo_szemelye',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_statusz'.
  $permissions['edit field_statusz'] = array(
    'name' => 'edit field_statusz',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'felhasznalo_kezelo' => 'felhasznalo_kezelo',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_szamla_sorszam'.
  $permissions['edit field_szamla_sorszam'] = array(
    'name' => 'edit field_szamla_sorszam',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_szamlatartozas'.
  $permissions['edit field_szamlatartozas'] = array(
    'name' => 'edit field_szamlatartozas',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_szuletesi_ido'.
  $permissions['edit field_szuletesi_ido'] = array(
    'name' => 'edit field_szuletesi_ido',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_teljes_nev'.
  $permissions['edit field_teljes_nev'] = array(
    'name' => 'edit field_teljes_nev',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_tobbszorozes_status'.
  $permissions['edit field_tobbszorozes_status'] = array(
    'name' => 'edit field_tobbszorozes_status',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'adatszolgaltatas_kezelo' => 'adatszolgaltatas_kezelo',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ujgep'.
  $permissions['edit field_ujgep'] = array(
    'name' => 'edit field_ujgep',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_uzemelteto_datum'.
  $permissions['edit field_uzemelteto_datum'] = array(
    'name' => 'edit field_uzemelteto_datum',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_visszautasitas_indok'.
  $permissions['edit field_visszautasitas_indok'] = array(
    'name' => 'edit field_visszautasitas_indok',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'adatszolgaltatas_kezelo' => 'adatszolgaltatas_kezelo',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_zg_buntetogy'.
  $permissions['edit field_zg_buntetogy'] = array(
    'name' => 'edit field_zg_buntetogy',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_zg_tobbsz_statusz'.
  $permissions['edit field_zg_tobbsz_statusz'] = array(
    'name' => 'edit field_zg_tobbsz_statusz',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'adatszolgaltatas_kezelo' => 'adatszolgaltatas_kezelo',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_adatszolgaltatas_idoszak'.
  $permissions['edit own field_adatszolgaltatas_idoszak'] = array(
    'name' => 'edit own field_adatszolgaltatas_idoszak',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_adatszolgaltatasok'.
  $permissions['edit own field_adatszolgaltatasok'] = array(
    'name' => 'edit own field_adatszolgaltatasok',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_anyja_neve'.
  $permissions['edit own field_anyja_neve'] = array(
    'name' => 'edit own field_anyja_neve',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_atalany_valtas_feltetelei'.
  $permissions['edit own field_atalany_valtas_feltetelei'] = array(
    'name' => 'edit own field_atalany_valtas_feltetelei',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_atalanyeve'.
  $permissions['edit own field_atalanyeve'] = array(
    'name' => 'edit own field_atalanyeve',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_bankszamla'.
  $permissions['edit own field_bankszamla'] = array(
    'name' => 'edit own field_bankszamla',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_belso_megjegyzes'.
  $permissions['edit own field_belso_megjegyzes'] = array(
    'name' => 'edit own field_belso_megjegyzes',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
      'felhasznalo_kezelo' => 'felhasznalo_kezelo',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_buntetougy'.
  $permissions['edit own field_buntetougy'] = array(
    'name' => 'edit own field_buntetougy',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_cegnev'.
  $permissions['edit own field_cegnev'] = array(
    'name' => 'edit own field_cegnev',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_collection_szamlazas'.
  $permissions['edit own field_collection_szamlazas'] = array(
    'name' => 'edit own field_collection_szamlazas',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_dj_tagsag'.
  $permissions['edit own field_dj_tagsag'] = array(
    'name' => 'edit own field_dj_tagsag',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_elozo_uzemelteto'.
  $permissions['edit own field_elozo_uzemelteto'] = array(
    'name' => 'edit own field_elozo_uzemelteto',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_elozo_uzemeltetok'.
  $permissions['edit own field_elozo_uzemeltetok'] = array(
    'name' => 'edit own field_elozo_uzemeltetok',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_eszamla'.
  $permissions['edit own field_eszamla'] = array(
    'name' => 'edit own field_eszamla',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_feltetelek'.
  $permissions['edit own field_feltetelek'] = array(
    'name' => 'edit own field_feltetelek',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_file_frissitve'.
  $permissions['edit own field_file_frissitve'] = array(
    'name' => 'edit own field_file_frissitve',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_gyszam'.
  $permissions['edit own field_gyszam'] = array(
    'name' => 'edit own field_gyszam',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_idoszak'.
  $permissions['edit own field_idoszak'] = array(
    'name' => 'edit own field_idoszak',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_indoklal'.
  $permissions['edit own field_indoklal'] = array(
    'name' => 'edit own field_indoklal',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'felhasznalo_kezelo' => 'felhasznalo_kezelo',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_jogdijertesito'.
  $permissions['edit own field_jogdijertesito'] = array(
    'name' => 'edit own field_jogdijertesito',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_jogi_csoport'.
  $permissions['edit own field_jogi_csoport'] = array(
    'name' => 'edit own field_jogi_csoport',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_jogositas'.
  $permissions['edit own field_jogositas'] = array(
    'name' => 'edit own field_jogositas',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_jogositas_2014'.
  $permissions['edit own field_jogositas_2014'] = array(
    'name' => 'edit own field_jogositas_2014',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_jogositas_2015'.
  $permissions['edit own field_jogositas_2015'] = array(
    'name' => 'edit own field_jogositas_2015',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'zenegep_uzemelteto' => 'zenegep_uzemelteto',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_jogosult_nev'.
  $permissions['edit own field_jogosult_nev'] = array(
    'name' => 'edit own field_jogosult_nev',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_kartya_kiadva'.
  $permissions['edit own field_kartya_kiadva'] = array(
    'name' => 'edit own field_kartya_kiadva',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_matrica_szamok'.
  $permissions['edit own field_matrica_szamok'] = array(
    'name' => 'edit own field_matrica_szamok',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_raktar_feltetelek'.
  $permissions['edit own field_raktar_feltetelek'] = array(
    'name' => 'edit own field_raktar_feltetelek',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_raktar_ido'.
  $permissions['edit own field_raktar_ido'] = array(
    'name' => 'edit own field_raktar_ido',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_regisztralo_szemelye'.
  $permissions['edit own field_regisztralo_szemelye'] = array(
    'name' => 'edit own field_regisztralo_szemelye',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_statusz'.
  $permissions['edit own field_statusz'] = array(
    'name' => 'edit own field_statusz',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_szamla_sorszam'.
  $permissions['edit own field_szamla_sorszam'] = array(
    'name' => 'edit own field_szamla_sorszam',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_szamlatartozas'.
  $permissions['edit own field_szamlatartozas'] = array(
    'name' => 'edit own field_szamlatartozas',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_szuletesi_ido'.
  $permissions['edit own field_szuletesi_ido'] = array(
    'name' => 'edit own field_szuletesi_ido',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_teljes_nev'.
  $permissions['edit own field_teljes_nev'] = array(
    'name' => 'edit own field_teljes_nev',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_tobbszorozes_status'.
  $permissions['edit own field_tobbszorozes_status'] = array(
    'name' => 'edit own field_tobbszorozes_status',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'adatszolgaltatas_kezelo' => 'adatszolgaltatas_kezelo',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ujgep'.
  $permissions['edit own field_ujgep'] = array(
    'name' => 'edit own field_ujgep',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_uzemelteto_datum'.
  $permissions['edit own field_uzemelteto_datum'] = array(
    'name' => 'edit own field_uzemelteto_datum',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_visszautasitas_indok'.
  $permissions['edit own field_visszautasitas_indok'] = array(
    'name' => 'edit own field_visszautasitas_indok',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'adatszolgaltatas_kezelo' => 'adatszolgaltatas_kezelo',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_zg_buntetogy'.
  $permissions['edit own field_zg_buntetogy'] = array(
    'name' => 'edit own field_zg_buntetogy',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_zg_tobbsz_statusz'.
  $permissions['edit own field_zg_tobbsz_statusz'] = array(
    'name' => 'edit own field_zg_tobbsz_statusz',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'adatszolgaltatas_kezelo' => 'adatszolgaltatas_kezelo',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own jogositas_alkalmankent_dj content'.
  $permissions['edit own jogositas_alkalmankent_dj content'] = array(
    'name' => 'edit own jogositas_alkalmankent_dj content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'adatszolgaltatas_kezelo' => 'adatszolgaltatas_kezelo',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own jogositas_alkalmankent_hatterz content'.
  $permissions['edit own jogositas_alkalmankent_hatterz content'] = array(
    'name' => 'edit own jogositas_alkalmankent_hatterz content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'adatszolgaltatas_kezelo' => 'adatszolgaltatas_kezelo',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own jogositas_atalanydijas_dj content'.
  $permissions['edit own jogositas_atalanydijas_dj content'] = array(
    'name' => 'edit own jogositas_atalanydijas_dj content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'adatszolgaltatas_kezelo' => 'adatszolgaltatas_kezelo',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own jogositas_atalanydijas_hatterz content'.
  $permissions['edit own jogositas_atalanydijas_hatterz content'] = array(
    'name' => 'edit own jogositas_atalanydijas_hatterz content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'adatszolgaltatas_kezelo' => 'adatszolgaltatas_kezelo',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own jogositas_darabonkent_dj content'.
  $permissions['edit own jogositas_darabonkent_dj content'] = array(
    'name' => 'edit own jogositas_darabonkent_dj content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'adatszolgaltatas_kezelo' => 'adatszolgaltatas_kezelo',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own jogositas_darabonkent_hatterzene content'.
  $permissions['edit own jogositas_darabonkent_hatterzene content'] = array(
    'name' => 'edit own jogositas_darabonkent_hatterzene content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'adatszolgaltatas_kezelo' => 'adatszolgaltatas_kezelo',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own jogositas_zenegep content'.
  $permissions['edit own jogositas_zenegep content'] = array(
    'name' => 'edit own jogositas_zenegep content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'adatszolgaltatas_kezelo' => 'adatszolgaltatas_kezelo',
      'zenegep_uzemelteto' => 'zenegep_uzemelteto',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own tobbszorozesenkenti_jogositas content'.
  $permissions['edit own tobbszorozesenkenti_jogositas content'] = array(
    'name' => 'edit own tobbszorozesenkenti_jogositas content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own tobbszorozesi_lista content'.
  $permissions['edit own tobbszorozesi_lista content'] = array(
    'name' => 'edit own tobbszorozesi_lista content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'adatszolgaltatas_kezelo' => 'adatszolgaltatas_kezelo',
    ),
    'module' => 'node',
  );

  // Exported permission: 'grant content access'.
  $permissions['grant content access'] = array(
    'name' => 'grant content access',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'content_access',
  );

  // Exported permission: 'grant own content access'.
  $permissions['grant own content access'] = array(
    'name' => 'grant own content access',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'content_access',
  );

  // Exported permission: 'revert own user revisions'.
  $permissions['revert own user revisions'] = array(
    'name' => 'revert own user revisions',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'user_revision',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'node',
  );

  // Exported permission: 'revert user revisions'.
  $permissions['revert user revisions'] = array(
    'name' => 'revert user revisions',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'user_revision',
  );

  // Exported permission: 'view field_adatszolgaltatas_idoszak'.
  $permissions['view field_adatszolgaltatas_idoszak'] = array(
    'name' => 'view field_adatszolgaltatas_idoszak',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
      'adatszolgaltatas_kezelo' => 'adatszolgaltatas_kezelo',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_adatszolgaltatasok'.
  $permissions['view field_adatszolgaltatasok'] = array(
    'name' => 'view field_adatszolgaltatasok',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
      'adatszolgaltatas_kezelo' => 'adatszolgaltatas_kezelo',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_anyja_neve'.
  $permissions['view field_anyja_neve'] = array(
    'name' => 'view field_anyja_neve',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
      'adatszolgaltatas_kezelo' => 'adatszolgaltatas_kezelo',
      'felhasznalo_kezelo' => 'felhasznalo_kezelo',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_atalany_valtas_feltetelei'.
  $permissions['view field_atalany_valtas_feltetelei'] = array(
    'name' => 'view field_atalany_valtas_feltetelei',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_atalanyeve'.
  $permissions['view field_atalanyeve'] = array(
    'name' => 'view field_atalanyeve',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_bankszamla'.
  $permissions['view field_bankszamla'] = array(
    'name' => 'view field_bankszamla',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
      'felhasznalo_kezelo' => 'felhasznalo_kezelo',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_belso_megjegyzes'.
  $permissions['view field_belso_megjegyzes'] = array(
    'name' => 'view field_belso_megjegyzes',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
      'felhasznalo_kezelo' => 'felhasznalo_kezelo',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_buntetougy'.
  $permissions['view field_buntetougy'] = array(
    'name' => 'view field_buntetougy',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_cegnev'.
  $permissions['view field_cegnev'] = array(
    'name' => 'view field_cegnev',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
      'adatszolgaltatas_kezelo' => 'adatszolgaltatas_kezelo',
      'felhasznalo_kezelo' => 'felhasznalo_kezelo',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_collection_szamlazas'.
  $permissions['view field_collection_szamlazas'] = array(
    'name' => 'view field_collection_szamlazas',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_dj_tagsag'.
  $permissions['view field_dj_tagsag'] = array(
    'name' => 'view field_dj_tagsag',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_elozo_uzemelteto'.
  $permissions['view field_elozo_uzemelteto'] = array(
    'name' => 'view field_elozo_uzemelteto',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_elozo_uzemeltetok'.
  $permissions['view field_elozo_uzemeltetok'] = array(
    'name' => 'view field_elozo_uzemeltetok',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_eszamla'.
  $permissions['view field_eszamla'] = array(
    'name' => 'view field_eszamla',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_feltetelek'.
  $permissions['view field_feltetelek'] = array(
    'name' => 'view field_feltetelek',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_file_frissitve'.
  $permissions['view field_file_frissitve'] = array(
    'name' => 'view field_file_frissitve',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_gyszam'.
  $permissions['view field_gyszam'] = array(
    'name' => 'view field_gyszam',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
      'adatszolgaltatas_kezelo' => 'adatszolgaltatas_kezelo',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_idoszak'.
  $permissions['view field_idoszak'] = array(
    'name' => 'view field_idoszak',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_indoklal'.
  $permissions['view field_indoklal'] = array(
    'name' => 'view field_indoklal',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
      'felhasznalo_kezelo' => 'felhasznalo_kezelo',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_jogdijertesito'.
  $permissions['view field_jogdijertesito'] = array(
    'name' => 'view field_jogdijertesito',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_jogi_csoport'.
  $permissions['view field_jogi_csoport'] = array(
    'name' => 'view field_jogi_csoport',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
      'adatszolgaltatas_kezelo' => 'adatszolgaltatas_kezelo',
      'felhasznalo_kezelo' => 'felhasznalo_kezelo',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_jogositas'.
  $permissions['view field_jogositas'] = array(
    'name' => 'view field_jogositas',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
      'adatszolgaltatas_kezelo' => 'adatszolgaltatas_kezelo',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_jogositas_2014'.
  $permissions['view field_jogositas_2014'] = array(
    'name' => 'view field_jogositas_2014',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
      'adatszolgaltatas_kezelo' => 'adatszolgaltatas_kezelo',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_jogositas_2015'.
  $permissions['view field_jogositas_2015'] = array(
    'name' => 'view field_jogositas_2015',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
      'adatszolgaltatas_kezelo' => 'adatszolgaltatas_kezelo',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_jogosult_nev'.
  $permissions['view field_jogosult_nev'] = array(
    'name' => 'view field_jogosult_nev',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
      'felhasznalo_kezelo' => 'felhasznalo_kezelo',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_kartya_kiadva'.
  $permissions['view field_kartya_kiadva'] = array(
    'name' => 'view field_kartya_kiadva',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_matrica_szamok'.
  $permissions['view field_matrica_szamok'] = array(
    'name' => 'view field_matrica_szamok',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_raktar_feltetelek'.
  $permissions['view field_raktar_feltetelek'] = array(
    'name' => 'view field_raktar_feltetelek',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_raktar_ido'.
  $permissions['view field_raktar_ido'] = array(
    'name' => 'view field_raktar_ido',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_regisztralo_szemelye'.
  $permissions['view field_regisztralo_szemelye'] = array(
    'name' => 'view field_regisztralo_szemelye',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
      'adatszolgaltatas_kezelo' => 'adatszolgaltatas_kezelo',
      'felhasznalo_kezelo' => 'felhasznalo_kezelo',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_statusz'.
  $permissions['view field_statusz'] = array(
    'name' => 'view field_statusz',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
      'felhasznalo_kezelo' => 'felhasznalo_kezelo',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_szamla_sorszam'.
  $permissions['view field_szamla_sorszam'] = array(
    'name' => 'view field_szamla_sorszam',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_szamlatartozas'.
  $permissions['view field_szamlatartozas'] = array(
    'name' => 'view field_szamlatartozas',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_szuletesi_ido'.
  $permissions['view field_szuletesi_ido'] = array(
    'name' => 'view field_szuletesi_ido',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
      'adatszolgaltatas_kezelo' => 'adatszolgaltatas_kezelo',
      'felhasznalo_kezelo' => 'felhasznalo_kezelo',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_teljes_nev'.
  $permissions['view field_teljes_nev'] = array(
    'name' => 'view field_teljes_nev',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
      'adatszolgaltatas_kezelo' => 'adatszolgaltatas_kezelo',
      'felhasznalo_kezelo' => 'felhasznalo_kezelo',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_tobbszorozes_status'.
  $permissions['view field_tobbszorozes_status'] = array(
    'name' => 'view field_tobbszorozes_status',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
      'adatszolgaltatas_kezelo' => 'adatszolgaltatas_kezelo',
      'felhasznalo_kezelo' => 'felhasznalo_kezelo',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ujgep'.
  $permissions['view field_ujgep'] = array(
    'name' => 'view field_ujgep',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
      'adatszolgaltatas_kezelo' => 'adatszolgaltatas_kezelo',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_uzemelteto_datum'.
  $permissions['view field_uzemelteto_datum'] = array(
    'name' => 'view field_uzemelteto_datum',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_visszautasitas_indok'.
  $permissions['view field_visszautasitas_indok'] = array(
    'name' => 'view field_visszautasitas_indok',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
      'adatszolgaltatas_kezelo' => 'adatszolgaltatas_kezelo',
      'felhasznalo_kezelo' => 'felhasznalo_kezelo',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_zg_buntetogy'.
  $permissions['view field_zg_buntetogy'] = array(
    'name' => 'view field_zg_buntetogy',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_zg_tobbsz_statusz'.
  $permissions['view field_zg_tobbsz_statusz'] = array(
    'name' => 'view field_zg_tobbsz_statusz',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
      'adatszolgaltatas_kezelo' => 'adatszolgaltatas_kezelo',
      'felhasznalo_kezelo' => 'felhasznalo_kezelo',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_adatszolgaltatas_idoszak'.
  $permissions['view own field_adatszolgaltatas_idoszak'] = array(
    'name' => 'view own field_adatszolgaltatas_idoszak',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_adatszolgaltatasok'.
  $permissions['view own field_adatszolgaltatasok'] = array(
    'name' => 'view own field_adatszolgaltatasok',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_anyja_neve'.
  $permissions['view own field_anyja_neve'] = array(
    'name' => 'view own field_anyja_neve',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_atalany_valtas_feltetelei'.
  $permissions['view own field_atalany_valtas_feltetelei'] = array(
    'name' => 'view own field_atalany_valtas_feltetelei',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_atalanyeve'.
  $permissions['view own field_atalanyeve'] = array(
    'name' => 'view own field_atalanyeve',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_bankszamla'.
  $permissions['view own field_bankszamla'] = array(
    'name' => 'view own field_bankszamla',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_belso_megjegyzes'.
  $permissions['view own field_belso_megjegyzes'] = array(
    'name' => 'view own field_belso_megjegyzes',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
      'felhasznalo_kezelo' => 'felhasznalo_kezelo',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_buntetougy'.
  $permissions['view own field_buntetougy'] = array(
    'name' => 'view own field_buntetougy',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_cegnev'.
  $permissions['view own field_cegnev'] = array(
    'name' => 'view own field_cegnev',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_collection_szamlazas'.
  $permissions['view own field_collection_szamlazas'] = array(
    'name' => 'view own field_collection_szamlazas',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_dj_tagsag'.
  $permissions['view own field_dj_tagsag'] = array(
    'name' => 'view own field_dj_tagsag',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_elozo_uzemelteto'.
  $permissions['view own field_elozo_uzemelteto'] = array(
    'name' => 'view own field_elozo_uzemelteto',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_elozo_uzemeltetok'.
  $permissions['view own field_elozo_uzemeltetok'] = array(
    'name' => 'view own field_elozo_uzemeltetok',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_eszamla'.
  $permissions['view own field_eszamla'] = array(
    'name' => 'view own field_eszamla',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_feltetelek'.
  $permissions['view own field_feltetelek'] = array(
    'name' => 'view own field_feltetelek',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_file_frissitve'.
  $permissions['view own field_file_frissitve'] = array(
    'name' => 'view own field_file_frissitve',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_gyszam'.
  $permissions['view own field_gyszam'] = array(
    'name' => 'view own field_gyszam',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_idoszak'.
  $permissions['view own field_idoszak'] = array(
    'name' => 'view own field_idoszak',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_indoklal'.
  $permissions['view own field_indoklal'] = array(
    'name' => 'view own field_indoklal',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
      'felhasznalo_kezelo' => 'felhasznalo_kezelo',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_jogdijertesito'.
  $permissions['view own field_jogdijertesito'] = array(
    'name' => 'view own field_jogdijertesito',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_jogi_csoport'.
  $permissions['view own field_jogi_csoport'] = array(
    'name' => 'view own field_jogi_csoport',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_jogositas'.
  $permissions['view own field_jogositas'] = array(
    'name' => 'view own field_jogositas',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'authenticated user' => 'authenticated user',
      'zenegep_uzemelteto' => 'zenegep_uzemelteto',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_jogositas_2014'.
  $permissions['view own field_jogositas_2014'] = array(
    'name' => 'view own field_jogositas_2014',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_jogositas_2015'.
  $permissions['view own field_jogositas_2015'] = array(
    'name' => 'view own field_jogositas_2015',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_jogosult_nev'.
  $permissions['view own field_jogosult_nev'] = array(
    'name' => 'view own field_jogosult_nev',
    'roles' => array(
      'DJ' => 'DJ',
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
      'felhasznalo_kezelo' => 'felhasznalo_kezelo',
      'hatterzene_szolgaltato' => 'hatterzene_szolgaltato',
      'zenegep_uzemelteto' => 'zenegep_uzemelteto',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_kartya_kiadva'.
  $permissions['view own field_kartya_kiadva'] = array(
    'name' => 'view own field_kartya_kiadva',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_matrica_szamok'.
  $permissions['view own field_matrica_szamok'] = array(
    'name' => 'view own field_matrica_szamok',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_raktar_feltetelek'.
  $permissions['view own field_raktar_feltetelek'] = array(
    'name' => 'view own field_raktar_feltetelek',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_raktar_ido'.
  $permissions['view own field_raktar_ido'] = array(
    'name' => 'view own field_raktar_ido',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_regisztralo_szemelye'.
  $permissions['view own field_regisztralo_szemelye'] = array(
    'name' => 'view own field_regisztralo_szemelye',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_statusz'.
  $permissions['view own field_statusz'] = array(
    'name' => 'view own field_statusz',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
      'felhasznalo_kezelo' => 'felhasznalo_kezelo',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_szamla_sorszam'.
  $permissions['view own field_szamla_sorszam'] = array(
    'name' => 'view own field_szamla_sorszam',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_szamlatartozas'.
  $permissions['view own field_szamlatartozas'] = array(
    'name' => 'view own field_szamlatartozas',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_szuletesi_ido'.
  $permissions['view own field_szuletesi_ido'] = array(
    'name' => 'view own field_szuletesi_ido',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_teljes_nev'.
  $permissions['view own field_teljes_nev'] = array(
    'name' => 'view own field_teljes_nev',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_tobbszorozes_status'.
  $permissions['view own field_tobbszorozes_status'] = array(
    'name' => 'view own field_tobbszorozes_status',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ujgep'.
  $permissions['view own field_ujgep'] = array(
    'name' => 'view own field_ujgep',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_uzemelteto_datum'.
  $permissions['view own field_uzemelteto_datum'] = array(
    'name' => 'view own field_uzemelteto_datum',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_visszautasitas_indok'.
  $permissions['view own field_visszautasitas_indok'] = array(
    'name' => 'view own field_visszautasitas_indok',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_zg_buntetogy'.
  $permissions['view own field_zg_buntetogy'] = array(
    'name' => 'view own field_zg_buntetogy',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_zg_tobbsz_statusz'.
  $permissions['view own field_zg_tobbsz_statusz'] = array(
    'name' => 'view own field_zg_tobbsz_statusz',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view own user revisions'.
  $permissions['view own user revisions'] = array(
    'name' => 'view own user revisions',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
    ),
    'module' => 'user_revision',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Változatok megtekintése' => 'Változatok megtekintése',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view user revisions'.
  $permissions['view user revisions'] = array(
    'name' => 'view user revisions',
    'roles' => array(
      'Rendszergazda' => 'Rendszergazda',
      'Számlázás' => 'Számlázás',
      'felhasznalo_kezelo' => 'felhasznalo_kezelo',
    ),
    'module' => 'user_revision',
  );

  return $permissions;
}

<?php
/**
 * @file
 * fomenu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function fomenu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_adataim-szerkesztse:user/me/edit
  $menu_links['main-menu_adataim-szerkesztse:user/me/edit'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/me/edit',
    'router_path' => 'user/%/edit',
    'link_title' => 'Adataim szerkesztése',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_adataim-szerkesztse:user/me/edit',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_sajt-adatok:user/me',
  );
  // Exported menu link: main-menu_adatszolgltats:adatszolgaltatas
  $menu_links['main-menu_adatszolgltats:adatszolgaltatas'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'adatszolgaltatas',
    'router_path' => 'adatszolgaltatas',
    'link_title' => 'Adatszolgáltatás',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_adatszolgltats:adatszolgaltatas',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_jogostsok:meglevo-jogositasok',
  );
  // Exported menu link: main-menu_adatszolgltatsok-kezelse:adatszolgaltatasok
  $menu_links['main-menu_adatszolgltatsok-kezelse:adatszolgaltatasok'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'adatszolgaltatasok',
    'router_path' => 'adatszolgaltatasok',
    'link_title' => 'Adatszolgáltatások kezelése',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_adatszolgltatsok-kezelse:adatszolgaltatasok',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'main-menu_adminisztrci:fajlok',
  );
  // Exported menu link: main-menu_adatszolgltatsok-kezelse:adatszolgaltatasok2
  $menu_links['main-menu_adatszolgltatsok-kezelse:adatszolgaltatasok2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'adatszolgaltatasok2',
    'router_path' => 'adatszolgaltatasok2',
    'link_title' => 'Adatszolgáltatások kezelése',
    'options' => array(
      'identifier' => 'main-menu_adatszolgltatsok-kezelse:adatszolgaltatasok2',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_adminisztrci:fajlok
  $menu_links['main-menu_adminisztrci:fajlok'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'fajlok',
    'router_path' => 'fajlok',
    'link_title' => 'Adminisztráció',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_adminisztrci:fajlok',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_belps:user/login
  $menu_links['main-menu_belps:user/login'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Belépés',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_belps:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_cmlap:<front>
  $menu_links['main-menu_cmlap:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Címlap',
    'options' => array(
      'identifier' => 'main-menu_cmlap:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_dj---alkalmanknti-jogosts:node/add/jogositas-alkalmankent-dj
  $menu_links['main-menu_dj---alkalmanknti-jogosts:node/add/jogositas-alkalmankent-dj'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/jogositas-alkalmankent-dj',
    'router_path' => 'node/add/jogositas-alkalmankent-dj',
    'link_title' => 'DJ - alkalmankénti jogosítás',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_dj---alkalmanknti-jogosts:node/add/jogositas-alkalmankent-dj',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_j-jogosts:meglevo-jogositasok',
  );
  // Exported menu link: main-menu_dj---alkalmanknti:ellenorzes/dj-alkalmankenti
  $menu_links['main-menu_dj---alkalmanknti:ellenorzes/dj-alkalmankenti'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'ellenorzes/dj-alkalmankenti',
    'router_path' => 'ellenorzes/dj-alkalmankenti',
    'link_title' => 'DJ - alkalmankénti',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_dj---alkalmanknti:ellenorzes/dj-alkalmankenti',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 1,
    'parent_identifier' => 'main-menu_ellenrzs:ellenorzes',
  );
  // Exported menu link: main-menu_dj---pldnyonknti-jogosts:node/add/jogositas-darabonkent-dj
  $menu_links['main-menu_dj---pldnyonknti-jogosts:node/add/jogositas-darabonkent-dj'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/jogositas-darabonkent-dj',
    'router_path' => 'node/add/jogositas-darabonkent-dj',
    'link_title' => 'DJ - példányonkénti jogosítás',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_dj---pldnyonknti-jogosts:node/add/jogositas-darabonkent-dj',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_j-jogosts:meglevo-jogositasok',
  );
  // Exported menu link: main-menu_dj---talny:ellenorzes/dj-atalany
  $menu_links['main-menu_dj---talny:ellenorzes/dj-atalany'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'ellenorzes/dj-atalany',
    'router_path' => 'ellenorzes/dj-atalany',
    'link_title' => 'DJ - átalány',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_dj---talny:ellenorzes/dj-atalany',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 1,
    'parent_identifier' => 'main-menu_ellenrzs:ellenorzes',
  );
  // Exported menu link: main-menu_dj---talnydjas-jogosts:node/11429
  $menu_links['main-menu_dj---talnydjas-jogosts:node/11429'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/11429',
    'router_path' => 'node/%',
    'link_title' => 'DJ - átalánydíjas jogosítás',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_dj---talnydjas-jogosts:node/11429',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_j-jogosts:meglevo-jogositasok',
  );
  // Exported menu link: main-menu_dj---talnydjas-jogosts:node/add/jogositas-atalanydijas-dj
  $menu_links['main-menu_dj---talnydjas-jogosts:node/add/jogositas-atalanydijas-dj'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/jogositas-atalanydijas-dj',
    'router_path' => 'node/add/jogositas-atalanydijas-dj',
    'link_title' => 'DJ - átalánydíjas jogosítás',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_dj---talnydjas-jogosts:node/add/jogositas-atalanydijas-dj',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_j-jogosts:meglevo-jogositasok',
  );
  // Exported menu link: main-menu_dj-alkalmanknti:jogositas-igenyek/dj-alkalmankenti
  $menu_links['main-menu_dj-alkalmanknti:jogositas-igenyek/dj-alkalmankenti'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'jogositas-igenyek/dj-alkalmankenti',
    'router_path' => 'jogositas-igenyek/dj-alkalmankenti',
    'link_title' => 'DJ alkalmankénti',
    'options' => array(
      'identifier' => 'main-menu_dj-alkalmanknti:jogositas-igenyek/dj-alkalmankenti',
    ),
    'module' => 'system',
    'hidden' => -1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 6,
    'customized' => 0,
    'parent_identifier' => 'main-menu_jogosts-krelmek:jogositas-igenyek',
  );
  // Exported menu link: main-menu_dj-pldnyonknti:jogositas-igenyek/dj-peldanyonkenti
  $menu_links['main-menu_dj-pldnyonknti:jogositas-igenyek/dj-peldanyonkenti'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'jogositas-igenyek/dj-peldanyonkenti',
    'router_path' => 'jogositas-igenyek/dj-peldanyonkenti',
    'link_title' => 'DJ példányonkénti',
    'options' => array(
      'identifier' => 'main-menu_dj-pldnyonknti:jogositas-igenyek/dj-peldanyonkenti',
    ),
    'module' => 'system',
    'hidden' => -1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 6,
    'customized' => 0,
    'parent_identifier' => 'main-menu_jogosts-krelmek:jogositas-igenyek',
  );
  // Exported menu link: main-menu_dj-talny:jogositas-igenyek/dj-atalany
  $menu_links['main-menu_dj-talny:jogositas-igenyek/dj-atalany'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'jogositas-igenyek/dj-atalany',
    'router_path' => 'jogositas-igenyek/dj-atalany',
    'link_title' => 'DJ átalány',
    'options' => array(
      'identifier' => 'main-menu_dj-talny:jogositas-igenyek/dj-atalany',
    ),
    'module' => 'system',
    'hidden' => -1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 4,
    'customized' => 0,
    'parent_identifier' => 'main-menu_jogosts-krelmek:jogositas-igenyek',
  );
  // Exported menu link: main-menu_ellenrzs:ellenorzes
  $menu_links['main-menu_ellenrzs:ellenorzes'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'ellenorzes',
    'router_path' => 'ellenorzes',
    'link_title' => 'Ellenőrzés',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_ellenrzs:ellenorzes',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_adminisztrci:fajlok',
  );
  // Exported menu link: main-menu_hinyz-adatszolgltatsok:hianyzo-adatszolg
  $menu_links['main-menu_hinyz-adatszolgltatsok:hianyzo-adatszolg'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'hianyzo-adatszolg',
    'router_path' => 'hianyzo-adatszolg',
    'link_title' => 'Hiányzó adatszolgáltatások',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_hinyz-adatszolgltatsok:hianyzo-adatszolg',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_adatszolgltatsok-kezelse:adatszolgaltatasok',
  );
  // Exported menu link: main-menu_httrzene---alkalmanknti-jogosts:node/add/jogositas-alkalmankent-hatterz
  $menu_links['main-menu_httrzene---alkalmanknti-jogosts:node/add/jogositas-alkalmankent-hatterz'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/jogositas-alkalmankent-hatterz',
    'router_path' => 'node/add/jogositas-alkalmankent-hatterz',
    'link_title' => 'Háttérzene - alkalmankénti jogosítás',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_httrzene---alkalmanknti-jogosts:node/add/jogositas-alkalmankent-hatterz',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_j-jogosts:meglevo-jogositasok',
  );
  // Exported menu link: main-menu_httrzene---alkalmanknti:ellenorzes/hatterzene-alkalmankenti
  $menu_links['main-menu_httrzene---alkalmanknti:ellenorzes/hatterzene-alkalmankenti'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'ellenorzes/hatterzene-alkalmankenti',
    'router_path' => 'ellenorzes/hatterzene-alkalmankenti',
    'link_title' => 'Háttérzene - alkalmankénti',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_httrzene---alkalmanknti:ellenorzes/hatterzene-alkalmankenti',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 4,
    'customized' => 1,
    'parent_identifier' => 'main-menu_ellenrzs:ellenorzes',
  );
  // Exported menu link: main-menu_httrzene---pldnyonknti-jogosts:node/add/jogositas-darabonkent-hatterzene
  $menu_links['main-menu_httrzene---pldnyonknti-jogosts:node/add/jogositas-darabonkent-hatterzene'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/jogositas-darabonkent-hatterzene',
    'router_path' => 'node/add/jogositas-darabonkent-hatterzene',
    'link_title' => 'Háttérzene - példányonkénti jogosítás',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_httrzene---pldnyonknti-jogosts:node/add/jogositas-darabonkent-hatterzene',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_j-jogosts:meglevo-jogositasok',
  );
  // Exported menu link: main-menu_httrzene---talny:ellenorzes/hatterzene-atalany
  $menu_links['main-menu_httrzene---talny:ellenorzes/hatterzene-atalany'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'ellenorzes/hatterzene-atalany',
    'router_path' => 'ellenorzes/hatterzene-atalany',
    'link_title' => 'Háttérzene - átalány',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_httrzene---talny:ellenorzes/hatterzene-atalany',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
    'parent_identifier' => 'main-menu_ellenrzs:ellenorzes',
  );
  // Exported menu link: main-menu_httrzene---talnydjas-jogosts:node/11429
  $menu_links['main-menu_httrzene---talnydjas-jogosts:node/11429'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/11429',
    'router_path' => 'node/%',
    'link_title' => 'Háttérzene - átalánydíjas jogosítás',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_httrzene---talnydjas-jogosts:node/11429',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_j-jogosts:meglevo-jogositasok',
  );
  // Exported menu link: main-menu_httrzene---talnydjas-jogosts:node/add/jogositas-atalanydijas-hatterz
  $menu_links['main-menu_httrzene---talnydjas-jogosts:node/add/jogositas-atalanydijas-hatterz'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/jogositas-atalanydijas-hatterz',
    'router_path' => 'node/add/jogositas-atalanydijas-hatterz',
    'link_title' => 'Háttérzene - átalánydíjas jogosítás',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_httrzene---talnydjas-jogosts:node/add/jogositas-atalanydijas-hatterz',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_j-jogosts:meglevo-jogositasok',
  );
  // Exported menu link: main-menu_httrzene-alkalmankenti:jogositas-igenyek/hatterzene-alkalmankenti
  $menu_links['main-menu_httrzene-alkalmankenti:jogositas-igenyek/hatterzene-alkalmankenti'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'jogositas-igenyek/hatterzene-alkalmankenti',
    'router_path' => 'jogositas-igenyek/hatterzene-alkalmankenti',
    'link_title' => 'Háttérzene Alkalmankenti',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_httrzene-alkalmankenti:jogositas-igenyek/hatterzene-alkalmankenti',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_jogosts-krelmek:jogositas-igenyek',
  );
  // Exported menu link: main-menu_httrzene-talny:jogositas-igenyek/hatterzene-atalany
  $menu_links['main-menu_httrzene-talny:jogositas-igenyek/hatterzene-atalany'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'jogositas-igenyek/hatterzene-atalany',
    'router_path' => 'jogositas-igenyek/hatterzene-atalany',
    'link_title' => 'Háttérzene átalány',
    'options' => array(
      'identifier' => 'main-menu_httrzene-talny:jogositas-igenyek/hatterzene-atalany',
    ),
    'module' => 'system',
    'hidden' => -1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 0,
    'parent_identifier' => 'main-menu_jogosts-krelmek:jogositas-igenyek',
  );
  // Exported menu link: main-menu_j-jogosts:meglevo-jogositasok
  $menu_links['main-menu_j-jogosts:meglevo-jogositasok'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'meglevo-jogositasok',
    'router_path' => 'meglevo-jogositasok',
    'link_title' => 'Új jogosítás',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_j-jogosts:meglevo-jogositasok',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_jogostsok:meglevo-jogositasok',
  );
  // Exported menu link: main-menu_jogosts-krelmek:jogositas-igenyek
  $menu_links['main-menu_jogosts-krelmek:jogositas-igenyek'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'jogositas-igenyek',
    'router_path' => 'jogositas-igenyek',
    'link_title' => 'Jogosítás kérelmek',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_jogosts-krelmek:jogositas-igenyek',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_adminisztrci:fajlok',
  );
  // Exported menu link: main-menu_jogostsok:meglevo-jogositasok
  $menu_links['main-menu_jogostsok:meglevo-jogositasok'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'meglevo-jogositasok',
    'router_path' => 'meglevo-jogositasok',
    'link_title' => 'Jogosítások',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_jogostsok:meglevo-jogositasok',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_kilps:user/logout
  $menu_links['main-menu_kilps:user/logout'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Kilépés',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_kilps:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: main-menu_levlklds:levelkuldes
  $menu_links['main-menu_levlklds:levelkuldes'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'levelkuldes',
    'router_path' => 'levelkuldes',
    'link_title' => 'Levélküldés',
    'options' => array(
      'identifier' => 'main-menu_levlklds:levelkuldes',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_adminisztrci:fajlok',
  );
  // Exported menu link: main-menu_meglv-jogostsok:meglevo-jogositasok
  $menu_links['main-menu_meglv-jogostsok:meglevo-jogositasok'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'meglevo-jogositasok',
    'router_path' => 'meglevo-jogositasok',
    'link_title' => 'Meglévő Jogosítások',
    'options' => array(
      'identifier' => 'main-menu_meglv-jogostsok:meglevo-jogositasok',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_jogostsok:meglevo-jogositasok',
  );
  // Exported menu link: main-menu_minden-jogosts:ellenorzes
  $menu_links['main-menu_minden-jogosts:ellenorzes'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'ellenorzes',
    'router_path' => 'ellenorzes',
    'link_title' => 'Minden jogosítás',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_minden-jogosts:ellenorzes',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_ellenrzs:ellenorzes',
  );
  // Exported menu link: main-menu_napl:naplo
  $menu_links['main-menu_napl:naplo'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'naplo',
    'router_path' => 'naplo',
    'link_title' => 'Napló',
    'options' => array(
      'attributes' => array(
        'title' => 'tevékenység napló',
      ),
      'identifier' => 'main-menu_napl:naplo',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_adminisztrci:fajlok',
  );
  // Exported menu link: main-menu_regisztrci:user/register
  $menu_links['main-menu_regisztrci:user/register'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/register',
    'router_path' => 'user/register',
    'link_title' => 'Regisztráció',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_regisztrci:user/register',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_regisztrcik:reg-aktivalas
  $menu_links['main-menu_regisztrcik:reg-aktivalas'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'reg-aktivalas',
    'router_path' => 'reg-aktivalas',
    'link_title' => 'Regisztrációk',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_regisztrcik:reg-aktivalas',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_adminisztrci:fajlok',
  );
  // Exported menu link: main-menu_sajt-adatok:user/me
  $menu_links['main-menu_sajt-adatok:user/me'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/me',
    'router_path' => 'user/%',
    'link_title' => 'Saját adatok',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_sajt-adatok:user/me',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_sajt-zenegpek:sajat-zenegepek
  $menu_links['main-menu_sajt-zenegpek:sajat-zenegepek'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'sajat-zenegepek',
    'router_path' => 'sajat-zenegepek',
    'link_title' => 'Saját zenegépek',
    'options' => array(
      'identifier' => 'main-menu_sajt-zenegpek:sajat-zenegepek',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_sajt-adatok:user/me',
  );
  // Exported menu link: main-menu_sszes-regisztrci:osszes-regisztracio
  $menu_links['main-menu_sszes-regisztrci:osszes-regisztracio'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'osszes-regisztracio',
    'router_path' => 'osszes-regisztracio',
    'link_title' => 'Összes regisztráció',
    'options' => array(
      'identifier' => 'main-menu_sszes-regisztrci:osszes-regisztracio',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_adminisztrci:fajlok',
  );
  // Exported menu link: main-menu_tbbszrzsenknti-jogosts:tobbszorozesenkenti_jogositas
  $menu_links['main-menu_tbbszrzsenknti-jogosts:tobbszorozesenkenti_jogositas'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'tobbszorozesenkenti_jogositas',
    'router_path' => 'tobbszorozesenkenti_jogositas',
    'link_title' => 'Többszörözésenkénti jogosítás',
    'options' => array(
      'identifier' => 'main-menu_tbbszrzsenknti-jogosts:tobbszorozesenkenti_jogositas',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
    'parent_identifier' => 'main-menu_j-jogosts:meglevo-jogositasok',
  );
  // Exported menu link: main-menu_tbbszrzsenknti-jogostsok-kezelse:tobbszorozesenkentiek
  $menu_links['main-menu_tbbszrzsenknti-jogostsok-kezelse:tobbszorozesenkentiek'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'tobbszorozesenkentiek',
    'router_path' => 'tobbszorozesenkentiek',
    'link_title' => 'Többszörözésenkénti jogosítások kezelése',
    'options' => array(
      'identifier' => 'main-menu_tbbszrzsenknti-jogostsok-kezelse:tobbszorozesenkentiek',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_zenegp-tbbszrzsenknti:jogositas-igenyek/zenegep',
  );
  // Exported menu link: main-menu_zenegp---darabonknti:node/add/jogositas-darabonkent-zenegep
  $menu_links['main-menu_zenegp---darabonknti:node/add/jogositas-darabonkent-zenegep'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/jogositas-darabonkent-zenegep',
    'router_path' => 'node/add',
    'link_title' => 'Zenegép - darabonkénti',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_zenegp---darabonknti:node/add/jogositas-darabonkent-zenegep',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'main-menu_j-jogosts:meglevo-jogositasok',
  );
  // Exported menu link: main-menu_zenegp-felvitele:node/add/jogositas-zenegep
  $menu_links['main-menu_zenegp-felvitele:node/add/jogositas-zenegep'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/jogositas-zenegep',
    'router_path' => 'node/add/jogositas-zenegep',
    'link_title' => 'Zenegép felvitele',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_zenegp-felvitele:node/add/jogositas-zenegep',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_jogostsok:meglevo-jogositasok',
  );
  // Exported menu link: main-menu_zenegp-talnydjas-negyedves:jogositas-igenyek/zenegep
  $menu_links['main-menu_zenegp-talnydjas-negyedves:jogositas-igenyek/zenegep'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'jogositas-igenyek/zenegep',
    'router_path' => 'jogositas-igenyek/zenegep',
    'link_title' => 'Zenegép Átalánydíjas (negyedéves)',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'query' => array(
        'jdij[]' => 'atalany-negyedev',
      ),
      'identifier' => 'main-menu_zenegp-talnydjas-negyedves:jogositas-igenyek/zenegep',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_jogosts-krelmek:jogositas-igenyek',
  );
  // Exported menu link: main-menu_zenegp-talnydjas-ves:jogositas-igenyek/zenegep
  $menu_links['main-menu_zenegp-talnydjas-ves:jogositas-igenyek/zenegep'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'jogositas-igenyek/zenegep',
    'router_path' => 'jogositas-igenyek/zenegep',
    'link_title' => 'Zenegép Átalánydíjas (éves)',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'query' => array(
        'jdij[]' => 'atalany-ev',
      ),
      'identifier' => 'main-menu_zenegp-talnydjas-ves:jogositas-igenyek/zenegep',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_jogosts-krelmek:jogositas-igenyek',
  );
  // Exported menu link: main-menu_zenegp-tbbszrzsenknti:jogositas-igenyek/zenegep
  $menu_links['main-menu_zenegp-tbbszrzsenknti:jogositas-igenyek/zenegep'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'jogositas-igenyek/zenegep',
    'router_path' => 'jogositas-igenyek/zenegep',
    'link_title' => 'Zenegép Többszörözésenkénti',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'query' => array(
        'jdij%5B%5D' => 'tobbszoroz',
      ),
      'identifier' => 'main-menu_zenegp-tbbszrzsenknti:jogositas-igenyek/zenegep',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_jogosts-krelmek:jogositas-igenyek',
  );
  // Exported menu link: main-menu_zenegpek:ellenorzes/zenegep
  $menu_links['main-menu_zenegpek:ellenorzes/zenegep'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'ellenorzes/zenegep',
    'router_path' => 'ellenorzes/zenegep',
    'link_title' => 'Zenegépek',
    'options' => array(
      'identifier' => 'main-menu_zenegpek:ellenorzes/zenegep',
    ),
    'module' => 'system',
    'hidden' => -1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_ellenrzs:ellenorzes',
  );
  // Exported menu link: main-menu_zg-ismtldsek:jogositas-igenyek/zg-ism
  $menu_links['main-menu_zg-ismtldsek:jogositas-igenyek/zg-ism'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'jogositas-igenyek/zg-ism',
    'router_path' => 'jogositas-igenyek/zg-ism',
    'link_title' => 'ZG ismétlődések',
    'options' => array(
      'identifier' => 'main-menu_zg-ismtldsek:jogositas-igenyek/zg-ism',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'main-menu_jogosts-krelmek:jogositas-igenyek',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Adataim szerkesztése');
  t('Adatszolgáltatás');
  t('Adatszolgáltatások kezelése');
  t('Adminisztráció');
  t('Belépés');
  t('Címlap');
  t('DJ - alkalmankénti');
  t('DJ - alkalmankénti jogosítás');
  t('DJ - példányonkénti jogosítás');
  t('DJ - átalány');
  t('DJ - átalánydíjas jogosítás');
  t('DJ alkalmankénti');
  t('DJ példányonkénti');
  t('DJ átalány');
  t('Ellenőrzés');
  t('Hiányzó adatszolgáltatások');
  t('Háttérzene - alkalmankénti');
  t('Háttérzene - alkalmankénti jogosítás');
  t('Háttérzene - példányonkénti jogosítás');
  t('Háttérzene - átalány');
  t('Háttérzene - átalánydíjas jogosítás');
  t('Háttérzene Alkalmankenti');
  t('Háttérzene átalány');
  t('Jogosítás kérelmek');
  t('Jogosítások');
  t('Kilépés');
  t('Levélküldés');
  t('Meglévő Jogosítások');
  t('Minden jogosítás');
  t('Napló');
  t('Regisztráció');
  t('Regisztrációk');
  t('Saját adatok');
  t('Saját zenegépek');
  t('Többszörözésenkénti jogosítás');
  t('Többszörözésenkénti jogosítások kezelése');
  t('ZG ismétlődések');
  t('Zenegép - darabonkénti');
  t('Zenegép Többszörözésenkénti');
  t('Zenegép felvitele');
  t('Zenegép Átalánydíjas (negyedéves)');
  t('Zenegép Átalánydíjas (éves)');
  t('Zenegépek');
  t('Összes regisztráció');
  t('Új jogosítás');


  return $menu_links;
}

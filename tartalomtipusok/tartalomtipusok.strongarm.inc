<?php
/**
 * @file
 * tartalomtipusok.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function tartalomtipusok_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_article';
  $strongarm->value = '0';
  $export['ant_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_jogositas_alkalmankent_dj';
  $strongarm->value = '1';
  $export['ant_jogositas_alkalmankent_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_jogositas_alkalmankent_hatterz';
  $strongarm->value = '1';
  $export['ant_jogositas_alkalmankent_hatterz'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_jogositas_alkalmankent_zenegep';
  $strongarm->value = '1';
  $export['ant_jogositas_alkalmankent_zenegep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_jogositas_atalanydijas_dj';
  $strongarm->value = '1';
  $export['ant_jogositas_atalanydijas_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_jogositas_atalanydijas_hatterz';
  $strongarm->value = '1';
  $export['ant_jogositas_atalanydijas_hatterz'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_jogositas_atalanydijas_zenegep';
  $strongarm->value = '1';
  $export['ant_jogositas_atalanydijas_zenegep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_jogositas_darabonkent_dj';
  $strongarm->value = '1';
  $export['ant_jogositas_darabonkent_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_jogositas_darabonkent_hatterzene';
  $strongarm->value = '1';
  $export['ant_jogositas_darabonkent_hatterzene'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_jogositas_darabonkent_zenegep';
  $strongarm->value = '1';
  $export['ant_jogositas_darabonkent_zenegep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_jogositas_zenegep';
  $strongarm->value = '1';
  $export['ant_jogositas_zenegep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_article';
  $strongarm->value = '';
  $export['ant_pattern_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_jogositas_alkalmankent_dj';
  $strongarm->value = '[node:content-type:name] - [node:author]';
  $export['ant_pattern_jogositas_alkalmankent_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_jogositas_alkalmankent_hatterz';
  $strongarm->value = '[node:content-type:name] - [node:author]';
  $export['ant_pattern_jogositas_alkalmankent_hatterz'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_jogositas_alkalmankent_zenegep';
  $strongarm->value = 'Zenegép Alkalmanként - [node:author] - #[node:nid]';
  $export['ant_pattern_jogositas_alkalmankent_zenegep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_jogositas_atalanydijas_dj';
  $strongarm->value = '[node:content-type:name] <?php echo isset($node->field_atalanyeve[LANGUAGE_NONE][0]) ? $node->field_atalanyeve[LANGUAGE_NONE][0][\'value\'] : date(\'Y\', $node->created); ?> - [node:author]';
  $export['ant_pattern_jogositas_atalanydijas_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_jogositas_atalanydijas_hatterz';
  $strongarm->value = '[node:content-type:name] <?php echo isset($node->field_atalanyeve[LANGUAGE_NONE][0]) ? $node->field_atalanyeve[LANGUAGE_NONE][0][\'value\'] : date(\'Y\', $node->created); ?> - [node:author]';
  $export['ant_pattern_jogositas_atalanydijas_hatterz'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_jogositas_atalanydijas_zenegep';
  $strongarm->value = 'Zenegép Átalánydíjas - [node:author] - #[node:nid]';
  $export['ant_pattern_jogositas_atalanydijas_zenegep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_jogositas_darabonkent_dj';
  $strongarm->value = '[node:content-type:name] - [node:author]';
  $export['ant_pattern_jogositas_darabonkent_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_jogositas_darabonkent_hatterzene';
  $strongarm->value = '[node:content-type:name] - [node:author]';
  $export['ant_pattern_jogositas_darabonkent_hatterzene'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_jogositas_darabonkent_zenegep';
  $strongarm->value = 'Zenegép Darabonkénti - [node:author] - #[node:nid]';
  $export['ant_pattern_jogositas_darabonkent_zenegep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_jogositas_zenegep';
  $strongarm->value = '[node:content-type:name], <?php echo \'[node:field-jogositas-2014]\' != \'\' && \'[node:field-jogositas-2014]\' != \'[node:field-jogos\'.\'itas-2014]\' ? \'[node:field-jogositas-2014]\' : \'[node:field-jogositas]\'; ?> - [node:author]';
  $export['ant_pattern_jogositas_zenegep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_tobbszorozesenkenti_jogositas';
  $strongarm->value = 'Többszörözésenkénti jogosítás<?php
//hivatkozott jogosítás betöltése
$ref_node = node_load( $node->field_kapcsolt_zenegep[\'und\'][0][\'target_id\']);

//gyári szám
echo \' #\' . $ref_node->field_gyszam[\'und\'][0][\'value\'];

//státusz
echo \' - \' . mb_convert_case($node->field_zg_tobbsz_statusz[\'und\'][0][\'value\'], MB_CASE_UPPER, "UTF-8");
?>
';
  $export['ant_pattern_tobbszorozesenkenti_jogositas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_tobbszorozesi_lista';
  $strongarm->value = 'Többszörözési lista: <?php
//watchdog(\'debug\', \'<pre>\'.print_r($node,1) . \'</pre>\');

//hivatkozott jogosítás betöltése
$ref_node = node_load( $node->field_entity_reference[\'und\'][0][\'target_id\']);
//watchdog(\'debug0\', \'<pre>\'.print_r($ref_node,1) . \'</pre>\');

//jogdíj típus
$tip["jogositas_alkalmankent_dj"] = "DJ - alkalmankénti jogosítás";
$tip["jogositas_atalanydijas_dj"] = "DJ - átalánydíjas jogosítás";
$tip["jogositas_darabonkent_dj"] = "DJ - példányonkénti jogosítás";
$tip["jogositas_alkalmankent_hatterz"] = "Háttérzene - alkalmankénti jogosítás";
$tip["jogositas_atalanydijas_hatterz"] = "Háttérzene - átalánydíjas jogosítás";
$tip["jogositas_darabonkent_hatterzene"] = "Háttérzene - példányonkénti jogosítás";
$tip["jogositas_zenegep"] = "Zenegép";
echo $tip[$ref_node->type];

//ZG gyári szám
if($ref_node->type == \'jogositas_zenegep\') {
  echo \' (gy.sz.: \' . $ref_node->field_gyszam[\'und\'][0][\'value\'] . \')\';
}

//$kapcs = explode(\':\', $node->field_jogositas_file_kapcsolat[\'und\'][0][\'endpoints\'][0]);
//$kapcs = node_load($kapcs[1]);
//echo $kapcs->title . \' - \' . $node->field_adatszolgaltatas_idoszak[\'und\'][0][\'value\'];

//időszak
echo \' - \' . $node->field_adatszolgaltatas_idoszak[\'und\'][0][\'value\'];

//státusz
echo \' - \' . mb_convert_case($node->field_tobbszorozes_status[\'und\'][0][\'value\'], MB_CASE_UPPER, "UTF-8");
?>';
  $export['ant_pattern_tobbszorozesi_lista'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_zenegep';
  $strongarm->value = 'Zenegép [node:field_gyszam] ([node:field_helyseg]) - [node:author] - #[node:nid]';
  $export['ant_pattern_zenegep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_article';
  $strongarm->value = 0;
  $export['ant_php_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_jogositas_alkalmankent_dj';
  $strongarm->value = 0;
  $export['ant_php_jogositas_alkalmankent_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_jogositas_alkalmankent_hatterz';
  $strongarm->value = 0;
  $export['ant_php_jogositas_alkalmankent_hatterz'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_jogositas_alkalmankent_zenegep';
  $strongarm->value = 0;
  $export['ant_php_jogositas_alkalmankent_zenegep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_jogositas_atalanydijas_dj';
  $strongarm->value = 1;
  $export['ant_php_jogositas_atalanydijas_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_jogositas_atalanydijas_hatterz';
  $strongarm->value = 1;
  $export['ant_php_jogositas_atalanydijas_hatterz'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_jogositas_atalanydijas_zenegep';
  $strongarm->value = 0;
  $export['ant_php_jogositas_atalanydijas_zenegep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_jogositas_darabonkent_dj';
  $strongarm->value = 0;
  $export['ant_php_jogositas_darabonkent_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_jogositas_darabonkent_hatterzene';
  $strongarm->value = 0;
  $export['ant_php_jogositas_darabonkent_hatterzene'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_jogositas_darabonkent_zenegep';
  $strongarm->value = 0;
  $export['ant_php_jogositas_darabonkent_zenegep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_jogositas_zenegep';
  $strongarm->value = 1;
  $export['ant_php_jogositas_zenegep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_tobbszorozesenkenti_jogositas';
  $strongarm->value = 1;
  $export['ant_php_tobbszorozesenkenti_jogositas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_tobbszorozesi_lista';
  $strongarm->value = 1;
  $export['ant_php_tobbszorozesi_lista'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_zenegep';
  $strongarm->value = 0;
  $export['ant_php_zenegep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_tobbszorozesenkenti_jogositas';
  $strongarm->value = '1';
  $export['ant_tobbszorozesenkenti_jogositas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_tobbszorozesi_lista';
  $strongarm->value = '1';
  $export['ant_tobbszorozesi_lista'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_zenegep';
  $strongarm->value = '2';
  $export['ant_zenegep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_jogositas_alkalmankent_dj';
  $strongarm->value = 0;
  $export['comment_anonymous_jogositas_alkalmankent_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_jogositas_alkalmankent_hatterz';
  $strongarm->value = 0;
  $export['comment_anonymous_jogositas_alkalmankent_hatterz'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_jogositas_atalanydijas_dj';
  $strongarm->value = 0;
  $export['comment_anonymous_jogositas_atalanydijas_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_jogositas_atalanydijas_hatterz';
  $strongarm->value = 0;
  $export['comment_anonymous_jogositas_atalanydijas_hatterz'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_jogositas_darabonkent_dj';
  $strongarm->value = 0;
  $export['comment_anonymous_jogositas_darabonkent_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_jogositas_darabonkent_hatterzene';
  $strongarm->value = 0;
  $export['comment_anonymous_jogositas_darabonkent_hatterzene'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_jogositas_zenegep';
  $strongarm->value = 0;
  $export['comment_anonymous_jogositas_zenegep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_tobbszorozesenkenti_jogositas';
  $strongarm->value = 0;
  $export['comment_anonymous_tobbszorozesenkenti_jogositas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_tobbszorozesi_lista';
  $strongarm->value = 0;
  $export['comment_anonymous_tobbszorozesi_lista'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_jogositas_alkalmankent_dj';
  $strongarm->value = 1;
  $export['comment_default_mode_jogositas_alkalmankent_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_jogositas_alkalmankent_hatterz';
  $strongarm->value = 1;
  $export['comment_default_mode_jogositas_alkalmankent_hatterz'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_jogositas_atalanydijas_dj';
  $strongarm->value = 1;
  $export['comment_default_mode_jogositas_atalanydijas_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_jogositas_atalanydijas_hatterz';
  $strongarm->value = 1;
  $export['comment_default_mode_jogositas_atalanydijas_hatterz'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_jogositas_darabonkent_dj';
  $strongarm->value = 1;
  $export['comment_default_mode_jogositas_darabonkent_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_jogositas_darabonkent_hatterzene';
  $strongarm->value = 1;
  $export['comment_default_mode_jogositas_darabonkent_hatterzene'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_jogositas_zenegep';
  $strongarm->value = 1;
  $export['comment_default_mode_jogositas_zenegep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_tobbszorozesenkenti_jogositas';
  $strongarm->value = 1;
  $export['comment_default_mode_tobbszorozesenkenti_jogositas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_tobbszorozesi_lista';
  $strongarm->value = 1;
  $export['comment_default_mode_tobbszorozesi_lista'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_jogositas_alkalmankent_dj';
  $strongarm->value = '50';
  $export['comment_default_per_page_jogositas_alkalmankent_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_jogositas_alkalmankent_hatterz';
  $strongarm->value = '50';
  $export['comment_default_per_page_jogositas_alkalmankent_hatterz'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_jogositas_atalanydijas_dj';
  $strongarm->value = '50';
  $export['comment_default_per_page_jogositas_atalanydijas_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_jogositas_atalanydijas_hatterz';
  $strongarm->value = '50';
  $export['comment_default_per_page_jogositas_atalanydijas_hatterz'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_jogositas_darabonkent_dj';
  $strongarm->value = '50';
  $export['comment_default_per_page_jogositas_darabonkent_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_jogositas_darabonkent_hatterzene';
  $strongarm->value = '50';
  $export['comment_default_per_page_jogositas_darabonkent_hatterzene'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_jogositas_zenegep';
  $strongarm->value = '50';
  $export['comment_default_per_page_jogositas_zenegep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_tobbszorozesenkenti_jogositas';
  $strongarm->value = '50';
  $export['comment_default_per_page_tobbszorozesenkenti_jogositas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_tobbszorozesi_lista';
  $strongarm->value = '50';
  $export['comment_default_per_page_tobbszorozesi_lista'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_jogositas_alkalmankent_dj';
  $strongarm->value = 1;
  $export['comment_form_location_jogositas_alkalmankent_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_jogositas_alkalmankent_hatterz';
  $strongarm->value = 1;
  $export['comment_form_location_jogositas_alkalmankent_hatterz'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_jogositas_atalanydijas_dj';
  $strongarm->value = 1;
  $export['comment_form_location_jogositas_atalanydijas_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_jogositas_atalanydijas_hatterz';
  $strongarm->value = 1;
  $export['comment_form_location_jogositas_atalanydijas_hatterz'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_jogositas_darabonkent_dj';
  $strongarm->value = 1;
  $export['comment_form_location_jogositas_darabonkent_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_jogositas_darabonkent_hatterzene';
  $strongarm->value = 1;
  $export['comment_form_location_jogositas_darabonkent_hatterzene'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_jogositas_zenegep';
  $strongarm->value = 1;
  $export['comment_form_location_jogositas_zenegep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_tobbszorozesenkenti_jogositas';
  $strongarm->value = 1;
  $export['comment_form_location_tobbszorozesenkenti_jogositas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_tobbszorozesi_lista';
  $strongarm->value = 1;
  $export['comment_form_location_tobbszorozesi_lista'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_jogositas_alkalmankent_dj';
  $strongarm->value = '1';
  $export['comment_jogositas_alkalmankent_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_jogositas_alkalmankent_hatterz';
  $strongarm->value = '1';
  $export['comment_jogositas_alkalmankent_hatterz'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_jogositas_atalanydijas_dj';
  $strongarm->value = '1';
  $export['comment_jogositas_atalanydijas_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_jogositas_atalanydijas_hatterz';
  $strongarm->value = '1';
  $export['comment_jogositas_atalanydijas_hatterz'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_jogositas_darabonkent_dj';
  $strongarm->value = '1';
  $export['comment_jogositas_darabonkent_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_jogositas_darabonkent_hatterzene';
  $strongarm->value = '1';
  $export['comment_jogositas_darabonkent_hatterzene'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_jogositas_zenegep';
  $strongarm->value = '1';
  $export['comment_jogositas_zenegep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_jogositas_alkalmankent_dj';
  $strongarm->value = '1';
  $export['comment_preview_jogositas_alkalmankent_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_jogositas_alkalmankent_hatterz';
  $strongarm->value = '1';
  $export['comment_preview_jogositas_alkalmankent_hatterz'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_jogositas_atalanydijas_dj';
  $strongarm->value = '1';
  $export['comment_preview_jogositas_atalanydijas_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_jogositas_atalanydijas_hatterz';
  $strongarm->value = '1';
  $export['comment_preview_jogositas_atalanydijas_hatterz'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_jogositas_darabonkent_dj';
  $strongarm->value = '1';
  $export['comment_preview_jogositas_darabonkent_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_jogositas_darabonkent_hatterzene';
  $strongarm->value = '1';
  $export['comment_preview_jogositas_darabonkent_hatterzene'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_jogositas_zenegep';
  $strongarm->value = '1';
  $export['comment_preview_jogositas_zenegep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_tobbszorozesenkenti_jogositas';
  $strongarm->value = '1';
  $export['comment_preview_tobbszorozesenkenti_jogositas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_tobbszorozesi_lista';
  $strongarm->value = '1';
  $export['comment_preview_tobbszorozesi_lista'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_jogositas_alkalmankent_dj';
  $strongarm->value = 1;
  $export['comment_subject_field_jogositas_alkalmankent_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_jogositas_alkalmankent_hatterz';
  $strongarm->value = 1;
  $export['comment_subject_field_jogositas_alkalmankent_hatterz'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_jogositas_atalanydijas_dj';
  $strongarm->value = 1;
  $export['comment_subject_field_jogositas_atalanydijas_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_jogositas_atalanydijas_hatterz';
  $strongarm->value = 1;
  $export['comment_subject_field_jogositas_atalanydijas_hatterz'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_jogositas_darabonkent_dj';
  $strongarm->value = 1;
  $export['comment_subject_field_jogositas_darabonkent_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_jogositas_darabonkent_hatterzene';
  $strongarm->value = 1;
  $export['comment_subject_field_jogositas_darabonkent_hatterzene'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_jogositas_zenegep';
  $strongarm->value = 1;
  $export['comment_subject_field_jogositas_zenegep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_tobbszorozesenkenti_jogositas';
  $strongarm->value = 1;
  $export['comment_subject_field_tobbszorozesenkenti_jogositas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_tobbszorozesi_lista';
  $strongarm->value = 1;
  $export['comment_subject_field_tobbszorozesi_lista'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_tobbszorozesenkenti_jogositas';
  $strongarm->value = '1';
  $export['comment_tobbszorozesenkenti_jogositas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_tobbszorozesi_lista';
  $strongarm->value = '1';
  $export['comment_tobbszorozesi_lista'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__jogositas_alkalmankent_dj';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '7',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__jogositas_alkalmankent_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__jogositas_alkalmankent_hatterz';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '7',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__jogositas_alkalmankent_hatterz'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__jogositas_atalanydijas_dj';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__jogositas_atalanydijas_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__jogositas_atalanydijas_hatterz';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '6',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__jogositas_atalanydijas_hatterz'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__jogositas_darabonkent_dj';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__jogositas_darabonkent_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__jogositas_darabonkent_hatterzene';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '6',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__jogositas_darabonkent_hatterzene'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__jogositas_zenegep';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__jogositas_zenegep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__tobbszorozesenkenti_jogositas';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '7',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__tobbszorozesenkenti_jogositas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__tobbszorozesi_lista';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__tobbszorozesi_lista'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_jogositas_alkalmankent_dj';
  $strongarm->value = '0';
  $export['language_content_type_jogositas_alkalmankent_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_jogositas_alkalmankent_hatterz';
  $strongarm->value = '0';
  $export['language_content_type_jogositas_alkalmankent_hatterz'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_jogositas_atalanydijas_dj';
  $strongarm->value = '0';
  $export['language_content_type_jogositas_atalanydijas_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_jogositas_atalanydijas_hatterz';
  $strongarm->value = '0';
  $export['language_content_type_jogositas_atalanydijas_hatterz'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_jogositas_darabonkent_dj';
  $strongarm->value = '0';
  $export['language_content_type_jogositas_darabonkent_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_jogositas_darabonkent_hatterzene';
  $strongarm->value = '0';
  $export['language_content_type_jogositas_darabonkent_hatterzene'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_jogositas_zenegep';
  $strongarm->value = '0';
  $export['language_content_type_jogositas_zenegep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_tobbszorozesenkenti_jogositas';
  $strongarm->value = '0';
  $export['language_content_type_tobbszorozesenkenti_jogositas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_tobbszorozesi_lista';
  $strongarm->value = '0';
  $export['language_content_type_tobbszorozesi_lista'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_jogositas_alkalmankent_dj';
  $strongarm->value = array();
  $export['menu_options_jogositas_alkalmankent_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_jogositas_alkalmankent_hatterz';
  $strongarm->value = array();
  $export['menu_options_jogositas_alkalmankent_hatterz'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_jogositas_atalanydijas_dj';
  $strongarm->value = array();
  $export['menu_options_jogositas_atalanydijas_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_jogositas_atalanydijas_hatterz';
  $strongarm->value = array();
  $export['menu_options_jogositas_atalanydijas_hatterz'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_jogositas_darabonkent_dj';
  $strongarm->value = array();
  $export['menu_options_jogositas_darabonkent_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_jogositas_darabonkent_hatterzene';
  $strongarm->value = array();
  $export['menu_options_jogositas_darabonkent_hatterzene'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_jogositas_zenegep';
  $strongarm->value = array();
  $export['menu_options_jogositas_zenegep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_tobbszorozesenkenti_jogositas';
  $strongarm->value = array();
  $export['menu_options_tobbszorozesenkenti_jogositas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_tobbszorozesi_lista';
  $strongarm->value = array();
  $export['menu_options_tobbszorozesi_lista'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_jogositas_alkalmankent_dj';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_jogositas_alkalmankent_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_jogositas_alkalmankent_hatterz';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_jogositas_alkalmankent_hatterz'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_jogositas_atalanydijas_dj';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_jogositas_atalanydijas_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_jogositas_atalanydijas_hatterz';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_jogositas_atalanydijas_hatterz'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_jogositas_darabonkent_dj';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_jogositas_darabonkent_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_jogositas_darabonkent_hatterzene';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_jogositas_darabonkent_hatterzene'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_jogositas_zenegep';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_jogositas_zenegep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_tobbszorozesenkenti_jogositas';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_tobbszorozesenkenti_jogositas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_tobbszorozesi_lista';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_tobbszorozesi_lista'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_jogositas_alkalmankent_dj';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_jogositas_alkalmankent_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_jogositas_alkalmankent_hatterz';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_jogositas_alkalmankent_hatterz'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_jogositas_atalanydijas_dj';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_jogositas_atalanydijas_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_jogositas_atalanydijas_hatterz';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_jogositas_atalanydijas_hatterz'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_jogositas_darabonkent_dj';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_jogositas_darabonkent_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_jogositas_darabonkent_hatterzene';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_jogositas_darabonkent_hatterzene'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_jogositas_zenegep';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_jogositas_zenegep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_tobbszorozesenkenti_jogositas';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
    2 => 'revision',
  );
  $export['node_options_tobbszorozesenkenti_jogositas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_tobbszorozesi_lista';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
    2 => 'revision',
  );
  $export['node_options_tobbszorozesi_lista'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_jogositas_alkalmankent_dj';
  $strongarm->value = '2';
  $export['node_preview_jogositas_alkalmankent_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_jogositas_alkalmankent_hatterz';
  $strongarm->value = '2';
  $export['node_preview_jogositas_alkalmankent_hatterz'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_jogositas_atalanydijas_dj';
  $strongarm->value = '2';
  $export['node_preview_jogositas_atalanydijas_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_jogositas_atalanydijas_hatterz';
  $strongarm->value = '2';
  $export['node_preview_jogositas_atalanydijas_hatterz'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_jogositas_darabonkent_dj';
  $strongarm->value = '2';
  $export['node_preview_jogositas_darabonkent_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_jogositas_darabonkent_hatterzene';
  $strongarm->value = '2';
  $export['node_preview_jogositas_darabonkent_hatterzene'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_jogositas_zenegep';
  $strongarm->value = '2';
  $export['node_preview_jogositas_zenegep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_tobbszorozesenkenti_jogositas';
  $strongarm->value = '0';
  $export['node_preview_tobbszorozesenkenti_jogositas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_tobbszorozesi_lista';
  $strongarm->value = '0';
  $export['node_preview_tobbszorozesi_lista'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_jogositas_alkalmankent_dj';
  $strongarm->value = 1;
  $export['node_submitted_jogositas_alkalmankent_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_jogositas_alkalmankent_hatterz';
  $strongarm->value = 1;
  $export['node_submitted_jogositas_alkalmankent_hatterz'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_jogositas_atalanydijas_dj';
  $strongarm->value = 1;
  $export['node_submitted_jogositas_atalanydijas_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_jogositas_atalanydijas_hatterz';
  $strongarm->value = 1;
  $export['node_submitted_jogositas_atalanydijas_hatterz'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_jogositas_darabonkent_dj';
  $strongarm->value = 1;
  $export['node_submitted_jogositas_darabonkent_dj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_jogositas_darabonkent_hatterzene';
  $strongarm->value = 1;
  $export['node_submitted_jogositas_darabonkent_hatterzene'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_jogositas_zenegep';
  $strongarm->value = 1;
  $export['node_submitted_jogositas_zenegep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_tobbszorozesenkenti_jogositas';
  $strongarm->value = 1;
  $export['node_submitted_tobbszorozesenkenti_jogositas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_tobbszorozesi_lista';
  $strongarm->value = 1;
  $export['node_submitted_tobbszorozesi_lista'] = $strongarm;

  return $export;
}

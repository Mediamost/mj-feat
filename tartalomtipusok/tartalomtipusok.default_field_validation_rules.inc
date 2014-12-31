<?php
/**
 * @file
 * tartalomtipusok.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function tartalomtipusok_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Zenegep_raktar_feltetel';
  $rule->name = 'Zenegep_raktar_feltetel';
  $rule->field_name = 'field_raktar_feltetelek';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'jogositas_zenegep';
  $rule->validator = 'field_validation_php_validator';
  $rule->settings = array(
    'data' => 'if($this->entity->field_raktarban[\'und\'][0][\'value\'] == \'Igen\' && (
  !isset($this->value)
  || empty($this->value)
  || $this->value != \'Elfogadom\' )
){
  ///watchdog( \'devel\', \'Raktárfeltétel not valid: \' . print_r($this->value,1) );
  $this->set_error();
}
//else watchdog( \'devel\', \'Raktárfeltétel Valid: \' . print_r($this->value,1) );',
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      3 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
      7 => 0,
    ),
    'errors' => 1,
  );
  $rule->error_message = 'Raktárba helyezés esetén el kell fogadnia az ezzel kapcsolatos feltételeket.';
  $export['Zenegep_raktar_feltetel'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Zenegep_raktar_ido';
  $rule->name = 'Zenegep_raktar_ido';
  $rule->field_name = 'field_raktar_ido';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'jogositas_zenegep';
  $rule->validator = 'field_validation_php_validator';
  $rule->settings = array(
    'data' => 'if($this->entity->field_raktarban[\'und\'][0][\'value\'] == \'Igen\' && (
  !isset($this->value)
  || empty($this->value) )
){
  ///watchdog( \'devel\', \'Raktáridő not valid: \' . print_r($this->value,1) );
  $this->set_error();
}
//else watchdog( \'devel\', \'Raktáridő Valid: \' . print_r($this->value,1) );',
    'bypass' => 1,
    'roles' => array(
      3 => '3',
      8 => '8',
      2 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
      7 => 0,
    ),
    'errors' => 1,
  );
  $rule->error_message = 'Raktárba helyezés esetén meg kell adnia az idejét is.';
  $export['Zenegep_raktar_ido'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'alkalmankenti_dj_adatszolg_szukseges';
  $rule->name = 'alkalmankenti_dj_adatszolg_szuks';
  $rule->field_name = 'field_tobbszorozesi_lista';
  $rule->col = 'fid';
  $rule->entity_type = 'node';
  $rule->bundle = 'jogositas_alkalmankent_dj';
  $rule->validator = 'field_validation_int_validator';
  $rule->settings = array(
    'min' => '1',
    'max' => '',
    'bypass' => 1,
    'roles' => array(
      8 => '8',
      3 => '3',
      2 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
      7 => 0,
      9 => 0,
      11 => 0,
      10 => 0,
    ),
    'errors' => 1,
  );
  $rule->error_message = '„Töbszörözési lista” mezőt ki kell tölteni.';
  $export['alkalmankenti_dj_adatszolg_szuks'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'alkalmankenti_hz_adatszolg_szukseges';
  $rule->name = 'alkalmankenti_hz_adatszolg_szuks';
  $rule->field_name = 'field_tobbszorozesi_lista';
  $rule->col = 'fid';
  $rule->entity_type = 'node';
  $rule->bundle = 'jogositas_alkalmankent_hatterz';
  $rule->validator = 'field_validation_int_validator';
  $rule->settings = array(
    'min' => '1',
    'max' => '',
    'bypass' => 1,
    'roles' => array(
      8 => '8',
      3 => '3',
      2 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
      7 => 0,
      9 => 0,
      11 => 0,
      10 => 0,
    ),
    'errors' => 1,
  );
  $rule->error_message = '„Töbszörözési lista” mezőt ki kell tölteni.';
  $export['alkalmankenti_hz_adatszolg_szuks'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'atalany_valtas_feltetelei';
  $rule->name = 'atalany_valtas_feltetelei';
  $rule->field_name = 'field_atalany_valtas_feltetelei';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'jogositas_zenegep';
  $rule->validator = 'field_validation_php_validator';
  $rule->settings = array(
    'data' => '$feltetel = false;

watchdog(\'debug\', print_r($this->entity->field_jogositas_2014,1));
//2015 = tobbszorozesenkenti
if ( 
  isset($this->entity->field_jogositas_2015[\'und\']) 
  && $this->entity->field_jogositas_2015[\'und\'][0][\'value\'] == \'tobbszoroz\'
) {
  
  //2014 = átalány
  if ( 
    isset($this->entity->field_jogositas_2014[\'und\']) && (
      $this->entity->field_jogositas_2014[\'und\'][0][\'value\'] == \'atalany-ev\' ||
      $this->entity->field_jogositas_2014[\'und\'][0][\'value\'] == \'atalany-negyedev\'
    )
  ) {
watchdog(\'debug\', \'2014=atalany\');

    $feltetel = true;
  }

  //2013 = átalány && 2014 = "semmi"
  if (
    isset($this->entity->field_jogositas[\'und\'])
    && (
      $this->entity->field_jogositas[\'und\'][0][\'value\'] == \'atalany-ev\' ||
      $this->entity->field_jogositas[\'und\'][0][\'value\'] == \'atalany-negyedev\'
    )
    && isset($this->entity->field_jogositas_2014[\'und\'])
    && (
      $this->entity->field_jogositas_2014[\'und\'][0][\'value\'] == \'semmi\'
      || $this->entity->field_jogositas_2014[\'und\'][0][\'value\'] == \'\'
    )
  ){
watchdog(\'debug\', \'2014=semmi\');

    $feltetel = true;
  }
}


//field_atalany_valtas_feltetelei nincs pipálva
if ($feltetel == true && (!isset($this->value) || empty($this->value) || $this->value != \'Elfogadom\' )) {
  $this->set_error();
}',
    'bypass' => 1,
    'roles' => array(
      8 => '8',
      3 => '3',
      2 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
      7 => 0,
      9 => 0,
      11 => 0,
      10 => 0,
    ),
    'errors' => 1,
  );
  $rule->error_message = 'Átalánydíjas rendszerből többszörözésenkénti jogosításra való áttérés esetén el kell fogadnia az ezzel kapcsolatos feltételeket.';
  $export['atalany_valtas_feltetelei'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'A rendezvény vége nem lehet korábban, mint a kezdete';
  $rule->name = 'dj_alkalmank_nt_ideje_nem_m_lt2';
  $rule->field_name = 'field_rendezveny_ideje';
  $rule->col = 'value2';
  $rule->entity_type = 'node';
  $rule->bundle = 'jogositas_alkalmankent_dj';
  $rule->validator = 'field_validation_date_range2_validator';
  $rule->settings = array(
    'cycle' => 'global',
    'min' => 'value',
    'max' => '',
    'reverse' => 0,
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      3 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
      7 => 0,
      8 => 0,
      9 => 0,
      10 => 0,
      11 => 0,
    ),
    'errors' => 1,
  );
  $rule->error_message = 'A rendezvény vége nem lehet korábban, mint a kezdete.';
  $export['dj_alkalmank_nt_ideje_nem_m_lt2'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'DJ_alkalmankent_feltetelek';
  $rule->name = 'dj_alkalmankent_feltetelek';
  $rule->field_name = 'field_feltetelek';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'jogositas_alkalmankent_dj';
  $rule->validator = 'field_validation_required_validator';
  $rule->settings = array(
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      3 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
      7 => 0,
    ),
    'errors' => 1,
  );
  $rule->error_message = 'A felhasználási feltételeket el kell fogadni.';
  $export['dj_alkalmankent_feltetelek'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'DJ_atalany_feltetelek';
  $rule->name = 'dj_atalany_feltetelek';
  $rule->field_name = 'field_feltetelek';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'jogositas_atalanydijas_dj';
  $rule->validator = 'field_validation_required_validator';
  $rule->settings = array(
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      3 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
      7 => 0,
    ),
    'errors' => 1,
  );
  $rule->error_message = 'A felhasználási feltételeket el kell fogadni.';
  $export['dj_atalany_feltetelek'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'DJ_darabonkent_feltetelek';
  $rule->name = 'dj_darabonkent_feltetelek';
  $rule->field_name = 'field_feltetelek';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'jogositas_darabonkent_dj';
  $rule->validator = 'field_validation_required_validator';
  $rule->settings = array(
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      3 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
      7 => 0,
    ),
    'errors' => 1,
  );
  $rule->error_message = 'A felhasználási feltételeket el kell fogadni.';
  $export['dj_darabonkent_feltetelek'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'DJ-szovetseg-djatalanyform';
  $rule->name = 'dj_szovetseg_djatalanyform';
  $rule->field_name = 'field_dj_szovetseg';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'jogositas_atalanydijas_dj';
  $rule->validator = 'field_validation_php_validator';
  $rule->settings = array(
    'data' => 'global $user;
if(substr(current_path() , 0 , 8) != \'node/add\') {
  //nem a tartalom hozzáadás oldalon vagyunk, nem kell ellenőrzés
  return TRUE;
}
$user = user_load($user->uid);
$mail = $user->mail;
//watchdog(\'debug path\', kpr(current_path(),1));

//email lekérdezése, hogy valóban tag-e (akkor is ha nem pipálta be)
$answer = file_get_contents(\'http://mahaszjogdij.hu/misc/djsz.php?email=\' . $mail);

//save to log
watchdog(\'MLE lekérés\', "Nodeform/DJ szövetség lekérdezés eredménye($mail): $answer");

$content = $answer;
$content = json_decode($content);

if($this->value == \'Tag\'){
  //bepipálta, hogy tag

  
  if($content->tagsag == \'IGEN\') {
    //valóban van tagsága
   
    if(sizeof($user->field_dj_szovetseg) < 1) {
      //nincs tagság beállítva, ez esetben megkapja
      //drupal_set_message("nincs tagság beállítva, ez esetben megkapja");
      $djsz_val[\'und\'][0][\'value\'] = "Tag";
      user_save($user, array(\'field_dj_szovetseg\' => $djsz_val));
    }

    return TRUE; //valid

  } 

  else if($content->tagsag == \'NEM\') {
  //hiába pipált, nincs tagsága

    if(sizeof($user->field_dj_szovetseg) >0) {
      //van a profiljában tagság beállítva, ez esetben azt elveszti
      //drupal_set_message("van tagság beállítva, ez esetben elveszti");
      user_save($user, array(\'field_dj_szovetseg\' => array()));
    }
    $this->set_error(array(\'[oka]\' => \'\')); //not valid
    return FALSE;
  }

  //se tagság, se nincs tagság : hiba
  else if(!empty($content->error)) $this->set_error(array(\'[oka]\' => $content->error)); //some error
  else{
    watchdog(\'debug\', "DJ szövetség nem lekérdezhető? (A)\\nemail: $mail\\nszerver válasz: $answer", NULL, WATCHDOG_CRITICAL);
    $this->set_error(array(\'[oka]\' => \' A lekérdezés jelenleg nem lehetséges.\')); //nincs eredmény :(
  } 
}

else{
  //nem pipálta be

  if($content->tagsag == \'IGEN\'  &&  sizeof($user->field_dj_szovetseg) < 1) {  
    //van tagsága, de a profiljában nem volt feltüntetve
    //ez esetben megkapja a profiljában is.
    //drupal_set_message("nincs tagság beállítva, ez esetben megkapja");
    $djsz_val[\'und\'][0][\'value\'] = "Tag";
    user_save($user, array(\'field_dj_szovetseg\' => $djsz_val));
    return TRUE;
  } 

  else if($content->tagsag == \'NEM\'  &&  sizeof($user->field_dj_szovetseg) >0) {
    //nincs tagsága, de a profiljában be volt állítva
    //ez esetben elveszti a profiljában is.
    //drupal_set_message("van tagság beállítva, ez esetben elveszti");
    user_save($user, array(\'field_dj_szovetseg\' => array()));
    return TRUE;
  }

  //nincs látható hibakezelés, mert nem pipálta a kedvezményt. Csak annyit tettünk, hogy szinkronba hoztuk a profilt is.
  return TRUE;
}',
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
      7 => 0,
      8 => 0,
      9 => 0,
      11 => 0,
      10 => 0,
      3 => 0,
    ),
    'errors' => 1,
  );
  $rule->error_message = 'Érvényes tagságodat a rendszer nem tudta azonosítani. Kérjük, vedd fel a kapcsolatot a DJ Szövetséggel! [oka]';
  $export['dj_szovetseg_djatalanyform'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'DJ-szovetseg-djpeldanyform';
  $rule->name = 'dj_szovetseg_djpeldanyform';
  $rule->field_name = 'field_dj_szovetseg';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'jogositas_darabonkent_dj';
  $rule->validator = 'field_validation_php_validator';
  $rule->settings = array(
    'data' => 'global $user;
if(substr(current_path() , 0 , 8) != \'node/add\') {
  //nem a tartalom hozzáadás oldalon vagyunk, nem kell ellenőrzés
  return TRUE;
}
$user = user_load($user->uid);
$mail = $user->mail;
//watchdog(\'debug\', \'<pre>\'.print_r($user->field_dj_szovetseg,1).\'</pre>\');

//email lekérdezése, hogy valóban tag-e (akkor is ha nem pipálta be)
$answer = file_get_contents(\'http://mahaszjogdij.hu/misc/djsz.php?email=\' . $mail);

//save to log
watchdog(\'MLE lekérés\', "Nodeform/DJ szövetség lekérdezés eredménye($mail): $answer");

$content = $answer;
$content = json_decode($content);

if($this->value == \'Tag\'){
  //bepipálta, hogy tag

  
  if($content->tagsag == \'IGEN\') {
    //valóban van tagsága
   
    if(sizeof($user->field_dj_szovetseg) < 1) {
      //nincs tagság beállítva, ez esetben megkapja
      //drupal_set_message("nincs tagság beállítva, ez esetben megkapja");
      $djsz_val[\'und\'][0][\'value\'] = "Tag";
      user_save($user, array(\'field_dj_szovetseg\' => $djsz_val));
    }

    return TRUE; //valid

  } 

  else if($content->tagsag == \'NEM\') {
  //hiába pipált, nincs tagsága

    if(sizeof($user->field_dj_szovetseg) >0) {
      //van a profiljában tagság beállítva, ez esetben azt elveszti
      //drupal_set_message("van tagság beállítva, ez esetben elveszti");
      user_save($user, array(\'field_dj_szovetseg\' => array()));
    }
    $this->set_error(array(\'[oka]\' => \'\')); //not valid
    return FALSE;
  }

  //se tagság, se nincs tagság : hiba
  else if(!empty($content->error)) $this->set_error(array(\'[oka]\' => $content->error)); //some error
  else{
    watchdog(\'debug\', "DJ szövetség nem lekérdezhető? (A)\\nemail: $mail\\nszerver válasz: $answer", NULL, WATCHDOG_CRITICAL);
    $this->set_error(array(\'[oka]\' => \' A lekérdezés jelenleg nem lehetséges.\')); //nincs eredmény :(
  } 
}

else{
  //nem pipálta be

  if($content->tagsag == \'IGEN\'  &&  sizeof($user->field_dj_szovetseg) < 1) {  
    //van tagsága, de a profiljában nem volt feltüntetve
    //ez esetben megkapja a profiljában is.
    //drupal_set_message("nincs tagság beállítva, ez esetben megkapja");
    $djsz_val[\'und\'][0][\'value\'] = "Tag";
    user_save($user, array(\'field_dj_szovetseg\' => $djsz_val));
    return TRUE;
  } 

  else if($content->tagsag == \'NEM\'  &&  sizeof($user->field_dj_szovetseg) >0) {
    //nincs tagsága, de a profiljában be volt állítva
    //ez esetben elveszti a profiljában is.
    //drupal_set_message("van tagság beállítva, ez esetben elveszti");
    user_save($user, array(\'field_dj_szovetseg\' => array()));
    return TRUE;
  }

  //nincs látható hibakezelés, mert nem pipálta a kedvezményt. Csak annyit tettünk, hogy szinkronba hoztuk a profilt is.
  return TRUE;
}',
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
      7 => 0,
      8 => 0,
      9 => 0,
      11 => 0,
      10 => 0,
      3 => 0,
    ),
    'errors' => 1,
  );
  $rule->error_message = 'Érvényes tagságodat a rendszer nem tudta azonosítani. Kérjük, vedd fel a kapcsolatot a DJ Szövetséggel! [oka]';
  $export['dj_szovetseg_djpeldanyform'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'hz_alk_24h';
  $rule->name = 'hz_alk_24h';
  $rule->field_name = 'field_rendezveny_ideje';
  $rule->col = 'value2';
  $rule->entity_type = 'node';
  $rule->bundle = 'jogositas_alkalmankent_hatterz';
  $rule->validator = 'field_validation_date_range2_validator';
  $rule->settings = array(
    'cycle' => 'global',
    'min' => '',
    'max' => 'value + 1 day',
    'reverse' => 0,
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      3 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
      7 => 0,
      8 => 0,
    ),
    'errors' => 1,
  );
  $rule->error_message = 'Egy alkalomra szóló jogosítás maximum 24 órás időtartamot jelent.';
  $export['hz_alk_24h'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'hz_alk_mult2';
  $rule->name = 'hz_alk_mult2';
  $rule->field_name = 'field_rendezveny_ideje';
  $rule->col = 'value2';
  $rule->entity_type = 'node';
  $rule->bundle = 'jogositas_alkalmankent_hatterz';
  $rule->validator = 'field_validation_date_range2_validator';
  $rule->settings = array(
    'cycle' => 'global',
    'min' => 'value',
    'max' => '',
    'reverse' => 0,
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      3 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
      7 => 0,
      8 => 0,
    ),
    'errors' => 1,
  );
  $rule->error_message = 'A rendezvény vége nem lehet korábban, mint a kezdete.';
  $export['hz_alk_mult2'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'HZ_alkalmankent_feltetelek';
  $rule->name = 'hz_alkalmankent_feltetelek';
  $rule->field_name = 'field_feltetelek';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'jogositas_alkalmankent_hatterz';
  $rule->validator = 'field_validation_required_validator';
  $rule->settings = array(
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      3 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
      7 => 0,
    ),
    'errors' => 1,
  );
  $rule->error_message = 'A felhasználási feltételeket el kell fogadni.';
  $export['hz_alkalmankent_feltetelek'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'HZ_atalany_feltetelek';
  $rule->name = 'hz_atalany_feltetelek';
  $rule->field_name = 'field_feltetelek';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'jogositas_atalanydijas_hatterz';
  $rule->validator = 'field_validation_required_validator';
  $rule->settings = array(
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      3 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
      7 => 0,
    ),
    'errors' => 1,
  );
  $rule->error_message = 'A felhasználási feltételeket el kell fogadni.';
  $export['hz_atalany_feltetelek'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'HZ_darabonkent_feltetelek';
  $rule->name = 'hz_darabonkent_feltetelek';
  $rule->field_name = 'field_feltetelek';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'jogositas_darabonkent_hatterzene';
  $rule->validator = 'field_validation_required_validator';
  $rule->settings = array(
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      3 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
      7 => 0,
    ),
    'errors' => 1,
  );
  $rule->error_message = 'A felhasználási feltételeket el kell fogadni.';
  $export['hz_darabonkent_feltetelek'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Időtartam nem 0';
  $rule->name = 'id_tartam_nem_0';
  $rule->field_name = 'field_rendezveny_ideje';
  $rule->col = 'value2';
  $rule->entity_type = 'node';
  $rule->bundle = 'jogositas_alkalmankent_dj';
  $rule->validator = 'field_validation_date_range2_validator';
  $rule->settings = array(
    'cycle' => 'global',
    'min' => 'value + 1 minute',
    'max' => '',
    'reverse' => 0,
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      3 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
      7 => 0,
      8 => 0,
      9 => 0,
      10 => 0,
      11 => 0,
    ),
    'errors' => 1,
  );
  $rule->error_message = 'A rendezvény vége nem eshet egybe a kezdetével.';
  $export['id_tartam_nem_0'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'max 24h';
  $rule->name = 'max_24h';
  $rule->field_name = 'field_rendezveny_ideje';
  $rule->col = 'value2';
  $rule->entity_type = 'node';
  $rule->bundle = 'jogositas_alkalmankent_dj';
  $rule->validator = 'field_validation_date_range2_validator';
  $rule->settings = array(
    'cycle' => 'global',
    'min' => '',
    'max' => 'value + 1 day',
    'reverse' => 0,
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      3 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
      7 => 0,
    ),
    'errors' => 1,
  );
  $rule->error_message = 'Egy alkalomra szóló jogosítás maximum 24 órás időtartamot jelent';
  $export['max_24h'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Zenegep_db_ujgep_tracklista';
  $rule->name = 'zenegep_db_ujgep_tracklista';
  $rule->field_name = 'field_tobbszorozesi_lista';
  $rule->col = 'fid';
  $rule->entity_type = 'node';
  $rule->bundle = 'jogositas_zenegep';
  $rule->validator = 'field_validation_php_validator';
  $rule->settings = array(
    'data' => 'if($this->entity->field_jogositas_2014[\'und\'][0][\'value\'] == \'tobbszoroz\' 
  && $this->entity->field_ujgep[\'und\'][0][\'value\']  == \'uj\' && (
  !isset($this->value)
  || empty($this->value)
  || $this->value < 1 )
){
//  watchdog( \'devel\', \'trackfile not valid: \' . print_r($this->value,1) . \'   jogsts: \' . print_r($this->entity->field_jogositas_2014[\'und\'][0][\'value\'],1) . \'   ujgp: \' . print_r($this->entity->field_ujgep[\'und\'][0][\'value\'],1) );
  $this->set_error();
}
//else   watchdog( \'devel\', \'trackfile valid: \' . print_r($this->value,1) . \'   jogsts: \' . print_r($this->entity->field_jogositas_2014[\'und\'][0][\'value\'],1) . \'   ujgp: \' . print_r($this->entity->field_ujgep[\'und\'][0][\'value\'],1) );
',
    'bypass' => 1,
    'roles' => array(
      3 => '3',
      2 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
      7 => 0,
      8 => 0,
      9 => 0,
      11 => 0,
      10 => 0,
    ),
    'errors' => 1,
  );
  $rule->error_message = 'Kötelező többszörözési listát (tracklista) feltölteni új zenegéphez, ha többszörözésenkénti jogdíjat választ.';
  $export['zenegep_db_ujgep_tracklista'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'zenegep_feltetelek';
  $rule->name = 'zenegep_feltetelek';
  $rule->field_name = 'field_feltetelek';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'jogositas_zenegep';
  $rule->validator = 'field_validation_required_validator';
  $rule->settings = array(
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      3 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
      7 => 0,
    ),
    'errors' => 1,
  );
  $rule->error_message = 'A felhasználási feltételeket el kell fogadni.';
  $export['zenegep_feltetelek'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'ZG_helyseg';
  $rule->name = 'zg_helyseg';
  $rule->field_name = 'field_helyseg';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'jogositas_zenegep';
  $rule->validator = 'field_validation_php_validator';
  $rule->settings = array(
    'data' => 'if($this->entity->field_raktarban[\'und\'][0][\'value\'] != \'Igen\' && (
  !isset($this->value)
  || empty($this->value) )
){
  ///watchdog( \'devel\', \' not valid: \' . print_r($this->value,1) );
  $this->set_error();
}
//else watchdog( \'devel\', \'Valid: \' . print_r($this->value,1) );',
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      3 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
      7 => 0,
    ),
    'errors' => 1,
  );
  $rule->error_message = '„[field-name]” mezőt ki kell tölteni.';
  $export['zg_helyseg'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'ZG_helyszinnev';
  $rule->name = 'zg_helyszinnev';
  $rule->field_name = 'field_helyszin_nev';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'jogositas_zenegep';
  $rule->validator = 'field_validation_php_validator';
  $rule->settings = array(
    'data' => 'if($this->entity->field_raktarban[\'und\'][0][\'value\'] != \'Igen\' && (
  !isset($this->value)
  || empty($this->value) )
){
  ///watchdog( \'devel\', \' not valid: \' . print_r($this->value,1) );
  $this->set_error();
}
//else watchdog( \'devel\', \' Valid: \' . print_r($this->value,1) );',
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      3 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
      7 => 0,
    ),
    'errors' => 1,
  );
  $rule->error_message = '„[field-name]” mezőt ki kell tölteni.';
  $export['zg_helyszinnev'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'ZG_irszam';
  $rule->name = 'zg_irszam';
  $rule->field_name = 'field_iranyitoszam';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'jogositas_zenegep';
  $rule->validator = 'field_validation_php_validator';
  $rule->settings = array(
    'data' => 'if($this->entity->field_raktarban[\'und\'][0][\'value\'] != \'Igen\' && (
  !isset($this->value)
  || empty($this->value) )
){
  ///watchdog( \'devel\', \' not valid: \' . print_r($this->value,1) );
  $this->set_error();
}
//else watchdog( \'devel\', \'Valid: \' . print_r($this->value,1) );',
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      3 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
      7 => 0,
    ),
    'errors' => 1,
  );
  $rule->error_message = '„[field-name]” mezőt ki kell tölteni.';
  $export['zg_irszam'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'ZG jogdijtipus 2014 kotelezo';
  $rule->name = 'zg_jogdijtipus_2014_kotelezo';
  $rule->field_name = 'field_jogositas_2014';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'jogositas_zenegep';
  $rule->validator = 'field_validation_required_validator';
  $rule->settings = array(
    'bypass' => 1,
    'roles' => array(
      8 => '8',
      3 => '3',
      2 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
      7 => 0,
      9 => 0,
      11 => 0,
      10 => 0,
    ),
    'errors' => 1,
  );
  $rule->error_message = '„[field-name]” mezőt ki kell tölteni.';
  $export['zg_jogdijtipus_2014_kotelezo'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'ZG jogdijtipus 2015 kotelezo';
  $rule->name = 'zg_jogdijtipus_2015_kotelezo';
  $rule->field_name = 'field_jogositas_2015';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'jogositas_zenegep';
  $rule->validator = 'field_validation_required_validator';
  $rule->settings = array(
    'bypass' => 1,
    'roles' => array(
      8 => '8',
      3 => '3',
      2 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
      7 => 0,
      9 => 0,
      11 => 0,
      10 => 0,
    ),
    'errors' => 1,
  );
  $rule->error_message = '„[field-name]” mezőt ki kell tölteni.';
  $export['zg_jogdijtipus_2015_kotelezo'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'ZG_utca';
  $rule->name = 'zg_utca';
  $rule->field_name = 'field_utca';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'jogositas_zenegep';
  $rule->validator = 'field_validation_php_validator';
  $rule->settings = array(
    'data' => 'if($this->entity->field_raktarban[\'und\'][0][\'value\'] != \'Igen\' && (
  !isset($this->value)
  || empty($this->value) )
){
  ///watchdog( \'devel\', \' not valid: \' . print_r($this->value,1) );
  $this->set_error();
}
//else watchdog( \'devel\', \'Valid: \' . print_r($this->value,1) );',
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      3 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
      7 => 0,
    ),
    'errors' => 1,
  );
  $rule->error_message = '„[field-name]” mezőt ki kell tölteni.';
  $export['zg_utca'] = $rule;

  return $export;
}

<?php
/**
 * @file
 * user_fields.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function user_fields_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Cégjegyzésre jogosult ';
  $rule->name = 'Cégjegyzésre jogosult';
  $rule->field_name = 'field_ceg_jogosult';
  $rule->col = 'value';
  $rule->entity_type = 'user';
  $rule->bundle = 'user';
  $rule->validator = 'field_validation_php_validator';
  $rule->settings = array(
    'data' => 'if($this->entity->field_regisztralo_szemelye[\'und\'][0][\'value\'] !== \'magan\' && $this->value == \'\'){
  $this->set_error();
}',
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
  $rule->error_message = '<span class="error-msg-field-ceg-jogosult">„[field-name]” mezőt ki kell tölteni.</span>';
  $export['Cégjegyzésre jogosult'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'DJ-szovetseg';
  $rule->name = 'DJ-szovetseg';
  $rule->field_name = 'field_dj_szovetseg';
  $rule->col = 'value';
  $rule->entity_type = 'user';
  $rule->bundle = 'user';
  $rule->validator = 'field_validation_php_validator';
  $rule->settings = array(
    'data' => 'global $user;
$mail = $this->entity->mail;
if($user->uid == 1 || $user->uid == 182 || $user->uid == 157 || $user->uid == 1033 || $mail == "mthatvan+tesztelek@gmail.com") {
  $mail = "jeszenszkyzsolt@djszovetseg.hu"; //teszthez
}

if($this->value == \'Tag\'){
  //email lekérdezése, hogy valóban tag-e
  $answer = file_get_contents(\'http://mahaszjogdij.hu/misc/djsz.php?email=\' . $mail);
  $content = $answer;
  $content = json_decode($content);
  if($content->tagsag == \'IGEN\') return TRUE; //valid
  else if($content->tagsag == \'NEM\') $this->set_error(array(\'[oka]\' => \'\')); //not valid
  else if(!empty($content->error)) $this->set_error(array(\'[oka]\' => $content->error)); //some error
  else{
    watchdog(\'debug\', "DJ szövetség nem lekérdezhető?\\nemail: $mail\\nszerver válasz: $answer", NULL, WATCHDOG_CRITICAL);
    $this->set_error(array(\'[oka]\' => \'A lekérdezés jelenleg nem lehetséges.\')); //nincs eredmény :(
  } 
}
else return TRUE; //nincs ellenőrzés, nem pipálta be

//}else return TRUE;',
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
  $export['DJ-szovetseg'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Szül idő';
  $rule->name = 'Szül idő';
  $rule->field_name = 'field_szuletesi_ido';
  $rule->col = 'value';
  $rule->entity_type = 'user';
  $rule->bundle = 'user';
  $rule->validator = 'field_validation_php_validator';
  $rule->settings = array(
    'data' => 'if($this->entity->field_regisztralo_szemelye[\'und\'][0][\'value\'] == \'magan\' && (
  ( !is_array($this->value) && strlen($this->value) < 10 ) //1990-12-01
  || is_array($this->value)  //részben kitöltött adatok tömbként vannak jelen
)){
  //watchdog( \'devel\', \'Not valid: \' . print_r($this->value,1) );
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
  $rule->error_message = '<span class="error-msg-field-szuletesi-ido">„[field-name]” mezőt ki kell tölteni.</span>';
  $export['Szül idő'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'adoszam';
  $rule->name = 'adoszam';
  $rule->field_name = 'field_adoszam';
  $rule->col = 'value';
  $rule->entity_type = 'user';
  $rule->bundle = 'user';
  $rule->validator = 'field_validation_php_validator';
  $rule->settings = array(
    'data' => 'if($this->entity->field_regisztralo_szemelye[\'und\'][0][\'value\'] !== \'magan\' && $this->value == \'\'){
  $this->set_error();
}',
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      3 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
      7 => 0,
    ),
    'errors' => 0,
  );
  $rule->error_message = '<span class="error-msg-field-adoszam">„[field-name]” mezőt ki kell tölteni.</span>';
  $export['adoszam'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'anyja';
  $rule->name = 'anyja';
  $rule->field_name = 'field_anyja_neve';
  $rule->col = 'value';
  $rule->entity_type = 'user';
  $rule->bundle = 'user';
  $rule->validator = 'field_validation_php_validator';
  $rule->settings = array(
    'data' => 'if($this->entity->field_regisztralo_szemelye[\'und\'][0][\'value\'] == \'magan\' && $this->value == \'\'){
  $this->set_error();
}',
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      3 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
      7 => 0,
    ),
    'errors' => 0,
  );
  $rule->error_message = '<span class="error-msg-field-anyja-neve">„[field-name]” mezőt ki kell tölteni.</span>';
  $export['anyja'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'ceges-nev';
  $rule->name = 'ceges-nev';
  $rule->field_name = 'field_cegnev';
  $rule->col = 'value';
  $rule->entity_type = 'user';
  $rule->bundle = 'user';
  $rule->validator = 'field_validation_php_validator';
  $rule->settings = array(
    'data' => 'if($this->entity->field_regisztralo_szemelye[\'und\'][0][\'value\'] !== \'magan\' && $this->value == \'\'){
  $this->set_error();
}',
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      3 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
      7 => 0,
    ),
    'errors' => 0,
  );
  $rule->error_message = '<span class="error-msg-field-cegnev">„[field-name]” mezőt ki kell tölteni.</span>';
  $export['ceges-nev'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'emailek egyezése';
  $rule->name = 'emailek egyezése';
  $rule->field_name = 'field_kapcsolattarto_email';
  $rule->col = 'value';
  $rule->entity_type = 'user';
  $rule->bundle = 'user';
  $rule->validator = 'field_validation_php_validator';
  $rule->settings = array(
    'data' => '//this:  field_email[\'und\'][0][\'email\']
if($this->entity->field_regisztralo_szemelye[\'und\'][0][\'value\'] == \'magan\' && $this->value !== $this->entity->mail){
  $this->set_error();
}',
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      3 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
    ),
    'errors' => 1,
  );
  $rule->error_message = 'Az utolsó oldalon szereplő e-mail címnek egyeznie kell a kapcsolattartó email címével.';
  $export['emailek egyezése'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'magan-nev';
  $rule->name = 'magan-nev';
  $rule->field_name = 'field_teljes_nev';
  $rule->col = 'value';
  $rule->entity_type = 'user';
  $rule->bundle = 'user';
  $rule->validator = 'field_validation_php_validator';
  $rule->settings = array(
    'data' => 'if($this->entity->field_regisztralo_szemelye[\'und\'][0][\'value\'] == \'magan\' && $this->value == \'\'){
  $this->set_error();
}',
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      3 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
      7 => 0,
    ),
    'errors' => 0,
  );
  $rule->error_message = '<span class="error-msg-field-teljes-nev">„[field-name]” mezőt ki kell tölteni.</span>';
  $export['magan-nev'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Számlaszám';
  $rule->name = 'szamlaszam';
  $rule->field_name = 'field_bankszamla';
  $rule->col = 'value';
  $rule->entity_type = 'user';
  $rule->bundle = 'user';
  $rule->validator = 'field_validation_php_validator';
  $rule->settings = array(
    'data' => 'if($this->entity->field_regisztralo_szemelye[\'und\'][0][\'value\'] !== \'magan\' && (
    !isset($this->value) || empty($this->value) )
){
  $this->set_error();
}',
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
  $rule->error_message = '<span class="error-msg-field-bankszamla">„[field-name]” mezőt ki kell tölteni.</span>';
  $export['szamlaszam'] = $rule;

  return $export;
}

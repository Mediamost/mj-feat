<?php
/**
 * @file
 * javascript.js_injector_rules.inc
 */

/**
 * Implements hook_js_injector_rule().
 */
function javascript_js_injector_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 1;
  $rule->name = 'Login page';
  $rule->description = 'focus username';
  $rule->js = '(function($){ 
  $(\'#edit-name\').focus();
})(jQuery)';
  $rule->position = 'footer';
  $rule->preprocess = 0;
  $rule->inline = 1;
  $rule->page_visibility = 1;
  $rule->page_visibility_pages = 'user/login';
  $export['Login page'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 1;
  $rule->name = 'Sablon szövegek indokláshoz';
  $rule->description = 'Többszörözési lista visszautasítás oka mezőhöz sablon szövegek beillesztése';
  $rule->js = 'if( jQuery(\'.indoklas-sablon\') ){
  jQuery(document).delegate(\'.indoklas-sablon li\', \'click\', function(){
    jQuery(\'#edit-field-visszautasitas-indok-und-0-value\').val(  jQuery(this).text()  );
    jQuery(\'#edit-bundle-tobbszorozesi-lista-field-visszautasitas-indok-und-0-value\').val(  jQuery(this).text()  );  //listaoldali művelethez
  });
}';
  $rule->position = 'header';
  $rule->preprocess = 1;
  $rule->inline = 0;
  $rule->page_visibility = 1;
  $rule->page_visibility_pages = 'node/*/edit
adatszolgaltatasok
adatszolgaltatasok/*';
  $export['Sablon szövegek indokláshoz'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 1;
  $rule->name = 'jelszó rezet';
  $rule->description = 'Jelszó reset aktiváló link után jut ide * preprocess JS esetén nem működik';
  $rule->js = '//jelszo rezet
(function($){
    //adding urlhash to the reset pass button\'s action url, to jump directly to the password
    var action = $(\'form#user-pass-reset\').attr(\'action\');
    $(\'form#user-pass-reset\').attr( \'action\', action + \'#user_user_form_group_alap\' );
})(jQuery)';
  $rule->position = 'footer';
  $rule->preprocess = 0;
  $rule->inline = 0;
  $rule->page_visibility = 1;
  $rule->page_visibility_pages = 'user/reset/*';
  $export['jelszó rezet'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 1;
  $rule->name = 'jogositas-urlap';
  $rule->description = 'Jogosítás űrlap';
  $rule->js = '(function($){

    //szövegek
    var kotelezo = \'<span class="form-required" title="Szükséges mező.">*</span>\';

    //feltétel mindnél van
    $(\'#edit-field-feltetelek\').find(\'label\').eq(0).append(kotelezo);

    //számlázási név és postai cím mezők letiltása
    $(\'#edit-field-szamla-nev-und-0-value\').attr(\'disabled\',\'disabled\');
    $(\'#edit-field-szamla-helyiseg-und-0-value\').attr(\'disabled\',\'disabled\');
    $(\'#edit-field-szamla-iranyitoszam-und-0-value\').attr(\'disabled\',\'disabled\');
    $(\'#edit-field-szamla-utca-und-0-value\').attr(\'disabled\',\'disabled\');
    $(\'#edit-field-posta-nev-und-0-value\').attr(\'disabled\',\'disabled\');
    $(\'#edit-field-posta-varos-und-0-value\').attr(\'disabled\',\'disabled\');
    $(\'#edit-field-posta-iranyitoszam-und-0-value\').attr(\'disabled\',\'disabled\');
    $(\'#edit-field-posta-utca-und-0-value\').attr(\'disabled\',\'disabled\');

    //Mezők engedélyezése
    $(\'#ena-szlamod\').click(function(e){
        $(\'#edit-field-szamla-nev-und-0-value\').removeAttr(\'disabled\');
        $(\'#edit-field-szamla-helyiseg-und-0-value\').removeAttr(\'disabled\');
        $(\'#edit-field-szamla-iranyitoszam-und-0-value\').removeAttr(\'disabled\');
        $(\'#edit-field-szamla-utca-und-0-value\').removeAttr(\'disabled\');
        $(\'#edit-field-szamla-nev-und-0-value\').focus().select();
        e.preventDefault();
        return false;
    });
   $(\'#ena-postamod\').click(function(e){
        $(\'#edit-field-posta-nev-und-0-value\').removeAttr(\'disabled\');
        $(\'#edit-field-posta-varos-und-0-value\').removeAttr(\'disabled\');
        $(\'#edit-field-posta-iranyitoszam-und-0-value\').removeAttr(\'disabled\');
        $(\'#edit-field-posta-utca-und-0-value\').removeAttr(\'disabled\');
        $(\'#edit-field-posta-nev-und-0-value\').focus().select();
        e.preventDefault();
        return false;
    });

    //mark errors on parents of checkboxes, radios
    $(\'input.error:checkbox\').parent().css(\'color\',\'#ff0000\');
    $(\'input.error:radio\').parent().css(\'color\',\'#ff0000\');


    //előnézetben űrlap rejtése
    var elonezetForm = $(\'.node-preview\').eq(0).parents(\'#post-content\').find(\'.node-form\');
    var elonezetGroupDiv = elonezetForm.find(".field-group-div").hide();
    var elonezetGroupFieldset = elonezetForm.find("fieldset").hide();
    var elonezetGomb = elonezetForm.find("#edit-preview").hide();

    //kérésre megjelennek
    elonezetForm.find(\'.form-actions\').prepend(\'<p class="form-hider-info">Amennyiben módosítani kívánja a \' +
        \'jogosítással kapcsolatos adatokat, először <a href=# class="form-hider">kattintson ide</a>.<br />\' +
        \'<strong>A jogosítási kérelem leadásához kérem nyomja meg a MENTÉS gombot.</strong>\');
    elonezetForm.find(\'.form-hider\').click(function(e) {
        elonezetGroupDiv.fadeIn(200);
        elonezetGroupFieldset.fadeIn(200);
        elonezetGomb.fadeIn(200);
        $(\'.form-hider-info\').remove();
        e.preventDefault();
        return false;
    });




    //zenegép raktár

    var raktarChkbox = $(\'#edit-field-raktarban-und-igen\');
    if(raktarChkbox.size() > 0){  //jó helyen vagyunk, ez a zenegép-jogosítás űrlap

      var raktarFeltetelek = $(\'#edit-field-raktar-feltetelek\'),
        raktarIdo = $(\'#edit-field-raktar-ido\'),
            helyszin = $(\'#node_jogositas_zenegep_form_group_hely\');
      
      //zenegep kötelező mező jelölések
      raktarIdo.find(\'legend\').eq(0).append(kotelezo);
      raktarFeltetelek.find(\'label\').eq(0).append(kotelezo);
        $(\'#edit-field-helyszin-nev\').find(\'label\').eq(0).append(kotelezo);
        $(\'#edit-field-iranyitoszam\').find(\'label\').eq(0).append(kotelezo);
        $(\'#edit-field-helyseg\').find(\'label\').eq(0).append(kotelezo);
        $(\'#edit-field-utca\').find(\'label\').eq(0).append(kotelezo);

      if(!raktarChkbox.is(\':checked\')){ //nincs raktár pipálva -> rejtések
        raktarFeltetelek.hide();
        raktarIdo.hide();
        }
        else{   //van raktár pipálva
            //raktár esetén nincs értelme helyszínnek
            helyszin.hide();
        }
      raktarChkbox.change(function(){
          if($(this).is(\':checked\')){
            //bejelöléskor továbbiak mutatása
          raktarFeltetelek.fadeIn(200);
          raktarIdo.fadeIn(200);

                //raktár esetén nincs értelme helyszínnek
                helyszin.fadeOut(200);

          }
          else {
            //lejelöléskor továbbiak elrejtése
          raktarFeltetelek.fadeOut(200);
          raktarIdo.fadeOut(200);

                //raktár esetén nincs értelme helyszínnek - vissza
                helyszin.fadeIn(200);
          }
        });



      //többszörözésenkénti + új esetén kötelező tracklista
      var jogdijTipus = $(\'#edit-field-jogositas-und\'),
        ujgep = $(\'#edit-field-ujgep-und-uj\'),
        tracklista = $(\'#edit-field-tobbszorozesi-lista\');
      if( jogdijTipus.val() == \'tobbszoroz\' && ujgep.is(\':checked\')){
        tracklista.find(\'label\').eq(0).append(kotelezo);
      }
      ujgep.change(function(){
          if( !$(this).is(\':checked\')){ 
          tracklista.find(\'.form-required\').remove();
          } 
          else if(jogdijTipus.val() == \'tobbszoroz\'){
          tracklista.find(\'label\').eq(0).append(kotelezo);
          }
        });
      jogdijTipus.change(function(){
          if( $(this).find(\'option:selected\').val() != \'tobbszoroz\'){ 
          tracklista.find(\'.form-required\').remove();
          } 
          else if(ujgep.is(\':checked\')){
          tracklista.find(\'label\').eq(0).append(kotelezo);
          }
        });

    }

    //alkalmankenti jogosításnál az adatszolgáltatas kötelező (HZ és DJ esetén ugyanaz a field)
     $(\'#edit-field-tobbszorozesi-lista-und-0-ajax-wrapper\').find(\'label\').eq(0).append(kotelezo);


////// ZENEGÉP  /////////

    //a 2014-es jogdíjtípus kötelező
     $(\'#edit-field-jogositas-2014\').find(\'label\').eq(0).append(kotelezo);

  //újra kell pipálni a feltételeket, de csak ha nem előnézet oldalon van
  if($(\'.preview\').length === 0) {
    $(\'#edit-field-feltetelek-und-elfogadom\').removeAttr(\'checked\');
  }

  //ha nem átalányról vált többszörözésenkénti Zenegépre, el kell rejteni a váltás elfogadót
  if( -1 === $(\'.page-title\').html().indexOf(\'többszörözésenkénti\') ) { //csakis átalányról jöhet
    //alap beállítás
    if($(\'#edit-field-jogositas-2014-und\').val() != "tobbszoroz") {
      $(\'#edit-field-atalany-valtas-feltetelei\').hide(); //console.log(\'nem tobbszoroz, rejtve legyen alapból\');
    }

    $(\'#edit-field-jogositas-2014-und\').change(function(event){
      if($(this).val()=="tobbszoroz"){
        //feltétel mutatás
        $(\'#edit-field-atalany-valtas-feltetelei\').fadeIn(200);
      }
      else {
        //feltétel újra elrejtés
        $(\'#edit-field-atalany-valtas-feltetelei:visible\').fadeOut(200);
      }
    });
  }
  else {
      $(\'#edit-field-atalany-valtas-feltetelei\').hide(); //console.log(\'nem átalányról jön, rejtve legyen\');
  }

})(jQuery)';
  $rule->position = 'footer';
  $rule->preprocess = 1;
  $rule->inline = 0;
  $rule->page_visibility = 1;
  $rule->page_visibility_pages = 'node/add/*
node/*/edit';
  $export['jogositas-urlap'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 1;
  $rule->name = 'levelkuldes';
  $rule->description = 'default from email address on levelkuldes';
  $rule->js = '(function($){
  if($(\'#edit-recipient\')){
    $(\'#edit-recipient\').val(\'info@mahaszjogdij.hu\')
  }
})(jQuery)';
  $rule->position = 'footer';
  $rule->preprocess = 1;
  $rule->inline = 0;
  $rule->page_visibility = 1;
  $rule->page_visibility_pages = 'levelkuldes
levelkuldes/*';
  $export['levelkuldes'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 1;
  $rule->name = 'regform';
  $rule->description = 'regform';
  $rule->js = 'function set_magan(){
        var szemely = jQuery(\'#edit-field-regisztralo-szemelye-und\');
        if(jQuery(\'#edit-field-jogi-csoport-und-dj\').is(\':checked\')){
            szemely.val(\'magan\').attr(\'disabled\',\'disabled\').trigger(\'change\');
        }
        else{
            szemely.removeAttr(\'disabled\');
        }
}

(function($){

    //cached vars
    djChbox = $(\'#edit-field-jogi-csoport-und-dj\');
    djszovGroup = $(\'#user_user_form_group_djszovetseg\');


    //mark errors on parents of checkboxes, radios
    $(\'input.error:checkbox\').parent().css(\'color\',\'#ff0000\');
    $(\'input.error:radio\').parent().css(\'color\',\'#ff0000\');

    //mark some fields as required (as they really are, but not by form api)
    $(\'#edit-field-cegnev\').find(\'label\').append(\'<span class="form-required" title="Szükséges mező.">*</span>\');
    $(\'#edit-field-ceg-jogosult\').find(\'label\').append(\'<span class="form-required" title="Szükséges mező.">*</span>\');
    $(\'#edit-field-adoszam\').find(\'label\').append(\'<span class="form-required" title="Szükséges mező.">*</span>\');
    $(\'#edit-field-teljes-nev\').find(\'label\').append(\'<span class="form-required" title="Szükséges mező.">*</span>\');
    $(\'#edit-field-anyja-neve\').find(\'label\').append(\'<span class="form-required" title="Szükséges mező.">*</span>\');
//    $(\'#edit-field-szuletesi-ido\').find(\'label\').append(\'<span class="form-required" title="Szükséges mező.">*</span>\');
    $(\'#edit-field-szuletesi-ido\').find(\'.fieldset-legend\').append(\'<span class="form-required" title="Szükséges mező.">*</span>\');

    //hide unneeded labels
    $(\'#edit-field-megegyezik label\').eq(0).addClass(\'hidden\');
    $(\'#edit-field-kapcs-megegyezik label\').eq(0).addClass(\'hidden\');
    $(\'#user_user_form_group_djszovetseg label\').eq(0).addClass(\'hidden\');

    //disable reg-szemely (and change, and trigger its change) if DJ is checked already
    set_magan();
    //and when checked
    djChbox.change(function(){set_magan();});

    //create copy of reg-szemely to store its data even it is disabled (not send in form data)
    var mysrc = $(\'#edit-field-regisztralo-szemelye-und\');
    if(mysrc.length>0){
        mysrc.parent().append(\'<input type="hidden" id="\'+mysrc.attr(\'id\')+\'-copy\'+\'" \\>\');
        var mytgt = $(\'#\'+mysrc.attr(\'id\')+\'-copy\');
        mytgt.attr(\'name\',mysrc.attr(\'name\')).val(mysrc.val());

        //onchange, change the clone too
        mysrc.change(function(){
            mytgt.val(mysrc.val());
        });
    }
    //ha magan, rejtse a céges mezőket, mutassa a magán mezőket
    if( $(\'#edit-field-regisztralo-szemelye-und\').val() === \'magan\' ){
        $(\'#edit-field-cegnev\').addClass(\'hidden\');
        $(\'#edit-field-ceg-jogosult\').addClass(\'hidden\');
        $(\'#edit-field-adoszam\').addClass(\'hidden\');
//        $(\'#edit-field-bankszamla\').addClass(\'hidden\');
        $(\'#edit-field-penzugyi-kapcsolat-neve\').addClass(\'hidden\');
        $(\'#edit-field-penzugyi-kapcsolat-tel\').addClass(\'hidden\');
        $(\'#edit-field-penzugyi-kapcsolat-email\').addClass(\'hidden\');
        $(\'#edit-field-teljes-nev\').removeClass(\'hidden\');
        $(\'#edit-field-anyja-neve\').removeClass(\'hidden\');
        $(\'#edit-field-szuletesi-ido\').removeClass(\'hidden\');
        $(\'#edit-field-muvesznev\').removeClass(\'hidden\');
    }
    else{
        $(\'#edit-field-cegnev\').removeClass(\'hidden\');
        $(\'#edit-field-ceg-jogosult\').removeClass(\'hidden\');
        $(\'#edit-field-adoszam\').removeClass(\'hidden\');
//        $(\'#edit-field-bankszamla\').removeClass(\'hidden\');
        $(\'#edit-field-penzugyi-kapcsolat-neve\').removeClass(\'hidden\');
        $(\'#edit-field-penzugyi-kapcsolat-tel\').removeClass(\'hidden\');
        $(\'#edit-field-penzugyi-kapcsolat-email\').removeClass(\'hidden\');
        $(\'#edit-field-teljes-nev\').addClass(\'hidden\');
        $(\'#edit-field-anyja-neve\').addClass(\'hidden\');
        $(\'#edit-field-szuletesi-ido\').addClass(\'hidden\');
        $(\'#edit-field-muvesznev\').addClass(\'hidden\');
        $(\'#edit-field-bankszamla\').find(\'label\').append(\'<span class="form-required" id="szlareq" title="Szükséges mező.">*</span>\');

    }
    //copy for now :(
    $(\'#edit-field-regisztralo-szemelye-und\').change(function(){
        if($(\'#edit-field-regisztralo-szemelye-und\').val() === \'magan\'){
            $(\'#edit-field-cegnev\').addClass(\'hidden\');
            $(\'#edit-field-ceg-jogosult\').addClass(\'hidden\');
            $(\'#edit-field-adoszam\').addClass(\'hidden\');
//            $(\'#edit-field-bankszamla\').addClass(\'hidden\');
            $(\'#edit-field-penzugyi-kapcsolat-neve\').addClass(\'hidden\');
            $(\'#edit-field-penzugyi-kapcsolat-tel\').addClass(\'hidden\');
            $(\'#edit-field-penzugyi-kapcsolat-email\').addClass(\'hidden\');
            $(\'#edit-field-teljes-nev\').removeClass(\'hidden\');
            $(\'#edit-field-anyja-neve\').removeClass(\'hidden\');
            $(\'#edit-field-szuletesi-ido\').removeClass(\'hidden\');
            $(\'#edit-field-muvesznev\').removeClass(\'hidden\');
            $(\'#szlareq\').remove();
        }
        else{
            $(\'#edit-field-cegnev\').removeClass(\'hidden\');
            $(\'#edit-field-ceg-jogosult\').removeClass(\'hidden\');
            $(\'#edit-field-adoszam\').removeClass(\'hidden\');
//            $(\'#edit-field-bankszamla\').removeClass(\'hidden\');
            $(\'#edit-field-penzugyi-kapcsolat-neve\').removeClass(\'hidden\');
            $(\'#edit-field-penzugyi-kapcsolat-tel\').removeClass(\'hidden\');
            $(\'#edit-field-penzugyi-kapcsolat-email\').removeClass(\'hidden\');
            $(\'#edit-field-teljes-nev\').addClass(\'hidden\');
            $(\'#edit-field-anyja-neve\').addClass(\'hidden\');
            $(\'#edit-field-szuletesi-ido\').addClass(\'hidden\');
            $(\'#edit-field-muvesznev\').addClass(\'hidden\');

            //nullázni kell a részleges dátumot, mert gondot okoz, ha közben cégre vált
            if( //részleges?
                $(\'#edit-field-szuletesi-ido-und-0-value-year\').val().length==0 || 
                $(\'#edit-field-szuletesi-ido-und-0-value-month\').val().length==0 || 
                $(\'#edit-field-szuletesi-ido-und-0-value-day\').val().length==0){
                
                $(\'#edit-field-szuletesi-ido-und-0-value-year\').val(\'\');
                $(\'#edit-field-szuletesi-ido-und-0-value-year\').val(\'\');
                $(\'#edit-field-szuletesi-ido-und-0-value-year\').val(\'\');
            }
            $(\'#edit-field-bankszamla\').find(\'label\').append(\'<span class="form-required" id="szlareq" title="Szükséges mező.">*</span>\');
        } 
    });



    //Kapcsolattartó megegyezik? Adatmásolás.
    kapcsChbox = $(\'#edit-field-kapcs-megegyezik-und-megegyezik-a-fentiekkel\');
    kapcsChbox.change(function(){
        if($(this).is(\':checked\')){
            $(\'#edit-field-kapcsolattarto-neve-und-0-value\').val(
                ($(\'#edit-field-regisztralo-szemelye-und\').val() === \'magan\')?
                    $(\'#edit-field-teljes-nev-und-0-value\').val() :
                    $(\'#edit-field-cegnev-und-0-value\').val()
            );
            $(\'#edit-field-kapcsolattart-telefon-und-0-value\').val($(\'#edit-field-telefon-und-0-value\').val());
            $(\'#edit-field-kapcsolattarto-email-und-0-value\').val($(\'#edit-field-email-und-0-email\').val());
            $(\'#edit-mail\').val($(\'#edit-field-email-und-0-email\').val());
        };
    });
    //change any of theese fields unchecks the copy checkbox
    $(\'#edit-field-teljes-nev-und-0-value\').change(function(){kapcsChbox.attr(\'checked\', false);});
    $(\'#edit-field-cegnev-und-0-value\').change(function(){kapcsChbox.attr(\'checked\', false);});
    $(\'#edit-field-telefon-und-0-value\').change(function(){kapcsChbox.attr(\'checked\', false);});
    $(\'#edit-field-email-und-0-email\').change(function(){kapcsChbox.attr(\'checked\', false);});
    $(\'#edit-field-kapcsolattarto-neve-und-0-value\').change(function(){kapcsChbox.attr(\'checked\', false);});
    $(\'#edit-field-kapcsolattart-telefon-und-0-value\').change(function(){kapcsChbox.attr(\'checked\', false);});
    $(\'#edit-field-kapcsolattarto-email-und-0-value\').change(function(){kapcsChbox.attr(\'checked\', false);});

    //Levelezési cím megegyezik? Adatmásolás.
    $(\'#edit-field-megegyezik-und-megegyezik-a-fenti-cmmel\').change(function(){
        if($(this).is(\':checked\')){
            //csak az üres levelezési nevet töltjük fel névvel
            if( $(\'#edit-field-posta-nev-und-0-value\').val() === \'\' ){
                $(\'#edit-field-posta-nev-und-0-value\').val(
                    ($(\'#edit-field-regisztralo-szemelye-und\').val() === \'magan\')?
                        $(\'#edit-field-teljes-nev-und-0-value\').val() :
                        $(\'#edit-field-cegnev-und-0-value\').val()
                );
            }
            $(\'#edit-field-posta-orszag-und\').val($(\'#edit-field-orszag-und\').val());
            $(\'#edit-field-posta-iranyitoszam-und-0-value\').val($(\'#edit-field-iranyitoszam-und-0-value\').val());
            $(\'#edit-field-posta-varos-und-0-value\').val($(\'#edit-field-varos-und-0-value\').val());
            $(\'#edit-field-posta-utca-und-0-value\').val($(\'#edit-field-utca-und-0-value\').val());
        };
    });

    //change any of theese fields unchecks the copy checkbox
    $(\'#edit-field-orszag-und\').change(function(){$(\'#edit-field-megegyezik-und-megegyezik-a-fenti-cmmel\').attr(\'checked\', false);});
    $(\'#edit-field-iranyitoszam-und-0-value\').change(function(){$(\'#edit-field-megegyezik-und-megegyezik-a-fenti-cmmel\').attr(\'checked\', false);});
    $(\'#edit-field-varos-und-0-value\').change(function(){$(\'#edit-field-megegyezik-und-megegyezik-a-fenti-cmmel\').attr(\'checked\', false);});
    $(\'#edit-field-utca-und-0-value\').change(function(){$(\'#edit-field-megegyezik-und-megegyezik-a-fenti-cmmel\').attr(\'checked\', false);});
    $(\'#edit-field-posta-orszag-und\').change(function(){$(\'#edit-field-megegyezik-und-megegyezik-a-fenti-cmmel\').attr(\'checked\', false);});
    $(\'#edit-field-posta-iranyitoszam-und-0-value\').change(function(){$(\'#edit-field-megegyezik-und-megegyezik-a-fenti-cmmel\').attr(\'checked\', false);});
    $(\'#edit-field-posta-varos-und-0-value\').change(function(){$(\'#edit-field-megegyezik-und-megegyezik-a-fenti-cmmel\').attr(\'checked\', false);});
    $(\'#edit-field-posta-utca-und-0-value\').change(function(){$(\'#edit-field-megegyezik-und-megegyezik-a-fenti-cmmel\').attr(\'checked\', false);});


    //Hide duplicate error messages
    //these are set in php field_validations (ex.: <span class="error-msg-field-anyja-neve">„[field-name]” mezőt ki kell tölteni.</span>)
    if(regErr = $(\'.messages.error\')){
        $(\'#edit-field-teljes-nev.hidden\').length>0 && $(\'.error-msg-field-teljes-nev\').parent().hide();
        $(\'#edit-field-cegnev.hidden\').length>0 && $(\'.error-msg-field-cegnev\').parent().hide();
        $(\'#edit-field-ceg-jogosult.hidden\').length>0 && $(\'.error-msg-field-ceg-jogosult\').parent().hide();
        $(\'#edit-field-anyja-neve.hidden\').length>0 && $(\'.error-msg-field-anyja-neve\').parent().hide();
        $(\'#edit-field-bankszamla.hidden\').length>0 && $(\'.error-msg-field-bankszamla\').parent().hide();
        $(\'#edit-field-adoszam.hidden\').length>0 && $(\'.error-msg-field-adoszam\').parent().hide();
        $(\'#edit-field-szuletesi-ido.hidden\').length>0 && $(\'.error-msg-field-szuletesi-ido\').parent().hide();
        $(\'#edit-field-bankszamla.hidden\').length>0 && $(\'.error-msg-field-bankszamla\').parent().hide();
    }

    
    //Lekérdezés a DJ szövetségtől
    
    //Ha nincs DJ-nek jelölve, rejtett az egész csoport
    if (!djChbox.is(\':checked\')) {
        djszovGroup.addClass(\'hidden\');
    };
    djChbox.change(function(){
        if($(this).is(\':checked\')){
            djszovGroup.removeClass(\'hidden\');
        }
        else{
            djszovGroup.addClass(\'hidden\');
        }
    });

    //meglévő checkbox változást figyelni, a bejelölt érdekes csak
    djszov = $(\'#edit-field-dj-szovetseg\');
    djszovChbox = djszov.find(\'.form-checkbox\');
    djszovInfo  = $(\'<p>\').addClass(\'djszov-info\');
    $(\'#user_user_form_group_djszovetseg label\').eq(0).parent().prepend(djszovInfo);
    editMail    = $(\'#edit-mail\');
    djszovChbox.change(function(){
        if($(this).is(\':checked\')){
            djszovChbox.attr(\'checked\', false);
            //nincs email? kérni, pipa ki.
            if( editMail.val().indexOf(\'@\') < 1 ){
                djszovChbox.attr(\'checked\', false);
                djszovInfo.css(\'color\',\'red\').html(\'Kérjük adja meg előbb az e-mail címét!\');
                editMail.addClass(\'error\');
            }
            else{
                editMail.removeClass(\'error\');
                //karika animáció be
                djszovInfo.css(\'color\',\'inherit\').html(\'Tagság lekérdezése...\');
                //lekérdezés indul
                $.getJSON("/misc/djsz.php?email=" + editMail.val(), function(json) {
                    //eredményt kiírni karika helyére, ... ?
                    if(json.tagsag === \'IGEN\'){
                        /*lejárt tagság nem tagság
                        most = new Date();
                        tagsag = new Date(json.ervenyes);
                        if(most - tagsag > 0){  //lejárt
                            djszovInfo.css(\'color\',\'orange\').html(\'Tagsága lejárt (\' + json.ervenyes +\')\');

                        }
                        else...*/
                        djszovChbox.attr(\'checked\', \'checked\');
                        djszovInfo.css({color:\'green\', fontWeight:\'bold\'}).html(\'Tagság rendben.\');
                    }
                    else if(json.tagsag === \'NEM\'){
                        djszovInfo.css(\'color\',\'red\').html(\'Érvényes tagságodat a rendszer nem tudta azonosítani. Kérjük, vedd fel a kapcsolatot a DJ Szövetséggel!\');
                    }
                    else if(json.error){
                        djszovInfo.css(\'color\',\'red\').html(\'HIBA. \' + json.error);
                    }
                    else{
                        djszovInfo.css(\'color\',\'red\').html(\'A lekérdezés sikertelen. Kérjük próbálja meg később!\');
                    }
                });
            }
        }
    });

})(jQuery)';
  $rule->position = 'footer';
  $rule->preprocess = 1;
  $rule->inline = 0;
  $rule->page_visibility = 1;
  $rule->page_visibility_pages = 'user
user/*';
  $export['regform'] = $rule;

  return $export;
}

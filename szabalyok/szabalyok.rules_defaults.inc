<?php
/**
 * @file
 * szabalyok.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function szabalyok_default_rules_configuration() {
  $items = array();
  $items['rules__j_jogos_t_s_ment_s'] = entity_import('rules_config', '{ "rules__j_jogos_t_s_ment_s" : {
      "LABEL" : "\\u00daj jogos\\u00edt\\u00e1s ment\\u00e9s (nem ZG)",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "TAGS" : [ "email", "jogositas", "ment\\u00e9s", "\\u00faj", "\\u00fczenet" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : {
                "jogositas_alkalmankent_hatterz" : "jogositas_alkalmankent_hatterz",
                "jogositas_alkalmankent_dj" : "jogositas_alkalmankent_dj",
                "jogositas_darabonkent_hatterzene" : "jogositas_darabonkent_hatterzene",
                "jogositas_darabonkent_dj" : "jogositas_darabonkent_dj",
                "jogositas_atalanydijas_hatterz" : "jogositas_atalanydijas_hatterz",
                "jogositas_atalanydijas_dj" : "jogositas_atalanydijas_dj"
              }
            }
          }
        },
        { "NOT user_is_blocked" : { "account" : [ "node:author" ] } },
        { "entity_is_of_type" : { "entity" : [ "node:author" ], "type" : "user" } },
        { "NOT user_has_role" : {
            "account" : [ "node:author" ],
            "roles" : { "value" : { "3" : "3", "8" : "8" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[node:author:mail]",
            "subject" : "Jogos\\u00edt\\u00e1s k\\u00e9relme befogad\\u00e1sra ker\\u00fclt",
            "message" : "Tisztelt Felhaszn\\u00e1l\\u00f3!\\r\\n\\r\\n[node:content-type] k\\u00e9relm\\u00e9t megkaptuk. Az enged\\u00e9lyt kiz\\u00e1r\\u00f3lag abban az esetben lehet megadottnak tekinteni, amennyiben a jelen jogos\\u00edt\\u00e1si k\\u00e9relem megk\\u00fcld\\u00e9s\\u00e9vel EGYIDEJ\\u0170LEG a t\\u00f6bbsz\\u00f6r\\u00f6z\\u00e9ssel kapcsolatban fizetend\\u0151 jogd\\u00edjat a felhaszn\\u00e1l\\u00f3 teljes eg\\u00e9sz\\u00e9ben megfizette.\\r\\nA jogos\\u00edt\\u00e1s \\u00e9rv\\u00e9nyess\\u00e9g\\u00e9hez teh\\u00e1t a k\\u00e9relem mellett sz\\u00fcks\\u00e9ges tov\\u00e1bb\\u00e1 a jogd\\u00edj megfizet\\u00e9se is!\\r\\nAmennyiben jogos\\u00edt\\u00e1si k\\u00e9relm\\u00e9nek elb\\u00edr\\u00e1l\\u00e1sa sor\\u00e1n b\\u00e1rmilyen hib\\u00e1t \\u00e9szlel\\u00fcnk, err\\u0151l E-mail-ben k\\u00fcld\\u00fcnk \\u00e9rtes\\u00edt\\u00e9st az \\u00d6n \\u00e1ltal megadott E-mail c\\u00edmre.\\r\\nHa a k\\u00e9relme minden tekintetben elfogadhat\\u00f3, valamint jogd\\u00edja is meg\\u00e9rkezett, p\\u00e9nz\\u00fcgyi oszt\\u00e1lyunk ki\\u00e1ll\\u00edtja \\u00e9s elk\\u00fcldi \\u00d6nnek a sz\\u00e1ml\\u00e1t.\\r\\n\\r\\n\\r\\n\\u00dcdv\\u00f6zlettel:\\r\\nMAHASZ Jogd\\u00edj",
            "from" : "info@mahaszjogdij.hu",
            "language" : [ "" ]
          }
        },
        { "drupal_message" : { "message" : "A t\\u00f6bbsz\\u00f6r\\u00f6z\\u00e9shez az enged\\u00e9lyt kiz\\u00e1r\\u00f3lag abban az esetben lehet megadottnak tekinteni, amennyiben a jelen jogos\\u00edt\\u00e1si k\\u00e9relem megk\\u00fcld\\u00e9s\\u00e9vel EGYIDEJ\\u0170LEG a t\\u00f6bbsz\\u00f6r\\u00f6z\\u00e9ssel kapcsolatban fizetend\\u0151 jogd\\u00edjat a felhaszn\\u00e1l\\u00f3 teljes eg\\u00e9sz\\u00e9ben megfizette." } }
      ]
    }
  }');
  $items['rules__j_jogos_t_s_ment_s_zeneg_p_'] = entity_import('rules_config', '{ "rules__j_jogos_t_s_ment_s_zeneg_p_" : {
      "LABEL" : "\\u00daj jogos\\u00edt\\u00e1s ment\\u00e9s (zeneg\\u00e9p)",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "email", "jogositas", "ment\\u00e9s", "\\u00faj", "zenegep" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "jogositas_zenegep" : "jogositas_zenegep" } }
          }
        },
        { "NOT user_is_blocked" : { "account" : [ "node:author" ] } },
        { "entity_is_of_type" : { "entity" : [ "node:author" ], "type" : "user" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[node:author:mail]",
            "subject" : "Jogos\\u00edt\\u00e1s k\\u00e9relme befogad\\u00e1sra ker\\u00fclt",
            "message" : "Tisztelt Felhaszn\\u00e1l\\u00f3!\\r\\n\\r\\nZeneg\\u00e9pes jogos\\u00edt\\u00e1si k\\u00e9relm\\u00e9t megkaptuk. A t\\u00f6bbsz\\u00f6r\\u00f6z\\u00e9shez az enged\\u00e9lyt kiz\\u00e1r\\u00f3lag abban az esetben lehet megadottnak tekinteni, amennyiben a t\\u00f6bbsz\\u00f6r\\u00f6z\\u00e9ssel kapcsolatban fizetend\\u0151 jogd\\u00edjat a felhaszn\\u00e1l\\u00f3 a jogd\\u00edjfizet\\u00e9si-\\u00e9rtes\\u00edt\\u0151n szerepl\\u0151 fizet\\u00e9si hat\\u00e1rid\\u0151n bel\\u00fcl teljes eg\\u00e9sz\\u00e9ben megfizette.\\r\\nAmennyiben jogos\\u00edt\\u00e1si k\\u00e9relm\\u00e9nek elb\\u00edr\\u00e1l\\u00e1sa sor\\u00e1n b\\u00e1rmilyen hib\\u00e1t \\u00e9szlel\\u00fcnk, err\\u0151l E-mail-ben \\u00e9rtes\\u00edtj\\u00fck az \\u00d6n \\u00e1ltal megadott E-mail c\\u00edmre.\\r\\nHa a k\\u00e9relme minden tekintetben elfogadhat\\u00f3, p\\u00e9nz\\u00fcgyi oszt\\u00e1lyunk ki\\u00e1ll\\u00edtja \\u00e9s megk\\u00fcldi \\u00d6nnek a jogd\\u00edjfizet\\u00e9si \\u00e9rtes\\u00edt\\u0151t. K\\u00e9rj\\u00fck, hogy a jogd\\u00edjfizet\\u00e9si \\u00e9rtes\\u00edt\\u0151n szerepl\\u0151 jogd\\u00edj \\u00f6sszeg\\u00e9t az \\u00e9rtes\\u00edt\\u0151n szerepl\\u0151 fizet\\u00e9si hat\\u00e1rid\\u0151n bel\\u00fcl sz\\u00edveskedjen kiegyenl\\u00edteni.\\r\\n\\r\\n\\u00dcdv\\u00f6zlettel:\\r\\nMAHASZ Jogd\\u00edj",
            "from" : "info@mahaszjogdij.hu",
            "language" : [ "" ]
          }
        },
        { "drupal_message" : { "message" : "A t\\u00f6bbsz\\u00f6r\\u00f6z\\u00e9shez az enged\\u00e9lyt kiz\\u00e1r\\u00f3lag abban az esetben lehet megadottnak tekinteni, amennyiben a t\\u00f6bbsz\\u00f6r\\u00f6z\\u00e9ssel kapcsolatban fizetend\\u0151 jogd\\u00edjat a felhaszn\\u00e1l\\u00f3 \\u003Cu\\u003Eteljes eg\\u00e9sz\\u00e9ben\\u003C\\/u\\u003E megfizette." } },
        { "mail" : {
            "to" : "karafiatanita@mahasz.hu, tothgabriella@mahasz.hu",
            "subject" : "\\u00daj Zeneg\\u00e9p #[node:nid]",
            "message" : "\\u00daj Zeneg\\u00e9p:\\r\\n[node:title]\\r\\n[node:url]\\r\\n\\r\\nJogos\\u00edt\\u00e1s k\\u00e9r\\u0151 neve: [node:field-jogosult-nev]\\r\\nGy\\u00e1risz\\u00e1m: [node:field-gyszam]\\r\\nJogos\\u00edt\\u00e1si k\\u00e9relem lead\\u00e1s\\u00e1nak id\\u0151pontja: [node:created]\\r\\nJogos\\u00edt\\u00e1si k\\u00e9relem t\\u00edpusa: [node:field-jogositas-2014]\\r\\n\\r\\n--\\r\\nMAHASZ Jogd\\u00edj",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_adatszolg_elfogad'] = entity_import('rules_config', '{ "rules_adatszolg_elfogad" : {
      "LABEL" : "Adatszolg\\u00e1ltat\\u00e1s elfogad\\u00e1sa",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "5",
      "TAGS" : [ "adatszolg", "email", "flag" ],
      "REQUIRES" : [ "rules", "php", "flag" ],
      "ON" : [ "flag_flagged_adatszolgaltatas_elfogadas" ],
      "IF" : [
        { "entity_is_of_type" : { "entity" : [ "flagged-node" ], "type" : "node" } },
        { "entity_has_field" : { "entity" : [ "flagged-node" ], "field" : "field_tobbszorozes_status" } },
        { "entity_has_field" : { "entity" : [ "flagged-node" ], "field" : "field_tobbszorozesi_lista" } },
        { "entity_has_field" : { "entity" : [ "flagged-node" ], "field" : "field_entity_reference" } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "flagged-node:revision" ], "value" : 1 } },
        { "data_set" : {
            "data" : [ "flagged-node:field-tobbszorozes-status" ],
            "value" : "elfogadva"
          }
        },
        { "php_eval" : { "code" : "auto_nodetitle_operations_update(array($flagged_node-\\u003Enid));" } },
        { "mail" : {
            "to" : [ "flagged-node:author:field-kapcsolattarto-email" ],
            "subject" : "Adatszolg\\u00e1ltat\\u00e1s elfogadva: [flagged-node:field-tobbszorozesi-lista:file:name]",
            "message" : "Tisztelt Felhaszn\\u00e1l\\u00f3!\\r\\n\\r\\n[flagged-node:created] kelt adatszolg\\u00e1ltat\\u00e1sa elfogad\\u00e1sra ker\\u00fclt.\\r\\n\\r\\nAz elfogadott adatszolg\\u00e1ltat\\u00e1s: [flagged-node:title]\\r\\n([flagged-node:url])\\r\\n\\r\\nAz adatszolg\\u00e1ltat\\u00e1shoz tartoz\\u00f3 jogos\\u00edt\\u00e1s: [flagged-node:field-entity-reference:title]\\r\\n([flagged-node:field-entity-reference:url])\\r\\n\\r\\nFelt\\u00f6lt\\u00f6tt f\\u00e1jl: [flagged-node:field-tobbszorozesi-lista:file:name]\\r\\n([flagged-node:field-tobbszorozesi-lista:file:url])\\r\\n\\r\\n\\r\\n\\r\\nAmennyiben b\\u00e1rmilyen k\\u00e9rd\\u00e9se, probl\\u00e9m\\u00e1ja mer\\u00fcl fel, k\\u00e9rj\\u00fck, jelezze az info@mahaszjogdij.hu e-mail c\\u00edmen.\\r\\n\\r\\n--\\r\\n\\u00dcdv\\u00f6zlettel,\\r\\nMAHASZ Jogd\\u00edj",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_adatszolg_elfogad_visszavonasa'] = entity_import('rules_config', '{ "rules_adatszolg_elfogad_visszavonasa" : {
      "LABEL" : "Adatszolg\\u00e1ltat\\u00e1s elfogad\\u00e1s visszavon\\u00e1sa",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "-5",
      "TAGS" : [ "adatszolg", "unflag" ],
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : [ "flag_unflagged_adatszolgaltatas_elfogadas" ],
      "IF" : [
        { "entity_is_of_type" : { "entity" : [ "flagged-node" ], "type" : "node" } },
        { "entity_has_field" : { "entity" : [ "flagged-node" ], "field" : "field_tobbszorozes_status" } },
        { "NOT flag_flagged_node" : {
            "flag" : "adatszolgaltatas_visszautasitas",
            "node" : [ "flagged-node" ],
            "flagging_user" : [ "flagging_user" ]
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "flagged-node:revision" ], "value" : 1 } },
        { "data_set" : {
            "data" : [ "flagged-node:field-tobbszorozes-status" ],
            "value" : "feldolgoz\\u00e1s alatt"
          }
        },
        { "entity_save" : { "data" : [ "flagged-node" ], "immediate" : 1 } }
      ]
    }
  }');
  $items['rules_adatszolg_elutasit'] = entity_import('rules_config', '{ "rules_adatszolg_elutasit" : {
      "LABEL" : "Adatszolg\\u00e1ltat\\u00e1s visszautas\\u00edt\\u00e1sa",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "5",
      "TAGS" : [ "adatszolg", "email", "flag" ],
      "REQUIRES" : [ "rules", "php", "flag" ],
      "ON" : [ "flag_flagged_adatszolgaltatas_visszautasitas" ],
      "IF" : [
        { "entity_is_of_type" : { "entity" : [ "flagged-node" ], "type" : "node" } },
        { "entity_has_field" : { "entity" : [ "flagged-node" ], "field" : "field_tobbszorozes_status" } },
        { "entity_has_field" : { "entity" : [ "flagged-node" ], "field" : "field_visszautasitas_indok" } },
        { "entity_has_field" : { "entity" : [ "flagged-node" ], "field" : "field_tobbszorozesi_lista" } },
        { "entity_has_field" : { "entity" : [ "flagged-node" ], "field" : "field_entity_reference" } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "flagged-node:revision" ], "value" : 1 } },
        { "data_set" : {
            "data" : [ "flagged-node:field-tobbszorozes-status" ],
            "value" : "visszautas\\u00edtva"
          }
        },
        { "php_eval" : { "code" : "auto_nodetitle_operations_update(array($flagged_node-\\u003Enid));" } },
        { "mail" : {
            "to" : [ "flagged-node:author:field-kapcsolattarto-email" ],
            "subject" : "Adatszolg\\u00e1ltat\\u00e1s visszautas\\u00edtva: [flagged-node:field-tobbszorozesi-lista:file:name]",
            "message" : "Tisztelt Felhaszn\\u00e1l\\u00f3!\\r\\n\\r\\n[flagged-node:created] kelt adatszolg\\u00e1ltat\\u00e1sa visszautas\\u00edt\\u00e1sra ker\\u00fclt.\\r\\n[flagged-node:field-visszautasitas-indok]\\r\\n\\r\\nA visszautas\\u00edtott adatszolg\\u00e1ltat\\u00e1s: [flagged-node:title]\\r\\n([flagged-node:url])\\r\\n\\r\\nAz adatszolg\\u00e1ltat\\u00e1shoz tartoz\\u00f3 jogos\\u00edt\\u00e1s: \\r\\n[flagged-node:field-entity-reference:title]\\r\\n([flagged-node:field-entity-reference:url])\\r\\n\\r\\nFelt\\u00f6lt\\u00f6tt f\\u00e1jl: [flagged-node:field-tobbszorozesi-lista:file:name]\\r\\n([flagged-node:field-tobbszorozesi-lista:file:url])\\r\\n\\r\\n\\r\\nAmennyiben b\\u00e1rmilyen k\\u00e9rd\\u00e9se, probl\\u00e9m\\u00e1ja mer\\u00fcl fel, k\\u00e9rj\\u00fck, jelezze az info@mahaszjogdij.hu e-mail c\\u00edmen.\\r\\n\\r\\n--\\r\\n\\u00dcdv\\u00f6zlettel,\\r\\nMAHASZ Jogd\\u00edj",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_adatszolg_visszautasitas_visszavonasa'] = entity_import('rules_config', '{ "rules_adatszolg_visszautasitas_visszavonasa" : {
      "LABEL" : "Adatszolg\\u00e1ltat\\u00e1s visszautasitas visszavon\\u00e1sa",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "-5",
      "TAGS" : [ "adatszolg", "flag", "unflag" ],
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : [ "flag_unflagged_adatszolgaltatas_visszautasitas" ],
      "IF" : [
        { "entity_is_of_type" : { "entity" : [ "flagged-node" ], "type" : "node" } },
        { "entity_has_field" : { "entity" : [ "flagged-node" ], "field" : "field_tobbszorozes_status" } },
        { "NOT flag_flagged_node" : {
            "flag" : "adatszolgaltatas_elfogadas",
            "node" : [ "flagged-node" ],
            "flagging_user" : [ "flagging_user" ]
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "flagged-node:revision" ], "value" : 1 } },
        { "data_set" : {
            "data" : [ "flagged-node:field-tobbszorozes-status" ],
            "value" : "feldolgoz\\u00e1s alatt"
          }
        },
        { "entity_save" : { "data" : [ "flagged-node" ], "immediate" : 1 } }
      ]
    }
  }');
  $items['rules_alkalmankenti_bekuldeskor_adatszolg_oldalra_atiranyit'] = entity_import('rules_config', '{ "rules_alkalmankenti_bekuldeskor_adatszolg_oldalra_atiranyit" : {
      "LABEL" : "Alkalmank\\u00e9nti HZ, DJ bek\\u00fcld\\u00e9s ut\\u00e1n adatszolg oldalra ir\\u00e1ny\\u00edt\\u00e1s",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "9",
      "ACTIVE" : false,
      "TAGS" : [ "hatterzene", "node", "redirect", "save" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "entity_is_of_type" : { "entity" : [ "node" ], "type" : "node" } },
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : {
                "jogositas_alkalmankent_hatterz" : "jogositas_alkalmankent_hatterz",
                "jogositas_alkalmankent_dj" : "jogositas_alkalmankent_dj"
              }
            }
          }
        }
      ],
      "DO" : [
        { "drupal_message" : {
            "message" : "A felhaszn\\u00e1l\\u00f3 a felhaszn\\u00e1l\\u00e1si ig\\u00e9ny beny\\u00fajt\\u00e1s\\u00e1val \\u00e9s a jogd\\u00edj megfizet\\u00e9s\\u00e9vel egyid\\u0151ben k\\u00f6teles r\\u00e9szletes adatszolg\\u00e1ltat\\u00e1st ny\\u00fajtani a birtok\\u00e1ban l\\u00e9v\\u0151 \\u00f6sszes olyan t\\u00f6bbsz\\u00f6r\\u00f6z\\u00f6tt hangfelv\\u00e9telr\\u0151l, a melyek az adott helysz\\u00ednen \\u00e9s id\\u0151pontban a birtok\\u00e1ban lesznek. Az adatszolg\\u00e1ltat\\u00e1st Excel t\\u00e1bl\\u00e1zatban kell beny\\u00fajtani, pontosan megadva a hangfelv\\u00e9telek el\\u0151ad\\u00f3j\\u00e1t, c\\u00edm\\u00e9t, \\u00e9s az adott hangfelv\\u00e9telr\\u0151l k\\u00e9sz\\u00edtett t\\u00f6bbsz\\u00f6r\\u00f6z\\u00e9sek sz\\u00e1m\\u00e1t. Amennyiben a felhaszn\\u00e1l\\u00f3 a felhaszn\\u00e1lt hangfelv\\u00e9telekre vonatkoz\\u00f3 jelen pont szerinti adatszolg\\u00e1ltat\\u00e1si k\\u00f6telezetts\\u00e9g\\u00e9nek teljes\\u00edt\\u00e9s\\u00e9vel t\\u00f6bb, mint 14 napos k\\u00e9sedelembe esik, a felhaszn\\u00e1l\\u00f3 k\\u00f6tb\\u00e9rk\\u00e9nt a d\\u00edjfizet\\u00e9si id\\u0151szak jogd\\u00edj\\u00e1nak 1, azaz egy % - \\u00e1t k\\u00f6teles a MAHASZ r\\u00e9sz\\u00e9re a k\\u00e9sedelem minden napja ut\\u00e1n megfizetni. A k\\u00e9sedelmi k\\u00f6tb\\u00e9r nem haladhatja meg az adatszolg\\u00e1ltat\\u00e1ssal \\u00e9rintett jogd\\u00edjfizet\\u00e9si id\\u0151szak jogd\\u00edj\\u00e1nak k\\u00e9tszeres\\u00e9t. A MAHASZ a k\\u00f6tb\\u00e9rt akkor is k\\u00f6vetelheti, ha nem keletkezett k\\u00e1ra az adatszolg\\u00e1ltat\\u00e1si k\\u00f6telezetts\\u00e9g nem teljes\\u00edt\\u00e9s\\u00e9b\\u0151l, tov\\u00e1bb\\u00e1 \\u00e9rv\\u00e9nyes\\u00edtheti a k\\u00f6tb\\u00e9rt meghalad\\u00f3 k\\u00e1r\\u00e1t is. A k\\u00f6tb\\u00e9r megfizet\\u00e9se nem mentes\\u00edti a felhaszn\\u00e1l\\u00f3t az adatszolg\\u00e1ltat\\u00e1si k\\u00f6telezetts\\u00e9g teljes\\u00edt\\u00e9se al\\u00f3l.",
            "type" : "warning"
          }
        },
        { "redirect" : { "url" : "node\\/add\\/tobbszorozesi-lista?field_entity_reference=[node:nid]\\u0026destination=adatszolgaltatas" } }
      ]
    }
  }');
  $items['rules_elfogad_adatszolg'] = entity_import('rules_config', '{ "rules_elfogad_adatszolg" : {
      "LABEL" : "Elfogad: adatszolg\\u00e1ltat\\u00e1s",
      "PLUGIN" : "action set",
      "TAGS" : [ "adatszolg", "flag" ],
      "REQUIRES" : [ "flag" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "ACTION SET" : [
        { "flag_flagnode" : {
            "flag" : "adatszolgaltatas_elfogadas",
            "node" : [ "node" ],
            "flagging_user" : [ "site:current-user" ],
            "permission_check" : 0
          }
        }
      ]
    }
  }');
  $items['rules_elfogadaskor_unflag_visszautasitas'] = entity_import('rules_config', '{ "rules_elfogadaskor_unflag_visszautasitas" : {
      "LABEL" : "Elfogad\\u00e1skor visszautas\\u00edt\\u00e1s lev\\u00e9tele",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "flag", "sync", "unflag" ],
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : [ "flag_flagged_adatszolgaltatas_elfogadas" ],
      "IF" : [
        { "entity_is_of_type" : { "entity" : [ "flagged-node" ], "type" : "node" } },
        { "flag_flagged_node" : {
            "flag" : "adatszolgaltatas_visszautasitas",
            "node" : [ "flagged-node" ],
            "flagging_user" : [ "flagging_user" ]
          }
        }
      ],
      "DO" : [
        { "flag_unflagnode" : {
            "flag" : "adatszolgaltatas_visszautasitas",
            "node" : [ "flagged-node" ],
            "flagging_user" : [ "flagging_user" ],
            "permission_check" : 0
          }
        }
      ]
    }
  }');
  $items['rules_elfogadaskor_visszautasit_levetel_zg'] = entity_import('rules_config', '{ "rules_elfogadaskor_visszautasit_levetel_zg" : {
      "LABEL" : "Elfogad\\u00e1skor visszautas\\u00edt\\u00e1s lev\\u00e9tele (ZG)",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "flag", "sync", "tobbszorozesenkenti", "unflag" ],
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : [ "flag_flagged_tobbszjogos_elfogadas" ],
      "IF" : [
        { "entity_is_of_type" : { "entity" : [ "flagged-node" ], "type" : "node" } },
        { "flag_flagged_node" : {
            "flag" : "tobbszjogos_visszautasitas",
            "node" : [ "flagged-node" ],
            "flagging_user" : [ "flagging_user" ]
          }
        }
      ],
      "DO" : [
        { "flag_unflagnode" : {
            "flag" : "tobbszjogos_visszautasitas",
            "node" : [ "flagged-node" ],
            "flagging_user" : [ "flagging_user" ],
            "permission_check" : 0
          }
        }
      ]
    }
  }');
  $items['rules_email_elment'] = entity_import('rules_config', '{ "rules_email_elment" : {
      "LABEL" : "Email elment",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "email" ],
      "REQUIRES" : [ "rules", "views_send" ],
      "ON" : [ "views_send_email_sent" ],
      "DO" : [
        { "drupal_message" : { "message" : "E-maill k\\u00fcld\\u00e9s megt\\u00f6rt\\u00e9nt: [views-send-email-message:to_mail] ([views-send-email-message:subject])" } }
      ]
    }
  }');
  $items['rules_felhaszn_l_aktiv_l_s'] = entity_import('rules_config', '{ "rules_felhaszn_l_aktiv_l_s" : {
      "LABEL" : "Felhaszn\\u00e1l\\u00f3 aktiv\\u00e1l\\u00e1s",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "flag", "user" ],
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : [ "flag_flagged_aktiv" ],
      "DO" : [
        { "user_unblock" : { "account" : [ "flagged-user" ] } },
        { "drupal_message" : { "message" : "\\u003Cem\\u003E\\u003Ca href=\\u0022\\/user\\/[flagged-user:uid]\\u0022\\u003E[flagged-user:name]\\u003C\\/a\\u003E\\u003C\\/em\\u003E aktiv\\u00e1l\\u00e1sa megt\\u00f6rt\\u00e9nt, \\u00e9rtes\\u00edt\\u00e9se folyamatban." } }
      ]
    }
  }');
  $items['rules_felhaszn_l_inaktiv_l_s'] = entity_import('rules_config', '{ "rules_felhaszn_l_inaktiv_l_s" : {
      "LABEL" : "Felhaszn\\u00e1l\\u00f3 inaktiv\\u00e1l\\u00e1s",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "flag", "user" ],
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : [ "flag_unflagged_aktiv" ],
      "DO" : [
        { "user_block" : { "account" : [ "flagged-user" ] } },
        { "drupal_message" : { "message" : "\\u003Cem\\u003E\\u003Ca href=\\u0022\\/user\\/[flagged-user:uid]\\u0022\\u003E[flagged-user:name]\\u003C\\/a\\u003E\\u003C\\/em\\u003E deaktiv\\u00e1l\\u00e1sa megt\\u00f6rt\\u00e9nt, \\u00e9rtes\\u00edt\\u00e9se folyamatban." } }
      ]
    }
  }');
  $items['rules_jogos_t_s_st_tusz_j_v_hagy'] = entity_import('rules_config', '{ "rules_jogos_t_s_st_tusz_j_v_hagy" : {
      "LABEL" : "Jogos\\u00edt\\u00e1s st\\u00e1tusz - j\\u00f3v\\u00e1hagy",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "jogositas" ],
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : [ "flag_flagged_jovahagy" ],
      "IF" : [
        { "entity_has_field" : { "entity" : [ "flagged-node" ], "field" : "field_statusz" } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "flagged-node:field-statusz" ],
            "value" : "J\\u00f3v\\u00e1hagyva"
          }
        },
        { "mail" : {
            "to" : "[flagged-node:author:field_kapcsolattarto_email]",
            "subject" : "Jogos\\u00edt\\u00e1si k\\u00e9relm\\u00e9t enged\\u00e9lyezt\\u00fck.",
            "message" : "[flagged-node:content-type] jogos\\u00edt\\u00e1si k\\u00e9relm\\u00e9t enged\\u00e9lyezt\\u00fck.\\r\\n[flagged-node:url]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_jogositaskor_mlsz_check'] = entity_import('rules_config', '{ "rules_jogositaskor_mlsz_check" : {
      "LABEL" : "Jogos\\u00edt\\u00e1skor MLSZ check (m\\u00e9gsem \\u00edgy kell, hanem amikor pip\\u00e1l a formon)",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "-10",
      "ACTIVE" : false,
      "TAGS" : [ "dj", "mlsz", "node", "save" ],
      "REQUIRES" : [ "rules", "php" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "entity_is_of_type" : { "entity" : [ "node" ], "type" : "node" } },
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : {
                "jogositas_alkalmankent_dj" : "jogositas_alkalmankent_dj",
                "jogositas_darabonkent_dj" : "jogositas_darabonkent_dj",
                "jogositas_atalanydijas_dj" : "jogositas_atalanydijas_dj"
              }
            }
          }
        },
        { "entity_is_of_type" : { "entity" : [ "node:author" ], "type" : "user" } },
        { "entity_has_field" : { "entity" : [ "node:author" ], "field" : "field_dj_szovetseg" } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "node:author:field-dj-szovetseg:0" ],
            "value" : {
              "select" : "node:author:field-email",
              "php" : { "code" : "\\/\\/The above VALUE makes sense! That is the user\\u0027s email to check against MLE. And it is also a workaround for a rules bug. It needs to be set to run the PHP code properly.\\r\\n$tag = \\u0022Tag\\u0022;\\r\\n$nem_tag = \\u0022\\u0022;\\r\\n\\r\\n\\/\\/fetching data from djszovetseg.hu (via own proxy)\\r\\n  $answer = file_get_contents(\\u0027http:\\/\\/mahaszjogdij.hu\\/misc\\/djsz.php?email=\\u0027 . $value);\\r\\n  \\/\\/save to log\\r\\n  watchdog(\\u0027MLE check\\u0027, \\u0022DJ sz\\u00f6vets\\u00e9g lek\\u00e9rdez\\u00e9s eredm\\u00e9nye:\\\\nemail: $value\\\\n djszovetseg.hu v\\u00e1lasz: $answer\\u0022);\\r\\n\\r\\n  $content = json_decode($answer);\\r\\n  if($content-\\u003Etagsag == \\u0027IGEN\\u0027) {\\r\\n  \\treturn $tag;\\r\\n  }\\r\\n  else if($content-\\u003Etagsag == \\u0027NEM\\u0027) {\\r\\n  \\treturn $nem_tag;\\r\\n  }\\r\\n  else if(!empty($content-\\u003Eerror)) {\\r\\n  \\twatchdog(\\u0027debug rules\\u0027, \\u0022DJ sz\\u00f6vets\\u00e9g lek\\u00e9rdez\\u00e9s sor\\u00e1n hiba:\\\\n$content-\\u003Eerror\\u0022, NULL, WATCHDOG_CRITICAL);\\r\\n  \\treturn $nem_tag;\\r\\n  }\\r\\n  else{\\r\\n    watchdog(\\u0027debug rules\\u0027, \\u0022DJ sz\\u00f6vets\\u00e9g nem lek\\u00e9rdezhet\\u0151?\\\\nEmail: $mail\\\\nszerver v\\u00e1lasz: $answer\\u0022, NULL, WATCHDOG_CRITICAL);\\r\\n    \\/\\/critical error, send email\\r\\n    system_send_email_action(\\r\\n      NULL, \\r\\n      array(\\r\\n        \\u0027recipient\\u0027=\\u003E\\u0027kardave@gmail.com\\u0027, \\r\\n        \\u0027subject\\u0027=\\u003E\\u0027DJSZ_CRITICAL \\u0027 . $value, \\r\\n        \\u0027message\\u0027=\\u003E\\u0027jogos\\u00edt\\u00e1s bek\\u00fcld\\u00e9skor mlsz check nem m\\u0171k\\u00f6dik!   Check watchdog!\\u0027\\r\\n      )\\r\\n    );\\r\\n  } \\r\\n" }
            }
          }
        }
      ]
    }
  }');
  $items['rules_login_redirect'] = entity_import('rules_config', '{ "rules_login_redirect" : {
      "LABEL" : "Login redirect",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "php" ],
      "ON" : [ "user_login" ],
      "IF" : [
        { "php_eval" : { "code" : "if(strpos(\\u0027[site:current-page:url]\\u0027, \\u0027\\/user\\/reset\\/\\u0027) === FALSE){\\r\\n  \\/\\/watchdog(\\u0027debug\\u0027, \\u0027norm\\u00e1l bel\\u00e9p\\u00e9s\\u0027);\\r\\n  \\/\\/norm\\u00e1l bel\\u00e9p\\u00e9s, mehet az \\u00e1tir\\u00e1ny\\u00edt\\u00e1s\\r\\n  return TRUE;\\r\\n}\\r\\nelse{\\r\\n  \\/\\/watchdog(\\u0027debug\\u0027, \\u0027PW-Reset bel\\u00e9p\\u00e9s\\u0027);\\r\\n  \\/\\/ne legyen akci\\u00f3\\r\\n  return false;\\r\\n}\\r\\n" } }
      ],
      "DO" : [ { "redirect" : { "url" : "[site:url]", "force" : 0 } } ]
    }
  }');
  $items['rules_minden_ment_s_j_verzi_'] = entity_import('rules_config', '{ "rules_minden_ment_s_j_verzi_" : {
      "LABEL" : "Minden ment\\u00e9s \\u00faj verzi\\u00f3",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "revision", "save" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_presave" ],
      "IF" : [ { "entity_is_of_type" : { "entity" : [ "node" ], "type" : "node" } } ],
      "DO" : [ { "data_set" : { "data" : [ "node:revision" ], "value" : 1 } } ]
    }
  }');
  $items['rules_profil_mentve'] = entity_import('rules_config', '{ "rules_profil_mentve" : {
      "LABEL" : "Profil mentve",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "profile", "redirect", "user" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_update" ],
      "IF" : [
        { "data_is" : { "data" : [ "site:current-user:uid" ], "value" : [ "account:uid" ] } },
        { "NOT data_is" : {
            "data" : [ "site:current-page:path" ],
            "op" : "IN",
            "value" : { "value" : [
                "node\\/add\\/jogositas-alkalmankent-hatterz",
                "node\\/add\\/jogositas-alkalmankent-dj",
                "node\\/add\\/jogositas-darabonkent-hatterzene",
                "node\\/add\\/jogositas-darabonkent-dj",
                "node\\/add\\/tobbszorozesenkenti-jogositas",
                "node\\/add\\/tobbszorozesi-lista",
                "node\\/add\\/jogositas-zenegep",
                "node\\/add\\/jogositas-atalanydijas-hatterz",
                "node\\/add\\/jogositas-atalanydijas-dj"
              ]
            }
          }
        }
      ],
      "DO" : [ { "redirect" : { "url" : "[site:url]" } } ]
    }
  }');
  $items['rules_reg_szerepkor_dj'] = entity_import('rules_config', '{ "rules_reg_szerepkor_dj" : {
      "LABEL" : "Reg-Szerepk\\u00f6r: DJ",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "dj", "regisztracio", "szerepkor" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_insert" ],
      "IF" : [
        { "list_contains" : { "list" : [ "account:field-jogi-csoport" ], "item" : "dj" } }
      ],
      "DO" : [
        { "user_add_role" : { "account" : [ "account" ], "roles" : { "value" : { "4" : "4" } } } }
      ]
    }
  }');
  $items['rules_reg_szerepkor_hatterzene'] = entity_import('rules_config', '{ "rules_reg_szerepkor_hatterzene" : {
      "LABEL" : "Reg-Szerepk\\u00f6r: H\\u00e1tt\\u00e9rzene",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "hatterzene", "regisztracio", "szerepkor" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_insert" ],
      "IF" : [
        { "list_contains" : { "list" : [ "account:field-jogi-csoport" ], "item" : "hatterzene" } }
      ],
      "DO" : [
        { "user_add_role" : { "account" : [ "account" ], "roles" : { "value" : { "5" : "5" } } } }
      ]
    }
  }');
  $items['rules_reg_szerepkor_zenegep'] = entity_import('rules_config', '{ "rules_reg_szerepkor_zenegep" : {
      "LABEL" : "Reg-Szerepk\\u00f6r: Zeneg\\u00e9p",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "regisztracio", "szerepkor", "zenegep" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_insert" ],
      "IF" : [
        { "list_contains" : { "list" : [ "account:field-jogi-csoport" ], "item" : "zenegep" } }
      ],
      "DO" : [
        { "user_add_role" : { "account" : [ "account" ], "roles" : { "value" : { "6" : "6" } } } }
      ]
    }
  }');
  $items['rules_seged_mezo_beallitas_menteskor'] = entity_import('rules_config', '{ "rules_seged_mezo_beallitas_menteskor" : {
      "LABEL" : "seg\\u00e9d mez\\u0151 be\\u00e1ll\\u00edt\\u00e1s ment\\u00e9skor",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "entity", "node", "referenced_entity", "save", "tobbszorozesi_lista" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert", "node_update" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "tobbszorozesi_lista" : "tobbszorozesi_lista" } }
          }
        },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_entity_reference" } }
      ],
      "DO" : [
        { "entity_fetch" : {
            "USING" : { "type" : "node", "id" : [ "node:nid" ] },
            "PROVIDE" : { "entity_fetched" : { "new_adatszolg" : "New adatszolg" } }
          }
        },
        { "component_rules_update_referenced_entity" : {
            "USING" : {
              "referenced_entity" : [ "node:field-entity-reference" ],
              "new_adatszolg" : [ "new_adatszolg" ]
            },
            "PROVIDE" : { "referenced_entity" : { "referenced_entity" : "referenced_entity" } }
          }
        }
      ]
    }
  }');
  $items['rules_segedmezo_beallit_menteskor_zg'] = entity_import('rules_config', '{ "rules_segedmezo_beallit_menteskor_zg" : {
      "LABEL" : "seg\\u00e9d mez\\u0151 be\\u00e1ll\\u00edt\\u00e1sa ZG-t\\u00f6bbsz.jogos\\u00edt\\u00e1s ment\\u00e9skor ",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "entity", "field", "node", "save", "tobbszorozesenkenti" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert", "node_update" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "tobbszorozesenkenti_jogositas" : "tobbszorozesenkenti_jogositas" } }
          }
        },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_kapcsolt_zenegep" } }
      ],
      "DO" : [
        { "entity_fetch" : {
            "USING" : { "type" : "node", "id" : [ "node:nid" ] },
            "PROVIDE" : { "entity_fetched" : { "uj_tobbszorozesi" : "\\u00daj t\\u00f6bbsz\\u00f6r\\u00f6z\\u00e9si jogos\\u00edt\\u00e1s" } }
          }
        },
        { "component_rules_update_referenced_zg" : {
            "kapcsolt_zg" : [ "node:field-kapcsolt-zenegep" ],
            "uj_tobbszorozesi" : [ "uj_tobbszorozesi" ]
          }
        }
      ]
    }
  }');
  $items['rules_tobbszorozesenkenti_elfogad'] = entity_import('rules_config', '{ "rules_tobbszorozesenkenti_elfogad" : {
      "LABEL" : "Elfogad: T\\u00f6bbsz\\u00f6r\\u00f6z\\u00e9senk\\u00e9nti j.",
      "PLUGIN" : "action set",
      "TAGS" : [ "flag", "tobbszorozesenkenti" ],
      "REQUIRES" : [ "flag" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "ACTION SET" : [
        { "flag_flagnode" : {
            "flag" : "tobbszjogos_elfogadas",
            "node" : [ "node" ],
            "flagging_user" : [ "site:current-user" ],
            "permission_check" : 0
          }
        }
      ]
    }
  }');
  $items['rules_tobbszorozesenkenti_elfogad_visszavonas_zg'] = entity_import('rules_config', '{ "rules_tobbszorozesenkenti_elfogad_visszavonas_zg" : {
      "LABEL" : "T\\u00f6bbsz\\u00f6r\\u00f6z\\u00e9senk\\u00e9nti j. elfogad\\u00e1s visszavon\\u00e1sa (ZG)",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "-5",
      "TAGS" : [ "tobbszorozesenkenti", "unflag" ],
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : [ "flag_unflagged_tobbszjogos_elfogadas" ],
      "IF" : [
        { "entity_is_of_type" : { "entity" : [ "flagged-node" ], "type" : "node" } },
        { "entity_has_field" : { "entity" : [ "flagged-node" ], "field" : "field_zg_tobbsz_statusz" } },
        { "NOT flag_flagged_node" : {
            "flag" : "tobbszjogos_visszautasitas",
            "node" : [ "flagged-node" ],
            "flagging_user" : [ "flagging_user" ]
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "flagged-node:revision" ], "value" : 1 } },
        { "data_set" : {
            "data" : [ "flagged-node:field-zg-tobbsz-statusz" ],
            "value" : "feldolgoz\\u00e1s alatt"
          }
        },
        { "entity_save" : { "data" : [ "flagged-node" ], "immediate" : 1 } }
      ]
    }
  }');
  $items['rules_tobbszorozesenkenti_elfogadasa'] = entity_import('rules_config', '{ "rules_tobbszorozesenkenti_elfogadasa" : {
      "LABEL" : "T\\u00f6bbsz\\u00f6r\\u00f6z\\u00e9senk\\u00e9nti jogos\\u00edt\\u00e1s elfogad\\u00e1sa (ZG) !email f\\u00e9lk\\u00e9sz!",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "5",
      "TAGS" : [ "email", "flag", "tobbszorozesenkenti" ],
      "REQUIRES" : [ "rules", "php", "flag" ],
      "ON" : [ "flag_flagged_tobbszjogos_elfogadas" ],
      "IF" : [
        { "entity_is_of_type" : { "entity" : [ "flagged-node" ], "type" : "node" } },
        { "node_is_of_type" : {
            "node" : [ "flagged-node" ],
            "type" : { "value" : { "tobbszorozesenkenti_jogositas" : "tobbszorozesenkenti_jogositas" } }
          }
        },
        { "entity_has_field" : { "entity" : [ "flagged-node" ], "field" : "field_zg_tobbsz_statusz" } },
        { "entity_has_field" : { "entity" : [ "flagged-node" ], "field" : "field_tobbszorozesi_lista" } },
        { "entity_has_field" : { "entity" : [ "flagged-node" ], "field" : "field_kapcsolt_zenegep" } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "flagged-node:revision" ], "value" : 1 } },
        { "data_set" : {
            "data" : [ "flagged-node:field-zg-tobbsz-statusz" ],
            "value" : "elfogadva"
          }
        },
        { "php_eval" : { "code" : "auto_nodetitle_operations_update(array($flagged_node-\\u003Enid));" } },
        { "mail" : {
            "to" : [ "flagged-node:author:field-kapcsolattarto-email" ],
            "subject" : "Jogd\\u00edjfizet\\u00e9si \\u00e9rtes\\u00edt\\u0151",
            "message" : "Tisztelt Felhaszn\\u00e1l\\u00f3!\\r\\n\\r\\n[flagged-node:created] kelt T\\u00f6bbsz\\u00f6r\\u00f6z\\u00e9senk\\u00e9nti jogos\\u00edt\\u00e1sa elfogad\\u00e1sra ker\\u00fclt.\\r\\n\\r\\nAz elfogadott jogos\\u00edt\\u00e1s: [flagged-node:title]\\r\\n([flagged-node:url])\\r\\n Iktat\\u00f3sz\\u00e1m: XYZ\\r\\n Kiad\\u00e1s kelte: XYZ\\r\\n Teljes\\u00edt\\u00e9s d\\u00e1tuma: XYZ\\r\\n Fizet\\u00e9si hat\\u00e1rid\\u0151: XYZ\\r\\n\\r\\n!!! T\\u00e1bl\\u00e1zatban a r\\u00e9gi jogd\\u00edjfizet\\u00e9si \\u00e9rtes\\u00edt\\u0151b\\u0151l ismert sz\\u00e1m\\u00edt\\u00e1si r\\u00e9sz !!!\\r\\n\\r\\n!!! Alul a k\\u00e9t magyar\\u00e1z\\u00f3 sz\\u00f6veg a r\\u00e9gi \\u00e9rtes\\u00edt\\u0151r\\u0151l !!!\\r\\n\\r\\nAz adatszolg\\u00e1ltat\\u00e1shoz tartoz\\u00f3 jogos\\u00edt\\u00e1s: [flagged-node:field-entity-reference:title]\\r\\n([flagged-node:field-entity-reference:url])\\r\\n\\r\\nFelt\\u00f6lt\\u00f6tt f\\u00e1jl: [flagged-node:field-tobbszorozesi-lista:file:name]\\r\\n([flagged-node:field-tobbszorozesi-lista:file:url])\\r\\n\\r\\n\\r\\n\\r\\nAmennyiben b\\u00e1rmilyen k\\u00e9rd\\u00e9se, probl\\u00e9m\\u00e1ja mer\\u00fcl fel, k\\u00e9rj\\u00fck, jelezze az info@mahaszjogdij.hu e-mail c\\u00edmen.\\r\\n\\r\\n--\\r\\n\\u00dcdv\\u00f6zlettel,\\r\\nMAHASZ Jogd\\u00edj",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_tobbszorozesenkenti_visszautasit'] = entity_import('rules_config', '{ "rules_tobbszorozesenkenti_visszautasit" : {
      "LABEL" : "T\\u00f6bbsz\\u00f6r\\u00f6z\\u00e9senk\\u00e9nti jogos\\u00edt\\u00e1s visszautas\\u00edt\\u00e1sa (ZG)",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "5",
      "TAGS" : [ "email", "flag", "tobbszorozesenkenti" ],
      "REQUIRES" : [ "rules", "php", "flag" ],
      "ON" : [ "flag_flagged_tobbszjogos_visszautasitas" ],
      "IF" : [
        { "entity_is_of_type" : { "entity" : [ "flagged-node" ], "type" : "node" } },
        { "entity_has_field" : { "entity" : [ "flagged-node" ], "field" : "field_zg_tobbsz_statusz" } },
        { "entity_has_field" : { "entity" : [ "flagged-node" ], "field" : "field_visszautasitas_indok" } },
        { "entity_has_field" : { "entity" : [ "flagged-node" ], "field" : "field_tobbszorozesi_lista" } },
        { "entity_has_field" : { "entity" : [ "flagged-node" ], "field" : "field_kapcsolt_zenegep" } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "flagged-node:revision" ], "value" : 1 } },
        { "data_set" : {
            "data" : [ "flagged-node:field-zg-tobbsz-statusz" ],
            "value" : "visszautas\\u00edtva"
          }
        },
        { "php_eval" : { "code" : "auto_nodetitle_operations_update(array($flagged_node-\\u003Enid));" } },
        { "mail" : {
            "to" : [ "flagged-node:author:field-kapcsolattarto-email" ],
            "subject" : "T\\u00f6bbsz\\u00f6r\\u00f6z\\u00e9senk\\u00e9nti jogos\\u00edt\\u00e1s visszautas\\u00edtva: [flagged-node:field-tobbszorozesi-lista:file:name]",
            "message" : "Tisztelt Felhaszn\\u00e1l\\u00f3!\\r\\n\\r\\n[flagged-node:created] kelt jogos\\u00edt\\u00e1sa visszautas\\u00edt\\u00e1sra ker\\u00fclt.\\r\\n[flagged-node:field-visszautasitas-indok]\\r\\n\\r\\nA visszautas\\u00edtott jogos\\u00edt\\u00e1s: [flagged-node:title]\\r\\n([flagged-node:url])\\r\\n\\r\\nA jogos\\u00edt\\u00e1shoz tartoz\\u00f3 zeneg\\u00e9p: \\r\\n[flagged-node:field-kapcsolt-zenegep:title]\\r\\n([flagged-node:field-kapcsolt-zenegep:url])\\r\\n\\r\\nFelt\\u00f6lt\\u00f6tt f\\u00e1jl: [flagged-node:field-tobbszorozesi-lista:file:name]\\r\\n([flagged-node:field-tobbszorozesi-lista:file:url])\\r\\n\\r\\n\\r\\nAmennyiben b\\u00e1rmilyen k\\u00e9rd\\u00e9se, probl\\u00e9m\\u00e1ja mer\\u00fcl fel, k\\u00e9rj\\u00fck, jelezze az info@mahaszjogdij.hu e-mail c\\u00edmen.\\r\\n\\r\\n--\\r\\n\\u00dcdv\\u00f6zlettel,\\r\\nMAHASZ Jogd\\u00edj",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_tobbszorozesenkenti_visszautasit_osszetevo'] = entity_import('rules_config', '{ "rules_tobbszorozesenkenti_visszautasit_osszetevo" : {
      "LABEL" : "Visszautas\\u00edt: T\\u00f6bbsz\\u00f6r\\u00f6z\\u00e9senk\\u00e9nti j.",
      "PLUGIN" : "action set",
      "TAGS" : [ "flag", "tobbszorozesenkenti" ],
      "REQUIRES" : [ "flag" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "ACTION SET" : [
        { "flag_flagnode" : {
            "flag" : "tobbszjogos_visszautasitas",
            "node" : [ "node" ],
            "flagging_user" : [ "site:current-user" ],
            "permission_check" : 0
          }
        }
      ]
    }
  }');
  $items['rules_tobbszorozesenkenti_visszautasitas_visszavonas_zg'] = entity_import('rules_config', '{ "rules_tobbszorozesenkenti_visszautasitas_visszavonas_zg" : {
      "LABEL" : "T\\u00f6bbsz\\u00f6r\\u00f6z\\u00e9senk\\u00e9nti j. visszautasitas visszavon\\u00e1sa (ZG)",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "-5",
      "TAGS" : [ "tobbszorozesenkenti", "unflag" ],
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : [ "flag_unflagged_tobbszjogos_visszautasitas" ],
      "IF" : [
        { "entity_is_of_type" : { "entity" : [ "flagged-node" ], "type" : "node" } },
        { "entity_has_field" : { "entity" : [ "flagged-node" ], "field" : "field_zg_tobbsz_statusz" } },
        { "NOT flag_flagged_node" : {
            "flag" : "tobbszjogos_elfogadas",
            "node" : [ "flagged-node" ],
            "flagging_user" : [ "flagging_user" ]
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "flagged-node:revision" ], "value" : 1 } },
        { "data_set" : {
            "data" : [ "flagged-node:field-zg-tobbsz-statusz" ],
            "value" : "feldolgoz\\u00e1s alatt"
          }
        },
        { "entity_save" : { "data" : [ "flagged-node" ], "immediate" : 1 } }
      ]
    }
  }');
  $items['rules_tomeges_levelkuldes_urlap'] = entity_import('rules_config', '{ "rules_tomeges_levelkuldes_urlap" : {
      "LABEL" : "T\\u00f6meges lev\\u00e9lk\\u00fcld\\u00e9s \\u0171rlap",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules_forms" ],
      "ON" : [ "rules_forms_views_form_levelkuldes_page_form_built" ],
      "DO" : []
    }
  }');
  $items['rules_uj_jogositas_mentes_egyedi_uzenet'] = entity_import('rules_config', '{ "rules_uj_jogositas_mentes_egyedi_uzenet" : {
      "LABEL" : "\\u00daj jogos\\u00edt\\u00e1s ment\\u00e9s egyedi \\u00fczenet",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "email", "jogositas", "ment\\u00e9s", "\\u00faj", "\\u00fczenet" ],
      "REQUIRES" : [ "rules", "php" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : {
                "jogositas_alkalmankent_hatterz" : "jogositas_alkalmankent_hatterz",
                "jogositas_alkalmankent_dj" : "jogositas_alkalmankent_dj",
                "jogositas_darabonkent_hatterzene" : "jogositas_darabonkent_hatterzene",
                "jogositas_darabonkent_dj" : "jogositas_darabonkent_dj",
                "jogositas_atalanydijas_hatterz" : "jogositas_atalanydijas_hatterz",
                "jogositas_atalanydijas_dj" : "jogositas_atalanydijas_dj"
              }
            }
          }
        },
        { "entity_is_of_type" : { "entity" : [ "node:author" ], "type" : "user" } },
        { "NOT user_is_blocked" : { "account" : [ "node:author" ] } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[node:author:mail]",
            "subject" : "Jogos\\u00edt\\u00e1s k\\u00e9relme befogad\\u00e1sra ker\\u00fclt",
            "message" : "\\u003C?php\\r\\n$u = user_load($node-\\u003Euid); \\/\\/szerzo\\r\\n\\r\\n\\/\\/alkalmank\\u00e9nti ideje j\\u00f6v\\u0151re esik?\\r\\n$jovore = FALSE;  \\/\\/alapesetben nem.\\r\\nif($node-\\u003Etype == \\u0027jogositas_alkalmankent_hatterz\\u0027 || $node-\\u003Etype == \\u0027jogositas_alkalmankent_dj\\u0027) {\\r\\n  $jovore = field_get_items(\\u0027node\\u0027, $node, \\u0027field_rendezveny_ideje\\u0027);\\r\\n  if(is_array($jovore)) {\\r\\n    $jovore = array_pop($jovore);\\r\\n    $jovore = strtotime($jovore[\\u0027value\\u0027]) \\u003E strtotime(\\u00272014-12-31 23:59:59\\u0027) ? TRUE : FALSE;\\r\\n  }\\r\\n  else $jovore = FALSE;  \\/\\/nem t\\u00f6mb, nincs is ilyen mez\\u0151 \\/ nincs kit\\u00f6ltve\\r\\n}\\r\\n\\r\\n\\/\\/ 2014 \\u00e1rak\\r\\n$jogositas_alkalmankent_hatterz_ar = 11050;\\r\\n$jogositas_darabonkent_hatterzene_ar = 2550;\\r\\n$jogositas_darabonkent_hatterzene_ar_netto = 2008;\\r\\n$jogositas_atalanydijas_hatterz_ar = 63200;\\r\\n$jogositas_atalanydijas_hatterz_ar_hajnal = 232000;\\r\\n$jogositas_alkalmankent_dj_ar = 11050;\\r\\n$jogositas_darabonkent_dj_ar = 2550;\\r\\n$jogositas_darabonkent_dj_ar_djsz = 1785;\\r\\n$jogositas_darabonkent_dj_ar_netto = 2008;\\r\\n$jogositas_darabonkent_dj_ar_djsz_netto = 1406;\\r\\n$jogositas_atalanydijas_dj_ar = 128270;\\r\\n$jogositas_atalanydijas_dj_ar_djsz = 89790;\\r\\n$jogositas_zenegep_ar = 0;\\t\\/\\/nincs kezelve\\/ki\\u00edrva\\/elk\\u00fcldve\\r\\n\\r\\n\\/\\/2015 \\u00e1rak \\r\\n\\/\\/(akkor is, ha 2014-ben k\\u00fcldi be, de 2015-ben kezd\\u0151d\\u0151 rendezv\\u00e9nyre)\\r\\nif( date(\\u0027Y\\u0027) \\u003E 2014 || $jovore == TRUE || $u-\\u003Euid == 182) { \\/\\/uid 182 = tesztelek\\r\\n  $jogositas_alkalmankent_hatterz_ar =  11200;\\r\\n  $jogositas_darabonkent_hatterzene_ar = 2590;\\r\\n  $jogositas_darabonkent_hatterzene_ar_netto = 2039;\\r\\n  $jogositas_atalanydijas_hatterz_ar = 64262;\\r\\n  $jogositas_atalanydijas_hatterz_ar_hajnal = 235900;\\r\\n  $jogositas_alkalmankent_dj_ar = 11200;\\r\\n  $jogositas_darabonkent_dj_ar = 2590;\\r\\n  $jogositas_darabonkent_dj_ar_djsz = 1815;\\r\\n  $jogositas_darabonkent_dj_ar_netto = 2039;\\r\\n  $jogositas_darabonkent_dj_ar_djsz_netto = 1429;\\r\\n  $jogositas_atalanydijas_dj_ar = 130000;\\r\\n  $jogositas_atalanydijas_dj_ar_djsz = 91000;\\r\\n  $jogositas_zenegep_ar = 0;\\t\\/\\/nincs kezelve\\/ki\\u00edrva\\/elk\\u00fcldve\\r\\n}\\r\\n\\r\\n\\r\\n$type = $node-\\u003Etype;\\r\\n\\/\\/$djsz = field_get_items(\\u0027user\\u0027, $u, \\u0027field_dj_szovetseg\\u0027);\\r\\n$djsz = field_get_items(\\u0027node\\u0027, $node, \\u0027field_dj_szovetseg\\u0027);\\r\\nif(is_array($djsz)) {\\r\\n  $djsz = array_pop(array_pop($djsz)) == \\u0027Tag\\u0027 ? TRUE : FALSE;\\r\\n}\\r\\nelse $djsz = FALSE;  \\/\\/nem t\\u00f6mb, nincs is ilyen mez\\u0151 \\/ nincs kit\\u00f6ltve\\r\\n\\r\\n\\/\\/watchdog(\\u0027debug\\u0027,  \\u0027$DJSZ:\\u003Cpre\\u003E\\u0027 . print_r($djsz,1) . \\u0027\\u003C\\/pre\\u003E\\u0027 );\\r\\n\\/\\/watchdog(\\u0027debug\\u0027,  \\u0027$U:\\u003Cpre\\u003E\\u0027 . print_r($u,1) . \\u0027\\u003C\\/pre\\u003E\\u0027 );\\r\\n\\/\\/watchdog(\\u0027debug\\u0027,  \\u0027node:\\u003Cpre\\u003E\\u0027 . print_r($node,1) .\\u0027\\u003C\\/pre\\u003E\\u0027 );\\r\\n$ar = \\u0027nem ismert\\u0027;\\r\\n$tipus = \\u0027Jogos\\u00edt\\u00e1si\\u0027;\\r\\n$szorzo = 1;\\r\\n\\r\\n\\r\\nswitch($type){\\r\\n    case \\u0027jogositas_alkalmankent_hatterz\\u0027: \\r\\n      $tipus = \\u0027Alkalmank\\u00e9nti h\\u00e1tt\\u00e9rzene jogos\\u00edt\\u00e1si\\u0027;\\r\\n      $ar = $jogositas_alkalmankent_hatterz_ar;\\r\\n      $szorzo = array_pop(array_pop(array_pop($node-\\u003Efield_helyszinek_szama))); \\/\\/X Jogos\\u00edtand\\u00f3 helysz\\u00ednek sz\\u00e1ma\\r\\n      if(!is_numeric($szorzo)){\\r\\n        watchdog(\\u0027php\\u0027,  \\u0027\\u00c9rv\\u00e9nytelen \\u00e9rt\\u00e9k email k\\u00fcld\\u00e9sn\\u00e9l: Jogos\\u00edtand\\u00f3 helysz\\u00ednek sz\\u00e1ma = \\u0027 . $szorzo . \\r\\n          \\u0027\\u003Cpre\\u003E\\u0027 . print_r($node ,1 ) . \\u0027\\u003C\\/pre\\u003E\\u0027, array(), WATCHDOG_CRITICAL, l(\\u0027megtekint\\u00e9s\\u0027, \\u0027node\\/\\u0027 . $node-\\u003Enid) );\\r\\n        $szorzo = 1;\\r\\n      }\\r\\n      break;\\r\\n    case \\u0027jogositas_darabonkent_hatterzene\\u0027: \\r\\n      $tipus = \\u0027H\\u00e1tt\\u00e9rzene p\\u00e9ld\\u00e1nyonk\\u00e9nti jogos\\u00edt\\u00e1si\\u0027;\\r\\n      $ar = $jogositas_darabonkent_hatterzene_ar;\\r\\n      $ar_netto = $jogositas_darabonkent_hatterzene_ar_netto;\\r\\n      $szorzo = array_pop(array_pop(array_pop($node-\\u003Efield_mennyiseg))); \\/\\/X Jogos\\u00edtand\\u00f3 lemezek sz\\u00e1ma\\r\\n      if(!is_numeric($szorzo)){\\r\\n        watchdog(\\u0027php\\u0027,  \\u0027\\u00c9rv\\u00e9nytelen \\u00e9rt\\u00e9k email k\\u00fcld\\u00e9sn\\u00e9l: Jogos\\u00edtand\\u00f3 lemezek sz\\u00e1ma = \\u0027 . $szorzo . \\r\\n          \\u0027\\u003Cpre\\u003E\\u0027 . print_r($node ,1 ) . \\u0027\\u003C\\/pre\\u003E\\u0027, array(), WATCHDOG_CRITICAL, l(\\u0027megtekint\\u00e9s\\u0027, \\u0027node\\/\\u0027 . $node-\\u003Enid) );\\r\\n        $szorzo = 1;\\r\\n      }\\r\\n      break;\\r\\n    case \\u0027jogositas_atalanydijas_hatterz\\u0027: \\r\\n      $tipus = \\u0027\\u00c1tal\\u00e1nyd\\u00edjas h\\u00e1tt\\u00e9rzene jogos\\u00edt\\u00e1si\\u0027;\\r\\n      $hajnalig = array_pop(array_pop(array_pop($node-\\u003Efield_01h_utan_nyitva)));  \\/\\/01 ut\\u00e1n is nyitva\\r\\n      $ar = $hajnalig == \\u0027Igen\\u0027 ? $jogositas_atalanydijas_hatterz_ar_hajnal : $jogositas_atalanydijas_hatterz_ar; \\r\\n      $szorzo = array_pop(array_pop(array_pop($node-\\u003Efield_helyszinek_szama))); \\/\\/X Jogos\\u00edtand\\u00f3 helysz\\u00ednek sz\\u00e1ma\\r\\n      if(!is_numeric($szorzo)){\\r\\n        watchdog(\\u0027php\\u0027,  \\u0027\\u00c9rv\\u00e9nytelen \\u00e9rt\\u00e9k email k\\u00fcld\\u00e9sn\\u00e9l: Jogos\\u00edtand\\u00f3 helysz\\u00ednek sz\\u00e1ma = \\u0027 . $szorzo . \\r\\n          \\u0027\\u003Cpre\\u003E\\u0027 . print_r($node ,1 ) . \\u0027\\u003C\\/pre\\u003E\\u0027, array(), WATCHDOG_CRITICAL, l(\\u0027megtekint\\u00e9s\\u0027, \\u0027node\\/\\u0027 . $node-\\u003Enid) );\\r\\n        $szorzo = 1;\\r\\n      }\\r\\n      break;\\r\\n    case \\u0027jogositas_alkalmankent_dj\\u0027: \\r\\n      $tipus = \\u0027DJ alkalmank\\u00e9nti jogos\\u00edt\\u00e1si\\u0027;\\r\\n      $ar = $jogositas_alkalmankent_dj_ar;\\r\\n      break;\\r\\n    case \\u0027jogositas_darabonkent_dj\\u0027: \\r\\n      $tipus = \\u0027DJ p\\u00e9ld\\u00e1nyonk\\u00e9nti\\u0027;\\r\\n      $ar = $djsz ? $jogositas_darabonkent_dj_ar_djsz : $jogositas_darabonkent_dj_ar;\\r\\n      $ar_netto = $djsz ? $jogositas_darabonkent_dj_ar_djsz_netto : $jogositas_darabonkent_dj_ar_netto;\\r\\n      $szorzo = array_pop(array_pop(array_pop($node-\\u003Efield_mennyiseg))); \\/\\/X Jogos\\u00edtand\\u00f3 lemezek sz\\u00e1ma\\r\\n      if(!is_numeric($szorzo)){\\r\\n        watchdog(\\u0027php\\u0027,  \\u0027\\u00c9rv\\u00e9nytelen \\u00e9rt\\u00e9k email k\\u00fcld\\u00e9sn\\u00e9l: Jogos\\u00edtand\\u00f3 lemezek sz\\u00e1ma = \\u0027 . $szorzo . \\r\\n          \\u0027\\u003Cpre\\u003E\\u0027 . print_r($node ,1 ) . \\u0027\\u003C\\/pre\\u003E\\u0027, array(), WATCHDOG_CRITICAL, l(\\u0027megtekint\\u00e9s\\u0027, \\u0027node\\/\\u0027 . $node-\\u003Enid) );\\r\\n        $szorzo = 1;\\r\\n      }\\r\\n      break;\\r\\n    case \\u0027jogositas_atalanydijas_dj\\u0027: \\r\\n      $tipus = \\u0027DJ \\u00e1tal\\u00e1nyd\\u00edjas jogos\\u00edt\\u00e1si\\u0027;\\r\\n      $ar = $djsz ? $jogositas_atalanydijas_dj_ar_djsz : $jogositas_atalanydijas_dj_ar;\\r\\n      break;\\r\\n    case \\u0027jogositas_zenegep\\u0027: \\r\\n      $tipus = \\u0027Zeneg\\u00e9p jogos\\u00edt\\u00e1si\\u0027;\\r\\n      $ar = 0;\\r\\n      break;\\r\\n\\r\\n    default:\\r\\n      break;\\r\\n}\\r\\n\\r\\n\\r\\nif ( isset($ar_netto) \\u0026\\u0026 $ar_netto \\u003E 0 ) {\\r\\n  $ar = $ar_netto * 1.27;\\r\\n}\\r\\n\\r\\n\\r\\n?\\u003ETisztelt Felhaszn\\u00e1l\\u00f3!\\r\\n\\r\\n\\u003C? echo $tipus; ?\\u003E k\\u00e9relm\\u00e9t megkaptuk.\\r\\n\\r\\nFONTOS! Ez a lev\\u00e9l \\u00f6nmag\\u00e1ban m\\u00e9g nem jelenti a t\\u00f6bbsz\\u00f6r\\u00f6z\\u00e9si enged\\u00e9ly megad\\u00e1s\\u00e1t. Az enged\\u00e9lyt kiz\\u00e1r\\u00f3lag abban az esetben lehet megadottnak tekinteni, amennyiben a jelen jogos\\u00edt\\u00e1si k\\u00e9relem megk\\u00fcld\\u00e9s\\u00e9vel EGYIDEJ\\u0170LEG a t\\u00f6bbsz\\u00f6r\\u00f6z\\u00e9ssel kapcsolatban fizetend\\u0151 jogd\\u00edjat a felhaszn\\u00e1l\\u00f3 teljes eg\\u00e9sz\\u00e9ben megfizette.\\r\\n\\r\\n\\r\\nA jogos\\u00edt\\u00e1s \\u00e9rv\\u00e9nyess\\u00e9g\\u00e9hez teh\\u00e1t a k\\u00e9relem mellett sz\\u00fcks\\u00e9ges tov\\u00e1bb\\u00e1 a jogd\\u00edj megfizet\\u00e9se is!\\r\\n\\r\\n\\u003C? if($type != \\u0027jogositas_zenegep\\u0027) { ?\\u003EA fizetend\\u0151 jogd\\u00edj: brutt\\u00f3 \\u003C? echo number_format($ar * $szorzo, 0, \\u0027,\\u0027, \\u0027.\\u0027); ?\\u003E Ft\\r\\nsz\\u00e1mlasz\\u00e1m: 11713005-20413435 \\r\\nK\\u00e9rj\\u00fck, a befizet\\u00e9skor sz\\u00edveskedj\\u00e9k a megjegyz\\u00e9s\\/hivatkoz\\u00e1s rovatban felt\\u00fcntetni a www.mahaszjogdij.hu oldalra t\\u00f6rt\\u00e9n\\u0151 bel\\u00e9p\\u00e9shez haszn\\u00e1lt pontos felhaszn\\u00e1l\\u00f3nev\\u00e9t: \\u003C?php echo $u-\\u003Ename; ?\\u003E\\r\\n\\u003C?php } ?\\u003E\\r\\n\\r\\n\\r\\nAmennyiben jogos\\u00edt\\u00e1si k\\u00e9relm\\u00e9nek elb\\u00edr\\u00e1l\\u00e1sa sor\\u00e1n b\\u00e1rmilyen hib\\u00e1t \\u00e9szlel\\u00fcnk, err\\u0151l E-mail-ben k\\u00fcld\\u00fcnk \\u00e9rtes\\u00edt\\u00e9st az \\u00d6n \\u00e1ltal megadott E-mail c\\u00edmre.\\r\\n\\r\\nHa a k\\u00e9relme minden tekintetben elfogadhat\\u00f3, valamint jogd\\u00edja is meg\\u00e9rkezett, p\\u00e9nz\\u00fcgyi oszt\\u00e1lyunk ki\\u00e1ll\\u00edtja \\u00e9s elk\\u00fcldi \\u00d6nnek a sz\\u00e1ml\\u00e1t\\u003C? if($type == \\u0027jogositas_darabonkent_dj\\u0027 || $type == \\u0027jogositas_darabonkent_hatterzene\\u0027) { ?\\u003E, valamint a CD-(k)re ragasztand\\u00f3 matric\\u00e1(ka)t\\u003C? } ?\\u003E.\\r\\n\\r\\n\\u00dcdv\\u00f6zlettel:\\r\\nMAHASZ Jogd\\u00edj",
            "from" : "info@mahaszjogdij.hu",
            "language" : [ "" ]
          }
        },
        { "drupal_message" : { "message" : "A t\\u00f6bbsz\\u00f6r\\u00f6z\\u00e9shez az enged\\u00e9lyt kiz\\u00e1r\\u00f3lag abban az esetben lehet megadottnak tekinteni, amennyiben a jelen jogos\\u00edt\\u00e1si k\\u00e9relem megk\\u00fcld\\u00e9s\\u00e9vel EGYIDEJ\\u0170LEG a t\\u00f6bbsz\\u00f6r\\u00f6z\\u00e9ssel kapcsolatban fizetend\\u0151 jogd\\u00edjat a felhaszn\\u00e1l\\u00f3 teljes eg\\u00e9sz\\u00e9ben megfizette.\\u003Cbr \\/\\u003E\\r\\nJogos\\u00edt\\u00e1si k\\u00e9relm\\u00e9r\\u0151l visszaigazol\\u00e1st k\\u00fcldt\\u00fcnk az \\u00d6n \\u00e1ltal a regisztr\\u00e1ci\\u00f3 sor\\u00e1n megadott e-mail c\\u00edmre. \\r\\n\\u003C? if($node-\\u003Etype != \\u0027jogositas_zenegep\\u0027){ ?\\u003E\\u003Cbr \\/\\u003EA visszaigazol\\u00f3 e-mailben megtal\\u00e1lja a pontos fizetend\\u0151 \\u00f6sszeget \\u00e9s a banksz\\u00e1mlasz\\u00e1mot is.\\u003C? } ?\\u003E" } }
      ]
    }
  }');
  $items['rules_update_referenced_entity'] = entity_import('rules_config', '{ "rules_update_referenced_entity" : {
      "LABEL" : "Update referenced entity",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "referenced_entity" : { "label" : "referenced_entity", "type" : "node" },
        "new_adatszolg" : { "label" : "new_adatszolg", "type" : "node" }
      },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "referenced-entity" ],
            "type" : { "value" : {
                "jogositas_alkalmankent_hatterz" : "jogositas_alkalmankent_hatterz",
                "jogositas_alkalmankent_dj" : "jogositas_alkalmankent_dj",
                "jogositas_zenegep" : "jogositas_zenegep",
                "jogositas_atalanydijas_hatterz" : "jogositas_atalanydijas_hatterz",
                "jogositas_atalanydijas_dj" : "jogositas_atalanydijas_dj"
              }
            }
          }
        },
        { "entity_has_field" : {
            "entity" : [ "referenced-entity" ],
            "field" : "field_adatszolgaltatasok"
          }
        }
      ],
      "DO" : [
        { "entity_query" : {
            "USING" : {
              "type" : "node",
              "property" : "field_entity_reference",
              "value" : [ "referenced-entity:nid" ],
              "limit" : "30"
            },
            "PROVIDE" : { "entity_fetched" : { "kapcsolodo_nid" : "kapcsolodo nid" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "kapcsolodo-nid" ] },
            "ITEM" : { "hozzaadando" : "Hozz\\u00e1adand\\u00f3 adatszolg" },
            "DO" : [
              { "list_add" : {
                  "list" : [ "referenced-entity:field-adatszolgaltatasok" ],
                  "item" : [ "hozzaadando" ],
                  "unique" : 1,
                  "pos" : "start"
                }
              }
            ]
          }
        },
        { "list_add" : {
            "list" : [ "referenced-entity:field-adatszolgaltatasok" ],
            "item" : [ "new-adatszolg" ],
            "unique" : 1,
            "pos" : "start"
          }
        },
        { "data_set" : { "data" : [ "referenced-entity:revision" ], "value" : 1 } }
      ],
      "PROVIDES VARIABLES" : [ "referenced_entity" ]
    }
  }');
  $items['rules_update_referenced_zg'] = entity_import('rules_config', '{ "rules_update_referenced_zg" : {
      "LABEL" : "Update referenced ZG",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "kapcsolt_zg" : { "label" : "Kapcsolt Zeneg\\u00e9p", "type" : "node" },
        "uj_tobbszorozesi" : {
          "label" : "\\u00daj T\\u00f6bbsz\\u00f6r\\u00f6z\\u00e9si Jogos\\u00edt\\u00e1s",
          "type" : "node"
        }
      },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "kapcsolt-zg" ],
            "type" : { "value" : { "jogositas_zenegep" : "jogositas_zenegep" } }
          }
        },
        { "entity_has_field" : {
            "entity" : [ "kapcsolt-zg" ],
            "field" : "field_tobbszorozesenkenti_jgsts"
          }
        }
      ],
      "DO" : [
        { "entity_query" : {
            "USING" : {
              "type" : "node",
              "property" : "field_kapcsolt_zenegep",
              "value" : [ "kapcsolt-zg:nid" ],
              "limit" : "30"
            },
            "PROVIDE" : { "entity_fetched" : { "kapcsolodo_nid" : "kapcsolodo nid" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "kapcsolodo-nid" ] },
            "ITEM" : { "hozzaadando" : "Hozz\\u00e1adand\\u00f3 T\\u00f6bbsz-enk\\u00e9nti" },
            "DO" : [
              { "list_add" : {
                  "list" : [ "kapcsolt-zg:field-tobbszorozesenkenti-jgsts" ],
                  "item" : [ "hozzaadando" ],
                  "unique" : 1,
                  "pos" : "start"
                }
              }
            ]
          }
        },
        { "list_add" : {
            "list" : [ "kapcsolt-zg:field-tobbszorozesenkenti-jgsts" ],
            "item" : [ "uj-tobbszorozesi" ],
            "unique" : 1,
            "pos" : "start"
          }
        },
        { "data_set" : { "data" : [ "kapcsolt-zg:revision" ], "value" : 1 } }
      ]
    }
  }');
  $items['rules_visszautasit_adatszolg'] = entity_import('rules_config', '{ "rules_visszautasit_adatszolg" : {
      "LABEL" : "Visszautas\\u00edt: Adatszolg\\u00e1ltat\\u00e1s",
      "PLUGIN" : "action set",
      "TAGS" : [ "adatszolg", "flag" ],
      "REQUIRES" : [ "flag" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "ACTION SET" : [
        { "flag_flagnode" : {
            "flag" : "adatszolgaltatas_visszautasitas",
            "node" : [ "node" ],
            "flagging_user" : [ "site:current-user" ],
            "permission_check" : 0
          }
        }
      ]
    }
  }');
  $items['rules_visszautasitaskor_elfogad_levetel_zg_tobbszenkenti'] = entity_import('rules_config', '{ "rules_visszautasitaskor_elfogad_levetel_zg_tobbszenkenti" : {
      "LABEL" : "Visszautas\\u00edt\\u00e1skor elfogad\\u00e1s lev\\u00e9tele (ZG t\\u00f6bbsz\\u00f6r\\u00f6z\\u00e9senk\\u00e9nti)",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "flag", "sync", "tobbszorozesenkenti", "unflag" ],
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : [ "flag_flagged_tobbszjogos_visszautasitas" ],
      "IF" : [
        { "entity_is_of_type" : { "entity" : [ "flagged-node" ], "type" : "node" } },
        { "flag_flagged_node" : {
            "flag" : "tobbszjogos_elfogadas",
            "node" : [ "flagged-node" ],
            "flagging_user" : [ "flagging_user" ]
          }
        }
      ],
      "DO" : [
        { "flag_unflagnode" : {
            "flag" : "tobbszjogos_elfogadas",
            "node" : [ "flagged-node" ],
            "flagging_user" : [ "flagging_user" ],
            "permission_check" : 0
          }
        }
      ]
    }
  }');
  $items['rules_visszautasitaskor_unflag_elfogadas'] = entity_import('rules_config', '{ "rules_visszautasitaskor_unflag_elfogadas" : {
      "LABEL" : "Visszautas\\u00edt\\u00e1skor elfogad\\u00e1s lev\\u00e9tele",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "flag", "sync", "unflag" ],
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : [ "flag_flagged_adatszolgaltatas_visszautasitas" ],
      "IF" : [
        { "entity_is_of_type" : { "entity" : [ "flagged-node" ], "type" : "node" } },
        { "flag_flagged_node" : {
            "flag" : "adatszolgaltatas_elfogadas",
            "node" : [ "flagged-node" ],
            "flagging_user" : [ "flagging_user" ]
          }
        }
      ],
      "DO" : [
        { "flag_unflagnode" : {
            "flag" : "adatszolgaltatas_elfogadas",
            "node" : [ "flagged-node" ],
            "flagging_user" : [ "flagging_user" ],
            "permission_check" : 0
          }
        }
      ]
    }
  }');
  $items['rules_zeneg_pes_a_zeneg_p_t_kihelyezi_rakt_rb_l'] = entity_import('rules_config', '{ "rules_zeneg_pes_a_zeneg_p_t_kihelyezi_rakt_rb_l" : {
      "LABEL" : "zeneg\\u00e9pes a zeneg\\u00e9p\\u00e9t kihelyezi rakt\\u00e1rb\\u00f3l",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "2014", "email", "raktar", "zenegep" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_update" ],
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : { "jogositas_zenegep" : "jogositas_zenegep" } }
          }
        },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_raktarban" } },
        { "entity_has_field" : { "entity" : [ "node-unchanged" ], "field" : "field_raktarban" } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_jogositas_2014" } },
        { "data_is_empty" : { "data" : [ "node:field-raktarban" ] } },
        { "data_is" : { "data" : [ "node-unchanged:field-raktarban:0" ], "value" : "Igen" } },
        { "OR" : [
            { "data_is" : {
                "data" : [ "node:field-jogositas-2014" ],
                "op" : "IN",
                "value" : { "value" : { "atalany-ev" : "atalany-ev", "atalany-negyedev" : "atalany-negyedev" } }
              }
            },
            { "AND" : [
                { "data_is_empty" : { "data" : [ "node:field-jogositas-2014" ] } },
                { "data_is" : {
                    "data" : [ "node:field-jogositas" ],
                    "op" : "IN",
                    "value" : { "value" : { "atalany-ev" : "atalany-ev", "atalany-negyedev" : "atalany-negyedev" } }
                  }
                }
              ]
            }
          ]
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "karafiatanita@mahasz.hu, tothgabriella@mahasz.hu",
            "subject" : "ZG. Rakt\\u00e1rb\\u00f3l kihelyez\\u00e9s: [node:title]",
            "message" : "Rakt\\u00e1rb\\u00f3l kihelyez\\u00e9sre ker\\u00fclt az al\\u00e1bbi zeneg\\u00e9p:\\r\\n[node:title]\\r\\n[node:url]\\r\\n\\r\\nJogos\\u00edt\\u00e1st k\\u00e9r\\u0151 neve: [node:field-jogosult-nev]\\r\\nGy\\u00e1ri sz\\u00e1m: [node:field-gyszam]\\r\\nRakt\\u00e1rb\\u00f3l kihelyez\\u00e9s d\\u00e1tuma: [site:current-date]\\r\\n\\r\\n--\\r\\nMahasz Jogd\\u00edj",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_zg_2014es_jogositas_beallitasakor'] = entity_import('rules_config', '{ "rules_zg_2014es_jogositas_beallitasakor" : {
      "LABEL" : "Zeneg\\u00e9p 2014-es \\u00e9vi jogos\\u00edt\\u00e1si forma be\\u00e1ll\\u00edt\\u00e1sakor email",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "2014", "email", "zenegep" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_update" ],
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : { "jogositas_zenegep" : "jogositas_zenegep" } }
          }
        },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_jogositas_2014" } },
        { "data_is_empty" : { "data" : [ "node-unchanged:field-jogositas-2014" ] } },
        { "data_is" : {
            "data" : [ "node:field-jogositas-2014" ],
            "op" : "IN",
            "value" : { "value" : {
                "atalany-ev" : "atalany-ev",
                "atalany-negyedev" : "atalany-negyedev",
                "tobbszoroz" : "tobbszoroz"
              }
            }
          }
        },
        { "NOT data_is" : {
            "data" : [ "node:field-raktarban" ],
            "value" : { "value" : { "Igen" : "Igen" } }
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "karafiatanita@mahasz.hu, tothgabriella@mahasz.hu",
            "subject" : "2014-es jogd\\u00edj be\\u00e1ll\\u00edt\\u00e1sra ker\\u00fclt: #[node:nid]",
            "message" : "A 2014-es jogd\\u00edj t\\u00edpus be\\u00e1ll\\u00edt\\u00e1sra ker\\u00fclt az al\\u00e1bbi zeneg\\u00e9pen:\\r\\n[node:title]\\r\\n[node:url]\\r\\n\\r\\nJogos\\u00edt\\u00e1st k\\u00e9r\\u0151 neve: [node:field-jogosult-nev]\\r\\nGy\\u00e1ri sz\\u00e1m: [node:field-gyszam]\\r\\nJogos\\u00edt\\u00e1si k\\u00e9relem lead\\u00e1s\\u00e1nak id\\u0151pontja: [node:created]\\r\\nJogos\\u00edt\\u00e1si k\\u00e9relem t\\u00edpusa 2014: [node:field-jogositas-2014]\\r\\n\\r\\n--\\r\\nMahasz Jogd\\u00edj",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_zg_jogdij_tipus_csak_egyszer_mod'] = entity_import('rules_config', '{ "rules_zg_jogdij_tipus_csak_egyszer_mod" : {
      "LABEL" : "ZG jogdij tipus csak egyszer mod",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "jogositas", "urlap", "zenegep" ],
      "REQUIRES" : [ "rules_forms", "rules" ],
      "ON" : [ "rules_forms_jogositas_zenegep_node_form_form_built" ],
      "IF" : [
        { "OR" : [
            { "rules_forms_element_value" : {
                "form" : [ "form" ],
                "form_state" : [ "form_state" ],
                "element" : "select:field_jogositas_2014:und",
                "value" : "atalany-ev",
                "regex" : 0
              }
            },
            { "rules_forms_element_value" : {
                "form" : [ "form" ],
                "form_state" : [ "form_state" ],
                "element" : "select:field_jogositas_2014:und",
                "value" : "tobbszoroz",
                "regex" : 0
              }
            },
            { "rules_forms_element_value" : {
                "form" : [ "form" ],
                "form_state" : [ "form_state" ],
                "element" : "select:field_jogositas_2014:und",
                "value" : "atalany-negyedev",
                "regex" : 0
              }
            }
          ]
        },
        { "NOT user_has_role" : { "account" : [ "user" ], "roles" : { "value" : { "3" : "3" } } } }
      ],
      "DO" : [
        { "rules_forms_set_disabled" : {
            "form" : [ "form" ],
            "element" : "select:field_jogositas_2014:und",
            "disabled" : 1
          }
        }
      ]
    }
  }');
  $items['rules_zg_szamlazas_ures_fix'] = entity_import('rules_config', '{ "rules_zg_szamlazas_ures_fix" : {
      "LABEL" : "ZG szamlazas ures fix",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "delete", "node", "szamlazas", "zenegep" ],
      "REQUIRES" : [ "rules", "php" ],
      "ON" : [ "node_presave" ],
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : { "jogositas_zenegep" : "jogositas_zenegep" } }
          }
        },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_collection_szamlazas" } },
        { "php_eval" : { "code" : "\\/\\/van sz\\u00e1mla?\\r\\n\\/* Check if there is any field_collection field.\\r\\n * In which case the rule goes on and try to remove the empty field_collections. \\r\\n * This just a pre-check, hence the straitforward simplicity :)\\r\\n *\\/\\r\\ntry {\\r\\n  \\/\\/ ha nincs sz\\u00e1ml\\u00e1z\\u00e1s, nem kell folytatni\\r\\n  if( !is_array($node-\\u003Efield_collection_szamlazas) || sizeof($node-\\u003Efield_collection_szamlazas) == 0) {\\r\\n\\/\\/    dsm(\\u0027No field collection, rule exits\\u0027);\\r\\n    return false;\\r\\n  }\\r\\n  if( sizeof($invoices = entity_metadata_wrapper(\\u0027node\\u0027, $node)-\\u003Efield_collection_szamlazas-\\u003Evalue()) == 0){\\r\\n\\/\\/    dsm(\\u0027No field collection, rule exits\\u0027);\\r\\n    return false;\\r\\n  }\\r\\n  else{\\r\\n\\/\\/    dsm(\\u0027Field collection found: rules goes on\\u0027);\\r\\n    return true;\\r\\n  }\\r\\n}\\r\\ncatch (EntityMetadataWrapperException $exc) {\\r\\n\\/\\/  dsm(\\u0027ERROR, rule exits now\\u0027);\\r\\n    watchdog(\\u0027rules\\u0027, \\u0027node#\\u0027.$node-\\u003Enid.\\u0027See rules_zg_szamlazas_ures_fix, \\u0027  . __FUNCTION__ . \\u0027() \\u0027 .  $exc-\\u003EgetTraceAsString(), NULL, WATCHDOG_ERROR);\\r\\n    return false;\\r\\n}" } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:revision" ], "value" : 1 } },
        { "php_eval" : { "code" : "\\/\\/\\u00fcres sz\\u00e1mla t\\u00f6rl\\u00e9s\\r\\n\\/* check if there is already a field_collection added and if it is empty.\\r\\n * In which case the rule goes on and removes the empty field_collection.\\r\\n * This just a pre-check, hence the straitforwadr simplicity :)\\r\\n *\\/\\r\\ntry {  \\/\\/ sz\\u00e1ml\\u00e1z\\u00e1s field_collection elemek egyenk\\u00e9nt csekkolva, hogy \\u00fcresek-e\\r\\n\\r\\n  $invoices = entity_metadata_wrapper(\\u0027node\\u0027, $node)-\\u003Efield_collection_szamlazas-\\u003Evalue();\\r\\n\\/\\/  dsm($invoices);\\r\\n   $empty_ids = array();\\r\\n  foreach($invoices as $id =\\u003E $invoice){\\r\\n    if( $invoice == NULL || ( isset($invoice-\\u003Efield_jogdijertesito) \\u0026\\u0026 sizeof($invoice-\\u003Efield_jogdijertesito) == 0 \\u0026\\u0026 sizeof($invoice-\\u003Efield_szamla_sorszam) == 0)){\\r\\n\\/\\/      dsm(\\u0027delete: \\u0027 . $id);\\r\\n      unset($node-\\u003Efield_collection_szamlazas[LANGUAGE_NONE][$id]);\\r\\n      if($invoice != NULL) {\\r\\n        $empty_ids[] = $id; \\/\\/csak l\\u00e9tez\\u0151 belinkelt field collection megy t\\u00f6rlend\\u0151be\\r\\n        watchdog(\\u0027rules\\u0027, \\u0027\\u00fcres sz\\u00e1ml\\u00e1z\\u00e1s #\\u0027 . $id . \\u0027 t\\u00f6r\\u00f6lve. From node #\\u0027 . $node-\\u003Enid .\\u0027 - szamlazas: \\u0027. print_r($invoice-\\u003Efield_jogdijertesito, 1) .\\u0022\\\\n\\u0022 . print_r($invoice-\\u003Efield_szamla_sorszam, 1));\\r\\n      }\\r\\n    }\\r\\n  }\\r\\n  \\/\\/ Delete field collection items.\\r\\n  if( sizeof($empty_ids) \\u003E 0) {\\r\\n    entity_delete_multiple(\\u0027field_collection_item\\u0027, $empty_ids);\\r\\n    node_save($node);\\r\\n  }\\r\\n}\\r\\ncatch (EntityMetadataWrapperException $exc) {\\r\\n  watchdog(\\u0027rules\\u0027, \\u0027rules_zg_szamlazas_ures_fix, action PHP. \\u0027 .  $exc-\\u003EgetTraceAsString(), NULL, WATCHDOG_ERROR);\\r\\n}\\r\\n\\r\\n" } }
      ]
    }
  }');
  return $items;
}

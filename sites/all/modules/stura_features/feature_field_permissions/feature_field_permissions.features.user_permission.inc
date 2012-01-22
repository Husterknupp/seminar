<?php
/**
 * @file
 * feature_field_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_field_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create abstimmung content
  $permissions['create abstimmung content'] = array(
    'name' => 'create abstimmung content',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'node',
  );

  // Exported permission: create antrag content
  $permissions['create antrag content'] = array(
    'name' => 'create antrag content',
    'roles' => array(
      0 => 'Sitzungsleiter',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create bescheid content
  $permissions['create bescheid content'] = array(
    'name' => 'create bescheid content',
    'roles' => array(
      0 => 'Sitzungsleiter',
      1 => 'Sprecher',
    ),
    'module' => 'node',
  );

  // Exported permission: create body
  $permissions['create body'] = array(
    'name' => 'create body',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create feature_contenttype_protokoll content
  $permissions['create feature_contenttype_protokoll content'] = array(
    'name' => 'create feature_contenttype_protokoll content',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'node',
  );

  // Exported permission: create field_abstimmung_enthaltungen
  $permissions['create field_abstimmung_enthaltungen'] = array(
    'name' => 'create field_abstimmung_enthaltungen',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_abstimmung_ergebnis
  $permissions['create field_abstimmung_ergebnis'] = array(
    'name' => 'create field_abstimmung_ergebnis',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_abstimmung_ja
  $permissions['create field_abstimmung_ja'] = array(
    'name' => 'create field_abstimmung_ja',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_abstimmung_nein
  $permissions['create field_abstimmung_nein'] = array(
    'name' => 'create field_abstimmung_nein',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_abstimmung_top
  $permissions['create field_abstimmung_top'] = array(
    'name' => 'create field_abstimmung_top',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_antrag_antragsdatum
  $permissions['create field_antrag_antragsdatum'] = array(
    'name' => 'create field_antrag_antragsdatum',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_antrag_antragsteller
  $permissions['create field_antrag_antragsteller'] = array(
    'name' => 'create field_antrag_antragsteller',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_antrag_eintrittspreis
  $permissions['create field_antrag_eintrittspreis'] = array(
    'name' => 'create field_antrag_eintrittspreis',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_antrag_foerdersumme
  $permissions['create field_antrag_foerdersumme'] = array(
    'name' => 'create field_antrag_foerdersumme',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_antrag_studentenanteil
  $permissions['create field_antrag_studentenanteil'] = array(
    'name' => 'create field_antrag_studentenanteil',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_antrag_teilnehmerzahl
  $permissions['create field_antrag_teilnehmerzahl'] = array(
    'name' => 'create field_antrag_teilnehmerzahl',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_antrag_typ
  $permissions['create field_antrag_typ'] = array(
    'name' => 'create field_antrag_typ',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_antrag_vorschusszahlung
  $permissions['create field_antrag_vorschusszahlung'] = array(
    'name' => 'create field_antrag_vorschusszahlung',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_antrag_zeitraum
  $permissions['create field_antrag_zeitraum'] = array(
    'name' => 'create field_antrag_zeitraum',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_antrag_zielgruppe
  $permissions['create field_antrag_zielgruppe'] = array(
    'name' => 'create field_antrag_zielgruppe',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_antrag_zustand
  $permissions['create field_antrag_zustand'] = array(
    'name' => 'create field_antrag_zustand',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_bescheid_antrag
  $permissions['create field_bescheid_antrag'] = array(
    'name' => 'create field_bescheid_antrag',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_bescheid_antragsgenehm
  $permissions['create field_bescheid_antragsgenehm'] = array(
    'name' => 'create field_bescheid_antragsgenehm',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_bescheid_bescheidsnummer
  $permissions['create field_bescheid_bescheidsnummer'] = array(
    'name' => 'create field_bescheid_bescheidsnummer',
    'roles' => array(
      0 => 'Sitzungsleiter',
      1 => 'Sprecher',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_finanzplan_antrag
  $permissions['create field_finanzplan_antrag'] = array(
    'name' => 'create field_finanzplan_antrag',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_finanzplan_ausgaben
  $permissions['create field_finanzplan_ausgaben'] = array(
    'name' => 'create field_finanzplan_ausgaben',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_finanzplan_bilanz
  $permissions['create field_finanzplan_bilanz'] = array(
    'name' => 'create field_finanzplan_bilanz',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_finanzplan_einnahmen
  $permissions['create field_finanzplan_einnahmen'] = array(
    'name' => 'create field_finanzplan_einnahmen',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_finanzplan_summeausgaben
  $permissions['create field_finanzplan_summeausgaben'] = array(
    'name' => 'create field_finanzplan_summeausgaben',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_finanzplan_summeeinnahmen
  $permissions['create field_finanzplan_summeeinnahmen'] = array(
    'name' => 'create field_finanzplan_summeeinnahmen',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_konto_bankleitzahl
  $permissions['create field_konto_bankleitzahl'] = array(
    'name' => 'create field_konto_bankleitzahl',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_konto_iban
  $permissions['create field_konto_iban'] = array(
    'name' => 'create field_konto_iban',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_konto_kontonummer
  $permissions['create field_konto_kontonummer'] = array(
    'name' => 'create field_konto_kontonummer',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_konto_kreditinstitut
  $permissions['create field_konto_kreditinstitut'] = array(
    'name' => 'create field_konto_kreditinstitut',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_konto_person
  $permissions['create field_konto_person'] = array(
    'name' => 'create field_konto_person',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_protokoll_datum
  $permissions['create field_protokoll_datum'] = array(
    'name' => 'create field_protokoll_datum',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_protokoll_protokollant
  $permissions['create field_protokoll_protokollant'] = array(
    'name' => 'create field_protokoll_protokollant',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_protokoll_sitzungsleiter
  $permissions['create field_protokoll_sitzungsleiter'] = array(
    'name' => 'create field_protokoll_sitzungsleiter',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_sitzung_ort
  $permissions['create field_sitzung_ort'] = array(
    'name' => 'create field_sitzung_ort',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_sitzung_sitzungsdatum
  $permissions['create field_sitzung_sitzungsdatum'] = array(
    'name' => 'create field_sitzung_sitzungsdatum',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_tagesordnung_ref
  $permissions['create field_tagesordnung_ref'] = array(
    'name' => 'create field_tagesordnung_ref',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_tagesordnungspunkt_antrag
  $permissions['create field_tagesordnungspunkt_antrag'] = array(
    'name' => 'create field_tagesordnungspunkt_antrag',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_tagesordnungspunkt_nr
  $permissions['create field_tagesordnungspunkt_nr'] = array(
    'name' => 'create field_tagesordnungspunkt_nr',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create finanzplan content
  $permissions['create finanzplan content'] = array(
    'name' => 'create finanzplan content',
    'roles' => array(
      0 => 'Sitzungsleiter',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create konto content
  $permissions['create konto content'] = array(
    'name' => 'create konto content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create sitzung content
  $permissions['create sitzung content'] = array(
    'name' => 'create sitzung content',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'node',
  );

  // Exported permission: create tagesordnungspunkt content
  $permissions['create tagesordnungspunkt content'] = array(
    'name' => 'create tagesordnungspunkt content',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any abstimmung content
  $permissions['delete any abstimmung content'] = array(
    'name' => 'delete any abstimmung content',
    'roles' => array(),
  );

  // Exported permission: delete any antrag content
  $permissions['delete any antrag content'] = array(
    'name' => 'delete any antrag content',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any bescheid content
  $permissions['delete any bescheid content'] = array(
    'name' => 'delete any bescheid content',
    'roles' => array(
      0 => 'Sprecher',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any feature_contenttype_protokoll content
  $permissions['delete any feature_contenttype_protokoll content'] = array(
    'name' => 'delete any feature_contenttype_protokoll content',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any finanzplan content
  $permissions['delete any finanzplan content'] = array(
    'name' => 'delete any finanzplan content',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any konto content
  $permissions['delete any konto content'] = array(
    'name' => 'delete any konto content',
    'roles' => array(),
  );

  // Exported permission: delete any sitzung content
  $permissions['delete any sitzung content'] = array(
    'name' => 'delete any sitzung content',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any tagesordnungspunkt content
  $permissions['delete any tagesordnungspunkt content'] = array(
    'name' => 'delete any tagesordnungspunkt content',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own abstimmung content
  $permissions['delete own abstimmung content'] = array(
    'name' => 'delete own abstimmung content',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own antrag content
  $permissions['delete own antrag content'] = array(
    'name' => 'delete own antrag content',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own bescheid content
  $permissions['delete own bescheid content'] = array(
    'name' => 'delete own bescheid content',
    'roles' => array(
      0 => 'Sprecher',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own feature_contenttype_protokoll content
  $permissions['delete own feature_contenttype_protokoll content'] = array(
    'name' => 'delete own feature_contenttype_protokoll content',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own finanzplan content
  $permissions['delete own finanzplan content'] = array(
    'name' => 'delete own finanzplan content',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own konto content
  $permissions['delete own konto content'] = array(
    'name' => 'delete own konto content',
    'roles' => array(
      0 => 'Finanzer',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own sitzung content
  $permissions['delete own sitzung content'] = array(
    'name' => 'delete own sitzung content',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own tagesordnungspunkt content
  $permissions['delete own tagesordnungspunkt content'] = array(
    'name' => 'delete own tagesordnungspunkt content',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any abstimmung content
  $permissions['edit any abstimmung content'] = array(
    'name' => 'edit any abstimmung content',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any antrag content
  $permissions['edit any antrag content'] = array(
    'name' => 'edit any antrag content',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any bescheid content
  $permissions['edit any bescheid content'] = array(
    'name' => 'edit any bescheid content',
    'roles' => array(
      0 => 'Sitzungsleiter',
      1 => 'Sprecher',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any feature_contenttype_protokoll content
  $permissions['edit any feature_contenttype_protokoll content'] = array(
    'name' => 'edit any feature_contenttype_protokoll content',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any finanzplan content
  $permissions['edit any finanzplan content'] = array(
    'name' => 'edit any finanzplan content',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any konto content
  $permissions['edit any konto content'] = array(
    'name' => 'edit any konto content',
    'roles' => array(
      0 => 'Finanzer',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any sitzung content
  $permissions['edit any sitzung content'] = array(
    'name' => 'edit any sitzung content',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any tagesordnungspunkt content
  $permissions['edit any tagesordnungspunkt content'] = array(
    'name' => 'edit any tagesordnungspunkt content',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'node',
  );

  // Exported permission: edit body
  $permissions['edit body'] = array(
    'name' => 'edit body',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_abstimmung_enthaltungen
  $permissions['edit field_abstimmung_enthaltungen'] = array(
    'name' => 'edit field_abstimmung_enthaltungen',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_abstimmung_ergebnis
  $permissions['edit field_abstimmung_ergebnis'] = array(
    'name' => 'edit field_abstimmung_ergebnis',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_abstimmung_ja
  $permissions['edit field_abstimmung_ja'] = array(
    'name' => 'edit field_abstimmung_ja',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_abstimmung_nein
  $permissions['edit field_abstimmung_nein'] = array(
    'name' => 'edit field_abstimmung_nein',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_abstimmung_top
  $permissions['edit field_abstimmung_top'] = array(
    'name' => 'edit field_abstimmung_top',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_antrag_antragsdatum
  $permissions['edit field_antrag_antragsdatum'] = array(
    'name' => 'edit field_antrag_antragsdatum',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_antrag_antragsteller
  $permissions['edit field_antrag_antragsteller'] = array(
    'name' => 'edit field_antrag_antragsteller',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_antrag_eintrittspreis
  $permissions['edit field_antrag_eintrittspreis'] = array(
    'name' => 'edit field_antrag_eintrittspreis',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_antrag_foerdersumme
  $permissions['edit field_antrag_foerdersumme'] = array(
    'name' => 'edit field_antrag_foerdersumme',
    'roles' => array(
      0 => 'Finanzer',
      1 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_antrag_studentenanteil
  $permissions['edit field_antrag_studentenanteil'] = array(
    'name' => 'edit field_antrag_studentenanteil',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_antrag_teilnehmerzahl
  $permissions['edit field_antrag_teilnehmerzahl'] = array(
    'name' => 'edit field_antrag_teilnehmerzahl',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_antrag_typ
  $permissions['edit field_antrag_typ'] = array(
    'name' => 'edit field_antrag_typ',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_antrag_vorschusszahlung
  $permissions['edit field_antrag_vorschusszahlung'] = array(
    'name' => 'edit field_antrag_vorschusszahlung',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_antrag_zeitraum
  $permissions['edit field_antrag_zeitraum'] = array(
    'name' => 'edit field_antrag_zeitraum',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_antrag_zielgruppe
  $permissions['edit field_antrag_zielgruppe'] = array(
    'name' => 'edit field_antrag_zielgruppe',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_antrag_zustand
  $permissions['edit field_antrag_zustand'] = array(
    'name' => 'edit field_antrag_zustand',
    'roles' => array(
      0 => 'Finanzer',
      1 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_bescheid_antrag
  $permissions['edit field_bescheid_antrag'] = array(
    'name' => 'edit field_bescheid_antrag',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_bescheid_antragsgenehm
  $permissions['edit field_bescheid_antragsgenehm'] = array(
    'name' => 'edit field_bescheid_antragsgenehm',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_bescheid_bescheidsnummer
  $permissions['edit field_bescheid_bescheidsnummer'] = array(
    'name' => 'edit field_bescheid_bescheidsnummer',
    'roles' => array(
      0 => 'Sitzungsleiter',
      1 => 'Sprecher',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_finanzplan_antrag
  $permissions['edit field_finanzplan_antrag'] = array(
    'name' => 'edit field_finanzplan_antrag',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_finanzplan_ausgaben
  $permissions['edit field_finanzplan_ausgaben'] = array(
    'name' => 'edit field_finanzplan_ausgaben',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_finanzplan_bilanz
  $permissions['edit field_finanzplan_bilanz'] = array(
    'name' => 'edit field_finanzplan_bilanz',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_finanzplan_einnahmen
  $permissions['edit field_finanzplan_einnahmen'] = array(
    'name' => 'edit field_finanzplan_einnahmen',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_finanzplan_summeausgaben
  $permissions['edit field_finanzplan_summeausgaben'] = array(
    'name' => 'edit field_finanzplan_summeausgaben',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_finanzplan_summeeinnahmen
  $permissions['edit field_finanzplan_summeeinnahmen'] = array(
    'name' => 'edit field_finanzplan_summeeinnahmen',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_konto_bankleitzahl
  $permissions['edit field_konto_bankleitzahl'] = array(
    'name' => 'edit field_konto_bankleitzahl',
    'roles' => array(
      0 => 'Finanzer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_konto_iban
  $permissions['edit field_konto_iban'] = array(
    'name' => 'edit field_konto_iban',
    'roles' => array(
      0 => 'Finanzer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_konto_kontonummer
  $permissions['edit field_konto_kontonummer'] = array(
    'name' => 'edit field_konto_kontonummer',
    'roles' => array(
      0 => 'Finanzer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_konto_kreditinstitut
  $permissions['edit field_konto_kreditinstitut'] = array(
    'name' => 'edit field_konto_kreditinstitut',
    'roles' => array(
      0 => 'Finanzer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_konto_person
  $permissions['edit field_konto_person'] = array(
    'name' => 'edit field_konto_person',
    'roles' => array(
      0 => 'Finanzer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_protokoll_datum
  $permissions['edit field_protokoll_datum'] = array(
    'name' => 'edit field_protokoll_datum',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_protokoll_protokollant
  $permissions['edit field_protokoll_protokollant'] = array(
    'name' => 'edit field_protokoll_protokollant',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_protokoll_sitzungsleiter
  $permissions['edit field_protokoll_sitzungsleiter'] = array(
    'name' => 'edit field_protokoll_sitzungsleiter',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_sitzung_ort
  $permissions['edit field_sitzung_ort'] = array(
    'name' => 'edit field_sitzung_ort',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_sitzung_sitzungsdatum
  $permissions['edit field_sitzung_sitzungsdatum'] = array(
    'name' => 'edit field_sitzung_sitzungsdatum',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_tagesordnung_ref
  $permissions['edit field_tagesordnung_ref'] = array(
    'name' => 'edit field_tagesordnung_ref',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_tagesordnungspunkt_antrag
  $permissions['edit field_tagesordnungspunkt_antrag'] = array(
    'name' => 'edit field_tagesordnungspunkt_antrag',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_tagesordnungspunkt_nr
  $permissions['edit field_tagesordnungspunkt_nr'] = array(
    'name' => 'edit field_tagesordnungspunkt_nr',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own abstimmung content
  $permissions['edit own abstimmung content'] = array(
    'name' => 'edit own abstimmung content',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own antrag content
  $permissions['edit own antrag content'] = array(
    'name' => 'edit own antrag content',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own bescheid content
  $permissions['edit own bescheid content'] = array(
    'name' => 'edit own bescheid content',
    'roles' => array(
      0 => 'Sitzungsleiter',
      1 => 'Sprecher',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own body
  $permissions['edit own body'] = array(
    'name' => 'edit own body',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own feature_contenttype_protokoll content
  $permissions['edit own feature_contenttype_protokoll content'] = array(
    'name' => 'edit own feature_contenttype_protokoll content',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own field_abstimmung_enthaltungen
  $permissions['edit own field_abstimmung_enthaltungen'] = array(
    'name' => 'edit own field_abstimmung_enthaltungen',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_abstimmung_ergebnis
  $permissions['edit own field_abstimmung_ergebnis'] = array(
    'name' => 'edit own field_abstimmung_ergebnis',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_abstimmung_ja
  $permissions['edit own field_abstimmung_ja'] = array(
    'name' => 'edit own field_abstimmung_ja',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_abstimmung_nein
  $permissions['edit own field_abstimmung_nein'] = array(
    'name' => 'edit own field_abstimmung_nein',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_abstimmung_top
  $permissions['edit own field_abstimmung_top'] = array(
    'name' => 'edit own field_abstimmung_top',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_antrag_antragsdatum
  $permissions['edit own field_antrag_antragsdatum'] = array(
    'name' => 'edit own field_antrag_antragsdatum',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_antrag_antragsteller
  $permissions['edit own field_antrag_antragsteller'] = array(
    'name' => 'edit own field_antrag_antragsteller',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_antrag_eintrittspreis
  $permissions['edit own field_antrag_eintrittspreis'] = array(
    'name' => 'edit own field_antrag_eintrittspreis',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_antrag_foerdersumme
  $permissions['edit own field_antrag_foerdersumme'] = array(
    'name' => 'edit own field_antrag_foerdersumme',
    'roles' => array(
      0 => 'Finanzer',
      1 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_antrag_studentenanteil
  $permissions['edit own field_antrag_studentenanteil'] = array(
    'name' => 'edit own field_antrag_studentenanteil',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_antrag_teilnehmerzahl
  $permissions['edit own field_antrag_teilnehmerzahl'] = array(
    'name' => 'edit own field_antrag_teilnehmerzahl',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_antrag_typ
  $permissions['edit own field_antrag_typ'] = array(
    'name' => 'edit own field_antrag_typ',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_antrag_vorschusszahlung
  $permissions['edit own field_antrag_vorschusszahlung'] = array(
    'name' => 'edit own field_antrag_vorschusszahlung',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_antrag_zeitraum
  $permissions['edit own field_antrag_zeitraum'] = array(
    'name' => 'edit own field_antrag_zeitraum',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_antrag_zielgruppe
  $permissions['edit own field_antrag_zielgruppe'] = array(
    'name' => 'edit own field_antrag_zielgruppe',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_antrag_zustand
  $permissions['edit own field_antrag_zustand'] = array(
    'name' => 'edit own field_antrag_zustand',
    'roles' => array(
      0 => 'Finanzer',
      1 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_bescheid_antrag
  $permissions['edit own field_bescheid_antrag'] = array(
    'name' => 'edit own field_bescheid_antrag',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_bescheid_antragsgenehm
  $permissions['edit own field_bescheid_antragsgenehm'] = array(
    'name' => 'edit own field_bescheid_antragsgenehm',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_bescheid_bescheidsnummer
  $permissions['edit own field_bescheid_bescheidsnummer'] = array(
    'name' => 'edit own field_bescheid_bescheidsnummer',
    'roles' => array(
      0 => 'Sitzungsleiter',
      1 => 'Sprecher',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_finanzplan_antrag
  $permissions['edit own field_finanzplan_antrag'] = array(
    'name' => 'edit own field_finanzplan_antrag',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_finanzplan_ausgaben
  $permissions['edit own field_finanzplan_ausgaben'] = array(
    'name' => 'edit own field_finanzplan_ausgaben',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_finanzplan_bilanz
  $permissions['edit own field_finanzplan_bilanz'] = array(
    'name' => 'edit own field_finanzplan_bilanz',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_finanzplan_einnahmen
  $permissions['edit own field_finanzplan_einnahmen'] = array(
    'name' => 'edit own field_finanzplan_einnahmen',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_finanzplan_summeausgaben
  $permissions['edit own field_finanzplan_summeausgaben'] = array(
    'name' => 'edit own field_finanzplan_summeausgaben',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_finanzplan_summeeinnahmen
  $permissions['edit own field_finanzplan_summeeinnahmen'] = array(
    'name' => 'edit own field_finanzplan_summeeinnahmen',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_konto_bankleitzahl
  $permissions['edit own field_konto_bankleitzahl'] = array(
    'name' => 'edit own field_konto_bankleitzahl',
    'roles' => array(
      0 => 'Finanzer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_konto_iban
  $permissions['edit own field_konto_iban'] = array(
    'name' => 'edit own field_konto_iban',
    'roles' => array(
      0 => 'Finanzer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_konto_kontonummer
  $permissions['edit own field_konto_kontonummer'] = array(
    'name' => 'edit own field_konto_kontonummer',
    'roles' => array(
      0 => 'Finanzer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_konto_kreditinstitut
  $permissions['edit own field_konto_kreditinstitut'] = array(
    'name' => 'edit own field_konto_kreditinstitut',
    'roles' => array(
      0 => 'Finanzer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_konto_person
  $permissions['edit own field_konto_person'] = array(
    'name' => 'edit own field_konto_person',
    'roles' => array(
      0 => 'Finanzer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_protokoll_datum
  $permissions['edit own field_protokoll_datum'] = array(
    'name' => 'edit own field_protokoll_datum',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_protokoll_protokollant
  $permissions['edit own field_protokoll_protokollant'] = array(
    'name' => 'edit own field_protokoll_protokollant',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_protokoll_sitzungsleiter
  $permissions['edit own field_protokoll_sitzungsleiter'] = array(
    'name' => 'edit own field_protokoll_sitzungsleiter',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_sitzung_ort
  $permissions['edit own field_sitzung_ort'] = array(
    'name' => 'edit own field_sitzung_ort',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_sitzung_sitzungsdatum
  $permissions['edit own field_sitzung_sitzungsdatum'] = array(
    'name' => 'edit own field_sitzung_sitzungsdatum',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_tagesordnung_ref
  $permissions['edit own field_tagesordnung_ref'] = array(
    'name' => 'edit own field_tagesordnung_ref',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_tagesordnungspunkt_antrag
  $permissions['edit own field_tagesordnungspunkt_antrag'] = array(
    'name' => 'edit own field_tagesordnungspunkt_antrag',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_tagesordnungspunkt_nr
  $permissions['edit own field_tagesordnungspunkt_nr'] = array(
    'name' => 'edit own field_tagesordnungspunkt_nr',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own finanzplan content
  $permissions['edit own finanzplan content'] = array(
    'name' => 'edit own finanzplan content',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own konto content
  $permissions['edit own konto content'] = array(
    'name' => 'edit own konto content',
    'roles' => array(
      0 => 'Finanzer',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own sitzung content
  $permissions['edit own sitzung content'] = array(
    'name' => 'edit own sitzung content',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own tagesordnungspunkt content
  $permissions['edit own tagesordnungspunkt content'] = array(
    'name' => 'edit own tagesordnungspunkt content',
    'roles' => array(
      0 => 'Sitzungsleiter',
    ),
    'module' => 'node',
  );

  // Exported permission: view body
  $permissions['view body'] = array(
    'name' => 'view body',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_abstimmung_enthaltungen
  $permissions['view field_abstimmung_enthaltungen'] = array(
    'name' => 'view field_abstimmung_enthaltungen',
    'roles' => array(
      0 => 'Sitzungsleiter',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_abstimmung_ergebnis
  $permissions['view field_abstimmung_ergebnis'] = array(
    'name' => 'view field_abstimmung_ergebnis',
    'roles' => array(
      0 => 'Sitzungsleiter',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_abstimmung_ja
  $permissions['view field_abstimmung_ja'] = array(
    'name' => 'view field_abstimmung_ja',
    'roles' => array(
      0 => 'Sitzungsleiter',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_abstimmung_nein
  $permissions['view field_abstimmung_nein'] = array(
    'name' => 'view field_abstimmung_nein',
    'roles' => array(
      0 => 'Sitzungsleiter',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_abstimmung_top
  $permissions['view field_abstimmung_top'] = array(
    'name' => 'view field_abstimmung_top',
    'roles' => array(
      0 => 'Sitzungsleiter',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_antrag_antragsdatum
  $permissions['view field_antrag_antragsdatum'] = array(
    'name' => 'view field_antrag_antragsdatum',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_antrag_antragsteller
  $permissions['view field_antrag_antragsteller'] = array(
    'name' => 'view field_antrag_antragsteller',
    'roles' => array(
      0 => 'Angestellter',
      1 => 'Finanzer',
      2 => 'Sitzungsleiter',
      3 => 'Sprecher',
      4 => 'StuRa-Mitglied',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_antrag_eintrittspreis
  $permissions['view field_antrag_eintrittspreis'] = array(
    'name' => 'view field_antrag_eintrittspreis',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_antrag_foerdersumme
  $permissions['view field_antrag_foerdersumme'] = array(
    'name' => 'view field_antrag_foerdersumme',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_antrag_studentenanteil
  $permissions['view field_antrag_studentenanteil'] = array(
    'name' => 'view field_antrag_studentenanteil',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_antrag_teilnehmerzahl
  $permissions['view field_antrag_teilnehmerzahl'] = array(
    'name' => 'view field_antrag_teilnehmerzahl',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_antrag_typ
  $permissions['view field_antrag_typ'] = array(
    'name' => 'view field_antrag_typ',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_antrag_vorschusszahlung
  $permissions['view field_antrag_vorschusszahlung'] = array(
    'name' => 'view field_antrag_vorschusszahlung',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_antrag_zeitraum
  $permissions['view field_antrag_zeitraum'] = array(
    'name' => 'view field_antrag_zeitraum',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_antrag_zielgruppe
  $permissions['view field_antrag_zielgruppe'] = array(
    'name' => 'view field_antrag_zielgruppe',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_antrag_zustand
  $permissions['view field_antrag_zustand'] = array(
    'name' => 'view field_antrag_zustand',
    'roles' => array(
      0 => 'Angestellter',
      1 => 'Finanzer',
      2 => 'Sitzungsleiter',
      3 => 'Sprecher',
      4 => 'StuRa-Mitglied',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_bescheid_antrag
  $permissions['view field_bescheid_antrag'] = array(
    'name' => 'view field_bescheid_antrag',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_bescheid_antragsgenehm
  $permissions['view field_bescheid_antragsgenehm'] = array(
    'name' => 'view field_bescheid_antragsgenehm',
    'roles' => array(
      0 => 'Sitzungsleiter',
      1 => 'Sprecher',
      2 => 'anonymous user',
      3 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_bescheid_bescheidsnummer
  $permissions['view field_bescheid_bescheidsnummer'] = array(
    'name' => 'view field_bescheid_bescheidsnummer',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_finanzplan_antrag
  $permissions['view field_finanzplan_antrag'] = array(
    'name' => 'view field_finanzplan_antrag',
    'roles' => array(
      0 => 'Angestellter',
      1 => 'Finanzer',
      2 => 'Sitzungsleiter',
      3 => 'Sprecher',
      4 => 'StuRa-Mitglied',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_finanzplan_ausgaben
  $permissions['view field_finanzplan_ausgaben'] = array(
    'name' => 'view field_finanzplan_ausgaben',
    'roles' => array(
      0 => 'Angestellter',
      1 => 'Finanzer',
      2 => 'Sitzungsleiter',
      3 => 'Sprecher',
      4 => 'StuRa-Mitglied',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_finanzplan_bilanz
  $permissions['view field_finanzplan_bilanz'] = array(
    'name' => 'view field_finanzplan_bilanz',
    'roles' => array(
      0 => 'Angestellter',
      1 => 'Finanzer',
      2 => 'Sitzungsleiter',
      3 => 'Sprecher',
      4 => 'StuRa-Mitglied',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_finanzplan_einnahmen
  $permissions['view field_finanzplan_einnahmen'] = array(
    'name' => 'view field_finanzplan_einnahmen',
    'roles' => array(
      0 => 'Angestellter',
      1 => 'Finanzer',
      2 => 'Sitzungsleiter',
      3 => 'Sprecher',
      4 => 'StuRa-Mitglied',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_finanzplan_summeausgaben
  $permissions['view field_finanzplan_summeausgaben'] = array(
    'name' => 'view field_finanzplan_summeausgaben',
    'roles' => array(
      0 => 'Angestellter',
      1 => 'Finanzer',
      2 => 'Sitzungsleiter',
      3 => 'Sprecher',
      4 => 'StuRa-Mitglied',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_finanzplan_summeeinnahmen
  $permissions['view field_finanzplan_summeeinnahmen'] = array(
    'name' => 'view field_finanzplan_summeeinnahmen',
    'roles' => array(
      0 => 'Angestellter',
      1 => 'Finanzer',
      2 => 'Sitzungsleiter',
      3 => 'Sprecher',
      4 => 'StuRa-Mitglied',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_konto_bankleitzahl
  $permissions['view field_konto_bankleitzahl'] = array(
    'name' => 'view field_konto_bankleitzahl',
    'roles' => array(
      0 => 'Finanzer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_konto_iban
  $permissions['view field_konto_iban'] = array(
    'name' => 'view field_konto_iban',
    'roles' => array(
      0 => 'Finanzer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_konto_kontonummer
  $permissions['view field_konto_kontonummer'] = array(
    'name' => 'view field_konto_kontonummer',
    'roles' => array(
      0 => 'Finanzer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_konto_kreditinstitut
  $permissions['view field_konto_kreditinstitut'] = array(
    'name' => 'view field_konto_kreditinstitut',
    'roles' => array(
      0 => 'Finanzer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_konto_person
  $permissions['view field_konto_person'] = array(
    'name' => 'view field_konto_person',
    'roles' => array(
      0 => 'Finanzer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_protokoll_datum
  $permissions['view field_protokoll_datum'] = array(
    'name' => 'view field_protokoll_datum',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_protokoll_protokollant
  $permissions['view field_protokoll_protokollant'] = array(
    'name' => 'view field_protokoll_protokollant',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_protokoll_sitzungsleiter
  $permissions['view field_protokoll_sitzungsleiter'] = array(
    'name' => 'view field_protokoll_sitzungsleiter',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_sitzung_ort
  $permissions['view field_sitzung_ort'] = array(
    'name' => 'view field_sitzung_ort',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_sitzung_sitzungsdatum
  $permissions['view field_sitzung_sitzungsdatum'] = array(
    'name' => 'view field_sitzung_sitzungsdatum',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_tagesordnung_ref
  $permissions['view field_tagesordnung_ref'] = array(
    'name' => 'view field_tagesordnung_ref',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_tagesordnungspunkt_antrag
  $permissions['view field_tagesordnungspunkt_antrag'] = array(
    'name' => 'view field_tagesordnungspunkt_antrag',
    'roles' => array(
      0 => 'Angestellter',
      1 => 'Finanzer',
      2 => 'Sitzungsleiter',
      3 => 'Sprecher',
      4 => 'StuRa-Mitglied',
      5 => 'anonymous user',
      6 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_tagesordnungspunkt_nr
  $permissions['view field_tagesordnungspunkt_nr'] = array(
    'name' => 'view field_tagesordnungspunkt_nr',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own body
  $permissions['view own body'] = array(
    'name' => 'view own body',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_abstimmung_enthaltungen
  $permissions['view own field_abstimmung_enthaltungen'] = array(
    'name' => 'view own field_abstimmung_enthaltungen',
    'roles' => array(
      0 => 'Sitzungsleiter',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_abstimmung_ergebnis
  $permissions['view own field_abstimmung_ergebnis'] = array(
    'name' => 'view own field_abstimmung_ergebnis',
    'roles' => array(
      0 => 'Sitzungsleiter',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_abstimmung_ja
  $permissions['view own field_abstimmung_ja'] = array(
    'name' => 'view own field_abstimmung_ja',
    'roles' => array(
      0 => 'Sitzungsleiter',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_abstimmung_nein
  $permissions['view own field_abstimmung_nein'] = array(
    'name' => 'view own field_abstimmung_nein',
    'roles' => array(
      0 => 'Sitzungsleiter',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_abstimmung_top
  $permissions['view own field_abstimmung_top'] = array(
    'name' => 'view own field_abstimmung_top',
    'roles' => array(
      0 => 'Sitzungsleiter',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_antrag_antragsdatum
  $permissions['view own field_antrag_antragsdatum'] = array(
    'name' => 'view own field_antrag_antragsdatum',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_antrag_antragsteller
  $permissions['view own field_antrag_antragsteller'] = array(
    'name' => 'view own field_antrag_antragsteller',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_antrag_eintrittspreis
  $permissions['view own field_antrag_eintrittspreis'] = array(
    'name' => 'view own field_antrag_eintrittspreis',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_antrag_foerdersumme
  $permissions['view own field_antrag_foerdersumme'] = array(
    'name' => 'view own field_antrag_foerdersumme',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_antrag_studentenanteil
  $permissions['view own field_antrag_studentenanteil'] = array(
    'name' => 'view own field_antrag_studentenanteil',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_antrag_teilnehmerzahl
  $permissions['view own field_antrag_teilnehmerzahl'] = array(
    'name' => 'view own field_antrag_teilnehmerzahl',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_antrag_typ
  $permissions['view own field_antrag_typ'] = array(
    'name' => 'view own field_antrag_typ',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_antrag_vorschusszahlung
  $permissions['view own field_antrag_vorschusszahlung'] = array(
    'name' => 'view own field_antrag_vorschusszahlung',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_antrag_zeitraum
  $permissions['view own field_antrag_zeitraum'] = array(
    'name' => 'view own field_antrag_zeitraum',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_antrag_zielgruppe
  $permissions['view own field_antrag_zielgruppe'] = array(
    'name' => 'view own field_antrag_zielgruppe',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_antrag_zustand
  $permissions['view own field_antrag_zustand'] = array(
    'name' => 'view own field_antrag_zustand',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_bescheid_antrag
  $permissions['view own field_bescheid_antrag'] = array(
    'name' => 'view own field_bescheid_antrag',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_bescheid_antragsgenehm
  $permissions['view own field_bescheid_antragsgenehm'] = array(
    'name' => 'view own field_bescheid_antragsgenehm',
    'roles' => array(
      0 => 'Sitzungsleiter',
      1 => 'Sprecher',
      2 => 'anonymous user',
      3 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_bescheid_bescheidsnummer
  $permissions['view own field_bescheid_bescheidsnummer'] = array(
    'name' => 'view own field_bescheid_bescheidsnummer',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_finanzplan_antrag
  $permissions['view own field_finanzplan_antrag'] = array(
    'name' => 'view own field_finanzplan_antrag',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_finanzplan_ausgaben
  $permissions['view own field_finanzplan_ausgaben'] = array(
    'name' => 'view own field_finanzplan_ausgaben',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_finanzplan_bilanz
  $permissions['view own field_finanzplan_bilanz'] = array(
    'name' => 'view own field_finanzplan_bilanz',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_finanzplan_einnahmen
  $permissions['view own field_finanzplan_einnahmen'] = array(
    'name' => 'view own field_finanzplan_einnahmen',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_finanzplan_summeausgaben
  $permissions['view own field_finanzplan_summeausgaben'] = array(
    'name' => 'view own field_finanzplan_summeausgaben',
    'roles' => array(
      0 => 'Sitzungsleiter',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_finanzplan_summeeinnahmen
  $permissions['view own field_finanzplan_summeeinnahmen'] = array(
    'name' => 'view own field_finanzplan_summeeinnahmen',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_konto_bankleitzahl
  $permissions['view own field_konto_bankleitzahl'] = array(
    'name' => 'view own field_konto_bankleitzahl',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_konto_iban
  $permissions['view own field_konto_iban'] = array(
    'name' => 'view own field_konto_iban',
    'roles' => array(
      0 => 'Finanzer',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_konto_kontonummer
  $permissions['view own field_konto_kontonummer'] = array(
    'name' => 'view own field_konto_kontonummer',
    'roles' => array(
      0 => 'Finanzer',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_konto_kreditinstitut
  $permissions['view own field_konto_kreditinstitut'] = array(
    'name' => 'view own field_konto_kreditinstitut',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_konto_person
  $permissions['view own field_konto_person'] = array(
    'name' => 'view own field_konto_person',
    'roles' => array(
      0 => 'Finanzer',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_protokoll_datum
  $permissions['view own field_protokoll_datum'] = array(
    'name' => 'view own field_protokoll_datum',
    'roles' => array(
      0 => 'Sitzungsleiter',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_protokoll_protokollant
  $permissions['view own field_protokoll_protokollant'] = array(
    'name' => 'view own field_protokoll_protokollant',
    'roles' => array(
      0 => 'Sitzungsleiter',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_protokoll_sitzungsleiter
  $permissions['view own field_protokoll_sitzungsleiter'] = array(
    'name' => 'view own field_protokoll_sitzungsleiter',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_sitzung_ort
  $permissions['view own field_sitzung_ort'] = array(
    'name' => 'view own field_sitzung_ort',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_sitzung_sitzungsdatum
  $permissions['view own field_sitzung_sitzungsdatum'] = array(
    'name' => 'view own field_sitzung_sitzungsdatum',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_tagesordnung_ref
  $permissions['view own field_tagesordnung_ref'] = array(
    'name' => 'view own field_tagesordnung_ref',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_tagesordnungspunkt_antrag
  $permissions['view own field_tagesordnungspunkt_antrag'] = array(
    'name' => 'view own field_tagesordnungspunkt_antrag',
    'roles' => array(
      0 => 'Sitzungsleiter',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_tagesordnungspunkt_nr
  $permissions['view own field_tagesordnungspunkt_nr'] = array(
    'name' => 'view own field_tagesordnungspunkt_nr',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own unpublished content
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}

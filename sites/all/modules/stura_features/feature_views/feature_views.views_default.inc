<?php
/**
 * @file
 * feature_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_views_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'antrag_checked';
  $view->description = 'Auflistung aller geprüften Anträge';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Antrag checked';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_antrag_antragsdatum' => 'field_antrag_antragsdatum',
    'field_antrag_antragsteller' => 'field_antrag_antragsteller',
    'field_antrag_zeitraum' => 'field_antrag_zeitraum',
    'field_personen_matrikelnummer' => 'field_personen_matrikelnummer',
    'field_personen_nachname' => 'field_personen_nachname',
    'field_personen_vorname' => 'field_personen_vorname',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_antrag_antragsdatum' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_antrag_antragsteller' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_antrag_zeitraum' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_personen_matrikelnummer' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_personen_nachname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_personen_vorname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: Inhalt: Antragssteller (field_antrag_antragsteller) */
  $handler->display->display_options['relationships']['field_antrag_antragsteller_uid']['id'] = 'field_antrag_antragsteller_uid';
  $handler->display->display_options['relationships']['field_antrag_antragsteller_uid']['table'] = 'field_data_field_antrag_antragsteller';
  $handler->display->display_options['relationships']['field_antrag_antragsteller_uid']['field'] = 'field_antrag_antragsteller_uid';
  $handler->display->display_options['relationships']['field_antrag_antragsteller_uid']['required'] = 1;
  $handler->display->display_options['relationships']['field_antrag_antragsteller_uid']['delta'] = '-1';
  /* Relationship: Benutzer: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'field_antrag_antragsteller_uid';
  $handler->display->display_options['relationships']['profile']['required'] = 0;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
  );
  /* Feld: Inhalt: Antragsdatum */
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['id'] = 'field_antrag_antragsdatum';
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['table'] = 'field_data_field_antrag_antragsdatum';
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['field'] = 'field_antrag_antragsdatum';
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['field_api_classes'] = 0;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Feld: Inhalt: Antragssteller */
  $handler->display->display_options['fields']['field_antrag_antragsteller']['id'] = 'field_antrag_antragsteller';
  $handler->display->display_options['fields']['field_antrag_antragsteller']['table'] = 'field_data_field_antrag_antragsteller';
  $handler->display->display_options['fields']['field_antrag_antragsteller']['field'] = 'field_antrag_antragsteller';
  $handler->display->display_options['fields']['field_antrag_antragsteller']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsteller']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsteller']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsteller']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsteller']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsteller']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsteller']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsteller']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_antrag_antragsteller']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_antrag_antragsteller']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsteller']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsteller']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsteller']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_antrag_antragsteller']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_antrag_antragsteller']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsteller']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsteller']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_antrag_antragsteller']['field_api_classes'] = 0;
  /* Feld: Profile: Vorname */
  $handler->display->display_options['fields']['field_personen_vorname']['id'] = 'field_personen_vorname';
  $handler->display->display_options['fields']['field_personen_vorname']['table'] = 'field_data_field_personen_vorname';
  $handler->display->display_options['fields']['field_personen_vorname']['field'] = 'field_personen_vorname';
  $handler->display->display_options['fields']['field_personen_vorname']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_personen_vorname']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_personen_vorname']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_personen_vorname']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_personen_vorname']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_personen_vorname']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_personen_vorname']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_personen_vorname']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_personen_vorname']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_personen_vorname']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_personen_vorname']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_personen_vorname']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_personen_vorname']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_personen_vorname']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_personen_vorname']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_personen_vorname']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_personen_vorname']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_personen_vorname']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_personen_vorname']['field_api_classes'] = 0;
  /* Feld: Profile: Nachname */
  $handler->display->display_options['fields']['field_personen_nachname']['id'] = 'field_personen_nachname';
  $handler->display->display_options['fields']['field_personen_nachname']['table'] = 'field_data_field_personen_nachname';
  $handler->display->display_options['fields']['field_personen_nachname']['field'] = 'field_personen_nachname';
  $handler->display->display_options['fields']['field_personen_nachname']['relationship'] = 'profile';
  /* Feld: Profile: Matrikelnummer */
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['id'] = 'field_personen_matrikelnummer';
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['table'] = 'field_data_field_personen_matrikelnummer';
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['field'] = 'field_personen_matrikelnummer';
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['field_api_classes'] = 0;
  /* Feld: Inhalt: Zeitraum */
  $handler->display->display_options['fields']['field_antrag_zeitraum']['id'] = 'field_antrag_zeitraum';
  $handler->display->display_options['fields']['field_antrag_zeitraum']['table'] = 'field_data_field_antrag_zeitraum';
  $handler->display->display_options['fields']['field_antrag_zeitraum']['field'] = 'field_antrag_zeitraum';
  $handler->display->display_options['fields']['field_antrag_zeitraum']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_antrag_zeitraum']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_antrag_zeitraum']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_antrag_zeitraum']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_antrag_zeitraum']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_antrag_zeitraum']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_antrag_zeitraum']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_antrag_zeitraum']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_antrag_zeitraum']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_antrag_zeitraum']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_antrag_zeitraum']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_antrag_zeitraum']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_antrag_zeitraum']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_antrag_zeitraum']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_antrag_zeitraum']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_antrag_zeitraum']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_antrag_zeitraum']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_antrag_zeitraum']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_antrag_zeitraum']['field_api_classes'] = 0;
  /* Feld: Inhalt: Zustand */
  $handler->display->display_options['fields']['field_antrag_zustand']['id'] = 'field_antrag_zustand';
  $handler->display->display_options['fields']['field_antrag_zustand']['table'] = 'field_data_field_antrag_zustand';
  $handler->display->display_options['fields']['field_antrag_zustand']['field'] = 'field_antrag_zustand';
  $handler->display->display_options['fields']['field_antrag_zustand']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_antrag_zustand']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_antrag_zustand']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_antrag_zustand']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_antrag_zustand']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_antrag_zustand']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_antrag_zustand']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_antrag_zustand']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_antrag_zustand']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_antrag_zustand']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_antrag_zustand']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_antrag_zustand']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_antrag_zustand']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_antrag_zustand']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_antrag_zustand']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_antrag_zustand']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_antrag_zustand']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_antrag_zustand']['field_api_classes'] = 0;
  /* Sort criterion: Inhalt: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'antrag' => 'antrag',
  );
  /* Filter criterion: Inhalt: Zustand (field_antrag_zustand) */
  $handler->display->display_options['filters']['field_antrag_zustand_value']['id'] = 'field_antrag_zustand_value';
  $handler->display->display_options['filters']['field_antrag_zustand_value']['table'] = 'field_data_field_antrag_zustand';
  $handler->display->display_options['filters']['field_antrag_zustand_value']['field'] = 'field_antrag_zustand_value';
  $handler->display->display_options['filters']['field_antrag_zustand_value']['value'] = array(
    'checking' => 'checking',
    'waiting' => 'waiting',
    'signed' => 'signed',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');

  /* Display: Seite */
  $handler = $view->new_display('page', 'Seite', 'page_1');
  $handler->display->display_options['path'] = 'antrag_checked';
  $translatables['antrag_checked'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Zurücksetzen'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('field_antrag_antragsteller'),
    t('Profile'),
    t('Antragsdatum'),
    t('Antragssteller'),
    t('Vorname'),
    t('Nachname'),
    t('Matrikelnummer'),
    t('Zeitraum'),
    t('Zustand'),
    t('Content pane'),
    t('View panes'),
    t('Seite'),
  );
  $export['antrag_checked'] = $view;

  $view = new view;
  $view->name = 'antrag_kontaktdaten';
  $view->description = 'Listet zu einem Antrag alle vorhandenen Kontaktdaten auf (Parameter: Node-ID des Antrags)';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Antrag Kontaktdaten';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_personen_vorname' => 'field_personen_vorname',
    'mail' => 'mail',
    'field_personen_nachname' => 'field_personen_nachname',
    'field_personen_plz' => 'field_personen_plz',
    'field_personen_ort' => 'field_personen_ort',
    'field_personen_strasse' => 'field_personen_strasse',
    'field_personen_hausnummer' => 'field_personen_hausnummer',
    'field_personen_mobil' => 'field_personen_mobil',
    'field_personen_matrikelnummer' => 'field_personen_matrikelnummer',
    'field_personen_tel' => 'field_personen_tel',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_personen_vorname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_personen_nachname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_personen_plz' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_personen_ort' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_personen_strasse' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_personen_hausnummer' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_personen_mobil' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_personen_matrikelnummer' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_personen_tel' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: Inhalt: Antragssteller (field_antrag_antragsteller) */
  $handler->display->display_options['relationships']['field_antrag_antragsteller_uid']['id'] = 'field_antrag_antragsteller_uid';
  $handler->display->display_options['relationships']['field_antrag_antragsteller_uid']['table'] = 'field_data_field_antrag_antragsteller';
  $handler->display->display_options['relationships']['field_antrag_antragsteller_uid']['field'] = 'field_antrag_antragsteller_uid';
  $handler->display->display_options['relationships']['field_antrag_antragsteller_uid']['required'] = 1;
  $handler->display->display_options['relationships']['field_antrag_antragsteller_uid']['delta'] = '-1';
  /* Relationship: Benutzer: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'field_antrag_antragsteller_uid';
  $handler->display->display_options['relationships']['profile']['required'] = 0;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Feld: Profile: Vorname */
  $handler->display->display_options['fields']['field_personen_vorname']['id'] = 'field_personen_vorname';
  $handler->display->display_options['fields']['field_personen_vorname']['table'] = 'field_data_field_personen_vorname';
  $handler->display->display_options['fields']['field_personen_vorname']['field'] = 'field_personen_vorname';
  $handler->display->display_options['fields']['field_personen_vorname']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_personen_vorname']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_personen_vorname']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_personen_vorname']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_personen_vorname']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_personen_vorname']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_personen_vorname']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_personen_vorname']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_personen_vorname']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_personen_vorname']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_personen_vorname']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_personen_vorname']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_personen_vorname']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_personen_vorname']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_personen_vorname']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_personen_vorname']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_personen_vorname']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_personen_vorname']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_personen_vorname']['field_api_classes'] = 0;
  /* Feld: Profile: Nachname */
  $handler->display->display_options['fields']['field_personen_nachname']['id'] = 'field_personen_nachname';
  $handler->display->display_options['fields']['field_personen_nachname']['table'] = 'field_data_field_personen_nachname';
  $handler->display->display_options['fields']['field_personen_nachname']['field'] = 'field_personen_nachname';
  $handler->display->display_options['fields']['field_personen_nachname']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_personen_nachname']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_personen_nachname']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_personen_nachname']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_personen_nachname']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_personen_nachname']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_personen_nachname']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_personen_nachname']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_personen_nachname']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_personen_nachname']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_personen_nachname']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_personen_nachname']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_personen_nachname']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_personen_nachname']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_personen_nachname']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_personen_nachname']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_personen_nachname']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_personen_nachname']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_personen_nachname']['field_api_classes'] = 0;
  /* Feld: Benutzer: E-Mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'field_antrag_antragsteller_uid';
  /* Feld: Profile: Matrikelnummer */
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['id'] = 'field_personen_matrikelnummer';
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['table'] = 'field_data_field_personen_matrikelnummer';
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['field'] = 'field_personen_matrikelnummer';
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_personen_matrikelnummer']['field_api_classes'] = 0;
  /* Feld: Profile: Postleitzahl */
  $handler->display->display_options['fields']['field_personen_plz']['id'] = 'field_personen_plz';
  $handler->display->display_options['fields']['field_personen_plz']['table'] = 'field_data_field_personen_plz';
  $handler->display->display_options['fields']['field_personen_plz']['field'] = 'field_personen_plz';
  $handler->display->display_options['fields']['field_personen_plz']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_personen_plz']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_personen_plz']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_personen_plz']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_personen_plz']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_personen_plz']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_personen_plz']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_personen_plz']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_personen_plz']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_personen_plz']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_personen_plz']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_personen_plz']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_personen_plz']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_personen_plz']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_personen_plz']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_personen_plz']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_personen_plz']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_personen_plz']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_personen_plz']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_personen_plz']['field_api_classes'] = 0;
  /* Feld: Profile: Ort */
  $handler->display->display_options['fields']['field_personen_ort']['id'] = 'field_personen_ort';
  $handler->display->display_options['fields']['field_personen_ort']['table'] = 'field_data_field_personen_ort';
  $handler->display->display_options['fields']['field_personen_ort']['field'] = 'field_personen_ort';
  $handler->display->display_options['fields']['field_personen_ort']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_personen_ort']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_personen_ort']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_personen_ort']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_personen_ort']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_personen_ort']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_personen_ort']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_personen_ort']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_personen_ort']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_personen_ort']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_personen_ort']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_personen_ort']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_personen_ort']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_personen_ort']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_personen_ort']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_personen_ort']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_personen_ort']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_personen_ort']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_personen_ort']['field_api_classes'] = 0;
  /* Feld: Profile: Straße */
  $handler->display->display_options['fields']['field_personen_strasse']['id'] = 'field_personen_strasse';
  $handler->display->display_options['fields']['field_personen_strasse']['table'] = 'field_data_field_personen_strasse';
  $handler->display->display_options['fields']['field_personen_strasse']['field'] = 'field_personen_strasse';
  $handler->display->display_options['fields']['field_personen_strasse']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_personen_strasse']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_personen_strasse']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_personen_strasse']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_personen_strasse']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_personen_strasse']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_personen_strasse']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_personen_strasse']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_personen_strasse']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_personen_strasse']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_personen_strasse']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_personen_strasse']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_personen_strasse']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_personen_strasse']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_personen_strasse']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_personen_strasse']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_personen_strasse']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_personen_strasse']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_personen_strasse']['field_api_classes'] = 0;
  /* Feld: Profile: Hausnummer */
  $handler->display->display_options['fields']['field_personen_hausnummer']['id'] = 'field_personen_hausnummer';
  $handler->display->display_options['fields']['field_personen_hausnummer']['table'] = 'field_data_field_personen_hausnummer';
  $handler->display->display_options['fields']['field_personen_hausnummer']['field'] = 'field_personen_hausnummer';
  $handler->display->display_options['fields']['field_personen_hausnummer']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_personen_hausnummer']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_personen_hausnummer']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_personen_hausnummer']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_personen_hausnummer']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_personen_hausnummer']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_personen_hausnummer']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_personen_hausnummer']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_personen_hausnummer']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_personen_hausnummer']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_personen_hausnummer']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_personen_hausnummer']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_personen_hausnummer']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_personen_hausnummer']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_personen_hausnummer']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_personen_hausnummer']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_personen_hausnummer']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_personen_hausnummer']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_personen_hausnummer']['field_api_classes'] = 0;
  /* Feld: Profile: Handynummer */
  $handler->display->display_options['fields']['field_personen_mobil']['id'] = 'field_personen_mobil';
  $handler->display->display_options['fields']['field_personen_mobil']['table'] = 'field_data_field_personen_mobil';
  $handler->display->display_options['fields']['field_personen_mobil']['field'] = 'field_personen_mobil';
  $handler->display->display_options['fields']['field_personen_mobil']['relationship'] = 'profile';
  /* Feld: Profile: Telefonnummer */
  $handler->display->display_options['fields']['field_personen_tel']['id'] = 'field_personen_tel';
  $handler->display->display_options['fields']['field_personen_tel']['table'] = 'field_data_field_personen_tel';
  $handler->display->display_options['fields']['field_personen_tel']['field'] = 'field_personen_tel';
  $handler->display->display_options['fields']['field_personen_tel']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_personen_tel']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_personen_tel']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_personen_tel']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_personen_tel']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_personen_tel']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_personen_tel']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_personen_tel']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_personen_tel']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_personen_tel']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_personen_tel']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_personen_tel']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_personen_tel']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_personen_tel']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_personen_tel']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_personen_tel']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_personen_tel']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_personen_tel']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_personen_tel']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_personen_tel']['field_api_classes'] = 0;
  /* Sort criterion: Inhalt: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Inhalt: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter criterion: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'antrag' => 'antrag',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');

  /* Display: Seite */
  $handler = $view->new_display('page', 'Seite', 'page_1');
  $handler->display->display_options['path'] = 'antrag_kontaktdaten/%';
  $translatables['antrag_kontaktdaten'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Zurücksetzen'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('field_antrag_antragsteller'),
    t('Profile'),
    t('Vorname'),
    t('Nachname'),
    t('E-Mail'),
    t('Matrikelnummer'),
    t('Postleitzahl'),
    t('Ort'),
    t('Straße'),
    t('Hausnummer'),
    t('Handynummer'),
    t('Telefonnummer'),
    t('Alles'),
    t('Content pane'),
    t('View panes'),
    t('Seite'),
  );
  $export['antrag_kontaktdaten'] = $view;

  $view = new view;
  $view->name = 'antrag_kontodaten';
  $view->description = 'Die notwendigen Kontodaten vom Antragssteller werden zu dem jeweiligen Antrag aufgelistet (Parameter: Node-ID des Antrags)';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Antrag Kontodaten';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_konto_bankleitzahl' => 'field_konto_bankleitzahl',
    'field_konto_iban' => 'field_konto_iban',
    'field_konto_kontonummer' => 'field_konto_kontonummer',
    'field_konto_kreditinstitut' => 'field_konto_kreditinstitut',
    'field_konto_person' => 'field_konto_person',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_konto_bankleitzahl' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_konto_iban' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_konto_kontonummer' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_konto_kreditinstitut' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_konto_person' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: Inhalt: Antragssteller (field_antrag_antragsteller) */
  $handler->display->display_options['relationships']['field_antrag_antragsteller_uid']['id'] = 'field_antrag_antragsteller_uid';
  $handler->display->display_options['relationships']['field_antrag_antragsteller_uid']['table'] = 'field_data_field_antrag_antragsteller';
  $handler->display->display_options['relationships']['field_antrag_antragsteller_uid']['field'] = 'field_antrag_antragsteller_uid';
  $handler->display->display_options['relationships']['field_antrag_antragsteller_uid']['required'] = 0;
  $handler->display->display_options['relationships']['field_antrag_antragsteller_uid']['delta'] = '-1';
  /* Relationship: Benutzer: Verknüpfte Person (field_konto_person) - reverse */
  $handler->display->display_options['relationships']['reverse_field_konto_person_node']['id'] = 'reverse_field_konto_person_node';
  $handler->display->display_options['relationships']['reverse_field_konto_person_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_konto_person_node']['field'] = 'reverse_field_konto_person_node';
  $handler->display->display_options['relationships']['reverse_field_konto_person_node']['relationship'] = 'field_antrag_antragsteller_uid';
  $handler->display->display_options['relationships']['reverse_field_konto_person_node']['required'] = 0;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Feld: Inhalt: Verknüpfte Person */
  $handler->display->display_options['fields']['field_konto_person']['id'] = 'field_konto_person';
  $handler->display->display_options['fields']['field_konto_person']['table'] = 'field_data_field_konto_person';
  $handler->display->display_options['fields']['field_konto_person']['field'] = 'field_konto_person';
  $handler->display->display_options['fields']['field_konto_person']['relationship'] = 'reverse_field_konto_person_node';
  $handler->display->display_options['fields']['field_konto_person']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_konto_person']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_konto_person']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_konto_person']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_konto_person']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_konto_person']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_konto_person']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_konto_person']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_konto_person']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_konto_person']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_konto_person']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_konto_person']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_konto_person']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_konto_person']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_konto_person']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_konto_person']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_konto_person']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_konto_person']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_konto_person']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_konto_person']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_konto_person']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_konto_person']['field_api_classes'] = 0;
  /* Feld: Inhalt: Kontonummer */
  $handler->display->display_options['fields']['field_konto_kontonummer']['id'] = 'field_konto_kontonummer';
  $handler->display->display_options['fields']['field_konto_kontonummer']['table'] = 'field_data_field_konto_kontonummer';
  $handler->display->display_options['fields']['field_konto_kontonummer']['field'] = 'field_konto_kontonummer';
  $handler->display->display_options['fields']['field_konto_kontonummer']['relationship'] = 'reverse_field_konto_person_node';
  $handler->display->display_options['fields']['field_konto_kontonummer']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_konto_kontonummer']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_konto_kontonummer']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_konto_kontonummer']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_konto_kontonummer']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_konto_kontonummer']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_konto_kontonummer']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_konto_kontonummer']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_konto_kontonummer']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_konto_kontonummer']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_konto_kontonummer']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_konto_kontonummer']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_konto_kontonummer']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_konto_kontonummer']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_konto_kontonummer']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_konto_kontonummer']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_konto_kontonummer']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_konto_kontonummer']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_konto_kontonummer']['field_api_classes'] = 0;
  /* Feld: Inhalt: Bankleitzahl */
  $handler->display->display_options['fields']['field_konto_bankleitzahl']['id'] = 'field_konto_bankleitzahl';
  $handler->display->display_options['fields']['field_konto_bankleitzahl']['table'] = 'field_data_field_konto_bankleitzahl';
  $handler->display->display_options['fields']['field_konto_bankleitzahl']['field'] = 'field_konto_bankleitzahl';
  $handler->display->display_options['fields']['field_konto_bankleitzahl']['relationship'] = 'reverse_field_konto_person_node';
  $handler->display->display_options['fields']['field_konto_bankleitzahl']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_konto_bankleitzahl']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_konto_bankleitzahl']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_konto_bankleitzahl']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_konto_bankleitzahl']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_konto_bankleitzahl']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_konto_bankleitzahl']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_konto_bankleitzahl']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_konto_bankleitzahl']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_konto_bankleitzahl']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_konto_bankleitzahl']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_konto_bankleitzahl']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_konto_bankleitzahl']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_konto_bankleitzahl']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_konto_bankleitzahl']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_konto_bankleitzahl']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_konto_bankleitzahl']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_konto_bankleitzahl']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_konto_bankleitzahl']['field_api_classes'] = 0;
  /* Feld: Inhalt: Kreditinstitut */
  $handler->display->display_options['fields']['field_konto_kreditinstitut']['id'] = 'field_konto_kreditinstitut';
  $handler->display->display_options['fields']['field_konto_kreditinstitut']['table'] = 'field_data_field_konto_kreditinstitut';
  $handler->display->display_options['fields']['field_konto_kreditinstitut']['field'] = 'field_konto_kreditinstitut';
  $handler->display->display_options['fields']['field_konto_kreditinstitut']['relationship'] = 'reverse_field_konto_person_node';
  $handler->display->display_options['fields']['field_konto_kreditinstitut']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_konto_kreditinstitut']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_konto_kreditinstitut']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_konto_kreditinstitut']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_konto_kreditinstitut']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_konto_kreditinstitut']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_konto_kreditinstitut']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_konto_kreditinstitut']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_konto_kreditinstitut']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_konto_kreditinstitut']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_konto_kreditinstitut']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_konto_kreditinstitut']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_konto_kreditinstitut']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_konto_kreditinstitut']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_konto_kreditinstitut']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_konto_kreditinstitut']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_konto_kreditinstitut']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_konto_kreditinstitut']['field_api_classes'] = 0;
  /* Feld: Inhalt: IBAN */
  $handler->display->display_options['fields']['field_konto_iban']['id'] = 'field_konto_iban';
  $handler->display->display_options['fields']['field_konto_iban']['table'] = 'field_data_field_konto_iban';
  $handler->display->display_options['fields']['field_konto_iban']['field'] = 'field_konto_iban';
  $handler->display->display_options['fields']['field_konto_iban']['relationship'] = 'reverse_field_konto_person_node';
  $handler->display->display_options['fields']['field_konto_iban']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_konto_iban']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_konto_iban']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_konto_iban']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_konto_iban']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_konto_iban']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_konto_iban']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_konto_iban']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_konto_iban']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_konto_iban']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_konto_iban']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_konto_iban']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_konto_iban']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_konto_iban']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_konto_iban']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_konto_iban']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_konto_iban']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_konto_iban']['field_api_classes'] = 0;
  /* Sort criterion: Inhalt: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Inhalt: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter criterion: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'antrag' => 'antrag',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');

  /* Display: Seite */
  $handler = $view->new_display('page', 'Seite', 'page_1');
  $handler->display->display_options['path'] = 'antrag_kontodaten/%';
  $translatables['antrag_kontodaten'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Zurücksetzen'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('field_antrag_antragsteller'),
    t('field_konto_person'),
    t('Verknüpfte Person'),
    t('Kontonummer'),
    t('Bankleitzahl'),
    t('Kreditinstitut'),
    t('IBAN'),
    t('Alles'),
    t('Content pane'),
    t('View panes'),
    t('Seite'),
  );
  $export['antrag_kontodaten'] = $view;

  $view = new view;
  $view->name = 'antrag_unchecked';
  $view->description = 'Auflistung aller geprüften Anträge';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Antrag unchecked';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_antrag_antragsdatum' => 'field_antrag_antragsdatum',
    'field_antrag_antragsteller' => 'field_antrag_antragsteller',
    'field_antrag_zeitraum' => 'field_antrag_zeitraum',
    'field_personen_matrikelnummer' => 'field_personen_matrikelnummer',
    'field_personen_nachname' => 'field_personen_nachname',
    'field_personen_vorname' => 'field_personen_vorname',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_antrag_antragsdatum' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_antrag_antragsteller' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_antrag_zeitraum' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_personen_matrikelnummer' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_personen_nachname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_personen_vorname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: Inhalt: Antragssteller (field_antrag_antragsteller) */
  $handler->display->display_options['relationships']['field_antrag_antragsteller_uid']['id'] = 'field_antrag_antragsteller_uid';
  $handler->display->display_options['relationships']['field_antrag_antragsteller_uid']['table'] = 'field_data_field_antrag_antragsteller';
  $handler->display->display_options['relationships']['field_antrag_antragsteller_uid']['field'] = 'field_antrag_antragsteller_uid';
  $handler->display->display_options['relationships']['field_antrag_antragsteller_uid']['required'] = 1;
  $handler->display->display_options['relationships']['field_antrag_antragsteller_uid']['delta'] = '-1';
  /* Relationship: Benutzer: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'field_antrag_antragsteller_uid';
  $handler->display->display_options['relationships']['profile']['required'] = 0;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
  );
  /* Feld: Inhalt: Antragsdatum */
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['id'] = 'field_antrag_antragsdatum';
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['table'] = 'field_data_field_antrag_antragsdatum';
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['field'] = 'field_antrag_antragsdatum';
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_antrag_antragsdatum']['field_api_classes'] = 0;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Feld: Inhalt: Antragssteller */
  $handler->display->display_options['fields']['field_antrag_antragsteller']['id'] = 'field_antrag_antragsteller';
  $handler->display->display_options['fields']['field_antrag_antragsteller']['table'] = 'field_data_field_antrag_antragsteller';
  $handler->display->display_options['fields']['field_antrag_antragsteller']['field'] = 'field_antrag_antragsteller';
  $handler->display->display_options['fields']['field_antrag_antragsteller']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsteller']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsteller']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsteller']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsteller']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsteller']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsteller']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsteller']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_antrag_antragsteller']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_antrag_antragsteller']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsteller']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsteller']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsteller']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_antrag_antragsteller']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_antrag_antragsteller']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsteller']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_antrag_antragsteller']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_antrag_antragsteller']['field_api_classes'] = 0;
  /* Feld: Inhalt: Zeitraum */
  $handler->display->display_options['fields']['field_antrag_zeitraum']['id'] = 'field_antrag_zeitraum';
  $handler->display->display_options['fields']['field_antrag_zeitraum']['table'] = 'field_data_field_antrag_zeitraum';
  $handler->display->display_options['fields']['field_antrag_zeitraum']['field'] = 'field_antrag_zeitraum';
  $handler->display->display_options['fields']['field_antrag_zeitraum']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_antrag_zeitraum']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_antrag_zeitraum']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_antrag_zeitraum']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_antrag_zeitraum']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_antrag_zeitraum']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_antrag_zeitraum']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_antrag_zeitraum']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_antrag_zeitraum']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_antrag_zeitraum']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_antrag_zeitraum']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_antrag_zeitraum']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_antrag_zeitraum']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_antrag_zeitraum']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_antrag_zeitraum']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_antrag_zeitraum']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_antrag_zeitraum']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_antrag_zeitraum']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_antrag_zeitraum']['field_api_classes'] = 0;
  /* Sort criterion: Inhalt: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'antrag' => 'antrag',
  );
  /* Filter criterion: Inhalt: Zustand (field_antrag_zustand) */
  $handler->display->display_options['filters']['field_antrag_zustand_value']['id'] = 'field_antrag_zustand_value';
  $handler->display->display_options['filters']['field_antrag_zustand_value']['table'] = 'field_data_field_antrag_zustand';
  $handler->display->display_options['filters']['field_antrag_zustand_value']['field'] = 'field_antrag_zustand_value';
  $handler->display->display_options['filters']['field_antrag_zustand_value']['value'] = array(
    'new' => 'new',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');

  /* Display: Seite */
  $handler = $view->new_display('page', 'Seite', 'page_1');
  $handler->display->display_options['path'] = 'antrag_unchecked';
  $translatables['antrag_unchecked'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Zurücksetzen'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('field_antrag_antragsteller'),
    t('Profile'),
    t('Antragsdatum'),
    t('Antragssteller'),
    t('Zeitraum'),
    t('Content pane'),
    t('View panes'),
    t('Seite'),
  );
  $export['antrag_unchecked'] = $view;

  $view = new view;
  $view->name = 'liste_sitzungen';
  $view->description = 'Auflistung aller zukünftigen Sitzungen';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Liste Sitzungen';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_sitzung_sitzungsdatum' => 'field_sitzung_sitzungsdatum',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sitzung_sitzungsdatum' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Feld: Inhalt: Sitzungsdatum */
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['id'] = 'field_sitzung_sitzungsdatum';
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['table'] = 'field_data_field_sitzung_sitzungsdatum';
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['field'] = 'field_sitzung_sitzungsdatum';
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['field_api_classes'] = 0;
  /* Sort criterion: Inhalt: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sitzung' => 'sitzung',
  );
  /* Filter criterion: Inhalt: Sitzungsdatum -  start date (field_sitzung_sitzungsdatum) */
  $handler->display->display_options['filters']['field_sitzung_sitzungsdatum_value']['id'] = 'field_sitzung_sitzungsdatum_value';
  $handler->display->display_options['filters']['field_sitzung_sitzungsdatum_value']['table'] = 'field_data_field_sitzung_sitzungsdatum';
  $handler->display->display_options['filters']['field_sitzung_sitzungsdatum_value']['field'] = 'field_sitzung_sitzungsdatum_value';
  $handler->display->display_options['filters']['field_sitzung_sitzungsdatum_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_sitzung_sitzungsdatum_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_sitzung_sitzungsdatum_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_sitzung_sitzungsdatum_value']['year_range'] = '-0:+10';
  $handler->display->display_options['filters']['field_sitzung_sitzungsdatum_value']['add_delta'] = 'yes';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');

  /* Display: Seite */
  $handler = $view->new_display('page', 'Seite', 'page_1');
  $handler->display->display_options['path'] = 'liste_sitzungen';
  $translatables['liste_sitzungen'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Zurücksetzen'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Sitzungsdatum'),
    t('Content pane'),
    t('View panes'),
    t('Seite'),
  );
  $export['liste_sitzungen'] = $view;

  $view = new view;
  $view->name = 'liste_tagesordnung';
  $view->description = 'Ausgabe der Tagesordnung (alle zu einer Sitzung gehörenden TOP). Übergabeparameter = Node-ID der Sitzung';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Liste Tagesordnung';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'field_tagesordnungspunkt_nr',
    'field_tagesordnungspunkt_nr' => 'title',
    'body' => 'body',
  );
  $handler->display->display_options['style_options']['default'] = 'field_tagesordnungspunkt_nr';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tagesordnungspunkt_nr' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: Inhalt: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = 0;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'tagesordnungen' => 'tagesordnungen',
  );
  /* Relationship: Taxonomie-Begriff: Inhalt using Tagesordnung */
  $handler->display->display_options['relationships']['reverse_field_tagesordnung_ref_node']['id'] = 'reverse_field_tagesordnung_ref_node';
  $handler->display->display_options['relationships']['reverse_field_tagesordnung_ref_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_tagesordnung_ref_node']['field'] = 'reverse_field_tagesordnung_ref_node';
  $handler->display->display_options['relationships']['reverse_field_tagesordnung_ref_node']['relationship'] = 'term_node_tid';
  $handler->display->display_options['relationships']['reverse_field_tagesordnung_ref_node']['required'] = 0;
  /* Feld: Inhalt: TOP-Nummer */
  $handler->display->display_options['fields']['field_tagesordnungspunkt_nr']['id'] = 'field_tagesordnungspunkt_nr';
  $handler->display->display_options['fields']['field_tagesordnungspunkt_nr']['table'] = 'field_data_field_tagesordnungspunkt_nr';
  $handler->display->display_options['fields']['field_tagesordnungspunkt_nr']['field'] = 'field_tagesordnungspunkt_nr';
  $handler->display->display_options['fields']['field_tagesordnungspunkt_nr']['relationship'] = 'reverse_field_tagesordnung_ref_node';
  $handler->display->display_options['fields']['field_tagesordnungspunkt_nr']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tagesordnungspunkt_nr']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tagesordnungspunkt_nr']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tagesordnungspunkt_nr']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tagesordnungspunkt_nr']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tagesordnungspunkt_nr']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tagesordnungspunkt_nr']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tagesordnungspunkt_nr']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tagesordnungspunkt_nr']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tagesordnungspunkt_nr']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tagesordnungspunkt_nr']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tagesordnungspunkt_nr']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tagesordnungspunkt_nr']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_tagesordnungspunkt_nr']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_tagesordnungspunkt_nr']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_tagesordnungspunkt_nr']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tagesordnungspunkt_nr']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_tagesordnungspunkt_nr']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_tagesordnungspunkt_nr']['field_api_classes'] = 0;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_tagesordnung_ref_node';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Feld: Inhalt: Inhalt */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'reverse_field_tagesordnung_ref_node';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Contextual filter: Inhalt: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter criterion: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_tagesordnung_ref_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tagesordnungspunkt' => 'tagesordnungspunkt',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'field_tagesordnungspunkt_to_tid' => array(
      'type' => 'user',
      'context' => 'entity:user.cancel-url',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Inhalt: Tagesordnung (field_tagesordnungspunkt_to)',
    ),
  );

  /* Display: Seite */
  $handler = $view->new_display('page', 'Seite', 'page_1');
  $handler->display->display_options['path'] = 'liste_tagesordnung/%';
  $translatables['liste_tagesordnung'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Zurücksetzen'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('term'),
    t('field_tagesordnung_ref'),
    t('TOP-Nummer'),
    t('Titel'),
    t('Inhalt'),
    t('Alles'),
    t('Content pane'),
    t('View panes'),
    t('Seite'),
  );
  $export['liste_tagesordnung'] = $view;

  $view = new view;
  $view->name = 'protokoll_sitzung_details';
  $view->description = 'Listet den Ort und das Datum zu einer Sitzung auf (Parameter: Node ID der Sitzung)';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Protokoll Sitzung Details';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_sitzung_ort' => 'field_sitzung_ort',
    'field_sitzung_sitzungsdatum' => 'field_sitzung_sitzungsdatum',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sitzung_ort' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sitzung_sitzungsdatum' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Feld: Inhalt: Ort */
  $handler->display->display_options['fields']['field_sitzung_ort']['id'] = 'field_sitzung_ort';
  $handler->display->display_options['fields']['field_sitzung_ort']['table'] = 'field_data_field_sitzung_ort';
  $handler->display->display_options['fields']['field_sitzung_ort']['field'] = 'field_sitzung_ort';
  $handler->display->display_options['fields']['field_sitzung_ort']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_sitzung_ort']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_sitzung_ort']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_sitzung_ort']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_sitzung_ort']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_sitzung_ort']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_sitzung_ort']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_sitzung_ort']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_sitzung_ort']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_sitzung_ort']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_sitzung_ort']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_sitzung_ort']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_sitzung_ort']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_sitzung_ort']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_sitzung_ort']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_sitzung_ort']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_sitzung_ort']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_sitzung_ort']['field_api_classes'] = 0;
  /* Feld: Inhalt: Sitzungsdatum */
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['id'] = 'field_sitzung_sitzungsdatum';
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['table'] = 'field_data_field_sitzung_sitzungsdatum';
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['field'] = 'field_sitzung_sitzungsdatum';
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_sitzung_sitzungsdatum']['field_api_classes'] = 0;
  /* Sort criterion: Inhalt: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Inhalt: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter criterion: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sitzung' => 'sitzung',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');

  /* Display: Seite */
  $handler = $view->new_display('page', 'Seite', 'page_1');
  $handler->display->display_options['path'] = 'protokoll_sitzung_details/%';
  $translatables['protokoll_sitzung_details'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Zurücksetzen'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Ort'),
    t('Sitzungsdatum'),
    t('Alles'),
    t('Content pane'),
    t('View panes'),
    t('Seite'),
  );
  $export['protokoll_sitzung_details'] = $view;

  return $export;
}

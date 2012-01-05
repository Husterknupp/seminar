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
  $view->name = 'liste_tagesordnung';
  $view->description = '';
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
  /* Feld: Inhalt: TOP-Nummer */
  $handler->display->display_options['fields']['field_tagesordnungspunkt_nr']['id'] = 'field_tagesordnungspunkt_nr';
  $handler->display->display_options['fields']['field_tagesordnungspunkt_nr']['table'] = 'field_data_field_tagesordnungspunkt_nr';
  $handler->display->display_options['fields']['field_tagesordnungspunkt_nr']['field'] = 'field_tagesordnungspunkt_nr';
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
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_tagesordnungspunkt_nr']['field_api_classes'] = 0;
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
  /* Feld: Inhalt: Inhalt */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
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
  /* Sort criterion: Inhalt: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Inhalt: Tagesordnung (field_tagesordnungspunkt_to) */
  $handler->display->display_options['arguments']['field_tagesordnungspunkt_to_tid']['id'] = 'field_tagesordnungspunkt_to_tid';
  $handler->display->display_options['arguments']['field_tagesordnungspunkt_to_tid']['table'] = 'field_data_field_tagesordnungspunkt_to';
  $handler->display->display_options['arguments']['field_tagesordnungspunkt_to_tid']['field'] = 'field_tagesordnungspunkt_to_tid';
  $handler->display->display_options['arguments']['field_tagesordnungspunkt_to_tid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_tagesordnungspunkt_to_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_tagesordnungspunkt_to_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_tagesordnungspunkt_to_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_tagesordnungspunkt_to_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_tagesordnungspunkt_to_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_tagesordnungspunkt_to_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_tagesordnungspunkt_to_tid']['not'] = 0;
  /* Filter criterion: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
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
    t('TOP-Nummer'),
    t('Inhalt'),
    t('Alles'),
    t('Content pane'),
    t('View panes'),
  );
  $export['liste_tagesordnung'] = $view;

  return $export;
}

<?php
/**
 * @file
 * feature_contenttype_sitzung.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function feature_contenttype_sitzung_taxonomy_default_vocabularies() {
  return array(
    'tagesordnungen' => array(
      'name' => 'Tagesordnungen',
      'machine_name' => 'tagesordnungen',
      'description' => 'Beinhaltet die Tagesordnungsnamen für jede Legislatur',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}

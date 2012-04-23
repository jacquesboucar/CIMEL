<?php
/**
 * @file
 * type_contenu.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function type_contenu_taxonomy_default_vocabularies() {
  return array(
    'annonces' => array(
      'name' => 'region',
      'machine_name' => 'annonces',
      'description' => 'les nouvelles des cimel',
      'hierarchy' => '0',
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

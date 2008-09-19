<?php

/* $Id$ */

/**
 * @file
 * Provide views data for votingapi.module
 */

/**
 * @defgroup views_votingapi_module votingapi.module handlers
 *
 * @{
 */


/**
 * Implementation of hook_views_handlers()
 */
function votingapi_views_handlers() {
  return array(
    'handlers' => array(
      'votingapi_views_handler_field_value' => array(
        'parent' => 'views_handler_field_numeric',
        'path' => drupal_get_path('module', 'votingapi') . '/views',
      ),
      'votingapi_views_handler_relationship' => array(
        'parent' => 'views_handler_relationship',
        'path' => drupal_get_path('module', 'votingapi') . '/views',
      ),
    ),
  );
}


/**
 * Implementation of hook_views_data()
 */
function votingapi_views_data() {
  // Basic table information.

  // Define the base group of this table. Fields that don't
  // have a group defined will go into this field by default.
  $data['votingapi_vote']['table']['group']  = t('Voting API votes');
  $data['votingapi_cache']['table']['group']  = t('Voting API results');

  // ----------------------------------------------------------------
  // Fields

  // value
  $data['votingapi_vote']['value'] = array(
    'title' => t('Value'), // The item it appears as on the UI,
    'help' => t('The value of an individual cast vote.'), // The help that appears on the UI,
     // Information for displaying a title as a field
    'field' => array(
      'handler' => 'votingapi_views_handler_field_value',
      'click sortable' => TRUE,
     ),
     'filter' => array(
       'handler' => 'views_handler_filter_numeric',
       'label' => t('Value'),
       ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  // value type
  $data['votingapi_vote']['value_type'] = array(
    'title' => t('Value type'), // The item it appears as on the UI,
    'help' => t('The nature of the vote being cast (points, percentage, etc).'), // The help that appears on the UI,
     // Information for displaying a title as a field
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
     ),
     'filter' => array(
       'handler' => 'views_handler_filter_string',
       'label' => t('Value type'),
       ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  // tag
  $data['votingapi_vote']['tag'] = array(
    'title' => t('Tag'), // The item it appears as on the UI,
    'help' => t('An optional tag to group multi-criteria votes.'), // The help that appears on the UI,
     // Information for displaying a title as a field
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
      'label' => t('Value type'),
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  // uid
  $data['votingapi_vote']['uid'] = array(
    'title' => t('User'), // The item it appears as on the UI,
    'help' => t('The user who cast the vote.'), // The help that appears on the UI,
     // Information for displaying a title as a field
    'field' => array(
      'handler' => 'views_handler_field_user',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_user_name',
      'label' => t('Value type'),
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );


  // vote_source
  $data['votingapi_vote']['vote_source'] = array(
    'title' => t('IP Address'), // The item it appears as on the UI,
    'help' => t('The IP address of the user who cast the vote.'), // The help that appears on the UI,
     // Information for displaying a title as a field
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
     ),
     'filter' => array(
       'handler' => 'views_handler_filter_string',
       'label' => t('Value type'),
       ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );


  // timestamp
  $data['votingapi_vote']['timestamp'] = array(
    'title' => t('Timestamp'), // The item it appears as on the UI,
    'help' => t('The time the vote was cast.'), // The help that appears on the UI,
     // Information for displaying a title as a field
    'field' => array(
      'handler' => 'views_handler_field_date',
      'click sortable' => TRUE,
     ),
     'filter' => array(
       'handler' => 'views_handler_filter_date',
       'label' => t('Value type'),
       ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );


  // Cache table fields

  // value
  $data['votingapi_cache']['value'] = array(
    'title' => t('Value'), // The item it appears as on the UI,
    'help' => t('The value of an individual cast vote.'), // The help that appears on the UI,
     // Information for displaying a title as a field
    'field' => array(
      'handler' => 'votingapi_views_handler_field_value',
      'click sortable' => TRUE,
     ),
     'filter' => array(
       'handler' => 'views_handler_filter_numeric',
       'label' => t('Value'),
       ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  // value type
  $data['votingapi_cache']['value_type'] = array(
    'title' => t('Value type'), // The item it appears as on the UI,
    'help' => t('The nature of the results in question (points, percentage, etc).'), // The help that appears on the UI,
     // Information for displaying a title as a field
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
     ),
     'filter' => array(
       'handler' => 'views_handler_filter_string',
       'label' => t('Value type'),
       ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  // tag
  $data['votingapi_cache']['tag'] = array(
    'title' => t('Tag'), // The item it appears as on the UI,
    'help' => t('An optional tag to group multi-criteria results.'), // The help that appears on the UI,
     // Information for displaying a title as a field
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
     ),
     'filter' => array(
       'handler' => 'views_handler_filter_string',
       'label' => t('Value type'),
       ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );


  // function
  $data['votingapi_cache']['function'] = array(
    'title' => t('Function'), // The item it appears as on the UI,
    'help' => t('The aggregate function used to calculate the result.'), // The help that appears on the UI,
     // Information for displaying a title as a field
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
     ),
     'filter' => array(
       'handler' => 'views_handler_filter_string',
       'label' => t('Value type'),
       ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );


  // timestamp
  $data['votingapi_cache']['timestamp'] = array(
    'title' => t('Timestamp'), // The item it appears as on the UI,
    'help' => t('The time the results were calculated.'), // The help that appears on the UI,
     // Information for displaying a title as a field
    'field' => array(
      'handler' => 'views_handler_field_date',
      'click sortable' => TRUE,
     ),
     'filter' => array(
       'handler' => 'views_handler_filter_date',
       'label' => t('Value type'),
       ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );
  return $data;
}

/**
 * @}
 */

function _votingapi_views_value_types($table = 'votingapi_vote') {
  static $types;
  if (!isset($types)) {
    $types = array(
      'percent' => t('Percent'),
      'points' => t('Points')
    );
    $results = db_query("SELECT DISTINCT value_type FROM {" . $table . "}");
    while ($tmp = db_fetch_object($results)) {
      $types[$tmp->value_type] = drupal_ucfirst($tmp->value_type);
    }
    $types[''] = t('No filtering');
  }
  return $types;
}

function _votingapi_views_tags($table = 'votingapi_vote') {
  static $tags;
  if (!isset($tags)) {
    $tags = array(
      'vote' => t('Default vote'),
    );
    $results = db_query("SELECT DISTINCT tag FROM {" . $table . "}");
    while ($tmp = db_fetch_object($results)) {
      $tags[$tmp->tag] = drupal_ucfirst($tmp->tag);
    }
    $tags[''] = t('No filtering');
  }
  return $tags;
}

function _votingapi_views_functions() {
  static $functions;
  if (!isset($functions)) {
    $functions = array(
      'sum' => t('Sum'),
      'count' => t('Count'),
      'average' => t('Average'),
    );
    $results = db_query("SELECT DISTINCT function FROM {votingapi_cache}");
    while ($tmp = db_fetch_object($results)) {
      $functions[$tmp->function] = drupal_ucfirst($tmp->function);
    }
    $functions[''] = t('No filtering');
  }
  return $functions;
}

function votingapi_views_data_alter(&$views_data) {
  // Add relationship handlers for both tables, for any base tables currently
  // available to Views.

  $default_relationships = module_invoke_all('votingapi_views_content_types');
  $default_relationships += array('node' => array('content_table' => 'node', 'content_id_column' => 'nid'));

  foreach($default_relationships as $content_type => $data) {
    $views_data[$data['content_table']]['votingapi_vote']['relationship'] = array(
      'title' => 'Individual votes',
      'help' => "Votes cast by users on $content_type content.",
      'base' => 'votingapi_vote',
      'field' => 'content_id',
      'relationship field' => $data['content_id_column'],
      'handler' => 'votingapi_views_handler_relationship',
      'extra' => array(
        array(
          'field' => 'content_type',
          'value' => $content_type,
          'numeric' => FALSE
        ),
      ),
    );

    $views_data[$data['content_table']]['votingapi_cache']['relationship'] = array(
      'title' => 'Voting results',
      'help' => "The aggregate results of votes cast on $content_type content.",
      'base' => 'votingapi_cache',
      'field' => 'content_id',
      'relationship field' => $data['content_id_column'],
      'handler' => 'votingapi_views_handler_relationship',
      'extra' => array(
        array(
          'field' => 'content_type',
          'value' => $content_type,
          'numeric' => FALSE
        ),
      ),
    );
  }
}

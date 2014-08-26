<?php
/**
 * @file
 * ding_library.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function ding_library_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'ding_library_map';
  $openlayers_maps->title = 'Ding! library map';
  $openlayers_maps->description = 'Map of libraries ';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '225px',
    'image_path' => 'profiles/artesis/modules/contrib/openlayers/themes/default_dark/img/',
    'css_path' => 'profiles/artesis/modules/contrib/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '5.1663238545549, 60.427744620768',
        'zoom' => '8',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_tooltip' => array(
        'layers' => array(
          'ding_library_openlayers_1' => 'ding_library_openlayers_1',
        ),
      ),
      'openlayers_behavior_fullscreen' => array(
        'activated' => 0,
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_panzoom' => array(),
    ),
    'default_layer' => 'google_normal',
    'layers' => array(
      'google_normal' => 'google_normal',
      'ding_library_openlayers_1' => 'ding_library_openlayers_1',
    ),
    'layer_weight' => array(
      'ding_library_openlayers_1' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
      'ding_library_openlayers_1' => '0',
    ),
    'layer_activated' => array(
      'ding_library_openlayers_1' => 'ding_library_openlayers_1',
      'geofield_formatter' => 0,
    ),
    'layer_switcher' => array(
      'geofield_formatter' => 0,
      'ding_library_openlayers_1' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
    'map_name' => 'ding_library_map',
  );
  $export["ding_library_map"] = $openlayers_maps;

  return $export;
}

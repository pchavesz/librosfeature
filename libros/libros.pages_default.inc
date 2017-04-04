<?php
/**
 * @file
 * libros.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function libros_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_9b7607cb-b322-4479-8d21-1c16c5c48857';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -98;
  $handler->conf = array(
    'title' => 'Libros',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        6 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'libros' => 'libros',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'cb8be914-3cfb-4ab8-b658-80146d6930d4';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_9b7607cb-b322-4479-8d21-1c16c5c48857';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-bae4c4ff-2d68-4b39-bff6-45ad9730e358';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_autor_libro';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'bae4c4ff-2d68-4b39-bff6-45ad9730e358';
  $display->content['new-bae4c4ff-2d68-4b39-bff6-45ad9730e358'] = $pane;
  $display->panels['left'][0] = 'new-bae4c4ff-2d68-4b39-bff6-45ad9730e358';
  $pane = new stdClass();
  $pane->pid = 'new-1f8ef764-a176-48e3-b807-e8018a1d636a';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '1f8ef764-a176-48e3-b807-e8018a1d636a';
  $display->content['new-1f8ef764-a176-48e3-b807-e8018a1d636a'] = $pane;
  $display->panels['left'][1] = 'new-1f8ef764-a176-48e3-b807-e8018a1d636a';
  $pane = new stdClass();
  $pane->pid = 'new-790a2264-722f-487d-a351-c5342dd969cc';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'cs_adaptive_image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_link' => '',
      'styles' => array(
        'breakpoint_1' => '',
        'style_1' => '',
        'breakpoint_2' => '',
        'style_2' => '',
        'breakpoint_3' => '',
        'style_3' => '',
        'breakpoint_4' => '',
        'style_4' => '',
        'breakpoint_5' => '',
        'style_5' => '',
        'max_style' => '',
        'fallback_style' => '',
      ),
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '790a2264-722f-487d-a351-c5342dd969cc';
  $display->content['new-790a2264-722f-487d-a351-c5342dd969cc'] = $pane;
  $display->panels['left'][2] = 'new-790a2264-722f-487d-a351-c5342dd969cc';
  $pane = new stdClass();
  $pane->pid = 'new-8ad74d16-2b0f-4fc6-a4b0-464370e161b3';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_isbn';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'number_integer',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'thousand_separator' => '',
      'prefix_suffix' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8ad74d16-2b0f-4fc6-a4b0-464370e161b3';
  $display->content['new-8ad74d16-2b0f-4fc6-a4b0-464370e161b3'] = $pane;
  $display->panels['right'][0] = 'new-8ad74d16-2b0f-4fc6-a4b0-464370e161b3';
  $pane = new stdClass();
  $pane->pid = 'new-cf43deb5-5c9e-46a0-8888-d61ded6f654f';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_titulo';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'cf43deb5-5c9e-46a0-8888-d61ded6f654f';
  $display->content['new-cf43deb5-5c9e-46a0-8888-d61ded6f654f'] = $pane;
  $display->panels['right'][1] = 'new-cf43deb5-5c9e-46a0-8888-d61ded6f654f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_9b7607cb-b322-4479-8d21-1c16c5c48857'] = $handler;

  return $export;
}

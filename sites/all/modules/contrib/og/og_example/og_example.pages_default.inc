<?php
/**
 * @file
 * og_example.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function og_example_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Group',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'og_is_node_group',
          'settings' => array(
            'is_group_content' => '1',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '092a70a5-b195-421e-944f-ff2f43671773';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8ba784e1-dfcc-4c61-89c0-08e711a90c79';
    $pane->panel = 'right';
    $pane->type = 'node_create_links';
    $pane->subtype = 'node_create_links';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'field_name' => 'og_group_ref',
      'types' => array(),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '8ba784e1-dfcc-4c61-89c0-08e711a90c79';
    $display->content['new-8ba784e1-dfcc-4c61-89c0-08e711a90c79'] = $pane;
    $display->panels['right'][0] = 'new-8ba784e1-dfcc-4c61-89c0-08e711a90c79';
    $pane = new stdClass();
    $pane->pid = 'new-a1aac1e8-c9eb-4ba3-832e-db5043cf301e';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:group_group';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'og_group_subscribe',
      'formatter_settings' => array(
        'field_name' => 'og_user_group_ref',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = 'a1aac1e8-c9eb-4ba3-832e-db5043cf301e';
    $display->content['new-a1aac1e8-c9eb-4ba3-832e-db5043cf301e'] = $pane;
    $display->panels['right'][1] = 'new-a1aac1e8-c9eb-4ba3-832e-db5043cf301e';
    $pane = new stdClass();
    $pane->pid = 'new-7ccd344b-35bd-491b-a977-ce0309329aae';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => 'text_default',
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '7ccd344b-35bd-491b-a977-ce0309329aae';
    $display->content['new-7ccd344b-35bd-491b-a977-ce0309329aae'] = $pane;
    $display->panels['top'][0] = 'new-7ccd344b-35bd-491b-a977-ce0309329aae';
    $pane = new stdClass();
    $pane->pid = 'new-a9946e56-cf4f-4622-afd0-39cdc035935d';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'og_members-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 0,
      'override_title_text' => 'Members',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = 'a9946e56-cf4f-4622-afd0-39cdc035935d';
    $display->content['new-a9946e56-cf4f-4622-afd0-39cdc035935d'] = $pane;
    $display->panels['top'][1] = 'new-a9946e56-cf4f-4622-afd0-39cdc035935d';
    $pane = new stdClass();
    $pane->pid = 'new-3dde2869-f567-4ff1-8147-0873fc986d01';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'og_nodes-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Group articles',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = '';
    $pane->uuid = '3dde2869-f567-4ff1-8147-0873fc986d01';
    $display->content['new-3dde2869-f567-4ff1-8147-0873fc986d01'] = $pane;
    $display->panels['top'][2] = 'new-3dde2869-f567-4ff1-8147-0873fc986d01';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  return $export;
}

<?php
/**
 * @file
 * openlocal_workflow.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function openlocal_workflow_default_rules_configuration() {
  $items = array();
  $items['rules_ol_workflow_item_needs_moderation'] = entity_import('rules_config', '{ "rules_ol_workflow_item_needs_moderation" : {
      "LABEL" : "OL Workflow: Item needs moderation",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "openlocal" ],
      "REQUIRES" : [ "rules", "workbench_moderation" ],
      "ON" : { "workbench_moderation_after_moderation_transition" : [] },
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "5" : "5" } },
            "subject" : "Item needing moderation: [node:title]",
            "message" : "State changed from [previous-state:value] to [new-state:value].\\r\\n\\r\\n[node:url]"
          }
        }
      ]
    }
  }');
  return $items;
}

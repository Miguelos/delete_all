<?php

/**
 * @file
 * Delete All Drush commands
 */

/**
 * Implementation of hook_drush_command().
 */
function delete_all_drush_command() {
  $items = array();
  $items['delete-all'] = array(
    'callback' => 'delete_all_drush_add',
    'description' => "Delete all nodes of a specific content type",
  );
  return $items;
}

/**
 * Implementation of hook_drush_help().
 */
function delete_all_drush_help($section) {
  switch ($section) {
    case 'drush:openid-add':
      return dt("Add OpenID(s) to a user account. The first argument needs to be a valid UID, additional arguments should be OpenID URLs.");
  }
}

/**
 * Drush callback to add OpenIDs
 */
function delete_all_drush_add() {
  $types = func_get_args();
  if ($types) {
      print "Deleted " . _delete_all_normal(FALSE, $types) . " nodes";
  }
}

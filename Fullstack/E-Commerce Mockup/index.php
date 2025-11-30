<?php
/* 1E1DB14C
** CREATED 251302 NOV 2025 UPDATED 29 NOV 2025
** Fullstack project.
*/

/********** TODO: *********************
** - add account creation page
** - add login page
** - add user portal
** - add user cart
** - add logout confirmation page
** - 
**************************************/

session_start();

// enable/disable debugging logic
$debug = true;

/* The logged in debugging logic will need to be removed when user login is implement
** as the unset function below will destroy a legitimate logged in session.
*/
if($debug) { // DEBUGGING logic
	$_SESSION['debug'] = "true";//DEBUGGING
} else {
	unset($_SESSION['debug']);//DEBUGGING
	unset($_SESSION['loggedin']);//DEBUGGING
} // end of debugging conditional

$action = filter_input(INPUT_POST, 'action');
if($action == NULL)
	$action = filter_input(INPUT_GET, 'action');

switch($action) {
	case "fubar":
		break;
	case "login"://stubbed
		break;
	case "logout"://stubbed
		break;
	default:
		include $_SERVER['DOCUMENT_ROOT'] . '/Store/view/portal.php';
} // end of switch
?>


<?php
/* 1E1DB14C
** CREATED 251302 NOV 2025 UPDATED 29 NOV 2025
** Accounts controller
*/


/********** TODO: ***********************************************************
** + implement view account login page logic (based on login status) (ACTION: Account)
** - implement view account page (based on login status) (ACTION: Account)
** + implement account logout logic (ACTION: Logout)
** - implement view account cart (ACTION: Cart)
** - 
*****************************************************************************/

session_start();

$action = filter_input(INPUT_POST, 'action');
if($action == NULL)
	$action = filter_input(INPUT_GET, 'action');

switch($action) {
	case "Account"://stubbed
		if(isset($_SESSION['loggedin']))
			break;//display account page
		else
			include $_SERVER['DOCUMENT_ROOT'] . '/Store/view/login.php';
			break;//display login page
		break;
	case "Login"://stubbed
		if(isset($_SESSION['debug'])) {
			$_SESSION['loggedin'] = "true";//DEBUGGING
			header("Location: /Store/");
		} // end of debugging check conditional
		break;
	case "Cart"://stubbed
		break;
	case "Logout":
		$isLoggedOut = session_destroy();
		if($isLoggedOut)
			header("Location: /Store/");
		break; // end of Logout case statement
	default:
		include $_SERVER['DOCUMENT_ROOT'] . '/Store/view/portal.php';
} // end of switch

?>

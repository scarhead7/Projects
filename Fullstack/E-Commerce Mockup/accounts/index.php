<?php
/* 1E1DB14C
** CREATED 251302 NOV 2025 UPDATED 26 AUG 2026
** Accounts controller
*/


/********** TODO: ***********************************************************
** + implement view account login page logic (based on login status) (ACTION: Account)
** + implement view account page (based on login status) (ACTION: Account)
** + implement account logout logic (ACTION: Logout)
** - implement view account cart (ACTION: Cart)
** - implement database login logic (ACTION: Login)
** - 
*****************************************************************************/

session_start();

$action = filter_input(INPUT_POST, 'action');
if($action == NULL)
	$action = filter_input(INPUT_GET, 'action');

switch($action) {
	case "Account"://stubbed
		if(isset($_SESSION['loggedin'])) {
			include $_SERVER['DOCUMENT_ROOT'] . '/Store/view/portal.php';
			break;//display account page
		} else {
			include $_SERVER['DOCUMENT_ROOT'] . '/Store/view/login.php';
			break;//display login page
		}
		break;
	case "Login": /* log in client */
		if(isset($_SESSION['debug'])) {
			$_SESSION['loggedin'] = "true";//DEBUGGING
			header("Location: /Store/");
		} // end of debugging check conditional

		$clientEmail	= filter_input(INPUT_POST, 'user_in',	FILTER_SANITIZE_EMAIL);
		$clientPass		= filter_input(INPUT_POST, 'pass_in',	FILTER_SANITIZE_STRING);

		if(empty($clientEmail) || empty($clientPass)) {
			$_SESSION['message'] = '<p class="error-message">*** Please check your login information! ***</p>';
            include $_SERVER['DOCUMENT_ROOT'] . '/Store/view/login.php';
            exit; 
        } // end of empty check conditional

        /*** !! INCOMPLETE !! ***/

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

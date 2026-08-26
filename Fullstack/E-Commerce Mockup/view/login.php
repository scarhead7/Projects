<?php
/* 1E1DB14C
** CREATED 261440 NOV 2025 UPDATED 26 AUG 2026
** Fullstack project: login page.
*/

/*******TODO*****
 * - add session message logic
 * - 
****************/

$title = "Login";

include $_SERVER['DOCUMENT_ROOT'] . '/Store/elements/header.php';
include $_SERVER['DOCUMENT_ROOT'] . '/Store/elements/nav.php';
?>

<form action="/Store/accounts/" method="post" id="login-form">
    <label for="user_in">Enter email:</label><br>
    <input id="user_in" type="email" name="email"><br><br>
    <label for="pass_in">Password:</label><br>
    <input id="pass_in" type="password" name="pass"><br>
    <input type="hidden" name="action" value="Login">
    <input id="login_submit" type="submit" value="Login">
</form>

<?php
include $_SERVER['DOCUMENT_ROOT'] . '/Store/elements/footer.php';
?>

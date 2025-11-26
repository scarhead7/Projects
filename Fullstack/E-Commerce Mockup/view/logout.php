<?php
/* 1E1DB14C
** CREATED 261327 NOV 2025 UPDATED 26 NOV 2025
** Fullstack project: logout page. No display.
*/


	session_start();

    unset($_SESSION['loggedin']); // logout the user
    unset($_POST['user']);
    header("Location:/Store/?loggedout=true"); // redirect to the homepage
?>

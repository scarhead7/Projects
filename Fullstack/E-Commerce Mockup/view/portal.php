<?php

/* 1E1DB14C
** CREATED 261327 NOV 2025 UPDATED 26 AUG 2026
** Fullstack project: user account portal page.
*/

/*******TODO*****
 * - add session message logic
 * - 
****************/

$title = "Account";

include $_SERVER['DOCUMENT_ROOT'] . '/Store/elements/header.php';
include $_SERVER['DOCUMENT_ROOT'] . '/Store/elements/nav.php';
?>

<div class="account-links-container"><a class="account-home-links" href="/Store/view/orders.php">Orders</a></div>
<div class="account-links-container"><p class="account-home-links">Delivery Addresses</p></div>
<div class="account-links-container"><a class="account-home-links" href="/Store/view/personal.php">Personal Information</a></div>
<div class="account-links-container"><p class="account-home-links">Login Information</p></div>

<?php
include $_SERVER['DOCUMENT_ROOT'] . '/Store/elements/footer.php';
?>

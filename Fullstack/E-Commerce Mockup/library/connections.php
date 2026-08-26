<?php
/* 1E1DB14C
** CREATED 261705 AUG 2026 UPDATED 26 AUG 2026
** database connections file
*/


/* This function will connect to the database for the site.
*/
function storeDBConnect() {
  $server     = "localhost";
  $database   = "store";
  $user       = "root";
  $password   = "";

  $dsn        = "mysql:host=$server;dbname=$database;**charset=utf8**";
  $options    = array(PDO::ATTR_ERRMODE => PDO::ERRMODE_EXCEPTION);

  try {
    $link = new PDO($dsn, $user, $password, $options);
    return $link;
  } catch(PDOException $e) {
	header('Location: /Store/view/500.php');
    exit;
  } // end of try-catch
} // end of storeDBConnect()

storeDBConnect();

?>

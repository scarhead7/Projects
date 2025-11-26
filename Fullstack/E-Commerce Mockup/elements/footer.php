<!-- 1E1DB14C
     CREATED 261300 NOV 2025 UPDATED 26 NOV 2025
     Header elements file.
-->


		<footer>
			<div>
				<?php
					if(isset($_SESSION['debug'])) //notification of active debugging
						echo "<span id=\"debug-notif\">DEBUG ACTIVE</span>";
				?>
				<?php // only display updated date if on homepage
					if($_SERVER['REQUEST_URI'] === "/Store/") echo '<span id="page-update">updated 26 NOV 2025</span>';
				?>
		</footer>
	</body>
</html>

<?php
?>

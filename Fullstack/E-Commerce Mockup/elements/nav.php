<!-- 1E1DB14C
     CREATED 261337 NOV 2025 UPDATED 26 NOV 2025
     Navigation elements file.
-->


		<div class="topnav">
			<?php
			echo "<a id=\"account-nav\" class=\"navlink\" href=\"/Store/accounts/?action=Account\">Account</a>";
			// only show cart and logout buttons if user is logged in
			if(isset($_SESSION['loggedin'])) {
				echo "<a id=\"cart-nav\" class=\"navlink\" href=\"/Store/accounts/?action=Cart\">Cart</a>";
				echo "<a id=\"logout-nav\" class=\"navlink\" href=\"/Store/accounts/?action=Logout\">Logout</a>";
			} // end of conditional
			?>
		</div>

-- 1E1DB14C
-- CREATED 261728 AUG 2026 UPDATED 26 AUG 2026
-- Store users table


DROP TABLE `store`.`users`;

CREATE TABLE `store`.`users` (
	`userId` INT UNSIGNED NOT NULL AUTO_INCREMENT ,
	`userFirstName` TEXT NOT NULL ,
	`userMiddleName` TEXT NULL DEFAULT NULL ,
	`userLastName` TEXT NOT NULL ,
	`userPreferredName` TEXT NOT NULL ,
	`userEmail` TEXT NOT NULL ,
    `userPassword`  TEXT DEFAULT NULL ,
    `userPasswordUpdated`   TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP ,
	`userType` ENUM('client','admin') NOT NULL ,
	`userDob` DATE NOT NULL ,
	`userShippingAddressStreet` TEXT NOT NULL ,
	`userShippingAddressCity` TEXT NOT NULL ,
	`userShippingAddressState` TEXT NOT NULL ,
	`userShippingAddressZip` TEXT NOT NULL ,
	`userBillingAddressStreet` TEXT NOT NULL ,
	`userBillingAddressCity` TEXT NOT NULL ,
	`userBillingAddressState` TEXT NOT NULL ,
	`userBillingAddressZip` TEXT NOT NULL ,
	`userPhone` TEXT NOT NULL ,
	`userCreditCardNum` TEXT NOT NULL ,
	`userCreditCardExpire` TEXT NOT NULL ,
	`userCreditCardCVV` TEXT NOT NULL ,
	`userCreated` TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP ,
	`userUpdated` TIMESTAMP on update CURRENT_TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP ,

	PRIMARY KEY (`userId`)
) ENGINE = InnoDB;

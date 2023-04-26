/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:41:31 by jgo               #+#    #+#             */
/*   Updated: 2023/04/26 16:56:34 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name) : name(_name), myWeapon(NULL) {}

void HumanB::attack(void) const {
	if (this->myWeapon)
		std::cout << this->name << " attacks with their "
				  << this->myWeapon->getType() << "\n";
	else
		std::cout << this->name << " not equiped"
				  << "\n";
}

void HumanB::setWeapon(Weapon &_myWeapon) { this->myWeapon = &_myWeapon; }
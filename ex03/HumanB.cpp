/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:41:31 by jgo               #+#    #+#             */
/*   Updated: 2023/05/02 15:21:32 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name_(name), myWeapon_(NULL) {}

HumanB::~HumanB() {}

void HumanB::attack(void) const {
	if (this->myWeapon_)
		std::cout << this->name_ << " attacks with their "
				  << this->myWeapon_->getType() << "\n";
	else
		std::cout << this->name_ << " not equiped"
				  << "\n";
}

void HumanB::setWeapon(Weapon& _myWeapon) {
	this->myWeapon_ = &_myWeapon;
}
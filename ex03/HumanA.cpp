/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:30:01 by jgo               #+#    #+#             */
/*   Updated: 2023/05/02 15:20:53 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& myWeapon)
	: name_(name), myWeapon_(myWeapon) {}

HumanA::~HumanA() {}

void HumanA::attack(void) const {
	std::cout << this->name_ << " attacks with their "
			  << this->myWeapon_.getType() << "\n";
}
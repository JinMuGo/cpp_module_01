/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:30:01 by jgo               #+#    #+#             */
/*   Updated: 2023/04/28 20:54:39 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon& _myWeapon)
	: name(_name), myWeapon(_myWeapon) {}

void HumanA::attack(void) const {
	std::cout << this->name << " attacks with their "
			  << this->myWeapon.getType() << "\n";
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:40:52 by jgo               #+#    #+#             */
/*   Updated: 2023/05/01 13:08:50 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

class HumanB {
   private:
	std::string name;
	Weapon* myWeapon;

   public:
	HumanB(std::string _name);
	~HumanB();
	void attack(void) const;
	void setWeapon(Weapon& _myWeapon);
};

#endif
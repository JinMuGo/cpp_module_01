/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:30:05 by jgo               #+#    #+#             */
/*   Updated: 2023/05/01 13:08:40 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

class HumanA {
   private:
	std::string name;
	Weapon& myWeapon;

   public:
	HumanA(std::string _name, Weapon& _myWeapon);
	~HumanA();
	void attack(void) const;
};

#endif
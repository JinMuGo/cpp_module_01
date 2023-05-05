/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:40:52 by jgo               #+#    #+#             */
/*   Updated: 2023/05/02 15:21:56 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

class HumanB {
   private:
	std::string name_;
	Weapon* myWeapon_;

   public:
	HumanB(std::string name);
	~HumanB();
	void attack(void) const;
	void setWeapon(Weapon& myWeapon);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:40:52 by jgo               #+#    #+#             */
/*   Updated: 2023/04/28 20:32:07 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

class HumanB {
   private:
	std::string name;
	Weapon* myWeapon;

   public:
	HumanB(std::string _name);
	void attack(void) const;
	void setWeapon(Weapon& _myWeapon);
};

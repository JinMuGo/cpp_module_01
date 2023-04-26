/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:30:05 by jgo               #+#    #+#             */
/*   Updated: 2023/04/26 16:56:23 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"

class HumanA {
  private:
	std::string name;
	Weapon &myWeapon;

  public:
	HumanA(std::string _name, Weapon &_myWeapon);
	void attack(void) const;
};

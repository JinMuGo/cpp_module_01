/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:07:06 by jgo               #+#    #+#             */
/*   Updated: 2023/05/02 15:22:30 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon {

   private:
	std::string type_;

   public:
	Weapon(std::string type);
	~Weapon();
	const std::string& getType() const;
	void setType(std::string type);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:07:06 by jgo               #+#    #+#             */
/*   Updated: 2023/04/26 16:52:57 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

#pragma once
#ifndef Weapon

class Weapon {

  private:
	std::string type;

  public:
	Weapon(std::string _type);
	const std::string &getType() const;
	void setType(std::string _type);
};

#endif
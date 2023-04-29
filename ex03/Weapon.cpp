/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:13:20 by jgo               #+#    #+#             */
/*   Updated: 2023/04/29 11:23:59 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _type) : type(_type) {}

Weapon::~Weapon() {}

const std::string& Weapon::getType() const {
	return (this->type);
}

void Weapon::setType(std::string _type) {
	this->type = _type;
}

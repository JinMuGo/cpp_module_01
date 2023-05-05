/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:13:20 by jgo               #+#    #+#             */
/*   Updated: 2023/05/02 15:22:21 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type_(type) {}

Weapon::~Weapon() {}

const std::string& Weapon::getType() const {
	return (this->type_);
}

void Weapon::setType(std::string type) {
	this->type_ = type;
}

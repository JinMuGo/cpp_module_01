/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:19:00 by jgo               #+#    #+#             */
/*   Updated: 2023/05/01 12:48:01 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name) {
	this->name = name;
}

Zombie::~Zombie() {
	std::cout << this->name << ": "
			  << "dying..." << std::endl;
}

void Zombie::announce(void) {
	std::cout << this->name << ": " << ANNOUNCE << std::endl;
}

void Zombie::setName(std::string name) {
	this->name = name;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:26:09 by jgo               #+#    #+#             */
/*   Updated: 2023/04/24 15:48:40 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name) {
	Zombie *heapZombie;

	try {
		heapZombie = new Zombie(name);
	} catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
	}

	return (heapZombie);
}
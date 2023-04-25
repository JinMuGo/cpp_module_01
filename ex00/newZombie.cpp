/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:26:09 by jgo               #+#    #+#             */
/*   Updated: 2023/04/25 22:10:57 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name) {
	Zombie *heapZombie;

	try {
		heapZombie = new Zombie(name);
	} catch (const std::bad_alloc &e) {
		std::cerr << e.what() << '\n';
		return (NULL);
	}
	return (heapZombie);
}
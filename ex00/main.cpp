/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:15:10 by jgo               #+#    #+#             */
/*   Updated: 2023/05/08 20:29:53 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie* heapZombie;
	Zombie* heapZombie2;
	{ Zombie stackZombie("STACK"); }

	heapZombie = newZombie("HEAP");
	{ heapZombie2 = newZombie("HEAP2"); }
	delete heapZombie;
	delete heapZombie2;

	randomChump("STACK3");
	return (0);
}
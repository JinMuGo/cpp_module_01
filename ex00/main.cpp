/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:15:10 by jgo               #+#    #+#             */
/*   Updated: 2023/04/25 20:50:30 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
	{
		Zombie stackZombie("STACK");
	}
	Zombie *heapZombie;
	Zombie *heapZombie2;

	heapZombie = newZombie("HEAP");
	heapZombie->announce();
	{
		heapZombie2 = newZombie("HEAP2");
	}
	heapZombie2->announce();
	delete heapZombie;
	delete heapZombie2;

	randomChump("STACK3");
	return (0);
}
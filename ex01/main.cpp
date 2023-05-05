/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:15:10 by jgo               #+#    #+#             */
/*   Updated: 2023/05/02 15:09:33 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	const int kN = 5;
	Zombie* parade;

	parade = zombieHorde(kN, "parade");
	if (parade == NULL)
		return (1);
	for (int i = 0; i < kN; i++)
		parade[i].announce();
	delete[] parade;
	return (0);
}
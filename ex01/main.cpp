/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:15:10 by jgo               #+#    #+#             */
/*   Updated: 2023/04/25 22:26:39 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	const int N = 5;
	Zombie *parade;

	parade = zombieHorde(N, "parade");

	for (int i = 0; i < N; i++)
		parade[i].announce();
	delete[] parade;
	return (0);
}
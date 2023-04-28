/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 20:54:48 by jgo               #+#    #+#             */
/*   Updated: 2023/04/28 22:25:41 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char** av) {
	Harl harl;

	if (ac != 2)
		std::cerr << "❌ Incorrect number of arguments\n" << std::endl;
	else
		harl.complain(av[1]);
	return (0);
}
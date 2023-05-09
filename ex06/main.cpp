/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 20:54:48 by jgo               #+#    #+#             */
/*   Updated: 2023/05/09 11:46:31 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char** av) {
	if (ac != 2)
		std::cerr << "❌ Incorrect number of arguments\n" << std::endl;
	else
		Harl().complain(av[1]);
	return (0);
}
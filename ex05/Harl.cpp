/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 20:46:55 by jgo               #+#    #+#             */
/*   Updated: 2023/04/28 22:10:59 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

const std::string Harl::levels[4] = {"debug", "info", "warning", "error"};

void Harl::debug(void) {
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my "
				 "7XL-double-cheese-triple-pickle-special-ketchup burger."
				 "I really do!\n"
			  << std::endl;
}
void Harl::info(void) {
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money."
				 "You didn't put enough bacon in my burger! "
				 "If you did, I wouldn't be asking for more!\n"
			  << std::endl;
}
void Harl::warning(void) {
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free."
				 "I’ve been coming for years whereas you started working here "
				 "since last month.\n"
			  << std::endl;
}
void Harl::error(void) {
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n"
			  << std::endl;
}

void Harl::complain(std::string level) {
	void (Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning,
								&Harl::error};
	for (int i = 0; i < 4; ++i)
		if (level == levels[i])
			(this->*f[i])();
}

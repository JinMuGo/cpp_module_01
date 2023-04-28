/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 20:54:48 by jgo               #+#    #+#             */
/*   Updated: 2023/04/28 21:30:48 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void) {
	Harl harl;

	harl.complain("debug");
	harl.complain("DEBUG");
	harl.complain("info");
	harl.complain("INFO");
	harl.complain("warning");
	harl.complain("WARNING");
	harl.complain("error");
	harl.complain("ERROR");
	return (0);
}
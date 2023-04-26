/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 13:48:34 by jgo               #+#    #+#             */
/*   Updated: 2023/04/26 14:01:26 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "address of str:  " << &str << "\n";
	std::cout << "address of strtringPTR:  " << stringPTR << "\n";
	std::cout << "address of strtringREF:  " << &stringREF << "\n";

	std::cout << "value of str: " << str << "\n";
	std::cout << "value of stringPTR: " << *stringPTR << "\n";
	std::cout << "value of stringREF: " << stringREF << "\n";

	// str = "INFACT THIS IS NOT BRAIN";
	// *stringPTR = "INFACT THIS IS NOT BRAIN";
	// stringREF = "INFACT THIS IS NOT BRAIN";

	std::cout << "value of str: " << str << "\n";
	std::cout << "value of stringPTR: " << *stringPTR << "\n";
	std::cout << "value of stringREF: " << stringREF << "\n";

	return (0);
}
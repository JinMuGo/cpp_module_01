/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:23:01 by jgo               #+#    #+#             */
/*   Updated: 2023/05/02 15:29:56 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static bool prtErr(std::string msg) {
	std::cerr << msg;
	return (1);
}

static std::string makeReplaceFileName(std::string str) {
	return (str.append(".replace"));
};

int main(int ac, char** av) {
	if (ac != 4)
		return (prtErr(ERR_ARGS));
	const size_t s1Size = strlen(av[S1]);
	const size_t s2Size = strlen(av[S2]);
	std::string line;
	std::ifstream file(av[FILE_NAME], std::ios::in);
	std::ofstream outFile(makeReplaceFileName(av[FILE_NAME]).c_str(),
						  std::ofstream::trunc | std::ofstream::out);

	if (!file.is_open() || !outFile.is_open())
		return (prtErr(ERR_FILE));
	while (getline(file, line)) {
		size_t pos = line.find(av[S1]);
		while (pos != std::string::npos) {
			line.erase(pos, s1Size);
			line.insert(pos, av[S2], s2Size);
			pos = line.find(av[S1], pos + 1);
		}
		outFile << line << "\n";
	}
	file.close();
	outFile.close();
	return (0);
}
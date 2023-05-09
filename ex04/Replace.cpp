/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 17:46:12 by jgo               #+#    #+#             */
/*   Updated: 2023/05/09 11:41:50 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(const char* fileName, const char* s1, const char* s2)
	: fileName_(fileName), s1_(s1), s2_(s2) {}

Replace::~Replace() {}

bool Replace::prtErr(std::string msg) {
	std::cerr << msg;
	return (1);
}

bool Replace::replaceFile(void) {
	std::ifstream inFile(this->fileName_.c_str(),
						 std::ifstream::in | std::ifstream::binary);
	std::ofstream outFile((this->fileName_ + ".replace").c_str(),
						  std::ofstream::trunc | std::ofstream::out);
	if (!inFile.is_open() || !outFile.is_open())
		return (prtErr(ERR_FILE));
	const size_t s1Size = this->s1_.length();
	const size_t s2Size = this->s2_.length();
	std::stringstream ss;
	std::string tmp;
	std::size_t pos;

	ss << inFile.rdbuf();
	tmp = ss.str();
	pos = tmp.find(this->s1_);
	while (pos != std::string::npos) {
		tmp.erase(pos, s1Size);
		tmp.insert(pos, this->s2_);
		pos = tmp.find(this->s1_, pos + s2Size);
	}
	outFile << tmp;
	return (0);
}

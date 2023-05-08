/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 20:21:13 by jgo               #+#    #+#             */
/*   Updated: 2023/05/08 20:45:30 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include "main.h"

class Replace {
   private:
	const std::string fileName_;
	const std::string s1_;
	const std::string s2_;

   public:
	Replace(const char* fileName, const char* s1, const char* s2);
	~Replace();
	static bool prtErr(std::string msg);
	bool replaceFile(void);
};

#endif
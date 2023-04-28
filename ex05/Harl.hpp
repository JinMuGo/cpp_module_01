/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 20:41:27 by jgo               #+#    #+#             */
/*   Updated: 2023/04/28 21:12:53 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

class Harl {
   private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	static const std::string levels[4];

   public:
	Harl();
	~Harl();
	void complain(std::string level);
};

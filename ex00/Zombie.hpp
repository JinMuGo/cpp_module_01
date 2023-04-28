/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:15:57 by jgo               #+#    #+#             */
/*   Updated: 2023/04/28 17:15:34 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

class Zombie {
  private:
	std::string name;

  public:
	Zombie(std::string name);
	~Zombie();
	void announce(void);
};

void randomChump(std::string name);
Zombie *newZombie(std::string name);
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:15:57 by jgo               #+#    #+#             */
/*   Updated: 2023/04/25 21:24:58 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

class Zombie {
  private:
	std::string name;
  public:
	Zombie(std::string name);
	Zombie();
	~Zombie();
	void announce(void);
	void setName(std::string name);
};

Zombie *zombieHorde( int N, std::string name );


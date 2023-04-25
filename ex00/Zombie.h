/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:16:26 by jgo               #+#    #+#             */
/*   Updated: 2023/04/24 15:51:51 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

#define ANNOUNCE "BraiiiiiiinnnzzzZ..."

void randomChump(std::string name);
Zombie *newZombie(std::string name);

#endif
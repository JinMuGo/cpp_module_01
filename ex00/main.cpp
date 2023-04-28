/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:15:10 by jgo               #+#    #+#             */
/*   Updated: 2023/04/28 17:15:19 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
    Zombie* heapZombie;
    Zombie* heapZombie2;
    { Zombie stackZombie("STACK"); }

    heapZombie = newZombie("HEAP");
    { heapZombie2 = newZombie("HEAP2"); }
    if (heapZombie)
        heapZombie->announce();
    if (heapZombie2)
        heapZombie2->announce();
    delete heapZombie;
    delete heapZombie2;

    randomChump("STACK3");
    return (0);
}
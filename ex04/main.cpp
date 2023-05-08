/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:23:01 by jgo               #+#    #+#             */
/*   Updated: 2023/05/08 20:23:56 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int ac, char** av) {
	if (ac != 4)
		return (Replace::prtErr(ERR_ARGS));
	else
		return (Replace(av[FILE_NAME], av[S1], av[S2]).replaceFile());
	return (0);
}
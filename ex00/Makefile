# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/07 19:34:14 by jgo               #+#    #+#              #
#    Updated: 2023/04/25 20:41:01 by jgo              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include ../makeConfig/Rules.mk
include ../makeConfig/Color_rules.mk

SRCS :=	main.cpp \
		Zombie.cpp \
		newZombie.cpp \
		randomChump.cpp

NAME := BraiiiiiiinnnzzzZ

OBJS := $(SRCS:.cpp=.o)
DEPS := $(SRCS:.cpp=.d)
-include $(DEPS)

include ../makeConfig/Targets.mk
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/07 19:34:14 by jgo               #+#    #+#              #
#    Updated: 2023/04/24 10:32:28 by jgo              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include ../makeConfig/Rules.mk
include ../makeConfig/Color_rules.mk

SRCS :=	main.cpp

NAME := BraiiiiiiinnnzzzZ

OBJS := $(SRCS:.cpp=.o)
DEPS := $(SRCS:.cpp=.d)
-include $(DEPS)

include ../makeConfig/Targets.mk
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/07 10:45:38 by smagdela          #+#    #+#              #
#    Updated: 2022/06/07 17:12:01 by smagdela         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#################
#	Variables	#
#################

BIN	=	phone_book

INCD	=	includes/
SRCD	=	sources/
OBJD	=	objects/

INCS	=	PhoneBook.hpp	Contact.hpp
SRCS	=	main.cpp	PhoneBook.cpp	Contact.cpp
OBJS	=	${SRCS:.cpp=.o}

INCS	:=	${addprefix ${INCD},${INCS}}
OBJS	:=	${addprefix ${OBJD},${OBJS}}
SRCS	:=	${addprefix ${SRCD},${SRCS}}

CXX		=	c++
CXXFLAGS 	=	-std=c++98 -Wall -Wextra -Werror
DEBUG	=	-g

#################
#	Fancy Stuff	#
#################

GREY    =	\033[0;30m
RED     =	\033[0;31m
GREEN   =	\033[0;32m
YELLOW  =	\033[0;33m
BLUE    =	\033[0;34m
PURPLE  =	\033[0;35m
WHITE   =	\033[0;37m
CYAN    =	\033[0;96m

S_GREY  =	\033[1;30m
S_RED   =	\033[1;31m
S_GREEN =	\033[1;32m
S_YELLOW	 =	\033[1;33m
S_BLUE  =	\033[1;34m
S_PURPLE	 =	\033[1;35m
S_WHITE =	\033[1;37m
S_CYAN  =	\033[1;96m

BOLD    =	\033[1m
NC      =	\033[0m

#############
#	Rules	#
#############

all:	${BIN}

${OBJD}%.o:	${SRCD}%.cpp
	@echo "${S_CYAN}➤ Compiling object files...${NC}"
	@mkdir -p ${OBJD}
	@${CXX} ${CXXFLAGS} $< -c -o $@
	@echo "${S_GREEN}✔ Object files built!\n${NC}"

${BIN}:	${OBJS}
	@echo "${S_CYAN}➤ Compiling executable...${NC}"
	@${CXX} ${CXXFLAGS} ${OBJS} -o ${BIN}
	@echo "${S_GREEN}✔ Binary available!\n${NC}"

clean:
	@echo "${S_CYAN}➤ Deleting Object files...${NC}"
	@-rm -rf ${OBJS}
	@echo "${S_GREEN}✔ Object files deleted!\n${NC}"

fclean:	clean
	@echo "${S_CYAN}➤ Deleting executable...${NC}"
	@-rm -rf ${BIN}
	@echo "${S_GREEN}✔ Executable deleted!\n${NC}"

re:	fclean	all

.PHONY: all debug clean fclean re

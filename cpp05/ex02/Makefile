# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/06 16:24:34 by bkhatib           #+#    #+#              #
#    Updated: 2023/10/26 10:46:20 by bkhatib          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Bureaucrat
	
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

OBJDIR = .objFiles

FILES		= main Bureaucrat Form PresidentialPardonForm RobotomyRequestForm ShrubberyCreationForm

SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER		= Bureaucrat.hpp

#Colors:
GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m


all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CC) $(OBJ) $(OPTS) -o $(NAME)
	@printf "$(_SUCCESS) $(GREEN)- Executable ready.\n$(RESET)"

$(OBJDIR)/%.o: %.cpp $(HEADER)
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) $(OPTS) -c $< -o $@

clean:
	@$(RM) $(OBJDIR) $(OBJ)
	@printf "$(YELLOW)    - Object files removed.$(RESET)\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "$(YELLOW)    - Executable removed.$(RESET)\n"
	@if [ -a *_shrubbery ]; then rm *_shrubbery; fi;
	@printf "$(YELLOW)    - Shrubbery file removed.$(RESET)\n"

re: fclean all
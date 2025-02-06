# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/06 01:51:31 by cpoulain          #+#    #+#              #
#    Updated: 2025/02/06 02:14:13 by cpoulain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Includes

include Files.mk

# Flags and compiler

CXX			:=	c++
CXXFLAGS	:=	-Wall -Wextra -Werror -g -std=c++98

# Directories

OBJ_DIR		:=	build
BIN_DIR		:=	bin

# OBJS formatted

OBJS		=	$(addprefix $(OBJ_DIR)/, $(addsuffix .o, $(FILES)))

# Targets

TARGET		:=	$(BIN_DIR)/megaphone

# Phony rules

all: $(TARGET)

clean:
	$(RM) -r $(OBJ_DIR)

fclean: clean
	$(RM) -r $(BIN_DIR)

re: fclean all

# Binary generation

$(TARGET): $(OBJS)
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: all clean fclean re

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/21 13:16:23 by ekruhliu          #+#    #+#              #
#    Updated: 2017/11/21 13:16:24 by ekruhliu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
HEADER = header.h
FLAGS = -Wall -Wextra -Werror
HDR = -c -I $(HEADER)
MAIN = main.c
SRC = ft_open_read_close.c ft_split.c ft_finale_grade.c ft_palka.c ft_dots_test.c ft_demon_brain.c \
		ft_struct_split.c ft_h_palka.c figures.c ft_newlines_test.c ft_print_map.c ft_delete_file.c \
		ft_fuck_sleva.c ft_fuck_snizu.c ft_fuck_sprava.c ft_fuck_sverhy.c ft_korobka.c ft_molnia_syda.c \
		ft_molnia_tyda.c ft_krovat_l.c ft_krovat_r.c ft_pistolet_l.c ft_sharps_test.c ft_delete_struct.c \
		ft_pistolet_r.c ft_topor_syda.c ft_topor_tyda.c ft_zmeika_syda.c ft_zmeika_tyda.c ft_error_check.c \
		ft_styl_syda.c ft_styl_tyda.c ft_create_map.c ft_strlen.c ft_proverko.c ft_zapolnyator.c \
		ft_demon_soul.c ft_map_size.c ft_figures_test.c ft_maps_number_test.c main.c \

OBJ = ft_open_read_close.o ft_split.o ft_dots_test.o ft_sharps_test.o ft_print_map.o ft_error_check.o \
		ft_finale_grade.o ft_palka.o figures.o ft_newlines_test.o ft_figures_test.o ft_maps_number_test.o\
		ft_struct_split.o ft_h_palka.o ft_fuck_sleva.o ft_demon_brain.o ft_delete_file.o \
		ft_fuck_snizu.o ft_fuck_sprava.o ft_fuck_sverhy.o ft_korobka.o ./ft_molnia_syda.o \
		./ft_molnia_tyda.o ./ft_krovat_l.o ./ft_krovat_r.o ./ft_pistolet_l.o ./ft_delete_struct.o \
		./ft_pistolet_r.o ./ft_topor_syda.o ./ft_topor_tyda.o ./ft_zmeika_syda.o ./ft_zmeika_tyda.o \
		./ft_styl_syda.o ./ft_styl_tyda.o ./ft_create_map.o ./ft_strlen.o ft_proverko.o ft_zapolnyator.o \
		./ft_demon_soul.o ft_map_size.o main.o \

all:$(NAME)

$(NAME):
		@ gcc $(FLAGS) $(SRC) $(HDR)
		@ gcc $(OBJ) -o $(NAME)

clean:
		@ /bin/rm -f $(OBJ)
		
fclean: clean
		@ /bin/rm -f $(NAME)

re: fclean all

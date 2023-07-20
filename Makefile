# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/22 17:12:28 by jverdu-r          #+#    #+#              #
#    Updated: 2023/02/14 17:28:43 by jverdu-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	fdf
LIBFT		=	inc/libft/
GNL			=	get_next_line/
MLX			=	minilibx/
LIBFT_A		=	$(addprefix $(LIBFT), libft.a)
MLX_A		=	$(addprefix $(MLX), libmlx.a)

CC			=	gcc
INCLUDE 	=	includes
CFLAGS		=	-Wall -Wextra -Werror -I$(INCLUDE)
RM			=	rm -f
SRCS		=	srcs/fdf.c \
				srcs/alg_utils.c \
				srcs/line_alg.c \
				srcs/project.c \
				srcs/parse_map.c \
				srcs/utils.c \

MKSRCS		=  	srcs/draw.c srcs/controls.c srcs/keyboard.c 

BNSSRCS     =   srcs/draw_bonus.c srcs/controls_bonus.c \
				srcs/mouse.c srcs/keyboard_bonus.c

OBJS		=	$(SRCS:%.c=%.o)

MKOBJS      =   $(MKSRCS:%.c=%.o)

BNSOBJS      =   $(BNSSRCS:%.c=%.o)

all:			$(NAME)

$(NAME):		$(OBJS) $(MKOBJS) $(LIBFT_A) $(MLX_A)
				@$(CC) $(CFLAGS) $(OBJS) $(MKOBJS) -L$(LIBFT) -lft -L$(MLX) -lmlx -lm -o $(NAME) -framework OpenGL -framework AppKit
				@echo "Linked into executable \033[0;32mfdf\033[0m."

$(LIBFT_A):
				@$(MAKE) -s -C $(LIBFT)
				@echo "Compiled $(LIBFT_A)."

$(MLX_A):
				@$(MAKE) -s -C $(MLX)
				@echo "Compiled $(MLX_A)."

bonus:			
				@$(RM) $(MKOBJS)
				make MKOBJS="$(BNSOBJS)"

.c.o:
				@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)
				@echo "Compiling $<."

localclean:
				@$(RM) $(OBJS) $(MKOBJS) $(BNSOBJS)
				@echo "Removed object files."

clean:			localclean
				@$(MAKE) clean -s -C $(LIBFT)
				@echo "Clean libft."
				@$(MAKE) clean -s -C $(MLX)
				@echo "Clean mlx."

fclean:			localclean
				@$(MAKE) fclean -s -C $(LIBFT)
				@echo "Full clean libft."
				@$(MAKE) clean -s -C $(MLX)
				@echo "Clean mlx."
				@$(RM) $(NAME)
				@echo "Removed executable."

re:				fclean all

.PHONY:			all clean fclean re localclean bonus

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
NORMFSH		= norminette -R CheckForbiddenSourceHeader
NORMDEF 	= norminette -R CheckDefine
CREALIB		= ar -crs
GENILIB		= ranlib
RM			= rm -f

NAME		= libft.a
INSRC		= libft.h
SRCS		= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
				ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
				ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
				ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
				ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
				ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
				ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c 
OBJS		= ${SRCS:.c=.o}
BSRC		= ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
				ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c \
				ft_lstmap_bonus.c
BOBJS		= ${BSRC:.c=.o}

all:		$(NAME)

.c.o:
			$(CC) $(CFLAGS) -I$(INSRC) -c $< -o $(<:.c=.o)

cnorm:
			$(NORMFSH) $(SRCS)
			$(NORMDEF) $(INSRC)

$(NAME):	$(OBJS) $(INSRC)
			$(CREALIB) $(NAME) $(OBJS)
			$(GENILIB) $(NAME)

bonus:		$(NAME) $(BOBJS)
			$(CREALIB) $(NAME) $(BOBJS)
			$(GENILIB) $(NAME)
	
clean:
			$(RM) $(OBJS) $(BOBJS)
	
fclean:		clean
			$(RM) $(NAME)

re:			fclean all

reb:		fclean bonus

.PHONY: 	all clean fclean re reb
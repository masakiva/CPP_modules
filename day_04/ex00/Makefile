NAME		+= animals

SRCS_DIR	+= ./

SRCS		+= main.cpp
SRCS		+= Animal.class.cpp
SRCS		+= Dog.class.cpp
SRCS		+= Cat.class.cpp
SRCS		+= WrongAnimal.class.cpp
SRCS		+= WrongCat.class.cpp

vpath %.c $(SRCS_DIR)

HDRS_DIR	= ./

HDRS		+= Animal.class.hpp
HDRS		+= Dog.class.hpp
HDRS		+= Cat.class.hpp
HDRS		+= WrongAnimal.class.hpp
HDRS		+= WrongCat.class.hpp

vpath %.h $(HDRS_DIR)

OBJS_DIR	= ./objects/

OBJS		= $(addprefix $(OBJS_DIR), $(SRCS:.cpp=.o))

CXX			= clang++

CXXFLAGS	+= -std=c++98
CXXFLAGS	+= -Wall
CXXFLAGS	+= -Werror
CXXFLAGS	+= -Wextra

CPPFLAGS	+= -I $(HDRS_DIR)

ifeq ($(d), 0)
	CFLAGS	+= -Wpadded
	CFLAGS	+= -g3
	CFLAGS	+= -fsanitize=address,undefined
	LDFLAGS	+= -fsanitize=address,undefined
endif

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(LDFLAGS) -o $@ $(OBJS) $(LDLIBS)

$(OBJS_DIR)%.o:	%.cpp
				$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $< -o $@

$(OBJS):		$(HDRS) | $(OBJS_DIR)

$(OBJS_DIR):
				mkdir $@

clean:
				$(RM) -r $(OBJS_DIR)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re

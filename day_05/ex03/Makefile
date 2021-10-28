NAME		+= crats

SRCS_DIR	+= ./

SRCS		+= main.cpp
SRCS		+= Bureaucrat.class.cpp
SRCS		+= Form.class.cpp
SRCS		+= PresidentialPardonForm.class.cpp
SRCS		+= RobotomyRequestForm.class.cpp
SRCS		+= ShrubberyCreationForm.class.cpp
SRCS		+= Intern.class.cpp

vpath %.c $(SRCS_DIR)

HDRS_DIR	= ./

HDRS		+= Bureaucrat.class.hpp
HDRS		+= Form.class.hpp
HDRS		+= PresidentialPardonForm.class.hpp
HDRS		+= RobotomyRequestForm.class.hpp
HDRS		+= ShrubberyCreationForm.class.hpp
HDRS		+= Intern.class.hpp

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

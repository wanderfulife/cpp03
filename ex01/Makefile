# Define compiler and flags
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Define source files, including ScavTrap.cpp
SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp
OBJS = $(SRCS:.cpp=.o)

# Define executable name
NAME = scavTrap

# Define libraries to link (if any)
LDLIBS =

# Define include paths (if any)
INCLUDES =

# Default target
all: $(NAME)

# Rule to create the executable
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -o $(NAME) $(OBJS) $(LDLIBS)

# Rule to compile source files into object files
%.o: %.cpp ClapTrap.hpp ScavTrap.hpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

# Rule to clean object files
clean:
	rm -f $(OBJS)

# Rule to clean object files and the executable
fclean: clean
	rm -f $(NAME)

# Rule to recompile everything
re: fclean all

# Phony targets
.PHONY: all clean fclean re 
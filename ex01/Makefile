# Output binary (must end in .exe for Windows)
NAME := starter

# Compiler and flags (-mconsole forces console subsystem)
CXX      := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++17 -mconsole

# Source files
SRCS := main.cpp starter.cpp
OBJS := $(SRCS:.cpp=.o)

# Default target
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	del /f /q $(OBJS) 2>nul || exit 0

fclean: clean
	del /f /q $(NAME) 2>nul || exit 0

re: fclean all

.PHONY: all clean fclean re
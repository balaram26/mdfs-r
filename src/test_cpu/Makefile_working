# Compiler and compiler flags
CC := g++
CFLAGS := -Wall -Wextra -std=c++11

# Source files and object files in test folder
SRCS := $(wildcard *.cpp) ../cpu/*.cpp
OBJS := $(SRCS:.cpp=.o)

# Executable name for the test target
TARGET := test_executable

# # Default target: build the test_executable
all: $(TARGET)

# Rule to build the executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

# Rules for individual object files
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule to remove generated files
clean:
	rm -f $(OBJS) $(TARGET)

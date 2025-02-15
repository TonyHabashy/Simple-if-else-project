# Set the project directory
PROJECT_DIR = $(CURDIR)

# Define the compiler and flags
CC = gcc

# Corrected include paths
CFLAGS += -I$(PROJECT_DIR)/include -I$(PROJECT_DIR)/Unity/src

# Print debug information to check resolved paths
$(info Project Directory: $(PROJECT_DIR))
$(info Include Flags: $(CFLAGS))

# Define the source files
SRCS = src/check_number.c tests/test_checkNumber.c Unity/src/unity.c

# Define the object files
OBJS = $(SRCS:.c=.o)

# Define the target executable
TARGET = test_checkNumber.exe

# Default target
all: $(TARGET)

# Build the target executable
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

# Build the object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean the build artifacts
clean:
	rm -f $(OBJS) $(TARGET)

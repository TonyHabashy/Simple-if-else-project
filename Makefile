CC = gcc
CFLAGS += -I$(PROJECT_DIR)/Unity/src
  # Include the include folder
SRCS = src/check_number.c tests/test_checkNumber.c Unity/src/unity.c
OBJS = $(SRCS:.c=.o)
TARGET = test_checkNumber.exe

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

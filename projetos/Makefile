CC = gcc
CFLAGS = -Wall -Wextra -std=c99
GTKLIBS = $(shell pkg-config --libs gtk4)
TARGET = hello-world-gtk

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c $(GTKLIBS)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)
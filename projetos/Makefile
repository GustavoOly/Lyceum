CC = clang
CFLAGS = -Wall -Wextra -std=c99
GTKLIBS = $(pkg-config --cflags gtk4) $(shell pkg-config --libs gtk)
TARGET = hello-world-gtk

$(TARGET): $(TARGET).c
	$(CC) -o $(TARGET) $(TARGET).c $(GTKLIBS)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)
all: func.o
	clang func.o main.c -o main

func.o: func.h
	clang -c func.c

clean:
	rm -rf *.o main

run:
	./main
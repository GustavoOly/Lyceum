C = clang
FLAGS = -lglfw3 -lopengl32 -lgdi32
APP = calc

$(APP): $(APP).c
	$(C) -o $(APP) $(APP).c $(FLAGS)

run: $(APP)
	./$(APP)

clean:
	rm -f ./$(APP)
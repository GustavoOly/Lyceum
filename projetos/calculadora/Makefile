COMPILADOR = clang

ALVO = calculadora

COMPILAR: $(ALVO).c
	$(COMPILADOR) -o $(ALVO) $(ALVO).c

run: $(COMPILAR)
	./$(ALVO)

clean: 
	rm -f $(ALVO).exe

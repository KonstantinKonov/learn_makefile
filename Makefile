CC = gcc
CFLAGS = -lm
LIBS = libs

main: main.o dict.o load_text.o
	@$(CC) $(CFLAGS) $^ -o $@

main.o: main.c
	@$(CC) $(CFLAGS) -c $^ -o $@

dict.o: $(LIBS)/dict.c
	@$(CC) $(CFLAGS) -c $^ -o $@

load_text.o: $(LIBS)/load_text.c
	@$(CC) $(CFLAGS) -c $^ -o $@

print:
	@cat main.c

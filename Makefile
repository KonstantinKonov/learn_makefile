CC = gcc
CFLAGS = -lm
LIBS = libs

main: main.o $(LIBS)/dict.o $(LIBS)/load_text.o
	@$(CC) $(CFLAGS) $^ -o $@

main.o: main.c
	@$(CC) $(CFLAGS) -c $^ -o $@

($LIBS)/dict.o: $(LIBS)/dict.c
	@$(CC) $(CFLAGS) -c $^ -o $@

($LIBS)/load_text.o: $(LIBS)/load_text.c
	@$(CC) $(CFLAGS) -c $^ -o $@

clean:
	@rm -rf main *.o

print:
<<<<<<< HEAD
	@ls -la *.c
=======
	@ls -la
>>>>>>> 72b74ff14ae3b250033239ae00ca4bbfe37d2cc3

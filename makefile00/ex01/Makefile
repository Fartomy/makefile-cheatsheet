all: program
	@echo "Derleme tamamlandı"

ft_strlen.o: ft_strlen.h ft_strlen.c
	@echo ft_strlen bnulanamı
	@gcc -c ft_strlen.c -o ft_strlen.o

main.o: main.c ft_strlen.h
	@gcc -c main.c -o main.o

program: ft_strlen.o main.o
	@gcc ft_strlen.o main.o -o program

clean: 
	rm -f *.o
	rm -f program

.PHONY: clean
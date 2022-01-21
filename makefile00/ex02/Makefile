SRCS = $(wildcard *.c)  # main.c ft_strlen.c
OBJS = $(SRCS:.c=.o)	# main.o ft_strlen.o

program: $(OBJS)
	gcc $(OBJS) -o program

.c.o:
	gcc -c $<

clean:
	rm -f *.o
	rm -f program 

.PHONY: clean
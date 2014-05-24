FLAGS = -Wall -Wextra -pedantic-errors -std=c99

all: matriz.o dados

matriz.o: matriz.c
	gcc $(FLAGS) -c matriz.c -o matriz.o

dados: main.c matriz.o
	gcc $(FLAGS) main.c matriz.o -o dados

clean:
	rm -f dados matriz.o

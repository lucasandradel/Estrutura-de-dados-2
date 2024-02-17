all: lista.o main.o
	gcc lista.o main.o -o prog

listaEst.o: lista.c
	gcc -c lista.c

main.o: main.c
	gcc -c main.c
	
run: prog
	./prog

clean:
	rm *.o prog
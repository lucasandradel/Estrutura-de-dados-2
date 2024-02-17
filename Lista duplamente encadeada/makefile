all: lista_dup.o main.o
	gcc lista_dup.o main.o -o prog

listaEst.o: lista_dup.c
	gcc -c lista_dup.c

main.o: main.c
	gcc -c main.c
	
run: prog
	./prog

clean:
	rm *.o prog
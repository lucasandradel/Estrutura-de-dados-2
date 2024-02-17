all: listaEst.o main.o
	gcc listaEst.o main.o -o prog

listaEst.o: listaEst.c
	gcc -c listaEst.c

main.o: main.c
	gcc -c main.c
	
run: prog
	./prog

clean:
	rm *.o prog
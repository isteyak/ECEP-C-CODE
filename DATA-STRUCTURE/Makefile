cal.exe: main.o sum.o sub.o mul.o
	gcc -o cal.exe  main.o sum.o sub.o mul.o

main.o: main.c
	gcc -c main.c
sum.o: sum.c
	gcc -c sum.c
sub.o: sub.c
	gcc -c sub.c
mul.o: mul.c
	gcc -c mul.c
clean:
	rm *.o *.exe

SRC:=$(wildcard *.c)
OBJ:=$(patsubst %.c, %.o, $(SRC))



OUTPUT.exe: $(OBJ)
	gcc -o $@ $(OBJ)
clean:
	rm *.o *.exe


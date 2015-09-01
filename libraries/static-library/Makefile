all:
	gcc -c first.c
	gcc -c second.c
	ar -cq testlib.a first.o second.o
	ranlib testlib.a
	gcc -o main main.c testlib.a
clean:
	rm -rf main testlib.a first.o second.o

all:
	gcc -c first.c
	gcc -c second.c
	gcc -o testlib.so -shared first.o second.o
	gcc -o main main.c testlib.so
clean:
	rm -rf main testlib.so first.o second.o

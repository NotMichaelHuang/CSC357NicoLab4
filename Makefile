all: test.o
	gcc test.o -o test

test.o: test.c
	gcc -c -g test.c	



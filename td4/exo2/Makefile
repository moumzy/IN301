principal.o : principal.c
	gcc -c principal.c -o principal.o
		
circonference.o : circonference.c
	gcc -c circonference.c -o circonference.o
	
surface.o : surface.c
	gcc -c surface.c -o surface.o
	
all : principal.o circonference.o surface.o
	gcc principal.o circonference.o surface.o -o exe

clean :
	rm -f *.o
	rm -f exe

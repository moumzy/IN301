plim.o : plim.c
	gcc -c plim.c -o plim.o
plam.o : plam.c
	gcc -c plam.c -o plam.o
ploum.o : ploum.c plim.h plam.h
	gcc -c ploum.c -o ploum.o
all : plim.o plam.o ploum.o
	gcc plim.o plam.o ploum.o

a.exe:main.o store.o
gcc main.o store.o

main.o:main.c store.h
gcc -c main.c

store.o:store.c store.h
gcc -c store.c

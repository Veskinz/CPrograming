all: main.exe

main.exe: main.c quadraticroots.o
	gcc main.c quadraticroots.o -o main.exe

quadraticroots.o: quadraticroots.c quadraticroots.h
	gcc -c quadraticroots.c -o quadraticroots.o

clean:
	del *.o *.exe
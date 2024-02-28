prog: main.o background.o button.o
	gcc main.o background.o button.o -o prog -lSDL -g -lSDL_image -lSDL_mixer
main.o: main.c
	gcc -c main.c -g
background.o: background.c
	gcc -c background.c -g

button.o: button.c
	gcc -c button.c -g


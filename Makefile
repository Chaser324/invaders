# Space Invaders Makefile

invaders: invaders.c invaderstructs.h
	gcc -o invaders invaders.c -lm -lncurses

### Configuration
X11_INCLUDES=-I/usr/X11R6/include
X11_LINK=-L/usr/X11R6/lib -lX11

LIB=-L$(HOME)/lib
INCLUDE=-I$(HOME)/include

#-O -fno-defer-pop -Wall

##########################################################################

test: jeu.o grille.o
	$(CC) -o test jeu.o  grille.o $(LIB) $(X11_LINK) -lgraphics  -lm

jeu.o: jeu.c grille.h
	$(CC) -O -Wall -W -ansi -pedantic $(X11_INCLUDES) $(INCLUDE) -c jeu.c

grille.o: grille.c
	$(CC) -O -Wall -W -ansi -pedantic $(X11_INCLUDES) $(INCLUDE) -c grille.c

clean:
	rm -f *~ *.o
	rm -f test
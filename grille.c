
#include "grille.h"
#include <graphics.h>

int calcule_cote(int w, int h)
{
	int a,b;

	a = w/NBC;
	b = h/NBL;

	return a>b?b:a;
}

void draw_grille(char grille[NBL][NBC+1])
{
	int x,y,a;
	a= calcule_cote(gr_size_x(),gr_size_y());
    
	for(y=0; y < NBL  ; y ++)
		for(x=0;x<NBC;x++){
			gr_set_color(grille[y][x]=='b'?white:black);
			gr_fill_rect(x*a,(NBL-1-y)*a,a,a);
		}

}


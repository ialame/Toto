
#define GEOMETRIE " 500x500"
#include <graphics.h>
#include "grille.h"


int main()
{

    char grille[NBL][NBC+1] = {
        "nbnbnb",
        "bnbnbn",
        "nbnbnb",
        "bnbnbn",
        "nbnbnb",
        "bnbnbn",
        "nbnbnb",
        "bnbnbn"
    };
    struct status * pstatus;

    /* Ouverture de la fenêtre graphique */
    gr_open_graph(GEOMETRIE);

    draw_grille(grille);

    /* On attend que l'utilisateur appuie sur une touche */ 
    pstatus =  gr_wait_event(KEY_PRESSED);
    while(pstatus->key!='q'){
	    gr_clear_graph();
      /* applique(grille); */
	    draw_grille(grille);
	    pstatus =  gr_wait_event(KEY_PRESSED);
    }
    /* On nettoie et on s'en va */
    gr_close_graph();
    return 0;


}

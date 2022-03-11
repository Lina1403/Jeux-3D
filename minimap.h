

#include <stdio.h>
#include <stdlib.h>
#include "/usr/include/SDL/SDL.h"
#include </usr/include/SDL/SDL_image.h>
#include <string.h>

struct minimap
{
	SDL_Surface* mini_map;
	SDL_Rect pos_minimap;
	SDL_Surface* mini_perso;
	SDL_Rect pos_miniperso;
	
	
};
typedef struct minimap minimap; 


void init_minimap(minimap* mp);
void blit_minimap( minimap mp,SDL_Surface *screen);
void dep_mini_perso (SDL_Rect* pos_perso,minimap mp , SDL_Rect camera,int redimensionnement,int sens);
void free_minimap(minimap* mp);
void sauvgarder (int score,char nomjoueur[],char nomfichier[]);
void meilleur (int *score,char nomjoueur[],char nomfichier[]);
#endif





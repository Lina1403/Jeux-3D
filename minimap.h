

#ifndef MINIMAP_H_INCLUDED
#define MINIMAP_H_INCLUDED
#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480


#include <stdio.h>
#include <stdlib.h>
#include "/usr/include/SDL/SDL.h"
#include </usr/include/SDL/SDL_image.h>
#include <string.h>

 typedef struct {
SDL_Surface *map ;// Surface du map //
SDL_Rect map_pos;// position du map //

SDL_Surface *mini_perso;// Surface du mini perso//
SDL_Rect pos_perso_map;// position du   mini perso//

SDL_Surface *mini_entite;//Surface du mini entite //
SDL_Rect pos_entite_map; // position du  mini entite   //



}map ;





void init_map (map *m,SDL_Surface *screen);
void perso_map(map *m, perso *p)//void dep_mini_perso (SDL_Rect* pos_perso,minimap m , SDL_Rect camera,int redimensionnement);
void entite_map(map *m, entite *e)
void affiche_map(map *m , SDL_Surface *screen, entite *e);
void mise_a_jour_map(map *m , SDL_Surface *screen, perso *p, entite *e)
void free_minimap(minimap* m);//void afficher (minimap m, SDL_Surface * screen);
/*void sauvgarder (int score,char nomjoueur[],char nomfichier[]);
void meilleur (int *score,char nomjoueur[],char nomfichier[]);*/
#endif




#endif // MINIMAP_H_INCLUDED







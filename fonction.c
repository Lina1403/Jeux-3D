#include "minimap.h"
#include <SDL/SDL.h>

void init_map (minimap *m)
{ m -> map = IMG_Load("minimap.png");
  m-> minijoueur = IMG_Load("persomini.png");
  m->positionmap.x =250;
  m->positionmap.y =19;//position de minimap
  m->positionminijoueur.x =250;
  m->positionminijoueur.y =21;//position du bonhomme 
}

void MAJMinimap(SDL_Rect posJoueur,  minimap * m, SDL_Rect camera, int redimensionnement)
{
  SDL_Rect posJoueurABS;//position absolue de joueur
  posJoueurABS.x = 0;
  posJoueurABS.y = 0;
  posJoueurABS.x = posJoueur.x + camera.x;
  posJoueurABS.y = posJoueur.y + camera.y;
  m->positionminijoueur.x=(posJoueurABS.x * redimensionnement/100)+250;//mettre à jour la position du minijoueur
  m->positionminijoueur.y=(posJoueurABS.y * redimensionnement/100)+21;
}

void afficherminimap (minimap m, SDL_Surface * screen)
{
  SDL_BlitSurface(m.map,NULL,screen,&m.positionmap);//tlasa9lk lminimap 3l écran fl position li 7atitha 
  SDL_BlitSurface(m.minijoueur,NULL,screen,&m.positionminijoueur);
}

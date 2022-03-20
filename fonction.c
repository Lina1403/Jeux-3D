  #include <stdio.h>
  #include <string.h>
  #include <stdlib.h>
  #include <math.h>
  #include <SDL.h>
  #include"minimap.h"
  
  
  
  void init_map (map *m,SDL_Surface *screen)
{
m->map=IMG_Load("mini.png");
m->map_pos.x = 820;
m->map_pos.y = 640;
;

m->mini_perso=SDL_CreateRGBSurface(SDL_HWSURFACE|SDL_DOUBLEBUF,10,10,32,0,0,0,0);
SDL_FillRect(m->mini_perso,NULL,SDL_MapRGB(screen->format,0,0,255));
m->pos_perso_map.x=0;
m->pos_perso_map.y=0;

m->mini_entite=SDL_CreateRGBSurface(SDL_HWSURFACE|SDL_DOUBLEBUF,10,10,32,0,0,0,0);
SDL_FillRect(m->mini_entite,NULL,SDL_MapRGB(screen->format,255,0,0));
m->pos_entite_map.x=0;
m->pos_entite_map.y=0;

}
void perso_map(map *m, perso *p)
{
  m->pos_perso_map.x=p->position_perso.x/10+m->map_pos.x;
    m->pos_perso_map.y=p->position_perso.y/10+10+m->map_pos.y;
    
}



void entite_map(map *m, entite *e)
{
  m->pos_entite_map.x=e->entite_pos.x/10+m->map_pos.x;
    m->pos_entite_map.y=e->entite_pos.y/10+10+m->map_pos.y;
}


void affiche_map(map *m , SDL_Surface *screen, entite *e)
{
      SDL_BlitSurface(m->map, NULL, screen,&m->map_pos);
      SDL_BlitSurface(m->mini_perso, NULL, screen,&m->pos_perso_map);
      if (e->affich_minimap)
      SDL_BlitSurface(m->mini_entite, NULL, screen,&m->pos_entite_map);

}



void mise_a_jour_map(map *m , SDL_Surface *screen, perso *p, entite *e)
{
  perso_map(m,p);
  entite_map(m,e);
  affiche_map(m,screen,e);
} 


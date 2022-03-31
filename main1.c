#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "minimap.h"

int main()
{
TTF_Init();//ktiba 
SDL_Init(SDL_INIT_VIDEO);
SDL_Surface *screen ,*perso;
screen=SDL_SetVideoMode (800,537,32,SDL_HWSURFACE|SDL_DOUBLEBUF);//lancer une fenétre
SDL_WM_SetCaption("minimap\t1",NULL);//titre de la fénétre
SDL_Rect camera,posperso;
SDL_Event event;
minimap m;
SDL_Surface *back;
perso=IMG_Load("hero.png");//perso
back=IMG_Load("map.jpg");//back
int continuer=1;
init_map(&m);
camera.x=0;
camera.y=0;
camera.w=1300;
camera.h=700;
posperso.x=0;
posperso.y=260;//position de perso 
SDL_EnableKeyRepeat(100,10);//éviter l'encombrement des evénements
while(continuer)
{
   
    SDL_BlitSurface(back,NULL,screen,NULL);
while(SDL_PollEvent(&event))
	{

		switch(event.type)
		{
		case SDL_QUIT:

			continuer=0;
		break;
		case SDL_KEYDOWN://tenzel 3la touche de clavier
			switch (event.key.keysym.sym)
			{
                case SDLK_ESCAPE://Echap
					
					           continuer = 0;//quitter
				                 break;
          
                case SDLK_LEFT:
                
                    posperso.x-=5;
               
                    
                break;
                case SDLK_RIGHT:
                 
                      posperso.x+=5;
                   
                   
                    
                break;
                case SDLK_UP:
                    
                      posperso.y-=5;
                break;  
                case SDLK_DOWN:
                    
                      posperso.y+=5;

                break;  

            }
            break;
            
        }
    }        






SDL_BlitSurface(perso,NULL,screen,&posperso);


MAJMinimap(posperso , &m, camera, 20);
afficherminimap(m,screen);




SDL_Flip(screen);//mise à jour de l'écran
//SDL_Delay();

}

    //return 0;
}


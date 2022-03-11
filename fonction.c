void background_load(SDL_Surface *image,char nom [] ,SDL_Rect pos1)
{
image  = IMG_Load(nom);
pos1.x = 0 ;
pos1.y=0;
pos1.h=image->h ;
pos1.w=image->w ;

}

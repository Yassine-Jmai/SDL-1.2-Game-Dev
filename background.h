// background.h
#ifndef Image_H
#define Image_H
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#define SCREEN_H 834
#define SCREEN_W 1497

struct Image {
    SDL_Rect pos1;
    SDL_Rect pos2;
    SDL_Surface *img;
    int hovered;
};
typedef struct Image Image;

void initplay(Image *A);
void initplay1(Image *A);
void initsettings(Image *A);
void initsettings1(Image *A);
void initcredit(Image *A);
void initcredit1(Image *A);
void initquit(Image *A);
void initquit1(Image *A);
void initBackground(Image *backg);
void liberer(Image A);
void afficher(Image p, SDL_Surface *screen);
void newgame(Image *A);
void loadgame(Image *A);
void initBackground1(Image *backg);
void newgame1(Image *A);
void loadgame1(Image *A);
void initBackground2(Image *backg);
void sound(Image *A);
void full(Image *A);
void wind(Image *A);
void full1(Image *A) ;
void wind1(Image *A);
void point(Image *A);
void initBackground3(Image *backg);
void initBackground4(Image *backg);
void yess(Image *A);
void yess1(Image *A);
void noo(Image *A);
void noo1(Image *A);
void xx(Image *A);



#endif

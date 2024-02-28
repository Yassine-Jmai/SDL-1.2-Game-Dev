// button.h
#ifndef BUTTON_H_
#define BUTTON_H_
#include <SDL/SDL_mixer.h>
#include "background.h"

void handleMouseMotion(SDL_Event *event, Image *B);
void mainMenu_display(Image B1, Image B2, Image B3, Image B4, Image B11, Image B21, Image B31, Image B41, Image backg, SDL_Surface *ecran);
void play_display(Image pb, SDL_Surface *ecran,Image n,Image lg,Image n1,Image lg1,Image x1);
void handMouseClicks(SDL_Event *event, int *mode,int *done, Image B1, Image B2,Image B3, Image B4 ,Mix_Chunk *c, Image *p,Image yes,Image no,Image x1);
void settings_display(Image sb, SDL_Surface *ecran, Image so, Image fu, Image w, Image fu1, Image w1, Image p,Image x1);
void movePoint(Image *point, int direction, int speed);
void credit_display(Image mc, SDL_Surface *ecran,Image x);
void quit_display(Image mq,Image yes,Image yes1,Image no,Image no1, SDL_Surface *ecran);

#endif /* BUTTON_H_ */



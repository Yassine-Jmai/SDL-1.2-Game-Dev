// background.c
#include "background.h"

void initplay(Image *A) {
    A->img = IMG_Load("play.png");
    if (A->img == NULL) {
        return;
    }

    A->pos1.x = 550;
    A->pos1.y = 340;
    A->pos1.w = A->img->w;
    A->pos1.h = A->img->h;

    A->pos2.x = 0;
    A->pos2.y = 0;
    A->pos2.w = A->img->w;
    A->pos2.h = A->img->h;
    A->hovered = 0;
}

void initplay1(Image *A) {
    A->img = IMG_Load("play1.png");
    if (A->img == NULL) {
        return;
    }

    A->pos1.x = 550;
    A->pos1.y = 340;
    A->pos1.w = A->img->w;
    A->pos1.h = A->img->h;

    A->pos2.x = 0;
    A->pos2.y = 0;
    A->pos2.w = A->img->w;
    A->pos2.h = A->img->h;
    A->hovered = 0;
}

void initsettings(Image *A) {
    A->img = IMG_Load("settings.png");
    if (A->img == NULL) {
        return;
    }

    A->pos1.x = 550;
    A->pos1.y = 460;
    A->pos1.w = A->img->w;
    A->pos1.h = A->img->h;

    A->pos2.x = 0;
    A->pos2.y = 0;
    A->pos2.w = A->img->w;
    A->pos2.h = A->img->h;
    A->hovered = 0;
}

void initsettings1(Image *A) {
    A->img = IMG_Load("settings1.png");
    if (A->img == NULL) {
        return;
    }

    A->pos1.x = 550;
    A->pos1.y = 460;
    A->pos1.w = A->img->w;
    A->pos1.h = A->img->h;

    A->pos2.x = 0;
    A->pos2.y = 0;
    A->pos2.w = A->img->w;
    A->pos2.h = A->img->h;
    A->hovered = 0;
}

void initcredit(Image *A) {
    A->img = IMG_Load("credit.png");
    if (A->img == NULL) {
        return;
    }

    A->pos1.x = 550;
    A->pos1.y = 580;
    A->pos1.w = A->img->w;
    A->pos1.h = A->img->h;

    A->pos2.x = 0;
    A->pos2.y = 0;
    A->pos2.w = A->img->w;
    A->pos2.h = A->img->h;
    A->hovered = 0;
}

void initcredit1(Image *A) {
    A->img = IMG_Load("credit1.png");
    if (A->img == NULL) {
        return;
    }

    A->pos1.x = 550;
    A->pos1.y = 580;
    A->pos1.w = A->img->w;
    A->pos1.h = A->img->h;

    A->pos2.x = 0;
    A->pos2.y = 0;
    A->pos2.w = A->img->w;
    A->pos2.h = A->img->h;
    A->hovered = 0;
}

void initquit(Image *A) {
    A->img = IMG_Load("quit.png");
    if (A->img == NULL) {
        return;
    }

    A->pos1.x = 550;
    A->pos1.y = 700;
    A->pos1.w = A->img->w;
    A->pos1.h = A->img->h;

    A->pos2.x = 0;
    A->pos2.y = 0;
    A->pos2.w = A->img->w;
    A->pos2.h = A->img->h;
    A->hovered = 0;
}

void initquit1(Image *A) {
    A->img = IMG_Load("quit1.png");
    if (A->img == NULL) {
        return;
    }

    A->pos1.x = 550;
    A->pos1.y = 700;
    A->pos1.w = A->img->w;
    A->pos1.h = A->img->h;

    A->pos2.x = 0;
    A->pos2.y = 0;
    A->pos2.w = A->img->w;
    A->pos2.h = A->img->h;
    A->hovered = 0;
}

void initBackground(Image *backg) {
    backg->img = IMG_Load("background.png");
    if (backg->img == NULL) {
        printf("unable to load logo %s\n", SDL_GetError());
        return;
    }
    backg->pos1.x = 0;
    backg->pos1.y = 0;
    backg->pos2.x = 0;
    backg->pos2.y = 0;
    backg->pos2.w = (1600);
    backg->pos2.h = (940);
}
void newgame(Image *A) {
    A->img = IMG_Load("newgame.png");
    if (A->img == NULL) {
        return;
    }

    A->pos1.x = 580;
    A->pos1.y = 388;
    A->pos1.w = A->img->w;
    A->pos1.h = A->img->h;

    A->pos2.x = 0;
    A->pos2.y = 0;
    A->pos2.w = A->img->w;
    A->pos2.h = A->img->h;
    A->hovered = 0;
}
void newgame1(Image *A) {
    A->img = IMG_Load("newgame1.png");
    if (A->img == NULL) {
        return;
    }

    A->pos1.x = 580;
    A->pos1.y = 388;
    A->pos1.w = A->img->w;
    A->pos1.h = A->img->h;

    A->pos2.x = 0;
    A->pos2.y = 0;
    A->pos2.w = A->img->w;
    A->pos2.h = A->img->h;
    A->hovered = 0;
}
void loadgame(Image *A) {
    A->img = IMG_Load("loadgame.png");
    if (A->img == NULL) {
        return;
    }

    A->pos1.x = 620;
    A->pos1.y = 530;
    A->pos1.w = A->img->w;
    A->pos1.h = A->img->h;

    A->pos2.x = 0;
    A->pos2.y = 0;
    A->pos2.w = A->img->w;
    A->pos2.h = A->img->h;
    A->hovered = 0;
}
void loadgame1(Image *A) {
    A->img = IMG_Load("loadgame1.png");
    if (A->img == NULL) {
        return;
    }

    A->pos1.x = 625;
    A->pos1.y = 530;
    A->pos1.w = A->img->w;
    A->pos1.h = A->img->h;

    A->pos2.x = 0;
    A->pos2.y = 0;
    A->pos2.w = A->img->w;
    A->pos2.h = A->img->h;
    A->hovered = 0;
}
void initBackground1(Image *backg) {
    backg->img = IMG_Load("pb.png");
    if (backg->img == NULL) {
        printf("unable to load logo %s\n", SDL_GetError());
        return;
    }
    backg->pos1.x = 0;
    backg->pos1.y = 0;
    backg->pos2.x = 0;
    backg->pos2.y = 0;
    backg->pos2.w = (1600);
    backg->pos2.h = (940);
}
void initBackground2(Image *backg) {
    backg->img = IMG_Load("menus.png");
    if (backg->img == NULL) {
        printf("unable to load logo %s\n", SDL_GetError());
        return;
    }
    backg->pos1.x = 0;
    backg->pos1.y = 0;
    backg->pos2.x = 0;
    backg->pos2.y = 0;
    backg->pos2.w = (1600);
    backg->pos2.h = (940);
}
void sound(Image *A) {
    A->img = IMG_Load("sound.png");
    if (A->img == NULL) {
        return;
    }

    A->pos1.x = 663;
    A->pos1.y = 385;
    A->pos1.w = A->img->w;
    A->pos1.h = A->img->h;

    A->pos2.x = 0;
    A->pos2.y = 0;
    A->pos2.w = A->img->w;
    A->pos2.h = A->img->h;
    A->hovered = 0;
}
void full(Image *A) {
    A->img = IMG_Load("full.png");
    if (A->img == NULL) {
        return;
    }

    A->pos1.x = 545;
    A->pos1.y = 555;
    A->pos1.w = A->img->w;
    A->pos1.h = A->img->h;

    A->pos2.x = 0;
    A->pos2.y = 0;
    A->pos2.w = A->img->w;
    A->pos2.h = A->img->h;
    A->hovered = 0;
}
void full1(Image *A) {
    A->img = IMG_Load("full1.png");
    if (A->img == NULL) {
        return;
    }

    A->pos1.x = 545;
    A->pos1.y = 555;
    A->pos1.w = A->img->w;
    A->pos1.h = A->img->h;

    A->pos2.x = 0;
    A->pos2.y = 0;
    A->pos2.w = A->img->w;
    A->pos2.h = A->img->h;
    A->hovered = 0;
}
void wind(Image *A) {
    A->img = IMG_Load("wind.png");
    if (A->img == NULL) {
        return;
    }

    A->pos1.x = 815;
    A->pos1.y = 560;
    A->pos1.w = A->img->w;
    A->pos1.h = A->img->h;

    A->pos2.x = 0;
    A->pos2.y = 0;
    A->pos2.w = A->img->w;
    A->pos2.h = A->img->h;
    A->hovered = 0;
}
void wind1(Image *A) {
    A->img = IMG_Load("wind1.png");
    if (A->img == NULL) {
        return;
    }

    A->pos1.x = 815;
    A->pos1.y = 545;
    A->pos1.w = A->img->w;
    A->pos1.h = A->img->h;

    A->pos2.x = 0;
    A->pos2.y = 0;
    A->pos2.w = A->img->w;
    A->pos2.h = A->img->h;
    A->hovered = 0;
}
void point(Image *A) {
    A->img = IMG_Load("point.png");
    if (A->img == NULL) {
        return;
    }

    A->pos1.x = 663;
    A->pos1.y = 455;
    A->pos1.w = A->img->w;
    A->pos1.h = A->img->h;

    A->pos2.x = 0;
    A->pos2.y = 0;
    A->pos2.w = A->img->w;
    A->pos2.h = A->img->h;
    A->hovered = 0;
}
void initBackground3(Image *backg) {
    backg->img = IMG_Load("mcredit.png");
    if (backg->img == NULL) {
        printf("unable to load logo %s\n", SDL_GetError());
        return;
    }
    backg->pos1.x = 0;
    backg->pos1.y = 0;
    backg->pos2.x = 0;
    backg->pos2.y = 0;
    backg->pos2.w = (1600);
    backg->pos2.h = (940);
}
void initBackground4(Image *backg) {
    backg->img = IMG_Load("mquit.png");
    if (backg->img == NULL) {
        printf("unable to load logo %s\n", SDL_GetError());
        return;
    }
    backg->pos1.x = 0;
    backg->pos1.y = 0;
    backg->pos2.x = 0;
    backg->pos2.y = 0;
    backg->pos2.w = (1600);
    backg->pos2.h = (940);
}
void yess(Image *A) {
    A->img = IMG_Load("yes.png");
    if (A->img == NULL) {
        return;
    }

    A->pos1.x = 525;
    A->pos1.y = 513;
    A->pos1.w = A->img->w;
    A->pos1.h = A->img->h;

    A->pos2.x = 0;
    A->pos2.y = 0;
    A->pos2.w = A->img->w;
    A->pos2.h = A->img->h;
    A->hovered = 0;}
void yess1(Image *A) {
    A->img = IMG_Load("yes1.png");
    if (A->img == NULL) {
        return;
    }

    A->pos1.x = 525;
    A->pos1.y = 513;
    A->pos1.w = A->img->w;
    A->pos1.h = A->img->h;

    A->pos2.x = 0;
    A->pos2.y = 0;
    A->pos2.w = A->img->w;
    A->pos2.h = A->img->h;
    A->hovered = 0;}
void noo(Image *A) {
    A->img = IMG_Load("no.png");
    if (A->img == NULL) {
        return;
    }

    A->pos1.x = 805;
    A->pos1.y = 513;
    A->pos1.w = A->img->w;
    A->pos1.h = A->img->h;

    A->pos2.x = 0;
    A->pos2.y = 0;
    A->pos2.w = A->img->w;
    A->pos2.h = A->img->h;
    A->hovered = 0;}
void noo1(Image *A) {
    A->img = IMG_Load("no1.png");
    if (A->img == NULL) {
        return;
    }

    A->pos1.x = 805;
    A->pos1.y = 513;
    A->pos1.w = A->img->w;
    A->pos1.h = A->img->h;

    A->pos2.x = 0;
    A->pos2.y = 0;
    A->pos2.w = A->img->w;
    A->pos2.h = A->img->h;
    A->hovered = 0;}
void xx(Image *A) {
    A->img = IMG_Load("x.png");
    if (A->img == NULL) {
        return;
    }

    A->pos1.x = 350;
    A->pos1.y = 310;//down
    A->pos1.w = A->img->w;
    A->pos1.h = A->img->h;

    A->pos2.x = 0;
    A->pos2.y = 0;
    A->pos2.w = A->img->w;
    A->pos2.h = A->img->h;
    A->hovered = 0;}
void liberer(Image A) {
    SDL_FreeSurface(A.img);
}

void afficher(Image p, SDL_Surface *screen) {
    SDL_BlitSurface(p.img, &p.pos2, screen, &p.pos1);
}


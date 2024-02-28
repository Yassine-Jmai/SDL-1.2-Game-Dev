#include <stdio.h>
#include "background.h"
#include "button.h"
#include <SDL/SDL_mixer.h>

int main(int argc, char **argv) {
    SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO);

    SDL_Surface *ecran;
    int done = 1, mode = 0;
    Image backg, B1, B2, B3, B4, B11, B21, B31, B41, n, lg, pb, n1, lg1, sb, so, fu, w, fu1, w1, p, mc, mq, yes, yes1, no,no1,x1;
    SDL_Event e;
    Mix_Chunk *cs;

    ecran = SDL_SetVideoMode(SCREEN_W, SCREEN_H, 32, SDL_SWSURFACE);
    if (!ecran) {
        printf("Failed to create window: %s\n", SDL_GetError());
        return 1;
    }

    if (!(IMG_Init(IMG_INIT_PNG) & IMG_INIT_PNG)) {
        printf("Failed to initialize SDL_image: %s\n", IMG_GetError());
        SDL_Quit();
        return 1;
    }

  if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 1024) == -1) {
    printf("Failed to initialize audio: %s\n", Mix_GetError());
    SDL_Quit();
    return 1;
}

    Mix_Music *musique;
    musique = Mix_LoadMUS("o1.mp3");
    
    Mix_PlayMusic(musique, -1);
    cs = Mix_LoadWAV("c.wav");
 

    // Initialize all images and other resources
    // Replace the function calls with your own initialization functions
    initBackground(&backg);
    initplay(&B1);
    initplay1(&B11);
    initsettings(&B2);
    initsettings1(&B21);
    initcredit(&B3);
    initcredit1(&B31);
    initquit(&B4);
    initquit1(&B41);
    newgame(&n);
    newgame1(&n1);
    loadgame(&lg);
    loadgame1(&lg1);
    initBackground1(&pb);
    initBackground2(&sb);
    sound(&so);
    full(&fu);
    wind(&w);
    full1(&fu1);
    wind1(&w1);
    point(&p);
    initBackground3(&mc);
    initBackground4(&mq);
    yess(&yes);
    yess1(&yes1);
    noo(&no);
    noo1(&no1);
    xx(&x1);

    // Main loop

    while (done) {
        while (SDL_PollEvent(&e)) {
            switch (e.type) {
                case SDL_QUIT:
                    done = 0;


                    break;
                case SDL_MOUSEMOTION:
                    // Handle mouse motion events based on the current mode
                    if (mode == 0) {
                        handleMouseMotion(&e, &B1);
                        handleMouseMotion(&e, &B2);
                        handleMouseMotion(&e, &B3);
                        handleMouseMotion(&e, &B4);
                    } else if (mode == 1) {
                        handleMouseMotion(&e, &n);
                        handleMouseMotion(&e, &lg);
                    } else if (mode == 2) {
                        handleMouseMotion(&e, &fu);
                        handleMouseMotion(&e, &w);
                    } else if (mode == 4) {
                        handleMouseMotion(&e, &yes);
                        handleMouseMotion(&e, &no);
                    }
                    break;
                case SDL_MOUSEBUTTONDOWN:
                    // Handle mouse button clicks
                    handMouseClicks(&e, &mode,&done, B1, B2, B3, B4, cs, &p,yes,no,x1);
                    break;
                case SDL_KEYDOWN:
                    // Handle key presses
                    if (e.key.keysym.sym == SDLK_ESCAPE)
                        mode = 0;
                    break;
            }
        }

        // Render the appropriate display based on the current mode
        if (mode == 0) {
            mainMenu_display(B1, B2, B3, B4, B11, B21, B31, B41, backg, ecran);
        } else if (mode == 1) {
            play_display(pb, ecran, n, lg, n1, lg1,x1);
        } else if (mode == 2) {
            settings_display(sb, ecran, so, fu, w, fu1, w1, p,x1);
        } else if (mode == 3) {
            credit_display(mc, ecran,x1);
        } else if (mode == 4) {
            quit_display(mq, yes, yes1, no,no1, ecran);
        }

        // Update the display
        SDL_Flip(ecran);
        SDL_Delay(10); // Adjust the delay if needed
    }

    // Free all allocated resources
    liberer(backg);
    liberer(B1);
    liberer(B11);
    liberer(B2);
    liberer(B21);
    liberer(B3);
    liberer(B31);
    liberer(B4);
    liberer(B41);
    liberer(n);
    liberer(n1);
    liberer(lg);
    liberer(lg1);
    liberer(pb);
    liberer(sb);
    liberer(so);
    liberer(fu);
    liberer(w);
    liberer(fu1);
    liberer(w1);
    liberer(p);
    liberer(mc);
    liberer(mq);
    liberer(yes);
    liberer(yes1);
    liberer(no);

    // Free the loaded music and sound effect
    Mix_FreeMusic(musique);
    Mix_FreeChunk(cs);

    // Close the audio system and quit SDL
    Mix_CloseAudio();
    IMG_Quit();
    SDL_Quit();

    return 0;
}


#ifndef GAME_H
#define GAME_H

#include "gba.h"

                    /* TODO: */

//Enemy in the game. In this case the red blocks 
struct enemy {
        int x;
        int y;
        int width;
        int height;
};
//Good players in the game. Yellow block 
struct goodGuys {
        int x;
        int y;
        int width; 
        int height;
        int movesToEnd;
};

//State of the game 
//also contains goodGuys struct 
struct state {
        int win;
        int select;
        int lose;
        struct goodGuys nonEnemy;
} ax, bx;


#endif

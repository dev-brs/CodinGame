#include <stdlib.h>
#include <stdio.h>


/**
 * The while loop represents the game.
 * Each iteration represents a turn of the game
 * where you are given inputs (the heights of the mountains)
 * and where you have to print an output (the index of the mountain to fire on)
 * The inputs you are given are automatically updated according to your last actions.
 **/

int main()
{
    
    // game loop
    while (1) {
        int hmax=0;
        int imax=0;
        for (int i = 0; i < 8; i++) {
            int mountain_h;
            scanf("%d", &mountain_h);
            
            if(mountain_h>hmax)
            {
                hmax=mountain_h;
                imax=i;
            }
        }
        printf("%d\n",imax); // The index of the mountain to fire on.
    }
    return 0;
}
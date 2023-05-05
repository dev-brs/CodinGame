#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/
int main()
{
    float current_x,current_y;
    // the X position of the light of power
    int light_x;
    // the Y position of the light of power
    int light_y;
    // Thor's starting X position
    int initial_tx;
    // Thor's starting Y position
    int initial_ty;
    scanf("%d%d%d%d", &light_x, &light_y, &initial_tx, &initial_ty);
    current_x=initial_tx;
    current_y=initial_ty;
    // game loop
    while (1) {
        // The remaining amount of turns Thor can move. Do not remove this line.
        int remaining_turns;
        scanf("%d", &remaining_turns);


            if(current_x==light_x && current_y>light_y) // 90
            {
                printf("N\n");
                current_y--;
            }
            else if(current_x==light_x && current_y<light_y) // 270
            {
                printf("S\n");
                current_y++;
            }
            else if(current_y==light_y &&current_x>light_x) // 180
            {
                printf("W\n");
                current_x--;
            }
            else if(current_y==light_y &&current_x<light_x) // 0
            {
                printf("E\n");
                current_x++;
            }
            else if(current_y>light_y &&current_x<light_x) // 0 a 90
            {
                printf("NE\n");
                current_x++;
                current_y--;
            }
            else if(current_y>light_y &&current_x>light_x) // 90 a 180
            {
                printf("NW\n");
                current_x--;
                current_y--;
            }
            else if(current_y<light_y &&current_x>light_x) // 180 a 270
            {
                printf("SW\n");
                current_x--;
                current_y++;
            }
            else if(current_y<light_y &&current_x<light_x) // 270 a 360
            {
                printf("SE\n");
                current_x++;
                current_y++;
            }
            
    }
    return 0;
}
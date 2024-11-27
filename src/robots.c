#include "include/robots.h"
#include <stdio.h>

void move(robotPos *pos, char key)
{
    switch (key)
    {
    case 'w':
        pos->y += 1;
        break; // Maju
    case 's':
        pos->y -= 1;
        break; // Mundur
    case 'a':
        pos->x -= 1;
        break; // Kiri
    case 'd':
        pos->x += 1;
        break; // Kanan
    case 'q':
        pos->theta -= 10;
        break; // putar kiri
    case 'e':
        pos->theta += 10;
        break; // putar kanan
    default:
        printf("Invalid key!\n");
        return;
    }

    printf("Moved to: x = %.1f, y = %.1f, theta = %.1f\n", pos->x, pos->y, pos->theta);
}
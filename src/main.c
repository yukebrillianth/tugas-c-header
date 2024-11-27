/*--------------------------------
| Nama: Yuke Brilliant Hestiavin
| NRP: 5024241016
----------------------------------*/

#include "include/robots.h"
#include <stdio.h>
#include <unistd.h>
#include <termios.h>

robotPos robot_position;

char getch()
{
    struct termios oldt, newt;
    char ch;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return ch;
}

int main()
{
    // Init robot pos;
    robot_position.x = 0;
    robot_position.y = 0;
    robot_position.theta = 0;

    char key;
    printf("Control the robot using WASD keys (press 'k' to quit):\n");

    while (1)
    {
        key = getch();

        if (key == 'k')
        {
            printf("Exiting...\n");
            break;
        }

        move(&robot_position, key);
    }

    return 0;
}
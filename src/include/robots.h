/*--------------------------------
| Nama: Yuke Brilliant Hestiavin
| NRP: 5024241016
----------------------------------*/

typedef struct robotPos
{
    float x;
    float y;
    float theta;
} robotPos;

/**
 * @brief Method to move robot
 *
 * @param vel
 */

void move(robotPos *pos, char key);
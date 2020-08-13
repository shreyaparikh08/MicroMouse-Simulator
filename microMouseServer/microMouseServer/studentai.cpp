
#include "micromouseserver.h"

void microMouseServer::studentAI()
{
/*
 * The following are the eight functions that you can call. Feel free to create your own fuctions as well.
 * Remember that any solution that calls moveForward more than once per call of studentAI() will have points deducted.
 *
 *The following functions return if there is a wall in their respective directions
 *bool isWallLeft();
 *bool isWallRight();
 *bool isWallForward();
 *
 *The following functions move the mouse. Move forward returns if the mouse was able to move forward and can be used for error checking
 *bool moveForward();
 *void turnLeft();
 *void turnRight();
 *
 * The following functions are called when you need to output something to the UI or when you have finished the maze
 * void foundFinish();
 * void printUI(const char *mesg);
*/
//!(isWallLeft()==false&&isWallRight()==false&&isWallForward()==false)
   /*
    while(isWallRight()==false&&isWallForward()){

        if(isWallLeft()==false){
            turnLeft();
         }

        }else if(isWallRight()==false){
            turnRight();
        }

        moveForward();   
    }
 */
std::vector<int> moves;
    int i = 0;

    while(i<20){

        if(isWallRight()==false){
            turnRight();
        }
        else if(isWallLeft()==false){
            turnLeft();
        }

        if(isWallForward() && isWallLeft() && isWallRight()){
            while(isWallLeft()==true && isWallRight()==true){
                turnLeft();
            }
        }

        moveForward();

        if(isWallLeft()==true && isWallRight()==false && isWallForward()==false){
            foundFinish();
            //break;
        }
        i++;

    }



}



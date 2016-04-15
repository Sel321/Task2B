//task2b

#include "mandelbrot.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

int escapeSteps (double x, double y);

int main (int argc, char *argv[]){
        double x = -2
;
        double y = -2;
        int pos = 1;
        int possibleMandelbrotPoints [10000];
//task2b

#include "mandelbrot.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

int escapeSteps (double x, double y);

int main (int argc, char *argv[]){
   double x = -2;
   double y = -2;
   int pos = 1;
   int possibleMandelbrotPoints [10000];

   //print all the values of x and y from (-256, -256) to (256, 256)
   while(y < 2) {
        x = -2;
        while(x< 2) {
           escapeSteps(x,y);
           possibleMandelbrotPoints[pos] = escapeSteps(x,y);
           //printf("for position %d it is %d\n", pos, possibleMandelbrotPoints[pos]);
                if (possibleMandelbrotPoints[pos] < 256 && pos % 80 != 0) {
                   printf(" ");
                } else if ( possibleMandelbrotPoints[pos] == 256 && pos % 80 != 0) {
                   printf("*");
                } else if (pos % 80  == 0 && possibleMandelbrotPoints[pos] == 256) {
                   printf("*\n");
                } else if (pos % 80 == 0 && possibleMandelbrotPoints[pos] < 256) {
                   printf(" \n");
                }
                x+= 0.05;
                pos++;
        }
        y+=0.1;
    }
        return EXIT_SUCCESS;

}

int escapeSteps (double x, double y) {
    int numberOfSteps= 1;
        double xcversion = x;
        double ycversion = y;

    while((x * x) + (y * y) <= 4 && (x * x + y * y >= -4) && numberOfSteps < 256) {
           double xcopy = ((x * x) - (y * y) + xcversion);
           double ycopy = ((2 * x * y) + ycversion);
           x = xcopy;
           y = ycopy;
           numberOfSteps++;
    }
    return numberOfSteps;
}














}



/*while (((x+y)(x+y) + (a+b)) < 4 || counter < 1000000) {
                    int counter=0;
                    do the mandelbrot calcs so that x and y have new values.
                    counter++;
                }
                printf("Counter for position %d, %d is %d" a , b , counter);
                position[pos] = counter;
                pos++;
                a = (pos % 512);
                b = pos/512 (where b is an int????);

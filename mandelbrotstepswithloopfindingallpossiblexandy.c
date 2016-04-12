//task2b

#include "mandelbrot.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

int escapeSteps (double x, double y);

int main (int argc, char *argv[]){
	double x = -256;
	double y = -256;
//print all the values of x and y from (-256, -256) to (256, 256)
    while(y < 256) {
    	while(x < 256) {
    		x = -256;
    		escapeSteps(x,y);
    		possibleMandelbrotPoints [512*512];
    		int pos = 0;
    		double possibleMandelbrotPoints[pos] = numberOfSteps;
    		x++;
    		pos++;
    	}
    	y++;
    }
	

	return EXIT_SUCCESS;

}

int escapeSteps (double x, double y) {
	int numberOfSteps;
	while( (x * x + y * y) <= 4 || numberOfSteps <= 256 ) {
		x = x * x - y * y + x;
		y = 2 * x * y + y;
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
//task2b this counts the number of steps any x,y value goes through before escaping the mandelbrot set or not escaping

#include "mandelbrot.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

int escapeSteps (double x, double y);

int main (int argc, char *argv[]){
	double x;
	double y;
	escapeSteps(x,y);

	return EXIT_SUCCESS;

}

int escapeSteps (double x, double y) {
	int numberOfSteps;
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


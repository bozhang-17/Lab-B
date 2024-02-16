#include <stdio.h>
#define SQUARE(n) ((n) * (n))
int main(void){
    double height = 0;
	double volume = 0;
	printf("Enter height: ");
	scanf("%lf", &height);
	
	
	// Your code below here
	double r=2.2;
	volume=SQUARE(r)*height;
	
	// Do not edit below here
	printf("volume: %.2f", volume);
	return 0;
}
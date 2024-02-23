#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
// #define SQUARE(n) ((n) * (n))
int main(void){
    double height= 0;
	double volume = 0;
	printf("Enter height: ");  
	scanf("%lf", &height);  //input the height
	height=abs(height);
	double pi = M_PI ;
	double r=2.2; //radius is 2.2
    // double A=SQUARE(r)*pi ;
	double A=r*r*pi ;
	volume=A*height; //to caculate the volume
	

	printf("Volume: %.2lf", volume); //output the volume
	return 0;
}
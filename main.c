#pragma warning(disable:4996)    
#include <stdio.h> 
#include <math.h>

int main(void)
{
	double v;
	double g = 9.8;
	double angle;
	double range;

	printf("This program calculates range (meters) of a pumpkin thrown from the\n");
	printf("launch velocity (meters per second) and angle of the launch (degrees) from the ground level\n");
	printf("given that there is zero air resistance.\n\n");
	
	//Input initial velocity
	printf("Enter the initial velocity of the pumpkin (m/s):");
	scanf("%lf", &v);

	//Input launch angle
	printf("\nEnter the launch angle of the pumpkin (degrees):");
	scanf("%lf", &angle);
	
	//Conversion from degrees to radians (https://www.rapidtables.com/convert/number/degrees-to-radians.html)
	angle = angle * 0.01745329252;
	
	//Value of the angle doubled
	angle = angle * 2;
	
	//Sine of the angle
	angle = sin(angle);
	
	//Velocity squared
	v = v * v;
	
	//Range of the pumpkin
	range = v / g;
	range = range * angle;
	
	printf("\nThe range of the pumpkin in meters is: %.2lf\n", range);

return 0;

}

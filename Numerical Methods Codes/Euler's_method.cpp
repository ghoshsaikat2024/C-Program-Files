//Euler method to solve differential equation dy/dx=(1+x*y)/(1+10*y^2).

#include<stdio.h>
#include<math.h>

float f(float x,float y)
{
	float z;
	z=(1+x*y)/(1+10*pow(y,2));
	return z;
}

int main()
{
	float x0,y0,h,xn;
	printf("Enter the values of x0 and y0 and h:");
	scanf("%f%f%f",&x0,&y0,&h);
	printf("\nx0\t\ty0\t\th\n%f\t%f\t%f",x0,y0,h);
	printf("\nEnter the value of xn:");
	scanf("%f",&xn);
	
	while(x0<xn)
	{
		y0=y0+(h*f(x0,y0));
		x0=x0+h;
		printf("\ny(%f):%f",x0,y0);
	}
	return 0;
	
}

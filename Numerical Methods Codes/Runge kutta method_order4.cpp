// Runge kutta method of order 4 to solve differential equation.

#include<stdio.h>
#include<math.h>

float f(float x,float y)
{
	float z;
	z=(1+sin(1+x+y))/(1+exp(x*y));
	return z;
}

int main()
{
	float x0,y0,h,xn,k1,k2,k3,k4;
	printf("Enter x0,y0,h,xn:");
	scanf("%f%f%f%f",&x0,&y0,&h,&xn);
	
	while(x0<xn)
	{
		k1=h*f(x0,y0);
		k2=h*f(x0+(h/2.),y0+(k1/2.));
		k3=h*f(x0+(h/2.),y0+(k2/2.));
		k4=h*f(x0+h,y0+k3);
		y0=y0+(1./6.)*(k1+2*k2+2*k3+k4);
		x0=x0+h;
		printf("\ny(%f)=%f",x0,y0);
	}
	return 0;
}

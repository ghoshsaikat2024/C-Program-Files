//Runge kutta of order 2.

#include<stdio.h>
#include<math.h>

float f(float x,float y)
{
	float z;
	z= (x*x)+(y*y);
	return z;
}

int main()
{
	float x0,y0,h,xn,k1,k2;
	int i,n;
	printf("Enter x0,y0,h,xn:");
	scanf("%f%f%f%f",&x0,&y0,&h,&xn);
	while(x0<xn){
		k1=h*f(x0,y0);
		k2=h*f(x0+h,y0+k1);
		y0=y0+(1./2.)*(k1+k2);
		x0=x0+h;
		printf("\ny(%f)=%f",x0,y0);
		
	}
	return 0;
	
}

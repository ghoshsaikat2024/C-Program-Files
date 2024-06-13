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
	float x0,y0,x,y,h,xn,k1,k2;
	int i,n;
	printf("Enter x0,y0,h,xn:");
	scanf("%f%f%f%f",&x0,&y0,&h,&xn);
	n=(xn-x0)/h;
	for (i=0;i<=n;i++)
	{
		k1=h*f(x0,y0);
		k2=h*f(x0+h,y0+k1);
		y=y0+((1./2.)*(k1+k2));
		x=x0+h;
	
		y0=y;
		x0=x;
		printf("y(%f)=%f",x0,y0);
	}
	return 0;
}

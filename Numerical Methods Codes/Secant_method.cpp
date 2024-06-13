//Secant method to find root of x^2*e^-x-x+0.3

#include<stdio.h>
#include<math.h>

float f(float x)
{
	float y;
	y=pow(x,2)*exp(-x)-x+0.3;
	return y;
}

int main()
{
	float x0,x1,x2,error=1e-6;
	printf("Enter the inital interval:");
	scanf("%f%f",&x0,&x1);
	printf("\n  x0     x1    x2");
	while(fabs(x1-x0)>error)
	{
		x2=x1-((x1-x0)*f(x1))/(f(x1)-f(x0));
		printf("\n    %f     %f     %f",x0,x1,x2);
		x0=x1;
		x1=x2;
	}
	printf("The root is %f:",x0);
	
	return 0;
}

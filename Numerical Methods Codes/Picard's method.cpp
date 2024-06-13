//Picard's method to solve given differential equation.
#include<stdio.h>
#include<math.h>

float f1(float x)
{
	float z;
	z=pow(x,3)/3;
	return z;
}

float f2(float x)
{
	float z ;
	z=(pow(x,3)/3)+(pow(x,7)/63);
	return z;
}

float f3(float x)
{
	float z;
	z=(pow(x,3)/3)+(pow(x,7)/63)+(pow(x,14)/126)+(2*pow(x,11)/189);
	return z;
}

int main()
{
	float x0,y0,x,y;
	printf("Enter values of x0,y0,x:");
	scanf("%f%f%f",&x0,&y0,&x);
	y=y0+f1(x);
	printf("\ny(%f)=%f",x,y);
	y=y0+f2(x);
	printf("\ny(%f)=%f",x,y);
	y=y0+f3(x);
	printf("\ny(%f)=%f",x,y);
	printf("\nThe solution is y(%f)=%f(correct upto 5d places)",x,y);
	return 0;
}

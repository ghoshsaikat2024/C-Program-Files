//Trapezoidal rule to integrate e^x/x dx in the interval (1,2) with 13 ordinates.

#include<stdio.h>
#include<math.h>

float f(float x)
{
	float y;
	y=exp(x)/x;
	return y;
}

int main()
{
	float a,b,h,sum=0,t;
	int n,i;
	printf("Enter lower limit and upper limit:\n");
	scanf("%f%f",&a,&b);
	printf("Enter number of subintervals:");
	scanf("%d",&n);
	h=(b-a)/n;
	for (i=1;i<=n-1;i++)
	{
		sum+=f(a+i*h);
	}
	t=(h/2)*(f(a)+f(b)+(2*sum));
	printf("The integrated value is:%f",t);
	return 0;
	
}

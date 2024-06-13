// Simpson's 3/8 th rule to integrate e^-x dx within(0,1).

#include<stdio.h>
#include<math.h>

float f(float x)
{
	float y;
	y=exp(-x);
	return y;
}

int main()
{
	float a,b,h,s1=0,s2=0,sum;
	int n,i;
	printf("Enter the lower and upper limit:");
	scanf("%f%f",&a,&b);
	
	line:
	  printf("\nEnter number of subintervals:");
	  scanf("%d",&n);
	if(n%3!=0)
	{
		printf("\nInvalid input for subintervals for performing simpson's 3/8 th rule.'");
		goto line;
	  }
	h=(b-a)/n;
	for(i=1;i<=n-1;i++)
	{
		if(i%3!=0){
			s1+=f(a+i*h);
		}
		else{
			s2+=f(a+i*h);
		}
	}    
	sum=(3*h/8)*(f(a)+f(b)+(3*s1)+(2*s2));
	printf("The integrated value is(correct upto 4 decimal places):%.4f",sum);
	return 0;
		
}

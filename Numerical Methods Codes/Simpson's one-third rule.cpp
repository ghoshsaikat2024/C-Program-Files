//Simpson's one-third rule to integrate 
#include<stdio.h>
#include<math.h>

float f(float x)
{
	float y;
	y=(1+pow(x,2))/sqrt(1+cos(x));
	return y;
}

int main()
{
	float a,b,h,s1=0,s2=0,sum;
	int n,i;
	printf("Enter lower and upper limit:");
	scanf("%f%f",&a,&b);
	line:
	  printf("\nEnter number of subintervals:");
	  scanf("%d",&n);
	if(n%2!=0){
		printf("Invalid number for subintervals for simpson's 1/3 rule '");
		goto line;
		
	}  
	h=(b-a)/n;
	for(i=1;i<=n-1;i+=2)
	{
		s1+=f(a+i*h);
	}
	for(i=2;i<=n-2;i+=2)
	{
		s2+=f(a+i*h);
	}
	//Integrated value.
	sum=(h/3)*(f(a)+f(b)+(4*s1)+(2*s2));
	printf("The integrated value is:%f",sum);
	
	return 0;
	
	
	
}

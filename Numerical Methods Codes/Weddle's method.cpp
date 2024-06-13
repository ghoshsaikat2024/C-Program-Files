// Weddle's rule to integrate 1/(1+x^2) within (0,6).
#include<stdio.h>
#include<math.h>

float f(float x)
{
	float y;
	y=1/(1+pow(x,2));
	return y;
}

int main()
{
	float a,b,h,s1=0,s2=0,s3=0,s4=0,sum;
	int n,i;
	printf("Enter the lower and upper limit:");
	scanf("%f%f",&a,&b);
	line:
	 printf("\nEnter number of subintervals:");
	 scanf("%d",&n);
	if (n%6!=0){
		printf("\nInvalid input for subintervals for perfoming weddle's method.'");
		goto line;
	} 
	h=(b-a)/n;	
	for (i=0;i<=n-6;i+=6)
	{
		s1+=f(a+(i+1)*h)+f(a+(i+5)*h);
		s2+=f(a+(i+2)*h)+f(a+(i+4)*h);
		s3+=f(a+(i+3)*h);
	}
	for (i=0;i<=n-12;i+=6){
		s4+=f(a+(i+6)*h);
	}
	sum=(3*h/10)*(f(a)+f(b)+(5*s1)+s2+(6*s3)+(2*s4));
	printf("Integrated value is:%f",sum);
	return 0;
	
	
	
}

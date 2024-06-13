//BISECTION METHOD TO FIND SOLUTION OF exp(x*x)+ln(x*x+2)-2.5*(x+1)=0 correct upto 5 decimal places.

#include<stdio.h>
#include<math.h>

// define the function.

float f(float x)
{
	float y;
	y= pow(x,3)+3*x-5;
	return y;
}

int main()
{
	float a,b,x,error=1e-6;
	printf("Enter the interval:\n");
	scanf("%f%f",&a,&b);
	
	if (f(a)*f(b)>0)
	 printf("invalid interval.\n");
	else{
	  while(fabs(b-a)>error&&f(a)!=0&&f(b)!=0)
	   {
		x=(a+b)/2;
		if (f(a)*f(x)<0)
		 b=x;
		else
		 a=x;
	   }
	}
	
	
	if (f(a)==0)
	 printf("The root is %8.5f (correct upto 5 decimal places):",a);
	else if (f(b)==0)
	 printf("The root is %8.5f(correct upto 5 decimal places):",b);
	else
	 printf("The root is %8.5f:",x);
	
	
	return 0;
	
	
}



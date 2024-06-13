//Newton Raphson method to find the root of x^2-5 = 0.

#include<stdio.h>
#include<math.h>
#include<stdbool.h>  //C doesn't have inbuilt boolean datatype true or false .For that we need to import this header file.

//define function.

float f(float x)
{
	float y;
	y=(x*x)-5;
	return y;
}

//derivative of the function.

float g(float x)
{
	float y;
	y=2*x;
	return y;
	
}

int main()
{
	int n=0;
	float x,m,error=1e-6,h;
	printf("Enter the initial guess x:");
	scanf("%f",&x);
	printf("\n    n       x        m");
	
	while (true)
	{
	  	h=-(f(x)/g(x));
	    m=x+h;
	    if (fabs(m-x)>error){
	    	printf("\n   %d     %f      %f",n,x,m);
	    	x=m;
	    	n++;
	    	continue;
	    }
	    else if (fabs(m-x)<error){
	    	x=m;
		    break;
		}	
		
	}
	printf("\nThe root is %f :",x);
	
	
	return 0; 
	 
	
}














//Root finding usong regula falsi method .function is x*log10(x)-1.2
#include<stdio.h>
#include<math.h>


float f(float x)
{
	float y;
	y=x*log10(x)-1.2;
	return y;
}

int main()
{
	float x0,x1,x2,error=1e-6;
	printf("Enter the interval:");
	scanf("%f%f",&x0,&x1);
	printf("\n    x0     x1    x2");
	if (f(x0)*f(x1)>0){
		printf("Invalid interval");
	}
    if(f(x0)*f(x1)==0){
		if(f(x0)==0){
			printf("The root is %f:",x0);
		}
		else{
			printf("The root is %f:",x1);
		}
	}
	
	else{
		while (fabs(x1-x0)>error){
		 x2=x1-((x1-x0)*f(x1))/(f(x1)-f(x0));
		 printf("\n    %f      %f     %f",x0,x1,x2);
		 if (f(x0)*f(x2)<0){
			x1=x2;
		}
		 else{
			x0=x2;
		}
		 
	   }
	    printf("The root is %f",x1);  
	}
	
	return 0;
}

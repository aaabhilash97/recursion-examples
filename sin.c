#include<stdio.h>
#include<math.h>
int c=0;
float fact(int x)
{
	if(x==0) return 1;
	return x*fact(x-1);
}
double msin(double x)
{
	
	if(c==444) return x;
	c++;
	int s=2*c+1;
	double p=pow(x,s)/fact(s);
	return x+pow(-1,c)*msin(p);
}
main()
{
	printf("%f",msin(0.52));
}

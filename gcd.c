#include<stdio.h>
int gcd(int a,int b)
{
	if(b==0) return a;
	return gcd(b,a%b);
}
main()
{
	printf("%d",gcd(252,105));

}

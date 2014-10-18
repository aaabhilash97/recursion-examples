#include<stdio.h>
#include<math.h>
int c=0;
float fact(int x)
{
        if(x==0) return 1;
        return x*fact(x-1);
}
main()
{
        printf("%f",fact(4.0));
}


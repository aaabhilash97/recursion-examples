#include<stdio.h>
#include<string.h>
int ispalian(char *a)
{
	if(*a=='\0'){
                return 1;
        }
//	printf("%c %c",*a,*(a+strlen(a)-1));
	if(*a==*(a+strlen(a)-1)){
		*(a+strlen(a)-1)=*a='\0';
		int k=ispalian(a+1);
		return k;
	}
        return 0;
}
main()
{
	char k[100]="malayalam";
	printf("%d",ispalian(k));
}

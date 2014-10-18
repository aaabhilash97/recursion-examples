#include<string.h>
#include<stdio.h>
void *rev_str(char *a,char *b)
{
	if(*a=='\0'){

		*b='\0';
		return;
	}
	*b=*(a+strlen(a)-1);
	*(a+strlen(a)-1)='\0';
	rev_str(a,b+1);
}
main()
{
	char a[100],b[100];
	strcpy(a, "hello");
	rev_str(a,b);
	printf("%s", b); // this prints "olleh"
}

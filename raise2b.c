int raised_to(int a,int b)
{
	if(b==1) return a;
	return a*raised_to(a,b-1);
}
main()
{
	printf("%d",raised_to(2,4));
}

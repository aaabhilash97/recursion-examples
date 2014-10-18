int sumser(int a,int b)
{
	if(a==b) return b;
	return a+sumser(a+1,b);
}
main()
{
	printf("%d",sumser(0,4));
}

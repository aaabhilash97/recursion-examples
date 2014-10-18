int sum_digits(int x)
{
	if(x/10==0) return x;
	return x%10+sum_digits(x/10);
}
main()
{
	printf("%d",sum_digits(12));
}

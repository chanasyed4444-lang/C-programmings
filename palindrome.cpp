#include<stdio.h>
int main()
{
	int n,d,rev,temp;
	printf("enter n value");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
	d=(n%10);
	rev=rev*temp;
	n=n/10;
	}
	if(rev==temp)
	printf("it is palindrome");
	else
	{
		printf("it is not a palindrome");
	return 0;
	}
}

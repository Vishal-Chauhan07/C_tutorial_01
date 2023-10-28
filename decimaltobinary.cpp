#include<stdio.h>
void DecimaltoBinary(int n)
{
	if(n==0)
	{
		printf("Binary no : %d",n);
		return ;
	}
	int ar[32];
	int i=0;
	while(n>0)
	{
		ar[i]=n%2;
		n=n/2;
		i++;
	}
	printf("binary = ");
	for(int j=i-1;j>=0;j--)
	{
		printf("%d  ",ar[j]);
	}
}
int main()
{
	int number;
	printf("Enter the Decimal number :");
	scanf("%d",&number);
	DecimaltoBinary(number);
	return 0;
}

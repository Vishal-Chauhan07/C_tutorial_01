#include<stdio.h>
void BinarytoDecimal(int b)
{
	int decimal=0,base=1,r;
	while(b>0)
	{
		r=b%10;
		decimal=decimal+r*base;
		b=b/10;
		base=base*2;
	}
	printf(" decimal number : %d",decimal);
}
int main()
{
	int number;
	printf("Enter the Decimal number :");
	scanf("%d",&number);
	BinarytoDecimal(number);
	return 0;
}

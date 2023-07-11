#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void calander()
{
	int i,j;
	for(i=1;i<6;i++)
		{
			printf("     ");
			for(j=1;j<8;j++)
			{
				printf(" %d%d ",i,j);
			}
			printf("\n");
		}
		printf("\n");
}
int main()
{
 	int choice,i,j;
	printf("\n------Welcome To 2016 Calander------\n");
	while(1)
	{
		printf("\n  Enter your choice number (1-12): ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\n\t\tJanuary\n\n");
				printf("      Su  Mo  Tu  We  Th  Fr  Sa\n\n");
			    calander();
				break;
		
			case 2:
				printf("\n\t\tFebruary\n");
				printf("      Su  Mo  Tu  We  Th  Fr  Sa\n\n");
				calander();
				break;
		
			case 3:
				printf("\n\t\tMarch\n\n");
				printf("      Su  Mo  Tu  We  Th  Fr  Sa\n\n");
				calander();
				break;
		
			case 4:
				printf("\n\t\tApril\n\n");
				printf("      Su  Mo  Tu  We  Th  Fr  Sa\n\n");
				calander();
				break;
			
			case 5:
				printf("\n\t\tMay\n\n");
				printf("      Su  Mo  Tu  We  Th  Fr  Sa\n\n");
				calander();
				break;
			
			case 6:
				printf("\n\t\tJune\n\n");
				printf("      Su  Mo  Tu  We  Th  Fr  Sa\n\n");
				calander();
				printf("\n");
				break;
		
			case 7:
				printf("\n\t\tJuly\n\n");
				printf("      Su  Mo  Tu  We  Th  Fr  Sa\n\n");
				calander();
				printf("\n");
				break;
			
			case 8:
				printf("\n\t\tAugust\n\n");
				printf("      Su  Mo  Tu  We  Th  Fr  Sa\n\n");
				calander();
				printf("\n");
				break;
		
			case 9:
				printf("\n\t\tSeptember\n\n");
				printf("      Su  Mo  Tu  We  Th  Fr  Sa\n\n");
				calander();
				printf("\n");
				break;
			
			case 10:
				printf("\n\t\tOctober\n\n");
				printf("      Su  Mo  Tu  We  Th  Fr  Sa\n\n");
			    calander();
				break;
		
			case 11:
				printf("\n\t\tNovembar\n\n");
				printf("      Su  Mo  Tu  We  Th  Fr  Sa\n\n");
				calander();
				break;
			
			case 12:
				printf("\n\t\tDecember\n\n");
				printf("      Su  Mo  Tu  We  Th  Fr  Sa\n\n");
				calander();
				break;
			
			default:
				printf("\n\t\tInvaild choice..!\n\t\t");
				exit(0);
		}
	}
}

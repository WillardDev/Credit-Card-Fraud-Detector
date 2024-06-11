#include<stdio.h>
void main()
{
	printf("Enter N\n");
	int n;
	scanf("%d",&n);
	if (n<0)
	{
		printf("Invalid N");
	}
	else
	{	
		int j=1;
		int r[j];
		printf("The numbers are:\n");
		printf("%d\t",j);
		int i;
		for(i=0;i<n;i++)
		{
			j++;
			printf("%d\t",j);
			if (j>n)
			break;
		}
		scanf("%d",&r[j]);
	}
}
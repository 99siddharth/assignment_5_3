#include<stdio.h>

void main()
{
	int f,i,flag=0;
	int a[]={1,5,4,8,9,2,0,6,11,7};
	for(i=0;i<10;i++)
	{
		printf("%d",a[i]);
	}
	printf("\nEnter the number to find: ");
	scanf("%d",&f);	
	for(i=0;i<10;i++)
	{
		if(f==a[i])
		{
			flag=1;
			break;
		}
		else
			continue;
	}
	if(flag!=0)
	{
		printf("Yes the number exist in the array");
	}
	else
	{
		
		printf("No the number does not exist in the array");
	}
}
		

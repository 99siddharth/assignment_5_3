#include<stdio.h>
#include<stdlib.h>
int result(int a,int b,int c)
{
	int total,perc;
	total=a+b+c;
	return total;
	
}
float percentage(int t)
{
	float perc;
	perc=(float)t/300*100;
	return perc;
}
int main()
{
	int a,b,c;
	int r;
	float p;
	printf("Enter the marks of 3 subject: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>100||b>100||c>100)
	{
		printf("Wrong marks");
		exit(0);
	}
	else
	{
		r=result(a,b,c);
		p=percentage(r);
		printf("\nThe total mark is %d and percentage is %f",r,p);
	}	
	return 0;
} 

#include <stdio.h>
void binary(int x)
{
	int y,i,j,count;
	int a[10];
	for(i=0;x>0;i++)
	{
	        y=x%2;
	        x=x/2;
	        a[i]=y;
	        count=count+1;
	}
	for(j=i-1;j>=0;j--)
	{
	        printf("%d",a[j]);
	}
}
void main()
{
	int a[10];
        int i,j,x,y,count=0;
	printf("Enter the range: ");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		binary(i);
		printf(" ");
	}
    

}

#include<conio.h>
#include<stdio.h>

void main()

{

		int a[5],temp,i,j;
		
	printf("enter array one");

	for( i=0;i<5;i++)
	scanf("%d",&a[i]);


	for( i=0;i<=3;i++)
	{
	for( j=0;j<=3-i;j++)

	if(a[j]>a[j+1])
		{
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
		}
	}
printf("elemns af a ")   ;
	for(i=0;i<5;i++)
	printf("\n%d",a[i])  ;
	getch();
}

#include<conio.h>
#include<stdio.h>

void main()

{

	int b[5],i,j,temp1, k;

	printf("enter the array");
for(j=0;j<5;j++)
	scanf("%d",&b[j]);
for(i=1;i<=4;i++)
		{
		for(j=0;j<i;j++)
		if(b[j]>b[i])
			{
			temp1=b[j];
			b[j]=b[i];
			for( k=i;k>j;k--)
			b[k]=b[k-1];
			b[k+1]=temp1;
			}
		}
printf("elemns af a and b are")   ;
	for(i=0;i<5;i++)
printf("\n%d",b[i])  ;
	getch()  ;
}

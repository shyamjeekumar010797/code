#include<stdio.h>

int  main()
{

int arr[5]={10,20,30,40,50},num,found=0,i;
printf("Enter the number to be searched");
scanf("%d",&num);
for(i=0;i<sizeof(arr);i++)
  {
   if(arr[i]==num)
	{
	printf("Number found at location%d",i);
	found++;
	break;
	}
  }
if(!found)
{
printf("Number Not found");
}	
 return 0;
}

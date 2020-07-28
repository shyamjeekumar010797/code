#include<stdio.h>
using namespace std;
int main()
{
int i,j,temp;
int arr[6]={34,56,21,48,89,95};
  for(i=0;i<(sizeof(arr)/sizeof(int))-1;i++)
  {
	for(j=0;j<(sizeof(arr)/sizeof(int))-1-i;j++)
	{
	if(arr[j]>arr[j+1])
	  {
	   temp=arr[j+1];
	   arr[j+1]=arr[j];
	   arr[j]=temp;
	  }
	}
  }
printf("Array elements after sorting\n");
 for(i=0;i<(sizeof(arr)/sizeof(int));i++)
 {
 printf("%d",arr[i]);
 }

}

#include<stdio.h>
using namespace std;
int main()
{
int arr[7]={9,3,1,4,2,7,5};
int min,i,j,temp;
 for(i=0;i<(sizeof(arr)/sizeof(int))-1;i++)
 {
   min=i;
   for(j=i+1;i<sizeof(arr)/sizeof(int);j++)
    {
	if(arr[min]>arr[j])
	 {
	  min=j;
	 }	 
    }
   temp=arr[i];
   arr[i]=arr[min];
   arr[min]=temp;
  
 }
for(i=0;i<sizeof(arr)/sizeof(int);i++)
 {
 printf("Array after selection sort:\n");
 printf("%d\n",arr[i]);
 }

}

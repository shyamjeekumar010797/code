#include<stdio.h>
using namespace std;
int main()
{
 int arr[6]={10,20,30,40,50,60};
 int start=0;
 int end=5/*(sizeof(arr)/sizeof(int))-1*/;
 int mid=(start+end)/2;
 int number,found=0; 
 printf("Enter the number to be searched");
 scanf("%d",&number);
  while(start<=end)
  {

	if(number>arr[mid])
	{
	start=mid+1;
	}
	else if(number<arr[mid])
	{
	end=mid-1;
	}
	else if(number==arr[mid])
	{
	printf("Number found at %d\n",mid);
	found=1;	
	break;
        }
	mid=(start+end)/2;	
   }
 if(!found)
  {
  printf("Number not found");
  }
	
}


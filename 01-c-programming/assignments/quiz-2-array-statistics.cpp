/* Emir Behiç Sağlam
000000000 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
   int arr[100],max,min,maxcounter=0,mincounter=0;
   int upper=80,lower=10;
   srand(time(0));
   for(int i=0;i<100;i++)
   {
    arr[i]=rand()%(upper-lower + 1) + lower;   
   }
   max=arr[0];
   min=arr[0];
   for(int i=0;i<100;i++)
   {
       if(i%10==0)
       printf("\n");
       printf("%d ",arr[i]);
   }
   for(int i=1;i<100;i++)
   {
       if(arr[i]>max)
       max=arr[i];
       if(arr[i]<min)
       min=arr[i];
   }
   
   for(int i=0;i<100;i++)
   {
       if(max==arr[i])
       maxcounter++;
       if(min==arr[i])
       mincounter++;
   }
   
   printf("\nThe maximum integer in the array is = %d, this number %d times repeated ",max,maxcounter);
   printf("\nThe minimum integer in the array is = %d, this number %d times repeated ",min,mincounter);
   
   
  

    return 0;
}


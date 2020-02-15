#include<stdio.h>
#include<conio.h>
int main()
{
   int n,i,j,a[100],b[100][2],k=0;
   printf("enter no of elements in array :");
   scanf("%d",&n);

   for(i=0;i<n;i++)
     {
          b[i][0]=0;
          b[i][1]=0;
     }
   printf("enter elements in array:");
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);
   for(i=0;i<n;i++)
   {
      if(a[i]!=0)
      {
         b[i][0]=a[i];
         b[i][1]=1;
         for(j=i+1;j<n;j++)
         {
            if(a[j]!=0)
            {
               if(a[j]==a[i])
                  {
                     b[i][1]=b[i][1]+1;
                     a[j]=0;
                  }
            }
         }

      }
   }
   for(i=0;i<n;i++)
      if(b[i][0]!=0)
      printf("%d occurs %d times\n",b[i][0],b[i][1]);


   return 0;
}

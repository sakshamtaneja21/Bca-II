#include<stdio.h>
#include<conio.h>
int main()
{
   int i,n,j,k,h,a[100],b[100];
   printf("enter no. of rows\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
     {
         a[i]=0;
         b[i]=0;
     }
   a[0]=1;
   for(i=1;i<=n;i++)
   {
      for(j=1;j<=n-i;j++)
         printf(" ");
      printf("1 ");
      b[0]=1;
      for(k=1;k<i;k++)
      {
         printf("%d ",a[k-1]+a[k]);
         b[k]=a[k-1]+a[k];
      }
      for(h=0;h<n;h++)
         a[h]=b[h];
      printf("\n");
   }
   return 0;
}

#include<stdio.h>
#include<conio.h>
int main()
{
   int i,al,bl,j,f=0;
   char a[100],b[100],c;
   printf("enter the first string :");
   scanf("%s",a);
   printf("enter the second string :");
   scanf("%s",b);
   i=0;
   al=0;
   while(a[i]!=NULL)
     {
        i++;
        al++;
     }
   i=0;
   bl=0;
   while(b[i]!=NULL)
   {
      i++;
      bl++;
   }
   if(al==bl)
   {
      for(i=0;i<al;i++)
      {
         c=a[i];
         a[i]=NULL;
         for(j=0;j<bl;j++)
            if(b[j]==c)
               b[j]=NULL;
      }
      for(i=0;i<bl;i++)
         if(b[i]!=NULL)
         {
            f=1;
            break;
         }

      if(f==0)
         printf("the given words are ANAGRAM\n");
      else
         printf("the given words are not ANAGRAM\n");
   }
   else
      printf("the given words are not ANAGRAM\n");
   return 0;
}

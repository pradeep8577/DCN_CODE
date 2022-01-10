#include<stdio.h>
#include<string.h>

int main()
{
 int i,j=0,k=0,len;
 char arr[50],src[50];
 printf("Enter the data  string: ");
 scanf("%s",arr);
 len=strlen(arr);
 
 for(i=0;i<len;i++)
 {
  if(arr[i]=='1')
   {
     k++;
   }
   else
   {
     k=0;
   }
   src[j]=arr[i];
   j++;
   if(k==5)
   {
     
     i++;
     k=0;
   }
 }
 src[j]='\0';
 printf("output %s\n",src);
 return 0;
} 


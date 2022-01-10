#include<stdio.h>
#include<stdlib.h>
int sender(char data[])
{
	int count,a;
	for(a=0;data[a]!='\0';a++)
	{
		if(data[a]=='1')
		count++;
	}
	if(count%2==0)
	{
		data[a]='0';
		data[a+1]='\0';
		printf("The data send from sender side is %s\n",data);
	}
	else
	{
		data[a]='1';
		data[a+1]='\0';
		printf("The data send from sender side is %s\n",data);	
	}
}
int receiver(char data[])
{
	int count,a;
		for(a=0;data[a]!='\0';a++)
	{
		if(data[a]=='1')
		count++;
	}
	//	printf("string receving at %s",data);
	if(count%2==0)
	{
			printf("Receiving Data is without ERROR\n");
	}
	else
	{
			printf("Receiving Data is with ERROR!!!!\n");	
	}
}
int main()
{
	char data[50];
	int i,n;
	printf("Enter data in binary format :- \t");
	scanf("%s",data);
	for(i=0;data[i]!='\0';i++)
	{
		if(!(data[i]=='1' || data[i]=='0'))
		{
			printf("Your data is not valid");
			break;
		}
	}
	if(data[i]=='\0')
	{
		printf("Enter Data is valid\n");
		sender(data);
		receiver(data);
	}
}




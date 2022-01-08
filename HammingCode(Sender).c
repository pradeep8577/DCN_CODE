#include<stdio.h>
#include<stdlib.h>
#include <math.h>
int main()
{
    int data[8],Rbit[4],hamming[12];
    printf("Enter data of 8 bit:");
    for(int i=0;i<8;i++)
    {
        scanf("%d",&data[i]);
    }

    Rbit[0]=data[0]^data[1]^data[3]^data[4]^data[6];
    Rbit[1]=data[0]^data[2]^data[3]^data[5]^data[6];
    Rbit[2]=data[1]^data[2]^data[3]^data[7];
    Rbit[3]=data[4]^data[5]^data[6]^data[7];
     int n=0,k=0;
    for(int j=0;j<12;j++)
    {
        if(pow(2,n)-1==j)
        {
            hamming[j]=Rbit[n];
            n++;
        }
        else
        {
            hamming[j]=data[k];
            k++;
        }
    }
    printf("Hamming code is:");
    for(int f=0;f<12;f++)
    {
        printf("%d",hamming[f]);
    }
}

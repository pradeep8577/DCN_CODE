#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int Hamming[12],Rbit[4],CheckHamming[12];
    printf("Enter 12 bit hamming code received:");
    for(int i=0;i<12;i++)
    {
        scanf("%d",&Hamming[i]);
    }

    Rbit[0]=Hamming[2]^Hamming[4]^Hamming[6]^Hamming[8]^Hamming[10]^Hamming[0];
    Rbit[1]=Hamming[2]^Hamming[5]^Hamming[6]^Hamming[9]^Hamming[10]^Hamming[1];
    Rbit[2]=Hamming[4]^Hamming[5]^Hamming[6]^Hamming[11]^Hamming[3];
    Rbit[3]=Hamming[8]^Hamming[9]^Hamming[10]^Hamming[11]^Hamming[7];

    //Converting Rbits To number
    int mult=1,num=0;
    int k=0;
    for(int j=3;j>=0;--j)
    {
        num=num+(Rbit[j]*pow(2,k));
        k++;
    }
    printf("position at which bit is converted:%d\n",num);
    if(num<12)
    {
       if(Hamming[12-num]==0)
      {
        Hamming[12-num]=1;
      }
      else
      {
          Hamming[12-num]=0;
      }
    }

    printf("Final hamming code after correction:");
    for(int r=0;r<12;r++)
    {
        printf("%d ",Hamming[r]);
    }
    return 0;
}

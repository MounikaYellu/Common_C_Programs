#include<stdio.h>
int main()
{
unsigned char data=0x0A;
//Swapping 1st bit to 2nd bit (bit counting 7-0)
//binary of 0x0A is :0000 1010
data^=(1<<1);
data^=(1<<2);
//data will be : 0000 1100 (0x0C)
printf("\n data after swap bits: %02x\n",data);
return 0;
}


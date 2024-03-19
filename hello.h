#include<stdio.h>
int palindrome(int *num)
{
    int revnumber, orgnumber, remain;
    orgnumber=*num;
    while(*num!=0)
    {
        remain = *num%10;
        revnumber = revnumber*10 + remain;
        *num=*num/10;
    }
    return revnumber;
}

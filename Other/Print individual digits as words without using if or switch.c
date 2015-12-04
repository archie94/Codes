/*
Given a number, print words for individual digits. It is not allowed to use if or switch.
*/



#include <stdio.h>
int main()
{
    char word[][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int num,digits[10]={0},r,k;
    scanf("%d",&num);
    k=0;
    while(num>0)
    {
        r=num%10;
        num/=10;
        digits[k++]=r;
    }
    k--;
    while(k>=0)
    {
        printf("%s ",word[digits[k--]]);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int a=34;
    int* ptra=&a;
    printf("%d\n",ptra);
    printf("%d",ptra+1); // its depend on the system in my it can take 4 bit 
    return 0;
}
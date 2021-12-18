#include <stdio.h>
int main()
{
    int num, index = 0;
    printf("enter the number");
    scanf("%d", &num);
    do
    {
        printf("print the number%d\n",index);
    index=index+1;
    } while (index <= num);

    return 0;
}

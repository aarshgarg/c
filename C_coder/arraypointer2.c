#include <stdio.h>  
void printarray(char arr[]);
void printarray(char arr[])  
{  
    //char arr[5]={'A','B','C','D','E'};  
    printf("Elements of array are : ");  
    for(int i=0;i<5;i++)  
    {  
        printf("%c ", arr[i]);  
        //printf("array address",arr);
    }  
}  
int main()  
{  
    
  char arr[5]={'A','B','C','D','E'};  
  printarray(arr);  
  return 0;  
}  
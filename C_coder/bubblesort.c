#include<stdio.h>
int main()
{
    int count,temp,i,j,arr[20];
    printf(" How many number do we enter in the array");
    scanf("%d",&count);
    printf("Enter the Number %d",count);
    
    for(i=0;i<count;i++)
    scanf("%d",&arr[i]);
    for(i=count-2;i>=0;i--){
        for(j=0;j<=i;j++){
            if(arr[j]=arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("sorted array");
    for(i=0;i<count;i++)
    printf("%d",arr[i]);
    return 0;
}



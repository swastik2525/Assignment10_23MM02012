#include<stdio.h>
int main() {
    union array
    {
        int arr1[10];
        float arr2[10];
        char arr3[10];
    }arr;
    
    int n1,n2,n3;
    printf("Enter number of elements in arr1,arr2 and arr3:");
    scanf("%d %d %d",&n1,&n2,&n3);

    printf("Enter elements in integer array:\n");
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&arr.arr1[i]);
    }

    printf("Enter elements in float array:\n");
    for(int i=0;i<n2;i++)
    {
        scanf("%f",&arr.arr2[i]);
    }

    printf("Enter elements in characater array:\n");
    for(int i=0;i<n3;i++)
    {
        scanf("%s",&arr.arr3[i]);
    }
   
    printf("Elements in integer array:\n");                            
    for(int i=0;i<n1;i++)
    {
        printf("%d\t",arr.arr1[i]); 
    }
    printf("\n");

    printf("Elements in float array:\n");                              
    for(int i=0;i<n2;i++)
    {
        printf("%.2f\t",arr.arr2[i]);
    }
    printf("\n");

    printf("Elements in character array:\n");
    for(int i=0;i<n3;i++)
    {
        printf("%c\t",arr.arr3[i]);
    }
    printf("\n");

    return 0;
}
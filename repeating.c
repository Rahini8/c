#include<stdio.h>
#include<stdlib.h>
void TwoElements(int arr[], int size)
{
    int i;
    printf("\n The repeating element is");
 
    for(i = 0; i < size; i++)
    {
        if(arr[abs(arr[i])-1] > 0)
            arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];
        else
            printf(" %d ", abs(arr[i]));
     }
}
int main()
{
    int arr[] = {4, 3, 4, 6, 5, 6, 2};
    int  n = sizeof(arr)/sizeof(arr[0]);
    printTwoElements(arr, n);
    return 0;
}
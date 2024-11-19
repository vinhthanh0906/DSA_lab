#include<stdio.h>
#include<math.h>


void FindMax(int *max, int a)
{
    if (a > *max)
    {
        *max = a;
    }
}

int main ()
{
    int max = 12;
    int arr[] = {1,2,4,4,10,14};
    
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        FindMax(&max, arr[i]);
    }

    printf("The max number is: %d", max);
    return 0;
}
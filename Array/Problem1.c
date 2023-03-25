//Program to find largest and smallest number in an array.

#include <stdio.h>

int main()
{
    int i, arr[10] = {2, 5, 3, 8, 5, 6, 7, 4, 6, 4};
    int small, large;
    
    small = large = arr[0];
    
    for(i=0; i<10; i++){
        if(arr[i]<small){
            small = arr[i];
        }
        if(arr[i]>large){
            large = arr[i];
        }
    }
    
    printf("Smallest = %d, and Largest = %d", small, large);

    return 0;
}

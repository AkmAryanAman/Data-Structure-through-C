
#include <stdio.h>
int main()
{
    int age[5] = {20, 30, 40, 50, 30};   //Array Initialization
    int ageOfRohit = age[2];             //Accessing Array Element and assign it to ageOfRohit
    printf("This is 3rd element of age: %d", ageOfRohit);
  
    
    int marks[2];                      //Array Declaration
    printf("\nPlease Enter Marks in Sub1:");
    scanf("%d", marks[0]);              //Input value to marks[0] from user
    printf("\nPlease Enter Marks in Sub1:");
    scanf("%d", marks[1]);
    printf("Marks in Sub1: %d", marks[0]);
    
    return 0;
}

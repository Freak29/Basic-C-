#include <stdio.h>

int main()
{
    int number_of_row;
    int i=0;
    printf("Please enter the number of rows:");
    scanf("%d",&number_of_row);
    for (int i = 1 ; i <= number_of_row ; i++)
      {
        for (int j = 0 ; j < number_of_row-i ; j++)
          printf(" ");
    
        for (int j = 0 ; j < 2*i-1 ; j++)
          printf("*");
    
        printf("\n");
      }

    for (int i = 1; i < number_of_row ; i++)
      {
        for (int j = 0 ; j < i ; j++)
          printf(" ");
    
        for (int j = 0 ; j < 2*(number_of_row-i)-1; j++)
          printf("*");
    
        printf("\n");
      }
    return 0;
}
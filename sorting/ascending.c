// sorting a array
//

#include <stdio.h>
#define MAXWIDTH 50

int main()
{
  int i, j, num, array[MAXWIDTH], temp;

    printf("Enter the value of num\n");
    scanf("%d", &num);

    printf("Enter the elements one by one \n");

    for (i=0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Input arrray is \n");

    for(i=0; i < num ; i++)
    {
        printf("%d\n", array[i]);
    }


    // sorting algoritm goes here

    for (i = 0; i < num ; i++)
    {
      for (j=i ; j < num; j++)
      {
        if ( array[i] > array[j])
        {
          temp = array[i];
          array[i] = array[j];
          array[j] = temp;
        }
      }
    }

    printf("Sorted array is\n");
    for ( i=0 ; i < num; i++)
    {
        printf("%d\n", array[i]);
    }

}

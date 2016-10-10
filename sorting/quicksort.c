#include <stdio.h>
#define MAXWIDTH 50

void quicksort(int [], int , int );

int main()
{
  int i, j, array[MAXWIDTH], num;

  printf("Please enter the number of elements\n");
  scanf("%d", &num);

  printf("Please enter the number one by one");

  for (i=0;i< num; i++)
  {
    scanf("%d", &array[i]);
  }

  printf("Inserted number for the sorting array are\n");
  for (i=0;i< num; i++)
  {
    printf("%d\n", array[i]);
  }
  quicksort(array, 0, num-1);

  printf("sorted  array are\n");
  for (i=0;i< num; i++)
  {
    printf("%d\n", array[i]);
  }

}


void quicksort(int array[], int low, int high)
{
  int i, j, temp, pivot;

  if ( low < high)
  {
    pivot = low;
    i = low;
    j = high;
    while ( i < j)
    {
      while ( array[i] < array[pivot] && i <= high)
      {
        i++;
      }

      while ( array[j] > array[pivot] && j >= low)
      {
        j--;
      }
      if (i < j)
      {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }

    temp = array[j];
    array[j] = array[pivot];
    array[pivot] = temp;
    quicksort(array, low, j - 1);
    quicksort(array, j + 1, high);
  }
}

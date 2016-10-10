// quicksort from wiki that didnt workout


#include <stdio.h>
#define MAXSIZE 50

void quicksort(int array[], int low, int high);
int  partition(int array[], int low, int high);

int main ()
{
    int array[MAXSIZE];
    int i, j, num, temp;

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


    quicksort(array, 0, num);
    printf("Sorted array is \n");

    for(i=0; i < num ; i++)
    {
        printf("%d\n", array[i]);
    }

  return 0;
}

void quicksort(int array[], int low, int high)
{
  int pivot;

  if ( low < high)
  {
    pivot = partition(array, low, high);
    quicksort(array, low, pivot -1);
    quicksort(array, pivot+1, high);
  }
}


int  partition(int array[], int low, int high)
{
  int pivot, i, j, temp;
  pivot = array[high];
  i = low;

  for ( j = low ; j < high-1; j++)
  {
    if ( array[j] <= pivot)
    {
      temp = array[i];
      array[i] = array[j];
      array[j] = temp;
      i = i + 1;
    }

  }

    temp = array[i];
    array[i] = array[high];
    array[high] = temp;
  return i;
}

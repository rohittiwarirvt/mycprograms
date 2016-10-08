
#include <stdio.h>
#define MAXWIDTH 50

void mergeSort(int [], int, int ,int);
void partition(int [], int, int);

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

    partition(array, 0, num-1);

    printf("Sorted array is\n");
    for ( i=0 ; i < num; i++)
    {
        printf("%d\n", array[i]);
    }
  return 0;
}


void partition( int array[], int low, int high)
{
  int mid;

  if (low < high)
  {
    mid = (low + high) / 2;
    partition(array, low, mid);
    partition(array, mid+1, high);
    mergeSort(array, low, mid, high);
  }

}


void mergeSort( int array[], int low, int mid, int high)
{
    int i= low, lo = low, mi = mid+1, temp[50], k;

    while ( (low <= mid) && (mi <=high))
    {
      if (array[lo] <= array[mi])
      {
        temp[i] = array[lo];
        lo++;
      } else
      {
        temp[i] = array[mi];
        mi++;
      }
      i++;
    }

    if (lo > mid)
    {
      for ( k = mid; k <= high ; k++)
      {
        temp[i] = array[k];
        i++;
      }
    }
    else
    {
      for ( k=lo; k <= mid; k++)
      {
        temp[i] = array[k];
        i++;
      }

    }

    for (k=low; k <= high ; k++)
    {
      array[k] = temp[k];
    }
}

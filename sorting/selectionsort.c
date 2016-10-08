/*
* selection sort simpel
 */


#include <stdio.h>
#define MAXWIDTH 50

int main()
{
  int i,j, temp, num, array[MAXWIDTH], minIndex;

    printf("Enter the value of num\n");
    scanf("%d", &num);

    printf("Enter the elements one by one \n");

    for (i=0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i=0 ; i < num; i ++)
    {
      minIndex = i;
      for (j=i+1; j < num ; j++)
        {
          if ( array[j] < array[minIndex])
          {
            minIndex = j;
          }
        }

        if (minIndex != i)
        {
          temp = array[i];
          array[i] = array[minIndex];
          array[minIndex] = temp;
        }
    }

    printf("Sorted array is\n");
    for ( i=0 ; i < num; i++)
    {
        printf("%d\n", array[i]);
    }
}


/* pseudocode
bingo(array A)

{ This procedure sorts in ascending order. }
begin
    max := length(A)-1;

    { The first iteration is written to look very similar to the subsequent ones, but
      without swaps. }
    nextValue := A[max];
    for i := max - 1 downto 0 do
        if A[i] > nextValue then
            nextValue := A[i];
    while (max > 0) and (A[max] = nextValue) do
        max := max - 1;

    while max > 0 do begin
        value := nextValue;
        nextValue := A[max];
        for i := max - 1 downto 0 do
             if A[i] = value then begin
                 swap(A[i], A[max]);
                 max := max - 1;
             end else if A[i] > nextValue then
                 nextValue := A[i];
        while (max > 0) and (A[max] = nextValue) do
            max := max - 1;
    end;
end;


 */

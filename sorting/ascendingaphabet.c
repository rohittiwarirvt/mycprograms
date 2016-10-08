#include <stdio.h>
#include <string.h>
#define MAXLENGTH 50;

int main()
{
  char input[5][10], output[5][10], temp[8];
  int i,j, num;

  printf("Enter words count\n");
  scanf("%d", &num);

  printf("Enter each word line by line\n");

  for (i = 0; i < num; ++i)
  {
    scanf("%s", input[i]);
    strcpy(output[i], input[i]);
  }
  //

  for (i = 0; i < num-1 ; i++)
  {
    for (j=i+1; j < num; j++)
    {
      if (strcmp(output[i],output[j]) > 0)
      {
        strcpy(temp, output[i]);
        strcpy(output[i], output[j]);
        strcpy(output[j], temp);
      }
    }
  }

  printf("Printing the sorted words alphabetically\n");

  for (i =0 ; i < num; i++)
  {
    printf("%s\t\t%s\n", input[i], output[i]);
  }
}

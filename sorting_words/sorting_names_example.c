#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WORD_SIZE 12

typedef struct nameTable
{
  char name[WORD_SIZE];
} names;

void swapping(names *one, names *two)
{
  names temp_name;
  for (int i = 0; i < WORD_SIZE; i++)
  {
    temp_name.name[i] = one->name[i];
    one->name[i] = two->name[i];
    two->name[i] = temp_name.name[i];
  }
}

int equalChar(char a, char b)
{
  return a - b;
}

void sort(names *arr, int size, int max_word_size)
{
  int stop_count = 0;

  do
  {
    stop_count = 0;
    for (int j = 0; j < size - 1; j++)
    {
      for (int k = 0; k < max_word_size; k++)
      {
        if (equalChar(arr[j].name[k], arr[j + 1].name[k]) == 0)
        {
          continue;
        }
        else if (equalChar(arr[j].name[k], arr[j + 1].name[k]) < 0)
        {
          break;
        }
        else if (equalChar(arr[j].name[k], arr[j + 1].name[k]) > 0)
        {
          swapping(&arr[j], &arr[j + 1]);
          stop_count = 1;
          break;
        }
      }
    }
  } while (stop_count > 0);
}

int main(int argc, char const *argv[])
{
  int amount_words = 10;
  names names_arr[amount_words];
  strcpy(names_arr[0].name, "PAULA      ");
  strcpy(names_arr[1].name, "DIANA      ");
  strcpy(names_arr[2].name, "ANNIE      ");
  strcpy(names_arr[3].name, "LILLIAN    ");
  strcpy(names_arr[4].name, "EMILY      ");
  strcpy(names_arr[5].name, "ROBIN      ");
  strcpy(names_arr[6].name, "PEGGY      ");
  strcpy(names_arr[7].name, "CRYSTAL    ");
  strcpy(names_arr[8].name, "GLADYS     ");
  strcpy(names_arr[9].name, "ASHLEE     ");

  //"PAULA","DIANA","ANNIE","LILLIAN","EMILY","ROBIN","PEGGY","CRYSTAL","GLADYS"

  printf("\n\n\t\t\tNames befor sorting:\n");
  for (int j = 0; j < amount_words; j++)
  {

    for (int k = 0; k < WORD_SIZE; k++)
    {
      printf("%c", names_arr[j].name[k]);
      if (names_arr[j].name[k] == ' ')
      {
        break;
      }
    }
    printf(" ");
  }
  printf("\n");
  sort(names_arr, amount_words, WORD_SIZE);
  printf("\n\n\t\t\tNames befor sorting:\n");
  for (int j = 0; j < amount_words; j++)
  {

    for (int k = 0; k < WORD_SIZE; k++)
    {
      printf("%c", names_arr[j].name[k]);
      if (names_arr[j].name[k] == ' ')
      {
        break;
      }
    }
    printf(" ");
  }
  printf("\n");
  return 0;
}

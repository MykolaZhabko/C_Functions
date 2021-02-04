/*
names - it is a structure defined in sort_words_a.h
you can modify acording to your needs.
*/

#include "sort_words_a.h"


/*Function retur a difference of ASCII code of the characters*/
int equalChar(char a, char b)
{
  return a - b;
}

/*Function to swap the words*/
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

/*
Sorting function:
It is a brute forse function which compares two words character by character in one iteration and swapping the words acording to alphabetic order.
*/
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

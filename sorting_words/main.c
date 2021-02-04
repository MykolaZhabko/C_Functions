#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort_words_a.h"


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

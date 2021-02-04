#define WORD_SIZE 12

typedef struct nameTable
{
  char name[WORD_SIZE];
} names;

int equalChar(char a, char b);
void swapping(names *one, names *two);
void sort(names *arr, int size, int max_word_size);


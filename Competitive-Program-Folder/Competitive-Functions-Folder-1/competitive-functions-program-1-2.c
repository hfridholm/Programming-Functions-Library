
#include <stdlib.h>
#include <stdbool.h>

#include "competitive-functions-program-1.h"

int* remove_array_integer(int* array, int length,
  int integer)
{
  int start = length;
  for(int index = (length - 1); index >= 0; index--)
  {
    if(*(array + index) != integer) continue;
    start = index; break;
  }
  return delete_array_integer(array, length, start);
}

int compare_integer_arrays(int* first, int* second,
  int length)
{
  for(int index = 0; index < length; index += 1)
  {
    if(*(first + index) != *(second + index))
      return false;
  }
  return true;
}

int* remove_array_integers(int* array, int length,
  int integer)
{
  while(array_contains_integer(array,length,integer))
  {
    array = remove_array_integer(array, length,
      integer);
  }
  return array;
}
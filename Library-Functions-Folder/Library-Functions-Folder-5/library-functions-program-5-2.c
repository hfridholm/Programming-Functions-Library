
#include <stdlib.h>
#include <math.h>

#include "../Library-Functions-Folder-4/\
library-functions-program-4.h"

#include "../Library-Functions-Folder-5/\
library-functions-program-5.h"

#include "../Library-Functions-Folder-8/\
library-functions-program-8.h"

int binary_range_between(char* binary, int minimum,
  int maximum)
{
  int integer = convert_binary_integer(binary);
  int output = integer_range_between(integer, minimum,
    maximum); return output;
}

int convert_binary_integer(char* binary)
{
  int length = character_string_length(binary),
    integer = 0;
  for(int index = 0; index < length; index = index + 1)
  {
    integer = increase_binary_integer(binary, index,
      integer);
  }
  return integer;
}

char convert_binary_character(char* binary)
{
  char character = convert_binary_integer(binary);
  return character;
}

int increase_binary_integer(char* binary, int index,
  int integer)
{
  int length = character_string_length(binary);
  if(string_index_character(binary, index) == '0')
    return integer;
  int binary_index = (length - index - 1);
  return integer + calculate_bit_integer(binary_index);
}

char* generate_random_binary(int minimum, int maximum)
{
  int integer = generate_random_integer(minimum,
    maximum);
  char* binary = convert_integer_binary(integer);
  return binary;
}

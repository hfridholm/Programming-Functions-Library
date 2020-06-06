
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

#include "../Library-Functions-Folder-4/\
library-functions-program-4.h"

#include "../Library-Functions-Folder-8/\
library-functions-program-8.h"

char* sort_character_string(char* string, int length)
{
  for(int index = length; index >= 0; index = index-1)
  {
    string = sort_string_iteration(string, index);
  }
  return string;
}

int compare_string_content(char* first, char* second,
  int length)
{
  first = sort_character_string(first, length);
  return compare_strings_together(first,
    sort_character_string(second, length), length);
}

char string_index_character(char* string, int index)
{
  char character = *(string + index);return character;
}

char* generate_lower_alphabet(int characters)
{
  char* alphabet = generate_character_string(
    characters);
  for(int index = 1; index <= characters; index += 1)
  {
    alphabet = allocate_string_character(alphabet,
      index - 1, lower_alphabet_character(index));
  }
  return alphabet;
}

char* generate_higher_alphabet(int characters)
{
  char* alphabet = generate_character_string(
    characters);
  for(int index = 1; index <= characters; index += 1)
  {
    alphabet = allocate_string_character(alphabet,
      index - 1, higher_alphabet_character(index));
  }
  return alphabet;
}

char lower_alphabet_character(int index)
{
  if(index >= 1 && index <= 26) return (96 + index);
  return '-';
}

char higher_alphabet_character(int index)
{
  if(index >= 1 && index <= 26) return (64 + index);
  return '-';
}

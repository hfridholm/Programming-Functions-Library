
#include <stdlib.h>
#include <stdbool.h>

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-4/\
library-functions-program-4.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

int compare_strings_character(char* first, char* second,
  int index)
{
  char character = string_index_character(first, index);
  return (character == string_index_character(second,
    index));
}

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-1/\
library-functions-program-1.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-6/\
library-functions-program-6.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

int integer_range_between_test(int integer,int minimum,
  int maximum, int output)
{
  int boolean = integer_range_between(integer, minimum,
    maximum); return (boolean == output);
}

int convert_decimal_percent_test(double decimal,
  double output)
{
  return (convert_decimal_percent(decimal) == output);
}

int integer_power_operation_test(int integer,int power,
  int output)
{
  int product = integer_power_operation(integer,power);
  return (product == output);
}

int convert_percent_decimal_test(double percent,
  double output)
{
  return (convert_percent_decimal(percent) == output);
}

int check_integer_divisible_test(int first, int second,
  int output)
{
  int boolean = check_integer_divisible(first, second);
  return (boolean == output);
}

int integer_between_integers_test(int first,int second,
  double output)
{
  double integer = integer_between_integers(first,
    second); return (integer == output);
}

int increase_integer_variable_test(int integer,
  int output)
{
  return(increase_integer_variable(integer) == output);
}

int integer_greater_than_test(int first, int second,
  int output)
{
  int boolean = integer_greater_than(first, second);
  return (boolean == output);
}

int integer_smaller_than_test(int first, int second,
  int output)
{
  int boolean = integer_smaller_than(first, second);
  return (boolean == output);
}

int integer_variable_even_test(int integer, int output)
{
  int boolean = integer_variable_even(integer);
  return (boolean == output);
}

int integer_variable_odd_test(int integer, int output)
{
  int boolean = integer_variable_odd(integer);
  return (boolean == output);
}

int compare_integer_variables_test(int first,
  int second, int output)
{
  int boolean=compare_integer_variables(first, second);
  return (boolean == output);
}

int generate_fraction_variable_test(int numerator,
  int denominator, int* output)
{
  int* fraction = generate_fraction_variable(numerator,
    denominator);
  return compare_integer_arrays(fraction, output, 2);
}

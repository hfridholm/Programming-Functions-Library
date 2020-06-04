
#ifndef FUNCTIONS_TESTING_PROGRAM_2_H
#define FUNCTIONS_TESTING_PROGRAM_2_H

int generate_matrix_array_test(int, int, int**);

int allocate_matrix_integer_test(int**,int,int,
  int, int**);

int delete_matrix_integer_test(int**,int,int,int,
  int**);

int integer_matrix_height_test(int**,int,int);

int matrix_contains_integer_test(int**,int,int,
  int, int);

int remove_matrix_integer_test(int**, int, int,
  int**);

int add_matrix_integer_test(int**,int,int,int,
  int**);

int remove_matrix_integers_test(int**,int,int,
  int**);

int switch_matrix_integers_test(int**,int,int,
  int**);

int switch_matrix_arrays_test(int**, int, int,
  int**);

int move_matrix_arrays_test(int**,int,int,int**);

int compare_matrix_arrays_test(int**, int**, int,
  int, int);

int shuffle_integer_matrix_test(int**,int,int**);

int duplicate_integer_matrix_test(int**,int,int,
  int**);

int sort_integer_matrix_test(int**, int, int**);

int compare_matrix_content_test(int**, int**,
  int, int, int);

#endif

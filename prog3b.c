/*
 * CSE202 SP21 prog3b Program
 * Full Name:
 * Full Lehigh Email Address:
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* The following C pre-processor statements allow you to compile
*  the program with options -DDOUBLE or -DLONG to select type double or long for data_t
*  data_t is set to int if none of the two options is used
*/
#if defined (DOUBLE)
 typedef double data_t;
#elif defined (LONG)
  typedef long data_t;
#else
    typedef int data_t;
#endif
/* The following C pre-processor statements allow you to compile
*  the program with options -DN=200 or any value for N
*  N is set to 100 if the option is not used
*/
#ifndef N
#define N 100
#endif
// Prototypes of the functions you need to write
void fillArray(data_t **a);
data_t** allocate_memory();
void multiply_no_opt_ijk(data_t **a, data_t **b, data_t **c);
void multiply_no_opt_jik(data_t **a, data_t **b, data_t **c);
void multiply_no_opt_jki(data_t **a, data_t **b, data_t **c);
void multiply_no_opt_kji(data_t **a, data_t **b, data_t **c);
void multiply_no_opt_kij(data_t **a, data_t **b, data_t **c);
void multiply_no_opt_ikj(data_t **a, data_t **b, data_t **c);

int main(){

  return 0;
}
// Definition of the function to allocate memory for the array
data_t** allocate_memory(){
  return 0;
}
// function to fill a matrix with random numbers
void fillArray(data_t **a){
}
// Multiply function using the order i-j-k for the three loops
void multiply_no_opt_ijk(data_t **a, data_t **b, data_t **c){

}
// Multiply function using the order j-i-k for the three loops
void multiply_no_opt_jik(data_t **a, data_t **b, data_t **c){

}
// Multiply function using the order j-k-i for the three loops
void multiply_no_opt_jki(data_t **a, data_t **b, data_t **c){

}
// Multiply function using the order k-j-i for the three loops
void multiply_no_opt_kji(data_t **a, data_t **b, data_t **c){

}
// Multiply function using the order k-i-j for the three loops
void multiply_no_opt_kij(data_t **a, data_t **b, data_t **c){

}
// Multiply function using the order i-k-j for the three loops
void multiply_no_opt_ikj(data_t **a, data_t **b, data_t **c){

}

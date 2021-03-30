/*
 * CSE202 SP21 prog3 Program
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

// prototypes of the functions you need to write
data_t** allocate_memory();
void fillArray(data_t **a);
void multiply_no_opt(data_t **a, data_t **b, data_t **c);
void multiply_no_mem(data_t **a,data_t **b,data_t **c);
void multiply_unroll_2_1(data_t **a,data_t **b,data_t **c);
void multiply_unroll_2_2(data_t **a,data_t **b,data_t **c);
void multiply_unroll_4_1(data_t **a,data_t **b,data_t **c);
void multiply_unroll_4_4(data_t **a,data_t **b,data_t **c);
void multiply_unroll_8_1(data_t **a,data_t **b,data_t **c);
void multiply_unroll_8_8(data_t **a,data_t **b,data_t **c);


// main method
int main(){
  data_t **a;
  data_t **b;
  data_t **c;
  a = allocate_memory();
  b = allocate_memory();
  c = allocate_memory();
  fillArray(a);
  fillArray(b);
  clock_t start, end;
  // case 1: No optimization
  start = clock();
  multiply_no_opt(a, b, c);
  end = clock();
  printf("%-5d\t%-10ld\t", N, (end-start));
  // case 2: Eliminating memory reference

  // case 3: loop unrolling 2x1

   // case 4: loop unrolling 2x2

   // case 5: loop unrolling 4x1

   // case 6: loop unrolling 4x4

   // case 7: loop unrolling 8x1

   // case 8: loop unrolling 8x8

}
/* Definition of the function allocate_memory
*  return a pointer to a two-dimensional array of size N x N
*/
data_t** allocate_memory(){
  return 0;
}
// function to fill a matrix a[N][N] with random numbers
void fillArray(data_t **a){
}
// Matrix multiplication with no optimization
void multiply_no_opt(data_t **a,data_t **b,data_t **c){
  int i, j,k;
  for(i=0; i<N; i++)
    for(j=0; j<N; j++){
      c[i][j] = 0;
      for(k=0; k<N; k++){
        c[i][j] += a[i][k] * b[k][j];
      }
    }
}
// Matrix multiplication with elimination
// of memory reference when possible
void multiply_no_mem(data_t **a,data_t **b,data_t **c){

}
// Matrix multiplication with loop unrolling 2x1
void multiply_unroll_2_1(data_t **a,data_t **b,data_t **c){

}
// Matrix multiplication with loop unrolling 2x2
void multiply_unroll_2_2(data_t **a,data_t **b,data_t **c){

}
// Matrix multiplication with loop unrolling 4x1
void multiply_unroll_4_1(data_t **a,data_t **b,data_t **c){

}
// Matrix multiplication with loop unrolling 4x4
void multiply_unroll_4_4(data_t **a,data_t **b,data_t **c){

}
// Matrix multiplication with loop unrolling 8x1
void multiply_unroll_8_1(data_t **a,data_t **b,data_t **c){

}
// Matrix multiplication with loop unrolling 8x8
void multiply_unroll_8_8(data_t **a,data_t **b,data_t **c){

}

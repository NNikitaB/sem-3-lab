
#ifndef OPER_OTN_H
#define OPER_OTN_H


#include <stdio.h>
#include <stdlib.h>
#define N 11
typedef enum boolean{FALSE,TRUE}bool;

typedef bool* arr;
typedef arr* array;
array input(array a,  unsigned n,bool f());
void output( array a ,unsigned n );
bool  Ainc_eqB(array a,array b, unsigned n,unsigned m);
bool AequalB(array a,array b,unsigned n,unsigned m);
bool A_includeB(array a,array b, unsigned n,unsigned m);
array A_or_B(array a,array b, int n1,int n2 );
array A_and_B(array a,array b, int n1,int n2 );
array A_not_B(array a,array b,int n1,int n2 );
array AnoB_or_BnoA(array a,array b, int n1,int n2 );
array not_A(array a,unsigned c);
array A_comp_B(array a,array b, unsigned n, unsigned m);
array obr_A(array a,unsigned c);
bool f_1(unsigned a,unsigned b);
bool f_2(unsigned a,unsigned b);
bool f_3(unsigned a,unsigned b);
array create_matr(int n);
void del_matr(array a,int n);
#endif // OPER_OTN_H

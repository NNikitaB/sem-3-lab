
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
array A_or_B(array a,array b, int n1,int n2 ,int * c);
array A_and_B(array a,array b, int n1,int n2 ,int * c);
array A_not_B(array a,array b,int n1,int n2 ,int * c);
array AnoB_or_BnoA(array a,array b, int n1,int n2 ,int * c);
array not_A(array a,unsigned c);
array A_comp_B(array a,array b, unsigned n, unsigned m);
array obr_A(array a,unsigned c);
array create_matr(int n)
{
    array a;
    a=(array)calloc(sizeof(arr),n);
    for(int i=0;i<n;i++) a[i]=(arr)calloc(sizeof(bool),n);
    return a;
}
void del_matr(array a,int n)
{
    for(int i=0;i<n;i++) free(a[i]);
    free(a);
}
bool f_eq_in(unsigned a,unsigned b){return a<=b;}
bool f_eq(unsigned a,unsigned b){return a=b;}
bool f_in(unsigned a,unsigned b){return a<b;}
bool f_not_in(unsigned a,unsigned b){return a>b;}
bool f_or(unsigned a,unsigned b){return a||b;}
bool f_and(unsigned a,unsigned b){return a&&b;}
bool f_not(unsigned a){return !a;}
bool f_1(unsigned a,unsigned b){return (b> a+ 5 )|| (a> b + 5);}
bool f_2(unsigned a,unsigned b){return !((a%2 )||(b%2));}
bool f_3(unsigned a,unsigned b){return (abs(a-b)> 5);}


array input(array a,  unsigned n,bool f())
{
size_t i,j;
/*for(i=0;i<N;++i)
for(j=0;j<N;++j)
a[i][j] =FALSE ;
*/
for(i=0;i<N-1;++i)
for(j=0;j<N-1;++j)
 a[i][j] =f(i,j);
 return a;
}
void output(array a,  unsigned n)
{
size_t i,j;
for(i=0;i<N;++i)
  {
     for(j=0;j<N;++j)
     if(a[i][j]) printf("%i:%i ",i+1,j+1);
     printf("\n");
  }
}

bool  A_B(array a,array b, unsigned n,unsigned m,bool f())
{
unsigned i=0,j=0;
bool tmp=f(m,n) ;   //
while (i <n  && tmp)
{
  j=0;
  while (j <n  && tmp)
    {tmp=f(a[i][j], b[i][j]);i++;j++;}

}
return tmp;
}

bool  Ainc_eqB(array a,array b, unsigned n,unsigned m)
{
bool tmp=A_B(a,b,n,m,f_eq_in);
return tmp;
}


bool AequalB(array a,array b,unsigned n,unsigned m)
{
bool tmp=A_B(a,b,n,m,  f_eq);
return tmp;
}

bool A_includeB(array a,array b, unsigned n,unsigned m)
{
bool tmp=m>n;
   //    f=n<m;
if(tmp) tmp=A_B(a,b,n,m, f_eq_in);
return tmp;
}

array A_sr_B(array a,array b, int n1,int n2 ,int * c,bool f())
{
array ar_c=create_matr(N);
*c=n1<n2?n2:n1;
for(size_t i=0;i<*c;++i)
    for(size_t j=0;j<*c;++j)
      ar_c[i][j]=f(a[i][j], b[i][j]);                        //a[i][j] || b[i][j];
return ar_c;
}



array A_or_B(array a,array b, int n1,int n2 ,int * c)
{
    return A_sr_B(a,b,n1,n2,c,f_or);
}

array A_and_B(array a,array b, int n1,int n2 ,int * c)
{
    return A_sr_B(a,b,n1,n2,c,f_and);
}

array A_not_B(array a,array b,int n1,int n2 ,int * c)
{
    return A_sr_B(a,b,n1,n2,c,f_not_in);
}

array AnoB_or_BnoA(array a,array b, int n1,int n2 ,int * c)
{
    array tmp= A_sr_B(a,b,n1,n2,c,f_not_in);
    return A_sr_B(tmp,a,*c,n1,c,f_not_in);
}

array not_A(array a,unsigned c)
{
array ar_c=create_matr(N);
    size_t i,j;
for(i=0;i<N-1;++i)
for(j=0;j<N-1;++j)
 ar_c[i][j] =f_not(a[i][j]);
 return ar_c;
}
array A_comp_B(array a,array b, unsigned n, unsigned m)
{
    array c=create_matr(N);
 size_t i,j,z;
for(i=0;i<N-1;++i)
for(j=0;j<N-1;++j)
   {c[i][j]=FALSE;
    for(z=0;z<N-1;++z)
       c[i][j] |= a[i][z] && a[z][j] ;
 }
 return c;
}

array obr_A(array a,unsigned c)
{
array ar_c=create_matr(N);
    size_t i,j;
for(i=0;i<N-1;++i)
for(j=0;j<N-1;++j)
 ar_c[i][j] =a[j][i];
 return a;
}

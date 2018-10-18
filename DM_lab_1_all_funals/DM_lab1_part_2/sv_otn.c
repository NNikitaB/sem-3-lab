
#include <stdio.h>
#include <stdlib.h>
#define N 11
typedef enum boolean{FALSE,TRUE}bool;

typedef bool* arr;
typedef arr* array;
    int R_ref(array a,unsigned n);
    int a_R_ref(array a,unsigned n);
    int R_sm(array a,unsigned n);
    int	a_R_sm(array a,unsigned n);
    int	R_tr(array a,unsigned n);
    int	a_R_tr(array a,unsigned n);
    int R_pol(array a,unsigned n);
	int R_tol(array a , unsigned n);
	int R_eq(array a , unsigned n);
	int R_por(array a , unsigned n);
	int R_nestr_por(array a , unsigned n);
	int R_str_por(array a , unsigned n);
	int R_l_por(array a , unsigned n);
	int R_nestrl_por(array a , unsigned n);
	int R_strl_por(array a , unsigned n);



int R_ref(array a,unsigned n)
{
	size_t i;
	bool tm=TRUE;
	for(i=0;i<n-1&& tm;++i)
          tm=a[i][i];

if(i>n-1 )  printf("No reflecsivno because do not be elements  i=%i  j=%i \n",i-1,i-1);
	return i>=n-1;

	}

int a_R_ref(array a,unsigned n)
{
	size_t i;
	bool tm=TRUE;
	for(i=0;(i<n-1)&& tm;++i)
          tm=!a[i][i];

if(i>n-1 )  printf("No anti-reflecsivno because be elements  i=%i  j=%i \n",i-1,i-1);
	return i>=n-1;
	}

 int R_sm(array a,unsigned n)
{
	size_t i,j;
	bool tm=TRUE;
	for(i=0;i<n-1&& tm;++i)
        for(j=0;j<n-1&& tm;++j)
             tm=!a[i][j] || a[j][i];

    if(i>n-1 )  printf("No simmetrichno because be elements  i=%i  j=%i and not el j=%i  i=%i and  i!=j then be   i,z or z,j\n",i-1,j-1,j-1,i-1);
	return i>=n-1;
	}

int	a_R_sm(array a,unsigned n)
{
	size_t i,j;
	bool tm=TRUE;
	for(i=0;i<n-1&& tm;++i)
        for(j=0;j<n-1&& tm;++j)
             tm=!a[i][j] || !a[j][i] ||(i==j)  ;

             if(i>n-1 )  printf("No anti-simmetrichno because be elements  i=%i  j=%i and j=%i  i=%i and  i!=j then be   i,z or z,j\n",i-1,j-1,j-1,i-1);
	return i>=n-1;
	}

	int	R_tr(array a,unsigned n)
{
	size_t i,j,z;
	bool tm=TRUE;
	for(i=0;i<n-1&& tm;++i)
        for(j=0;j<n-1&& tm;++j)
            for(z=0;z<n-1&& tm;++z)
             tm=!a[i][z] || !a[z][j] || a[i][j];

if(i>n-1 )  printf("No tranzitive because do not be element i=%i  j=%i  then be   i,z or z,j\n",i-1,j-1);

	return i>=n-1;
	}

	int	a_R_tr(array a,unsigned n)
{
	size_t i,j,z;
	bool tm=TRUE;
	for(i=0;i<n-1&& tm;++i)
        for(j=0;j<n-1&& tm;++j)
            for(z=0;z<n-1&& tm;++z)
             tm=!a[i][z] || !a[z][j] || !a[i][j];
    if(i>n-1 )  printf("No anti-tranzitive because be elements i=%i  j=%i  z=%i\n",i-1,j-1,z-1);
	return i>=n-1;
	}

int R_pol(array a,unsigned n)
{
	size_t i,j;
	bool tm=TRUE;
	for(i=0;i<n-1&& tm;++i)
        for(j=0;j<n-1&& tm;++j)
             tm=(i==j)|| (a[i][j] || a[j][i]);
    if(i>n-1)printf("No polno because not elements i=%i  j=%i\n",i-1,j-1);
	return i>=n-1;
	}

	int R_tol(array a , unsigned n)
	{
	    return R_ref(a,n) && R_sm(a,n)?1:0;
	}
	int R_eq(array a , unsigned n)
	{
	    return  R_tr(a,n) && R_ref(a,n) && R_sm(a,n)?1:0;
	}
	int R_por(array a , unsigned n)
	{
	    return R_tr(a,n)  && a_R_sm(a,n)?1:0;
	}
	int R_nestr_por(array a , unsigned n)
	{
	    return R_por(a,n)  && R_ref(a,n)?1:0;
	}

	int R_str_por(array a , unsigned n)
	{
	    return R_por(a,n)  && a_R_ref(a,n)?1:0;
	}
	int R_l_por(array a , unsigned n)
	{
	    return R_por(a,n)  && R_pol(a,n)?1:0;
	}
	int R_nestrl_por(array a , unsigned n)
	{
	    return R_nestr_por(a,n)  && R_pol(a,n)?1:0;
	}
	int R_strl_por(array a , unsigned n)
	{
	    return R_str_por(a,n)  && R_pol(a,n)?1:0;
	}

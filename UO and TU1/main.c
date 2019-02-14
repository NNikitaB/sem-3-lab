//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}



/*
t_arr matr_in_a(t_arr b,int m,int n,t_typ_d a)//матр на число
{
    t_arr g= create_matr(m,n);
    size_t i,j;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
           *(*(g+i)+j)=a* *(*(b+i)+j);
    return i==m && j==n?g:NULL;
}
t_arr matr_in_matr(t_arr a,int m1,int n1,t_arr b,int m2,int n2,int* m3,int* n3)//маир на матр
{
    t_arr c=NULL;
    if(n1!=m2) return c;
    c=create_matr(m1,n2);
    size_t i,j;
    *m3=m1;
    *n3=n2;
    for(i=0;i<m1;i++)
        for(j=0;j<n2;j++)
        {
            c[i][j]=0;
            size_t p,q;
            for(p=0,q=0;(p<m1 && q<n2);p++,q++)
                c[i][j]+=a[i][q]* b[p][j];
        }

  return c;
}
t_arr matr_add_matr(t_arr a,int m1,int n1,t_arr b,int m2,int n2)//складывает матрицу а с б
{
    if(m1!=m2 || n1!=n2) return 0;
    t_arr g=a;// create_matr(m1,n1);
    size_t i,j;
    for(i=0;i<m1;i++)
        for(j=0;j<n1;j++)
           *(*(g+i)+j)=*(*(a+i)+j)+ *(*(b+i)+j);
    return i==m1 && j==n1?g:NULL;
}
t_arr matr_subt_matr(t_arr a,int m1,int n1,t_arr b,int m2,int n2)//вычитает матрицу б из a
{
    if(m1!=m2 || n1!=n2) return 0;
    t_arr g= create_matr(m1,n1);
    size_t i,j;
    for(i=0;i<m1;i++)
        for(j=0;j<n1;j++)
            *(*(g+i)+j)=*(*(a+i)+j)- *(*(b+i)+j);
    return i==m1 && j==n1?g:NULL;
}

void swap(t_arr a,int m1, int n1,int m2,int n2)
{
    t_typ_d tmp=a[m1][n1]; a[m1][n1]=a[m2][n2]; a[m2][n2]=tmp;
}
*/

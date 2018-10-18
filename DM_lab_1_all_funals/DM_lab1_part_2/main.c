
#include "oper_otn.h"
#include "sv_otn.h"
bool f_ravno(unsigned a,unsigned b)
{
    return a==b;
}
int main()
{   unsigned n=11,m=11,k=11,q=11;
    array a=create_matr(N);
    input(a,n,f_1);
    output(a,n);
    array b=create_matr(N);
    input(b,n,f_2);
    output(b,m);
    array c=create_matr(N);
    input(c,n,f_3);
    output(c,k);
    array d=create_matr(N);
    input(d,q,f_ravno);
    output(d,q);
    int i1=0,i2=0,i3=0,i4=0,i5=0,i6=0,i7=0,i8=0,i9=0,i10=0,i11=0,i12=0,i13=0,i14=0,i15=0;

    i1=R_ref(a,n);
    i2=a_R_ref(a,n);
    i3=R_sm(a,n);
    i4=a_R_sm(a,n);
    i5=R_tr(a,n);
    i6=a_R_tr(a,n);
    i7=R_pol(a,n);
    i8=R_tol(a,n);
    i9=R_eq(a,n);
    i10=R_por(a,n);
    i11=R_nestr_por(a,n);
    i12=R_str_por(a,n);
    i13=R_l_por(a,n);
    i14=R_nestrl_por(a,n);
    i15=R_strl_por(a,n);
printf("reflecsivno=%i \n;antireflecsivno=%i \n;summetruchno=%i \n; antusummetruvhno=%i \n; tranzitivno=%i \n; antitranzitivno=%i \n; polno=%i \n;molerantno=%i \n; euquvalentno=%i \n; poryadka=%i \n; nestrogogo poryadka=%i \n; strogog poryadka=%i \n; lineynogo poryadka=%i \n;nestrogogo lineynogo poryadka=%i \n;strogog lineynogo poryadka=%i ",i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13,i14,i15);
printf("\n\n\n\n\n");

 i1=R_ref(b,m);
    i2=a_R_ref(b,m);
    i3=R_sm(b,m);
    i4=a_R_sm(b,m);
    i5=R_tr(b,m);
    i6=a_R_tr(b,m);
    i7=R_pol(b,m);
    i8=R_tol(b,m);
    i9=R_eq(b,m);
    i10=R_por(b,m);
    i11=R_nestr_por(b,m);
    i12=R_str_por(b,m);
    i13=R_l_por(b,m);
    i14=R_nestrl_por(b,m);
    i15=R_strl_por(b,m);
printf("reflecsivno=%i \n;antireflecsivno=%i \n;summetruchno=%i \n; antusummetruvhno=%i \n; tranzitivno=%i \n; antitranzitivno=%i \n; polno=%i \n;molerantno=%i \n; euquvalentno=%i \n; poryadka=%i \n; nestrogogo poryadka=%i \n; strogog poryadka=%i \n; lineynogo poryadka=%i \n;nestrogogo lineynogo poryadka=%i \n;strogog lineynogo poryadka=%i ",i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13,i14,i15);
printf("\n\n\n\n\n");

 i1=R_ref(c,k);
    i2=a_R_ref(c,k);
    i3=R_sm(c,k);
    i4=a_R_sm(c,k);
    i5=R_tr(c,k);
    i6=a_R_tr(c,k);
    i7=R_pol(c,k);
    i8=R_tol(c,k);
    i9=R_eq(c,k);
    i10=R_por(c,k);
    i11=R_nestr_por(c,k);
    i12=R_str_por(c,k);
    i13=R_l_por(c,k);
    i14=R_nestrl_por(c,k);
    i15=R_strl_por(c,k);
printf("reflecsivno=%i \n;antireflecsivno=%i \n;summetruchno=%i \n; antusummetruvhno=%i \n; tranzitivno=%i \n; antitranzitivno=%i \n; polno=%i \n;molerantno=%i \n; euquvalentno=%i \n; poryadka=%i \n; nestrogogo poryadka=%i \n; strogog poryadka=%i \n; lineynogo poryadka=%i \n;nestrogogo lineynogo poryadka=%i \n;strogog lineynogo poryadka=%i ",i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13,i14,i15);
printf("\n\n\n\n\n");

i1=R_ref(d,q);
    i2=a_R_ref(d,q);
    i3=R_sm(d,q);
    i4=a_R_sm(d,q);
    i5=R_tr(d,q);
    i6=a_R_tr(d,q);
    i7=R_pol(d,q);
    i8=R_tol(d,q);
    i9=R_eq(d,q);
    i10=R_por(d,q);
    i11=R_nestr_por(d,q);
    i12=R_str_por(d,q);
    i13=R_l_por(d,q);
    i14=R_nestrl_por(d,q);
    i15=R_strl_por(d,q);
printf("nulevaya: reflecsivno=%i \n;antireflecsivno=%i \n;summetruchno=%i \n; antusummetruvhno=%i \n; tranzitivno=%i \n; antitranzitivno=%i \n; polno=%i \n;molerantno=%i \n; euquvalentno=%i \n; poryadka=%i \n; nestrogogo poryadka=%i \n; strogog poryadka=%i \n; lineynogo poryadka=%i \n;nestrogogo lineynogo poryadka=%i \n;strogog lineynogo poryadka=%i ",i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13,i14,i15);


    return 0;
}

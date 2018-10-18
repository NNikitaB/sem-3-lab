
#ifndef SV_OTN_H
#define SV_OTN_H





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
#endif // SV_OTN_H

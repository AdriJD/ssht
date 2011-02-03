
#ifndef SSHT_SAMPLING
#define SSHT_SAMPLING

#include <complex.h>

complex double ssht_sampling_weight_mw(int p);
double ssht_sampling_weight_dh(double theta_t, int L);
void ssht_sampling_gl_thetas_weights(double *thetas, double *weights, int L);

double ssht_sampling_mw_t2theta(int t, int L);
double ssht_sampling_mw_p2phi(int p, int L);
double ssht_sampling_mw_ss_t2theta(int t, int L);
double ssht_sampling_mw_ss_p2phi(int p, int L);
double ssht_sampling_dh_t2theta(int t, int L);
double ssht_sampling_dh_p2phi(int p, int L);
double ssht_sampling_gl_p2phi(int p, int L);

extern inline void ssht_sampling_elm2ind(int *ind, int el, int m);
extern inline void ssht_sampling_ind2elm(int *el, int *m, int ind);

#endif

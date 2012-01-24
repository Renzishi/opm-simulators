/* Copyright 2011 (c) Jostein R. Natvig <Jostein.R.Natvig at sintef.no> */
#ifndef REORDERSEQUENCE_H_INCLUDED
#define REORDERSEQUENCE_H_INCLUDED

#ifdef __cplusplus
extern "C" {
#endif

struct UnstructuredGrid;
void compute_sequence(struct UnstructuredGrid *grid, const double *flux,
                      int *sequence, int *components, int *ncomponents);



#ifdef __cplusplus
}
#endif

#endif /* REORDERSEQUENCE_H_INCLUDED */

/* Local Variables:    */
/* c-basic-offset:4    */
/* End:                */

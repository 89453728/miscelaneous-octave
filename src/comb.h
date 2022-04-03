/*
comb.h

Copyright (C) 2022-2023 Yassin Achengli <0619883460@uma.es>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; see the file COPYING.  If not, see
<https://www.gnu.org/licenses/>.

*/



#ifndef COMB_H
#define COMB_H
#include <octave/oct.h>
#include <octave/dim-vector.h>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include "ndarray_ext.h"
#define GAMMA_LIM_SUP 1e2
#define GAMMA_POINTS  ((octave_idx_type)1e3)
NDArray linsp(const double &liminf,const  double &limsup,const octave_idx_type N);
double integrate(const NDArray &values);
double gammma (const double &x);
#endif

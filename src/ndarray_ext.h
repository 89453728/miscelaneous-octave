/*
ndarray_ext.h

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

#ifndef NDARRAY_EXT_H
#define NDARRAY_EXT_H
#include <octave/oct.h>
#include <octave/dim-vector.h>
#include <iostream>
#include <cmath>

// #define OPERATORS_NDARRAY


NDArray operator * (const NDArray& ,const NDArray&);
#ifdef OPERATORS_NDARRAY
NDArray operator * (const double& ,const NDArray&);
NDArray operator * (const NDArray& ,const double&);
#endif
NDArray operator ^ (const NDArray&, const NDArray&);
NDArray operator ^ (const double&, const NDArray&);
NDArray operator ^ (const NDArray&, const double&);
NDArray exp(const NDArray&);
#endif

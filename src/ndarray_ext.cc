/*
ndarray_ext.cc

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

#include "ndarray_ext.h"


NDArray operator * (const NDArray &a, const NDArray &b) {
	if (a.numel() != b.numel()){
		std::cerr << "NDArray :: product of twice NDArray must have same numel\n";
		exit(-1);
	}
	NDArray ret(dim_vector(1,a.numel()));
	for (octave_idx_type i=0;i<a.numel();i++)
		ret(i) = a(i)*b(i);
	return ret;
}
#ifdef OPERATORS_NDARRAY
NDArray operator * (const double &a, const NDArray &b) {	
	NDArray ret(dim_vector(1,b.numel()));
	for (octave_idx_type i=0;i<b.numel();i++)
		ret(i) = a*b(i);
	return ret;
}
NDArray operator * (const NDArray &a, const double &b) {	
	NDArray ret(dim_vector(1,a.numel()));
	for (octave_idx_type i=0;i<a.numel();i++)
		ret(i) = b*a(i);
	return ret;
}
#endif
NDArray operator ^ (const NDArray &a, const NDArray &b) {
	if (a.numel() != b.numel()){
		std::cerr << "NDArray :: product of twice NDArray must have same numel\n";
		exit(-1);
	}
	NDArray ret(dim_vector(1,a.numel()));
	for (octave_idx_type i=0;i<a.numel();i++)
		ret(i) = pow(a(i),b(i));
	return ret;
}
NDArray operator ^ (const NDArray &a, const double &b) {	
	NDArray ret(dim_vector(1,a.numel()));
	for (octave_idx_type i=0;i<a.numel();i++)
		ret(i) = pow(a(i),b); 
	return ret;
}
NDArray operator ^ (const double &a, const NDArray &b) {	
	NDArray ret(dim_vector(1,b.numel()));
	for (octave_idx_type i=0;i<b.numel();i++)
		ret(i) = pow(a,b(i)); 
	return ret;
}
NDArray exp(const NDArray &a){
	NDArray ret(dim_vector(1,a.numel()));
	for(octave_idx_type i=0;i<ret.numel();i++)
		ret(i) = exp(a(i));
	
	return ret;
}

/*
comb.cc

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


#include "comb.h"

NDArray linsp(const double &liminf,const double &limsup,const octave_idx_type N){
	NDArray ret = NDArray(dim_vector(1,N));
	for(octave_idx_type i=0;i<N;i++)
		ret(i) = liminf + i*((limsup-liminf)/(N-1));

	return ret;
}
double integrate(const NDArray &values){
	double cum = 0;
	double h = (values(values.numel()-1) - values(0))/(values.numel());
	cum = 0;
	for(octave_idx_type i=0;i<values.numel();i++)
		cum += values(i);
	
	return cum*h;
}
double gammma(const double &x) {
	NDArray t = linsp(0.0,GAMMA_LIM_SUP,GAMMA_POINTS);
	t = t^(x-1);
	t = t*exp(-1*t);
	//std::cout << "sum: "<< (t.sum())(999) << "\n";
	return integrate(t);
}


DEFUN_DLD(comb,args,,"combination of two numbers also decimals using gamma function") {
	octave_idx_type nargin = args.length();

	if (nargin != 2)
		print_usage();
		
	double a = args(0).double_value();
	double b = args(1).double_value();
	if(!(a>=0 && b>=0 && a>=b))
		print_usage();

	double res = gammma(a+1)/(gammma(b+1)*gammma(a-b+1));

	return octave_value(res);
}

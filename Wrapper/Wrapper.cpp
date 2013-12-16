#include "stdafx.h"
 
#include "Wrapper.h"
 
using namespace Computations;
namespace Wrapper {
	void WrapperClass::getPriceCallEuro(int nbTirages, double T, double S0, double K, double sigma, double r) {
		double ic, px;
		calleuro (ic, px, nbTirages, T, S0, K, sigma, r);
		this->intConfiance = ic;
		this->prix = px;
	}
}


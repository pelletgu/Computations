#pragma once
#include "Computations.h"
using namespace System;
 
namespace Wrapper {
 
	public ref class WrapperClass
	{
	private:
		double intConfiance;
		double prix;
	public:
		WrapperClass() {intConfiance = prix = 0;};
		void getPriceCallEuro(int nbTirages, double T, double S0, double K, double sigma, double r);
		double getPrice() {return prix;};
		double getIC() {return intConfiance;};
	};
}

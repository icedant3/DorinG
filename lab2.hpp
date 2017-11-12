#ifndef _lab2_hpp_
#define _lab2_hpp_

#include <iostream>

using namespace std;

class latura{
	protected:
		double l;
	public:
		latura();	
		latura(double);	
		double getlatura();
};

class patrat:public  latura{
	private: double a;
	public:
		patrat();
		patrat(double);
		double getarie();
};

class piramida: public patrat{
	private: double h;
	public:
		piramida();
		piramida(double x);
		double getvolume();
};

#endif

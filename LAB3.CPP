#include <iostream>
#include "polinom.h"
using namespace std;

Polinom::Polinom(int g)
{
	grad = g;
	coef = new int[g+1];
	for (int i=0; i<=g; i++) coef[i]=0;
}

Polinom::~Polinom()
{
	if (coef) delete []coef;
}

Polinom::Polinom(int g , int *c)
{
	grad=g ;
	coef = new int[g + 1];
	for( int i=0 ; i <= g ; i++) coef[i] = c[i];
}

Polinom::Polinom(const Polinom& P)
{
	grad = P.grad;
	coef = new int [grad+1];
	for (int i = 0 ; i <= grad ; i++) coef[i] = P.coef[i];
}

void Polinom::afisare(char *sir)
{
	cout << sir;
	for (int i = grad ; i >= 0 ; i--)
	{
		if (i == 1)
		{
			if (coef[i] > 0) cout << "+ " << coef[i] << "x";
			else if (coef[i] < 0)cout << " " << coef[i] << "x";
		}
		else
			if (i == 0)
			{
				if (coef[i] > 0) cout << "+ " << coef[i];
				else if (coef[i] < 0) cout << " " << coef[i];
			}
			else
				if (coef[i] > 0) cout << "+ " << coef[i] << "x^" << i;
				else
					if (coef[i] < 0) cout << " " << coef[i] << "x^" << i;
	}
	cout << "\n";
}

int Polinom::valPolinom (int x)
{
	int val = 0;
	int x0=1;
	for ( int i = 0 ; i <= grad ; i++)
	{
		val += x0 * coef[i];
		x0 *= x;
	}
	return val;
}

Polinom Polinom::operator + (Polinom& X)
{
	int gmic = grad < X.grad ? grad : X.grad;
	int gmare = grad > X.grad ? grad : X.grad;
	Polinom s(gmare);
	for ( int i = 0 ; i <= gmic ; i++ ) s.coef[i] = coef[i]+X.coef[i];
	for ( int i = gmic+1 ; i <= gmare ; i++ ) s.coef[i] = coef[i];
	return s;
}


Polinom operator = (Polinom& Y , Polinom& X )
{
	delete []coef;
	Y.grad = X.grad;
	y.coef = new int[grad+1];
	for(int i=0;i<=grad;i++) coef[i]=X.coef[i];
	return *this;
}

Polinom Polinom::operator *(Polinom & x)
{
	Polinom s(grad+x.grad);
	Polinom rez(grad+x.grad);
	for(int i=0; i<=grad;i++)
	{
		for(int j=0;j<=x.grad;j++) s.coef[i+j]=coef[i]*x.coef[j];
		for(int k=0; k<= rez.grad; k++)	rez.coef[k] = rez.coef[k] + s.coef[k];
		for(int l=0; l<= s.grad; l++) s.coef[l]=0;
	}
	return rez;
}

#ifndef Polinom_h
#define Polinom_h

class Polinom
{
	int grad;
	int *coef;
public :
	Polinom(int g=0); //constructor implicit
	~Polinom (); // destructor implicit
	Polinom (int , int *); //constructor
	Polinom ( const Polinom&);//constructor de copiere

	void afisare (char * ); // afisarea unui polinom   OUTPUT FOR POLYNOM
	int valPolinom (int); // valoarea unui polinom intr-un punct

	Polinom operator + ( Polinom &);// adunarea polinoamelor
	friend Polinom operator = ( Polinom & , Polinom &);// atribuirea polinoamelor
	Polinom operator * ( Polinom &);// inmultirea polinoamelor
	friend istream& operator>>(istream&, Polinom&);
};
#endif









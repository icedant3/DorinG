#include "lab2.hpp"

latura::latura(){
	l = 1; 
}

latura::latura(double x){
	l=x;
}

double latura::getlatura(){
return l;
}

patrat::patrat(){}
patrat::patrat(double x):latura(x){
       
}

double patrat::getarie(){
	double l=getlatura();
	return l*l;
}

piramida::piramida():patrat(1){
cout<<"dati inaltimea:";
cin>>h;	 }

piramida::piramida(double x):patrat(x){
cout<<"dati inaltimea:";
cin>>h;	 }

double piramida::getvolume(){
	
return (h*getarie()/3);

}

#include "lab2.hpp"

latura::latura(){
	l = 1; 
}

latura::latura(double x){
	l=x;
}

void latura::afisare(){
	cout<<l<<"\n";
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

void patrat::afisare(){
	cout<<getarie()<<"\n";
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

void piramida::afisare(){
	cout<<getarie()<<"\n";
}

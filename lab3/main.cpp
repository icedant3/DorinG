#include "lab3.hpp"

int main(){
	piramida a(5);
	piramida b(8);
	
	if(a.getvolume() > b.getvolume()){
			cout<<a.getvolume()<<"\n";
			if(a.getarie() > b.getarie() && a.getlatura() > b.getlatura())
				cout<<"se include\n";
			}
	else{
		cout<<b.getvolume()<<"\n";
		if(b.getarie() > a.getarie() && b.getlatura() > a.getlatura())
				cout<<"se include\n";
	}
}

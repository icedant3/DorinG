#include "lab2.hpp"

int main(){
	piramida a(5);
	piramida b(8);
	
	cout<<a.getvolume()>b.getvolume()?a.getvolume():b.getvolume()<<"\n";
}

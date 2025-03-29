#include <iostream>
using namespace std;
int main(){
double lar, anc, area, tt;
cout<<"Deme el largo de su terreno: "<<endl;
cin>>lar;
cout<<"Deme el anchode su terreno: "<<endl;
cin>>anc;

area= lar * anc;

if (area >0 & area <=500)
 {
 	
	 cout<<"Su terreno mide: "<<area<<" Metros cuadrados."<<endl;
 	cout<<"Su total a pagar seria de $500. "<<endl;

 }
 else 
 if (area >500 & area <=1000)
 {
 		
	 cout<<"Su terreno mide: "<<area<<" Metros cuadrados."<<endl;
 	cout<<"Su total a pagar seria de $1000. "<<endl;
 	
 }
 else
 if (area >1000 & area <=2000)	
 {
 
	 cout<<"Su terreno mide: "<<area<<" Metros cuadrados."<<endl;
 	cout<<"Su total a pagar seria de $2000. "<<endl;
}
else
if (area >2000)
{

	 cout<<"Su terreno mide: "<<area<<" Metros cuadrados."<<endl;
 	cout<<"Su total a pagar seria de: $5000. "<<endl;	
	
}
}

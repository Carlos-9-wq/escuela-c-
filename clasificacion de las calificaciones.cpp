#include <iostream>
#include <stdio.h>
using namespace std;
int main() 
{
int est, na, op, rep=0, su=0, reg=0, bu=0, ex=0;

cout<<" Cuantos alumnos tiene el grupo?: "<<endl;
cin>>na; 

for(int i=1; i<=na;i++) 
{
cout<<"1- Alumno con calificion entre 0-5."<<endl;
cout<<"2- Alumno con calificion entre 6-7."<<endl;
cout<<"3- Alumno con calificion entre 7-8. "<<endl;
cout<<"4- Alumno con calificion entre 8-9. "<<endl;
cout<<"5- Alumno con calificion entre 9-10. "<<endl;
cout << "Dime que calicicacion tiene el alumno "<<i<<"? (del 1 al 5)" << endl;
cin>>op;
switch (op)
{
 case 1:
 {
  rep++;
 
 }
break;
 case 2:
 {
  su++;
  
 }
break;
 case 3:
 {
  reg++;
 }
break;
case 4:
 {
 	bu++;
 }
 break;
 case 5:
 {
 	ex++;
 }
 break;
 default:
 {
 cout<<"Esa opcion no existe "<<endl;   
 }
}
}
cout<<endl<<endl;
cout<<"Estos son los resultados de las calificaciones del grupo: "<<endl;
cout<<"Hay "<<rep<<" Reprobados."<<endl;
cout<<"Hay "<<su<<" alumnos con calificaion de 6-7."<<endl;
cout<<"Hay "<<reg<<" alumnos con calificaion de 7-8."<<endl;
cout<<"Hay "<<bu<<" alumnos con calificaion de 8-9."<<endl;
cout<<"Hay "<<ex<<" alumnos con calificaion de 9-10."<<endl;
}



#include "estudiante.cpp"
#include<iostream>
#include<conio.h>

using namespace std;




int main(){
	
	string nombre, apellidos, curso;
	int codigo;
	float nota1, nota2, nota3, nota4,promedio;
	char op;

	do{
		fflush(stdin);
		cout<<"Ingrese el nombre del estudiante: ";
		getline(cin,nombre);
		cout<<"Ingrese los apellidos del estudiante: ";
		getline(cin,apellidos);
		cout<<"Ingrese el nombre del curso al que pertenece el estudiante: ";
		getline(cin,curso);
		cout<<"Ingrese el codigo del estudiante: ";
		cin>>codigo;
		system("cls");
	
		cout<<"-----Notas-----";
		cout<<"\nIngrese la nota numero 1: ";
		cin>>nota1;
		cout<<"\nIngrese la nota numero 2: ";
		cin>>nota2;
		cout<<"\nIngrese la nota numero 3: ";
		cin>>nota3;
		cout<<"\nIngrese la nota numero 4: ";
		cin>>nota4;
	
		Estudiante obj = Estudiante(nombre,apellidos,curso,codigo,nota1,nota2,nota3,nota4);
	
		system("cls");
		promedio = obj.promediar();
		obj.mostrar();
		
		cout<<"\n";
		if(nota1>60){
			cout<<"Nota numero 1 "<<"["<<nota1<<"]"<< "aprobada"<<endl;
		}else{
			cout<<"Nota numero 1 "<<"["<<nota1<<"]"<< "reprobada"<<endl;
		}
		if(nota2>60){
			cout<<"Nota numero 2 "<<"["<<nota2<<"]"<< "aprobada"<<endl;
		}else{
			cout<<"Nota numero 2 "<<"["<<nota2<<"]"<< "reprobada"<<endl;
		}
		if(nota3>60){
			cout<<"Nota numero 3 "<<"["<<nota3<<"]"<< "aprobada"<<endl;
		}else{
			cout<<"Nota numero 3 "<<"["<<nota3<<"]"<< "reprobada"<<endl;
		}
		if(nota4>60){
			cout<<"Nota numero 4 "<<"["<<nota4<<"]"<< "aprobada"<<endl;
		}else{
			cout<<"Nota numero 4 "<<"["<<nota4<<"]"<< "reprobada"<<endl;
		}
		getch();
		system("cls");
		cout<<"Desea agregar otro estudiante? (s/n): ";
		cin>>op;
		system("cls");
		
	}while(op =='s' or op =='S');
	

	return 0;
	getch();
}

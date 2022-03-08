#include<iostream>
#include<conio.h>

using namespace std;


//Código, nombres, apellidos, Curso ,nota1, nota2, nota3, nota4 


class Estudiante{
			// atributos
	protected : string nombres, apellidos, curso;
				int codigo;
				float nota1, nota2, nota3, nota4,promedio;
				
			// metodos
	public : 
			//constructor
				Estudiante(string name, string lastname, string course,int cod, float n1, float n2, float n3, float n4){
					nombres = name;
					apellidos = lastname;
					curso = course;
					nota1 = n1;
					nota2 = n2;
					nota3 = n3;
					nota4 = n4;
					codigo = cod;
				}
	void mostrar(){
		cout<<"Notas: "<<"|"<<nota1<<"|"<<nota2<<"|"<<nota3<<"|"<<nota4<<"|"<<endl;
		cout<<"Nombre: "<<nombres<<endl;
		cout<<"Apellidos: "<<apellidos<<endl;
		cout<<"Curso: "<<curso<<endl;
		cout<<"Promedio: "<<promedio;
		
	}
	void agregar();
	
	float promediar(){
		float suma = nota1+nota2+nota3+nota4;
		promedio = suma/4;
		return promedio;
	}
};

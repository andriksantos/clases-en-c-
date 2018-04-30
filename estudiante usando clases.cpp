#include<iostream>
#include<string>

using namespace std;

// 1. definimos la clase...
class Nota{
public:
	//declaracion de variables con el tipo de dato correspondiente....
	  int nota1,nota2,nota3;
	  string nombre;
	  long long numero_cuenta;

	  //creamos las funciones
	  void PedirDatos(){
	  cout<<"******Promedio de nota del alumno***********"<<endl<<endl;
	  cout<<"Ingrese el nombre del estudiante.........:";
	  cin>>nombre;
	  cout<<"Ingrese el numero de cuenta del alumno...:";
	  cin>>numero_cuenta;
   	  cout<<endl;

	  cout<<"*******Calculo del promedio******"<<endl;
	  cout<<"Ingrese la nota 1....:";
	  cin>>nota1;
	  cout<<"Ingrese la nota 2....:";
	  cin>>nota2;
	  cout<<"Ingrese la nota 3....:";
	  cin>>nota3;
	  cout<<endl;
  	}
	  //aqui tenemos otra funcion / aqui se hace el calculo del promedio
	  int CalcularPromedio(void){
   	  return ( nota1 + nota2 + nota3) /3;
	  }

	  //aqui otra funcion
	  void MostrarDatos(){
	  cout<<"El nombre del estudiante es......:"<<nombre<<endl;
	  cout<<"El ID del estudiante es..........:"<<numero_cuenta<<endl;
	  cout<<"El promedio del  estudiante es...:"<<CalcularPromedio()<<endl;
	  cout<<endl;
	  cout<<"Gracias que tenga buen dia........"<<endl<<endl;
}
};

	  //declaramos el main
	int main(){
	//nombre de la clase y un identificador..........
	Nota alumno;
	alumno.PedirDatos();
	alumno.CalcularPromedio();
	alumno.MostrarDatos();


 	system("PAUSE");
	return 0;
}

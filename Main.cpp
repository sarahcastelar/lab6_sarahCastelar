#include <iostream>
#include <string>
#include "Empleados.h"
#include "Empresas.h"
#include "Estudiante.h"
#include "Grande.h"
#include "Mediana.h"
#include "Micro.h"
#include "Pasantes.h"
#include "Persona.h"
#include "Eliminados.h"
#include <vector>
using std::vector;
using std::cout;
using std::endl;
using std::cin;
using std::string;


//vector<Ingredientes*> listaIngredientes;
//vector<Platos*> listaPlatos;
Estudiante* e;
vector<Estudiante*> vectorEstudiantes;
vector<string*> vectorCarreras;

Empresas* empre;
vector<Empresas*> vectorEmpresas;

Persona* p;
vector<Persona*> vectorPersonas;

Pasantes* pasantes1;
Empleados* empleados;
vector<Pasantes*> vectorPasantes;
vector<Empleados*> vectorEmpleados;

vector<Persona*> vectorEliminados;

void Admin();
void crearEstudiantes();
void crearMicro();
void EliminarGente();



int menu (){
   int opcion = 0;
   while (true){
  	cout<<"\n \n-----BIENVENIDO-------" << endl
	<< "1. Modo Admin (agregar estudiantes a empresas)" << endl
	<< "2. Crear Estudiantes" << endl
    << "3. Crear MicroEmpresas"<<endl
    << "4. Agregar Proveedores"<<endl
    <<"5. Eliminar Empleados/Pasantes de Una Empresa"<<endl
    <<"6. Mostrar informacion de Empresas:"<<endl
    <<"7. Mostrar historial del Eliminados"<<endl
    <<"8. Salir"<<endl;
	cin >> opcion;

	if (opcion < 1 || opcion > 8)
	   cout<<"Opcion incorrecta, intente de nuevo."<<endl;
	else 
	   return opcion;
}
}

int main (){
	int opcion = 0;
	while (opcion != 8){
		switch (opcion = menu()){
			case 1:
                if (vectorEmpresas.size()!=0 || vectorEmpleados.size()!=0)
				    Admin();
                else 
                    cout<<"Tiene que agregar empresas y estudiantes primero."<<endl;
			break;

			case 2:
				crearEstudiantes();
			break;

            case 3:
                crearMicro();
            break;

            case 4:
                cout<<"No lo termine :("<<endl;
            break;

            case 5:
                EliminarGente();
            break;

            case 6:
                for (int i = 0; i < vectorEmpresas.size(); i++){
                    cout<<"Info Empresa #"<<i<<endl;
                    vectorEmpresas[i]->toString();
                }
            break;

            case 7:
                
                for (int i = 0; i < vectorEliminados.size(); i++){
                    cout<<"Info Eliminado: #"<<i<<endl;
                    vectorEliminados[i]->toString();
                }
            break;

		}
	 }
	return 0;
};

void Admin(){
//agregar estudiantes a las empresas

    //filtrar estudiantes por carreras
    string tempCarrera="";
    int c = 0, numEstudiante =-1, numEmpresa=-1,trabajador =-1;

   for(int i = 0; i < vectorEstudiantes.size(); i++){
        tempCarrera = vectorEstudiantes[i]->getCarrera();
        for (int j= 0; j < vectorEstudiantes.size(); j++){
            if (vectorEstudiantes[j]->getCarrera() == tempCarrera){
                cout<<c<<". "<<vectorEstudiantes[j]->getNombre()<<endl;
                c++;
            }
        }
    }

    cout<<"Ingrese numero de estudiante a reclutar: "<<endl;
    cin>>numEstudiante;

    //escoger empresa a meterlo
    for(int i = 0; i < vectorEmpresas.size(); i++){
        cout<<i<<". "<<vectorEmpresas[i]->getNombreEmpresa()<<endl;
        cout<<"hola";
    }
    cout<<"Que numero de empresa escoge?"<<endl;
    cin>>numEmpresa;
    cout<<"Se va reclutar como pasante o empleado?"<<endl;
    cout<<"Ingrese 1 si es pasante, Ingrese 2 si es empleado."<<endl;
    cin>>trabajador;
    while (trabajador < 1 || trabajador >2){
        cout<<"Dato incorrecto. Ingrese numero otra vez."<<endl;
        cin>>trabajador;
    }

    int edad;
    string nombre, id, sexo, nacionalidad;
        nombre = vectorEstudiantes[numEstudiante]->getNombre();
        id = vectorEstudiantes[numEstudiante]->getId();
        sexo = vectorEstudiantes[numEstudiante]->getSexo();
        nacionalidad = vectorEstudiantes[numEstudiante]->getNacionalidad();
        edad = vectorEstudiantes[numEstudiante]->getEdad();

    if (trabajador == 1){ //SI ES PASANTE.;
        string idPasante;
        int duracionPasantia;

        cout<<"Ingrese id del pasante: "<<endl;
        cin>>idPasante;
        cout<<"Ingrese en entero duracion de la pasantia: "<<endl;
        cin>>duracionPasantia;
        vectorEmpresas[numEmpresa]->setPasantes(new Pasantes(nombre, id, edad, sexo, nacionalidad, duracionPasantia, idPasante));
        cout<<"Pasante agregado exitosamente. "<<endl;
    }else {//SI ES EMPLEADO.
        string idEmpleado;
        float salario;

        cout<<"Ingrese salario del empleado: "<<endl;
        cin>>salario;
        cout<<"Ingrese id empleado: "<<endl;
        cin>>idEmpleado;
        vectorEmpresas[numEmpresa]->setEmpleados(new Empleados(nombre, id, edad, sexo,nacionalidad,salario,idEmpleado));
        cout<<"Empleado agregado existosamente."<<endl;
    }

    //ahora llamar al metodo que valide cuantos empleados tiene la empresa.. si es mas de 5 que crezca y asi
}



//string pNombre, string pId, int pEdad, string pSexo, string pNacionalidad
/*
indiceAcademico = pIndice;
    carrera = pCarrera;
    universidad = pUniversidad;
    numeroCuenta 
*/
void crearEstudiantes(){
    string nombre, id, sexo, nacionalidad, carrera, universidad, numeroCuenta;
    int edad, indice;

    cout<<"Ingrese nombre del estudiante: "<<endl;
    cin>>nombre;
    cout<<"Ingrese ID del estudiante: "<<endl;
    cin>>id;
    cout<<"Ingrese edad del estudiante: "<<endl;
    cin>>edad;
    cout<<"Ingrese sexo del estudiante: [femenino/masculino]"<<endl;
    cin>>sexo;
    cout<<"Ingrese nacionalidad: "<<endl;
    cin>>nacionalidad;
    cout<<"Ingrese Indice Academico: "<<endl;
    cin>>indice;
    cout<<"Ingrese Carrera: "<<endl;
    cin>>carrera;
    cout<<"Ingrese univerisad: "<<endl;
    cin>>universidad;
    cout<<"Ingrese numero de cuenta del estudiante: "<<endl;
    cin>>numeroCuenta;

    
    e = new Estudiante(nombre, id, edad, sexo, nacionalidad, indice, carrera,universidad,numeroCuenta);
    vectorEstudiantes.push_back(e);
    cout<<"Estudiante creado exitosamente."<<endl;

}

void crearMicro(){
    //(string nombreEmpresa, string fechaCreacion, string rubroEmpresa, int numPermiso, 
    //Persona* vectorTrabajadores, string pDueno):
    string nombre, fecha, rubro, dueno;
    int numPermiso;
    char r = 's';
    cout<<"Ingrese nombre de empresa: "<<endl;
    cin>>nombre;
    cout<<"Ingrese fecha de creacion [dd/mm/yyyy]"<<endl;
    cin>>fecha;
    cout<<"Ingrese rubro empresa: "<<endl;
    cin>>rubro;
    cout<<"Ingrese numero de permiso: "<<endl;
    cin>>numPermiso;
    cout<<"Ingrese nombre dueno: "<<endl;
    cin>>dueno;

    //string nombreEmpresa, 
    //string fechaCreacion, string rubroEmpresa, int numPermiso, Persona* vectorTrabajadores, string pDueno
    cout<<"Para agregar pasantes o empleados a su empresa, entre a la opcion admin."<<endl;
    vectorEmpresas.push_back(new Micro(nombre,fecha,rubro,numPermiso,dueno));
    cout<<"Micro empresa creada exitosamente."<<endl;
}

void EliminarGente(){

    //escoger empresa de donde eliminar
    int numEmpresa, trabajador, numEmpleado;
    for(int i = 0; i < vectorEmpresas.size(); i++){
        cout<<i<<". "<<vectorEmpresas[i]->getNombreEmpresa()<<endl;
    }
    cout<<"Que numero de empresa escoge?"<<endl;
    cin>>numEmpresa;

    cout<<"Ingrese numero del empleado que va eliminar: "<<endl;
    for (int i = 0; i < vectorEmpresas.size(); i++){
        cout<<i<<". "<<vectorEmpresas[i]->getPersonas(i)<<endl;   
    }
    cin>>numEmpleado;

    //guardar info de la persona eliminada antes de eliminar.
    int edad;
    string nombre, id, sexo, nacionalidad;
        nombre = vectorEmpresas[numEmpleado]->getPersonas(numEmpleado)->getNombre();
        id = vectorEmpresas[numEmpleado]->getPersonas(numEmpleado)->getId();
        sexo = vectorEmpresas[numEmpleado]->getPersonas(numEmpleado)->getSexo();
        nacionalidad = vectorEmpresas[numEmpleado]->getPersonas(numEmpleado)->getNacionalidad();
        edad = vectorEmpresas[numEmpleado]->getPersonas(numEmpleado)->getEdad();

     vectorEliminados.push_back(new Eliminados(nombre, id, edad, sexo, nacionalidad));
    vectorEmpresas.erase(begin(vectorEmpresas)+numEmpleado);
    cout<<"Empleado/Pasante eliminado correctamente."<<endl;

}

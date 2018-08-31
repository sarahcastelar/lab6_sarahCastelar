main.o:	Eliminados.o Empleados.o Empresas.o Estudiante.o Grande.o Mediana.o Micro.o Pasantes.o Persona.o
	g++ Eliminados.o Empleados.o Empresas.o Estudiante.o Grande.o Mediana.o Micro.o Pasantes.o Persona.o -o main
	rm *.o

main.o:	Main.cpp Eliminados.h Empleados.h Empresas.h Estudiante.h Grande.h Mediana.h Micro.h Pasantes.h Persona.h
	g++ -c Main.cpp

Eliminados.o:	Eliminados.h Eliminados.cpp
	g++ -c Eliminados.cpp

Empleados.o:	Empleados.h Empleados.cpp
	g++ -c Empleados.cpp

Empresas.o:	Empresas.h Empleados.h Pasantes.h Empresas.cpp Empleados.cpp Pasantes.cpp
	g++ -c Empresas.cpp

Estudiante.o:	Estudiante.h Estudiante.cpp
	g++ -c Estudiante.cpp

Grande.o: Grande.h Grande.cpp
	g++ -c Grande.cpp

Mediana.o:	Mediana.h Mediana.cpp
	g++ -c Mediana.cpp

Micro.o:	Micro.h Micro.cpp
	g++ -c Micro.cpp

Pasantes.o:	Pasantes.h Pasantes.cpp
	g++ -c Pasantes.cpp

Persona.o:	Persona.h Persona.cpp
	g++ -c Persona.cpp
//Codigo principal para el trabajo


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void menulogin();
void menurecepcionista();
void menudoctor();
void menuadministracion();


struct fecha
{
    int dia;
    int mes;
    int year;
};

struct usuario //struct para logueo de usuarios
{
  user char[20];
  pasword char[20];
};


struct asistente //asistente es de lvl 3
{
  user char[20];
  pasword char[20];
  apynom char[60];
  int dni;
  char telefono[25];
  int lvl;
};

struct veterinario // veterinario es de lvl 2
{
  char user[20];
  char pasword[20];
  char apynom[60];
  int matricula;
  int dni;
  char telefono[25];
  int lvl;
};

struct administracion //administracion es de lvl 1
{
  user char[20];
  pasword char[20];
  apynom char[60];
  int dni;
  char telefono[25]
  int lvl;
};

struct mascota
{
  char apynom[60];
  char domicilio[60];
  char localidad[60];
  fecha Nacimiento;
  int dni_owner; //propietario o dueño es lo mismo
  int peso;
  char telefono[25];
};


struct turno
{
  int matriculaveterinario;
  fecha Fecha;
  int dni_owner;
  char detalleatencion[380];
};

int main()
{





  return 0;
}


void menulogin()
{
prinf("Login");
printf("---------------------");
printf("1. Iniciar sesion");
printf("2. Registrarse"); //opcion para la primera vez nada mas
printf("3. Salir");
printf("\n\nIngrese una opcion: ");

}


void menurecepcionista()
{

printf("");
printf("");
printf("");

}

void menudoctor()
{

printf("");
printf("");
printf("");

}

void menuadministracion()
{

  printf("");
  printf("");
  printf("");

}

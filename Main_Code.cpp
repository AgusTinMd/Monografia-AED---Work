//Codigo principal para el trabajo


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void comprobacion(); //comprobacion para los archivos
void menulogin();
void modulorecepcionista();
void modulodoctor();
void moduloadministracion();
void loguin();


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
  int lvl;
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


   comprobacion();

   /* Empiezan las funciones, el login primero, decidi hacerlo todo en la funcion para
   evitar tener muchas cosa en el main */

   menulogin();



  return 0;
}


void menulogin()
{

 int opc;


  do
  {
    prinf("Login");
    printf("---------------------");
    printf("1. Iniciar sesion");
    printf("2. Registrarse"); //opcion para la primera vez nada mas
    printf("3. Salir");
    printf("\n\nIngrese una opcion: ");
    scanf("%d",&opc);

    if(opc>3 || opc<1)
    {

     printf("Valor %d invalido, intente nuevamente con otro valor",opc);
      break;
    }

      switch(opc)
      {
        case 1:
        {
          system("cls");
          loguin();
          break;
        }
        case 2:
        {

          break;
        }
        case 3:
        {

          break;
        }
      }


  } while(opc!=3);


}

void loguin()
{

usuario loguer;
usuario aux;
bool bandera=0;
int opc;

FILE *user;
user=fopen("usuarios.dat","a+b");

if(user==NULL)
{
   printf("\nNo se puedo abrir el archivo de usuarios");
}

do
{

   printf("Usuario: ");
   gets(loguer.user);
   printf("\nContraseña: ");
   gets(loguer.pasword);


   fread(&aux,sizeof(usuario),1,user);


      while(!feof(user) /*|| bandera=1*/ )
      {

        if(loguer.user==aux.user && loguer.pasword==aux.pasword)
        {
          //bandera=1;
             if(aux.lvl==1)
             {

                  moduloadministracion();

             }
             if(aux.lvl==2)
             {

                  modulodoctor();

             }
             if(aux.lvl==3)
             {

                  modulorecepcionista();

             }


         break;
        }

            fread(&aux,sizeof(usuario),1,user);

      }

      printf("\nUsuario y contraseña no encontrados");
      printf("Desea intentar nuevamente?\nIngrese 1 para SI y 0 para NO");
      printf("Opcion: ");
      scanf("%d",&opc);

}while(opc!=0);

}


void modulorecepcionista()
{

printf("");
printf("");
printf("");

}

void modulodoctor()
{

printf("");
printf("");
printf("");

}

void moduloadministracion()
{

  printf("");
  printf("");
  printf("");

}

void comprobacion()
{
  //creacion de archivos para la primera vez, es una comprobacion
  FILE *user;
	user=fopen("usuarios.dat","a+b");
	if (user==NULL)
	{
		printf ("Error al crear o abrir el archivo de usuarios");
		exit(1);
	}
	fclose(usuario);

  FILE *admi;
	admi=fopen("administracion.dat","a+b");
	if (admi==NULL)
	{
		printf ("Error al crear o abrir el archivo de administracion");
		exit(1);
	}
	fclose(admi);

  FILE *asist;
  asist=fopen("asistente.dat","a+b");
  if (user==NULL)
  {
    printf ("Error al crear o abrir el archivo asistentes");
    exit(1);
  }
  fclose(asist);

  FILE *veterinarios;
	veterinarios=fopen("veterinarios.dat","a+b");
	if (user==NULL)
	{
		printf ("Error al crear o abrir el archivo veterinarios");
		exit(1);
	}
	fclose(veterinarios);

}


#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include <string>
#include <fstream>
using namespace std;


void crear_disco(string direccion){
 FILE *Archivo; //CREAR UNA VARIABLE DE TIPO ARCHIVO
 std::string str = direccion;
    const char *c = str.c_str();
    Archivo = fopen(c,"wb"); // ABRIMOS EL ARCHIVO EN FORMA WRITE BYTES
    if (Archivo==NULL){ //COMPROBAR SI EL ARCHIVO EXISTE
        cout<<"El archivo no pudo ser creado\n";
      
    }
    fclose(Archivo); //CERRAMOS


}


int main() {

   int entrada;
   fstream archivo;
   bool boleano= true;
   string ruta;
   string texto;
    do{
      cout << "1.Ingresar ruta entrada" <<endl;
      cout << "2.Salir" <<endl;
      cin >> entrada;
      switch (entrada)
      {
      case 1:
       
        cout << "Escriba ruta: " <<endl;
        cin >> ruta;
        archivo.open(ruta,ios::in);
        if(archivo.fail()){
        cout<< "Error al abrir el archivo"<<endl;

        } 
        else{
          while(!archivo.eof()){

           getline(archivo,texto);
           cout<<texto<<endl;
           cout<<"aaaaaaaaaaaaaaaaaaaaaaaaaaaaa" <<endl;


          }
         archivo.close();


        }

        break;
      
      default:
       boleano=false;
       cout << "Saliendo " <<endl;
        break;
      }
    }
    while(boleano);
    return 0;
}


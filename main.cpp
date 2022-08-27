
#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>
#include <fstream>

#include <bits/stdc++.h>
using namespace std;


bool validar_numero(string str){
 
string numeros[10] ={"0","1","2","3","4","5","6","7","8","9"};
for(int i=0;i<10;i++){
if(str==numeros[i]){

return  true;

}


}

return false;
}

bool validar_letra(string str){
string alfabeto[54]={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","Ñ","O","P","Q","R","S","T","U","V","W","X","Y","Z","a","b","c","d","e","f","g","h","i","j","k","l","m","n","ñ","o","p","q","r","s","t","u","v","w","x","y","z"};
for (int i=0;i<54;i++){
if(str==alfabeto[i]){
return true;


}



}
return false;

}



string adisco_MK(string palabra){
std::string s = palabra;
char arr[s.length() + 1]; 
int x=0;
string lexema="";
int estado =0;
	strcpy(arr, s.c_str()); 
    cout<<"String to char array conversion:\n";
	 
  
   while(x<s.length()){
    
    string tmp_string;
    tmp_string.push_back(arr[x]);

    if (estado==0){
    if(tmp_string=="m" || tmp_string=="M"){
   
    lexema+=tmp_string;
    estado=1;
    }


    }
    else if(estado==1){
      if(tmp_string=="k" || tmp_string=="K"){
   
           lexema+=tmp_string;
           estado=2;
          }
        
    }
    else if(estado==2){
      if(tmp_string=="d" || tmp_string=="D"){
   
           lexema+=tmp_string;
           estado=3;
          }



    }
     else if(estado==3){
      if(tmp_string=="i" || tmp_string=="I"){
   
           lexema+=tmp_string;
           estado=4;
          }



    }
     else if(estado==4){
      if(tmp_string=="s" || tmp_string=="S"){
   
           lexema+=tmp_string;
           estado=5;
          }



    }
      else if(estado==5){
      if(tmp_string=="k" || tmp_string=="K"){
   
           lexema+=tmp_string;
           estado=6;
          }



    }
    else if(estado==6){
     return lexema;



    }


    
    
   
   x+=1;
   }
 return "error";

}

string disco_tamaño(string palabra){
std::string s = palabra;
char arr[s.length() + 1]; 
int x=0;
string lexema="";
int estado =0;
string tamaño=""; 
strcpy(arr, s.c_str()); 
   while(x<s.length()){
    
    string tmp_string;
    tmp_string.push_back(arr[x]);
    if(estado==0){
    if(tmp_string=="-"){
    lexema+=tmp_string;
    estado=1;
    

    } 


    }
    else if(estado==1){
    if(tmp_string=="s"||tmp_string=="S"){
     lexema+=tmp_string;
     estado=2;


    }
    else{
    lexema="";
    estado=0;


    }


    }
    else if (estado==2){
    if(tmp_string=="-"){
    lexema+="-";
    estado=3;


    }


      
    }

   else if(estado==3){
   if(tmp_string==">"){
   lexema+=tmp_string;
   estado=4;

   }

   }
   else if(estado==4){
   if(validar_numero(tmp_string)){
   tamaño+=tmp_string;
   lexema+=tmp_string;


   }
   else if(tmp_string==" " || x+1==s.length()){
   return tamaño;


   }



   }

    x++;
   }


return "error";

}
string particion_disco(string palabra){
std::string s = palabra;
char arr[s.length() + 1]; 
int x=0;
string lexema="";
int estado =0;
string particion=""; 
strcpy(arr, s.c_str());
 while(x<s.length()){
 string tmp_string;
 tmp_string.push_back(arr[x]);
 if(estado==0){
 if(tmp_string=="-"){
 lexema+=tmp_string; 
 estado=1;
 }



 }
 else if(estado==1){
 if(tmp_string=="F"||tmp_string=="f"){
 lexema+=tmp_string;
 estado=2;

 }
 else{
 lexema="";
 estado=0;

 }


 }

 else if(estado==2){
 if(tmp_string=="-"){
 lexema+=tmp_string;
 estado=3;

 }


 }
 else if(estado==3){
 if(tmp_string==">"){
  lexema+=tmp_string;
  estado=4;


 }




 }

 else if(estado==4){
 if(tmp_string=="B"||tmp_string=="b"){
 lexema+=tmp_string;
 particion+=tmp_string;
 estado=5;
 }
 else if(tmp_string=="F"||tmp_string=="f"){
 lexema+=tmp_string;
 particion+=tmp_string;
 estado=6;
 }
 else if(tmp_string=="w"||tmp_string=="W"){
 lexema+=tmp_string;
 particion+=tmp_string;
 estado=7;
 }

 }
 else if(estado==5){
 if(tmp_string=="F"||tmp_string=="f"){
lexema+=tmp_string;
 particion+=tmp_string;
 estado=8;

 }   



 }
  else if(estado==6){
 if(tmp_string=="F"||tmp_string=="f"){
lexema+=tmp_string;
 particion+=tmp_string;
 estado=8;

 }   



 }
  else if(estado==7){
 if(tmp_string=="F"||tmp_string=="f"){
lexema+=tmp_string;
 particion+=tmp_string;
 estado=8;

 }
if(x+1==s.length()){
return particion;

 }   



 }
  else if(estado==8){
 return particion;


 }

 
 x++;

 }
 return "error";


}


string unidades_disco(string palabra){
std::string s = palabra;
char arr[s.length() + 1]; 
int x=0;
string lexema="";
int estado =0;
string particion="";
string numero=""; 
strcpy(arr, s.c_str());
while(x<s.length()){
 string tmp_string;
 tmp_string.push_back(arr[x]);

 if (estado==0){
 if(tmp_string=="-"){
 lexema+=tmp_string; 
 estado=1;
 }

 }
 else if(estado==1){
  if(tmp_string=="u"||tmp_string=="U"){
 lexema+=tmp_string; 
 estado=2;
 }
 else{
 estado=0;
 lexema="";

 }
 }
 else if(estado==2){
 if(tmp_string=="-"){
 lexema+=tmp_string; 
 estado=3;
 }
 }
 else if(estado==3){
 if(tmp_string==">"){
 lexema+=tmp_string; 
 estado=4;
 }
 }
 else if(estado==4){
if(tmp_string=="k"||tmp_string=="K"){
lexema+=tmp_string;
 numero+=tmp_string; 
 estado=5;
}
else if(tmp_string=="m"||tmp_string=="M"){
lexema+=tmp_string;
 numero+=tmp_string; 
 estado=6; 

}

if(x+1==s.length()){
return numero;


}


 }

 else if(estado==5 || estado==6){
 return lexema;


 }



x++;
 }
 



return "error";

}


string path_disco(string palabra){
std::string s = palabra;
char arr[s.length() + 1]; 
int x=0;
string lexema="";
int estado =0;
string particion="";

strcpy(arr, s.c_str());
while(x<s.length()){
 string tmp_string;
 tmp_string.push_back(arr[x]);
 if(estado==0){
 if(tmp_string=="-"){
 lexema+=tmp_string;
 estado=1;


 }


 }

 else if(estado==1){
 if(tmp_string=="P"||tmp_string=="p"){
 lexema+=tmp_string;
 estado=2;

 }
 else{
 lexema="";
 estado=0;

 }


 }
 else if(estado==2){
 if(tmp_string=="a"||tmp_string=="A"){
 lexema+=tmp_string;
 estado=3;

 }


 }
 else if(estado==3){
  if(tmp_string=="t"||tmp_string=="T"){
 lexema+=tmp_string;
 estado=4;

 }


 }
  else if(estado==4){
  if(tmp_string=="h"||tmp_string=="H"){
 lexema+=tmp_string;
 estado=5;

 }
  

 }
else if(estado==5){
  if(tmp_string=="-"){
 lexema+=tmp_string;
 estado=6;

 }


 }
  else if(estado==6){
  if(tmp_string==">"){
 lexema+=tmp_string;
 estado=7;

 }


 }
 else if(estado==7){
  if(tmp_string=="/"){
 lexema+=tmp_string;
 estado=8;

 }



 }
  else if(estado==8){
  if(validar_letra(tmp_string)){
 lexema+=tmp_string;
 estado=9;

 }


 }
   else if(estado==9){
  if(validar_letra(tmp_string)||tmp_string=="_"||validar_numero(tmp_string)){
 lexema+=tmp_string;
 estado=10;

 }
 else if(tmp_string=="."){
 lexema+=tmp_string;
 estado=11;


 }


 }
 else if(estado==10){
 if(validar_letra(tmp_string)||tmp_string=="_"||validar_numero(tmp_string)){
 lexema+=tmp_string;

 }
 else if(tmp_string=="."){
 lexema+=tmp_string;
 estado=11;

 }
else if(tmp_string=="/"){
 lexema+=tmp_string;
 estado=9;

}


 }
else if(estado==11){
if(tmp_string=="D"||tmp_string=="d"){
lexema+=tmp_string;
estado=12;

}



}
else if(estado==12){
if(tmp_string=="s"||tmp_string=="S"){
lexema+=tmp_string;
estado=13;

}



}

else if(estado==13){
if(tmp_string=="k"||tmp_string=="K"){
lexema+=tmp_string;
estado=14;

}
if(x+1==s.length()){

return lexema;
}

}

else if(estado==14){
return lexema;

}

x++;
}

return "error";
}









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
           cout<<path_disco(texto)<<endl;
           
           
          


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


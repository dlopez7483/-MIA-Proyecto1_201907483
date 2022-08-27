%{ 
   #include<stdio.h> 
   int yylex(void);
   void yyerror(char *s);
   FILE *yyin;
%} 
  
%token NUMBER MKDISK PARTICIONES UNIDADES PATH ID TAMANIO FIT UNIDAD
  


  
/* Rule Section */
%% 
  
Init 
   : Lista {
      return 0;
   }
;

Lista
: Lista Comando
| Comando
;

Comando 
: MKDISK propiedades 
;
propiedades
: TAMANIO NUMBER UNIDADES UNIDAD PARTICIONES FIT PATH direccion 
;

direccion
: direccion ID
| ID
;



%% 
  

void parse(FILE *file) { 
   yyin = file;
   yyparse();
   fclose(yyin);
} 
  
void yyerror(char *s) { 
   printf("\n%s\n", s); 
}
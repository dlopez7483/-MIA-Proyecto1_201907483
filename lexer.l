%{ 
  #include<stdio.h> 
  #include "y.tab.h" 
  void yyerror(char *);
%} 

%option noyywrap

DIGIT   [0-9]
NUM     {DIGIT}+
EXTENSION "."{LETRA}+
LETRA [a-b]
ID   ("/")?{LETRA}+["_"0-9A-Z]*{EXTENSION}?
FIT      ["wb"|"bf"|"ff"]?
UNIDAD   ["K"|"M"]?

/* Rule Section */
%% 
{NUM}               { yylval=atoi(yytext); return NUMBER; } 
"mkdisk"            { return MKDISK; }
"-f->"                { return PARTICIONES; }
"-u->"                 { return UNIDADES; }
"-path->"                {return PATH; }
"/"                     { return *yytext; }
[ \t\r\n]              {}
{ID}                  { return ID; }
"-s->"                  {return TAMANIO;}
{FIT}                   {return FIT;}
{UNIDAD}                 {return UNIDAD;}
.                     yyerror("Unknown character");
%%
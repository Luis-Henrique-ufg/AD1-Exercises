/* ============================================================================

    Linguagem C, o curso definitivo
    Módulo 8 Aula 0
    Ponteiros
    
    Autor: Dr. Eng. Wagner Rambo
    Data:  Junho de 2021

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>
#include "macros.c"
              

/* ========================================================================= */
/* --- Função Principal --- */
int main(void)
{
  short *ptr, var1, var2, upt=0;      
                             
  var1 =    0;          
  ptr  = NULL;          
  var2 =    0;
  
  while(1)
  {
    system("cls");
    mapA;
    mapB;

    printf("var2,var1: ");
    scanf("%hd%*c%hd",&var2,&var1);
    
    system("cls");
    mapA;
    mapB;
  
    printf("ptr: \n");
    printf("1. aponta para var1\n");
    printf("2. aponta para var2\n");
    printf(">>> ");
    scanf("%hd",&upt);
    
    if(upt==1)
      ptr = &var1;
    else
      ptr = &var2;
    
    system("cls");  
    mapA;
    mapB;  
      
    printf("*ptr: ");
    scanf("%hd",ptr);
    
  }  

  
  system("PAUSE");	                             /* pausa execução (Pressione qualquer tecla para continuar . . .) */
  return 0;                                      /* retorna 0, se main for executada corretamente */
  
} /* end main */

 
/* ============================================================================  
                                                              
                                       _                      
                                      / \                     
                                     |oo >                    
                                     _\=/_                    
                    ___         #   /  _  \   #               
                   /<> \         \\//|/.\|\\//                
                 _|_____|_        \/  \_/  \/                 
                | | === | |          |\ /|                    
                |_|  0  |_|          \_ _/                    
                 ||  0  ||           | | |                    
                 ||__*__||           | | |                    
                |* \___/ *|          []|[]                    
                /=\ /=\ /=\          | | |                    
________________[_]_[_]_[_]_________/_]_[_\_______________________________
                                                              
                                                              
============================================================================ */
/* --- Final do Programa --- */


/*

  EXEMPLOS DA AULA
  
  short *ptr, var1, var2, upt=0;      
                             
  var1 =    0;          
  ptr  = NULL;          
  var2 =    0;
  
  while(1)
  {
    system("cls");
    mapA;
    mapB;

    printf("var2,var1: ");
    scanf("%hd%*c%hd",&var2,&var1);
    
    system("cls");
    mapA;
    mapB;
  
    printf("ptr: \n");
    printf("1. aponta para var1\n");
    printf("2. aponta para var2\n");
    printf(">>> ");
    scanf("%hd",&upt);
    
    if(upt==1)
      ptr = &var1;
    else
      ptr = &var2;
    
    system("cls");  
    mapA;
    mapB;  
      
    printf("*ptr: ");
    scanf("%hd",ptr);
    
  }  

















*/

/* ============================================================================

    Linguagem C, o curso definitivo
    Módulo 7 Aula 5
    Título da Aula
    
    Autor: Dr. Eng. Wagner Rambo
    Data:  Junho de 2021

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>


/* ========================================================================= */
/* --- Protótipo das Funções --- */
int strlen(char *s);
int strvowel(char *s);
char *strcpy(char *dest,char *orig);
char *strcat(char *dest,char *orig);
char *strrev(char *str);
int strcmp(char *s1, char *s2);
int strnumb(char *s);


/* ========================================================================= */
/* --- Função Principal --- */
main()
{
   char str1[50] = "Linguagem C 1234";
   char str2[50] = "Kits";
   char com[50];
   
   printf("%d\n",strnumb(str1));
   
   while(1)
   {
     printf("Novo comando: ");
     gets(com);
     
     if(!strcmp(com,"BIP"))
      putchar('\a');
     else if(!strcmp(com,"CLS")) system("cls");
     else if(!strcmp(com,"OUT")) break; 
  
   }
   
   
  system("PAUSE");	                             /* pausa execução (Pressione qualquer tecla para continuar . . .) */
  return 0;                                      /* retorna 0, se main for executada corretamente */
  
} /* end main */


/* ========================================================================= */
/* --- Desenvolvimento das Funções --- */
int strlen(char *s)
{
  register int i=0;
  
  while(s[i]!='\0') 
    i++;
        
  return i;  
  
}

int strvowel(char *s)
{
  register int i=0,
           vowel=0;
  
  while(s[i]!='\0')
  {
                  
    switch(s[i])
    {
      case 'a':
      case 'A': 
      case 'e':
      case 'E':            
      case 'i':
      case 'I':           
      case 'o':
      case 'O': 
      case 'u':
      case 'U':      
        vowel++;        
    }               
    i++;               
                   
  }  
   
  return vowel;  
    
}


char *strcpy(char *dest,char *orig)
{
  register int i;
  
  for(i=0; orig[i]!='\0'; i++)
    dest[i] = orig[i];
    
  dest[i] = '\0';
  
  return dest;     
  
}


char *strcat(char *dest, char *orig)
{
  register int i=0, len=strlen(dest);
     
  while(dest[i+len] = orig[i])
    i++;
    
  return dest;     
  
}
    
    
char *strrev(char *str)
{
  register int i,len;
  char aux;
  
  for(i=0,len=strlen(str)-1; i<len; i++, len--)
  {
    aux=str[i];
    str[i] = str[len];    
    str[len] = aux;                       
                             
  }     
   
  return str;  
     
}



int strcmp(char *s1, char *s2)
{
  register int i=0;   
 
  while(s1[i]==s2[i] && s1[i]!='\0')
    i++;
    
  return((unsigned char)s1[i] - (unsigned char)s2[i]);
    
}

int strnumb(char *s)
{
  register int i=0, num=0;
  
   while(s[i]!='\0')  
   {
     i++;
     if(isdigit(s[i])) num++;
   }
   
   return num; 
     
}

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

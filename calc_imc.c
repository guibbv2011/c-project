#include <stdio.h>
#include <stdlib.h>


int main(){

  menu();

  return 0;
}


void calc(){
  
  float alt, altx2, peso, result;

  printf("\nInsira sua altura: \n");
    scanf("%f", &alt);
    setbuf(stdin, NULL);
    puts("Insira seu peso: ");
    scanf("%f", &peso);
    setbuf(stdin, NULL);
    altx2 = alt*alt;
    result = peso/altx2;
    printf("Seu IMC é %.2f\n", result);
    if(result < 18.5)
      printf("Você está magro. \n\n");

    else if(result > 18.5, result < 24.9)
      printf("Você está no seu peso ideal.\n\n");
    
    else if(result > 30, result < 39.9)    
      printf("Você está obeso.\n\n");    

    else if(result > 40)
      printf("Você está com obesidade morbida.\n\n");

    menu();

}

void menu(){
  
  int x;

    puts("---------------");
    puts("Calculadora IMC");
    printf("---------------\n\n");

    printf("1 - Calcular IMC\n");
    printf("2 - Sair\n\n");
    printf("Insira uma opção: \n");
    scanf("%i", &x);
    setbuf(stdin, NULL);
  

  switch (x)
    {
      case 1:
        calc();
        break;

      case 2:
        printf("\nFinalizando...\n\n");
        exit(0);
        break;

      default:
        printf("Comando invalido, tente novamente\n\n");
        break;
 
    } 
}

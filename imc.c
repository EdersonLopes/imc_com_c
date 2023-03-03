/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  char nome[50];
  int id = 0;
  float peso, altura = 0.0;
  printf ("Digite seu nome : ");
  scanf ("%s", &nome);
  printf ("Digite sua idade : ");
  scanf ("%d", &id);
  printf ("Digite seu peso : ");
  scanf ("%f", &peso);
  printf ("Digite sua altura : ");
  scanf ("%f", &altura);
  /* no codigo abaixo, ao pegar o dado da variavel, usei o %2.2f isso especifica quantos numeros terei
     antes e depois da virgula */
  printf ("%s, %d Anos, %2.1fkg, Altura %2.2f\n", nome, id, peso, altura);
  float imc = { peso / (altura * altura) };
  printf ("Seu imc C) : %2.2f\n", imc);
  if (imc <= 16.49)
    {
      printf ("Seu IMC estC!! abaixo da mC)dia, vai se tratar.");
    }
  if (imc > 16.49)
    {
      printf ("Parabens, seu IMC estC!! acima da mC)dia.");
    }






  return 0;
}

#include <stdbool.h>
#include <math.h>
#include <stdio.h>

// Fazer a array de numeros primos a ordenar
void fazArray(int array[]) {
     int qtd, num, c;
     printf("Quantos números quer ordenar, do menor para o maior?\n");
     scanf("%d", &qtd);
     if (qtd == 0) {
          printf("Não quer ordenar nada.\nAcabou");
     } else {
          printf("Coloque %d números para ordenar\n(O programa para quando introduzir 0(Zero))\n", qtd);
               //verificar se o numero colocado é primo ou nao
               for (c = 0; c < qtd; c++) {
               int cnt = 0;
                    scanf("%d", &num);
                    //printf("%d", num);
                    if (num <= 1) {
                         printf("%d is NOT prime\n", num);
                    }
                    else {
               // Check for divisors from 1 to n
                    for (int i = 1; i <= num; i++) {

                    // Check how many number is divisible by n
                         if (num % i == 0){
                         cnt++;
                         }
                    }
               }

                    // If n is divisible by more than 2 numbers then it is not prime
                    if (cnt > 2) {
                         printf("%d is NOT prime\n", num);
                    }
                    // else it is prime
                    else {
                    printf("%d is prime\n", num);
               }
                    array[c] = num;
          }       
     }
}

// Função para ordenar os numeros primos
void sort(int array[], int size) {
     for(int i = 0; i <  size - 1; i++)
     {
          for(int j = 0; j < size - i - 1; j++)
          {
               if(array[j] > array[j + 1]){
                    int temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
               }
          }
     }
}

// Função para imprimir a array ordenada
void printArray(int array[], int size) {
     for(int i = 0; i < size; i++) {
          printf("%d, ", array[i]);
     }
}

// Função principar = Programa
int main() {
     int array[10];
     int size = sizeof(array)/sizeof(array[0]);

     fazArray(array);
     sort(array, size);
     printArray(array, size);

     return 0;

   /*    
     Receber os números
          //? Verificar se são primos ou não
          //? Colocar os número na array
     Função para ordenar os números
     Output da array ordenada   
   */

     /* Introduzir um numero na posição X num array

    printf("Please enter the location where you want to insert an new element\n");
    scanf("%d", &position);
    
    printf("Please enter the value\n");
    scanf("%d", &value);
    
    for (c = n - 1; c >= position - 1; c--)    
        array[c+1] = array[c];
    
    array[position-1] = value;
    
    */

}
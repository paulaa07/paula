#include <stdio.h>
#include <stdlib.h>
#include <time.h>


   int main(int argc, char const *argv[]){
        srand((unsigned)time(NULL));


       int num1, num2, num3, num4, num5, num6, numeros=0, contador=0, i=0;

       printf("Dame un 6 numeros\n");
        scanf("%d", &num1);
        scanf("%d", &num2);
        scanf("%d", &num3);
        scanf("%d", &num4);
        scanf("%d", &num5);
        scanf("%d", &num6);

        for (i=0; i<6; i++)
        {
            
            numeros=(rand() % 6);
            printf("Los numeros de la loteria son: %d\n", numeros);


            if((num1 == numeros) || (num2 == numeros) || (num3 == numeros) || (num4 == numeros) || (num5 == numeros) || (num6 == numeros)){

                contador++;
            }
        }
        
    printf("hay %d aciertos\n", contador);

   }
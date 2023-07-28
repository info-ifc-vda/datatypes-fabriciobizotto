/*
* Principais tipos de dados em C
* 
* int         (4 bytes)   | %d para imprimir
* double      (8 bytes)   | %lf para imprimir
* float       (4 bytes)   | %f para imprimir
* char        (1 byte)    | %c para imprimir
*/

#include <stdio.h>

int main() {
    int idade = 34;
    double preco = 59.90;
    float salario = 1320.0;
    char ligado = 'S';
    
    printf("%d %lf %f %c", idade, preco, salario, ligado);
    printf("\n\n");
    
    printf("O tamanho do tipo 'int' neste sistema é:\t %d bytes\n",     sizeof(idade));
    printf("O tamanho do tipo 'double' neste sistema é:\t %d bytes\n",  sizeof(preco));
    printf("O tamanho do tipo 'float' neste sistema é:\t %d bytes\n",   sizeof(salario));
    printf("O tamanho do tipo 'char' neste sistema é:\t %d bytes\n",    sizeof(ligado));
    

    return 0;
}
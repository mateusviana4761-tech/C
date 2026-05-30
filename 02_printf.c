#include <stdio.h>

int main(){
    // printf: Função que imprime algo na tela. 
    // Além de imprimir, ela também retorna o número total de caracteres impressos.
    // O printf interno imprime "hello world" (11 caracteres) e retorna 11.
    // O printf externo recebe esse 11 e o imprime na tela como um número inteiro (%d).
    printf("\n%d", printf("hello world"));
    
    return 0;
}

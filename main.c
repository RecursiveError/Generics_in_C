/*
Autor: RecursiveError
Um teste com polimorfismo paramétrico para Simular tipos genericos em C
*/
#include <stdio.h>
#include "Generics.h"

int main(){
    struct Tstruct(int) obj;
    obj.a = 22;
    obj.b = 44;
    struct Tstruct(char) obj2;
    obj2.a = 'A';
    obj2.b = 'B';
    printf("%d, %d\n",obj.a,obj.b);
    printf("%c, %c\n",obj2.a,obj2.b);
    return 0; 
}
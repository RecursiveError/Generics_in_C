/*
Programa: Generics.h
Autor: RecursiveError
Um teste com polimorfismo paramétrico para Simular tipos genericos em C
*/

#ifndef GENERICS_H
#define GENERICS_H

#define Tstruct(T) Tstruct_##T

#define DEFINE_TSTRUCT(T) struct Tstruct(T){\
    T a;\
    T b;\
};

DEFINE_TSTRUCT(char)
DEFINE_TSTRUCT(float)
DEFINE_TSTRUCT(int)
DEFINE_TSTRUCT(double)
#endif
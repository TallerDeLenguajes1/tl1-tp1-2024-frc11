#include <stdio.h>

int cuadradoNum(int a){
    int cuadrado= a * a;
    return cuadrado;
}

void cuadradoNumm(int a){
    int cuadrado= a * a;
    printf("%d",cuadrado);
}

void Invertir(int a,int b){
    int aux;
    aux=a;
    a=b;
    b=aux;
    printf ("El numero a=%d y el numero b=%d \n",a,b);        
}

void orden(int a,int b){
    int ValorMasChico, ValorMasGrande;
    if(a>b){
        ValorMasChico=b;
        ValorMasGrande=a;
    }else{
        ValorMasChico=a;
        ValorMasGrande=b;
    }
    a=ValorMasChico;
    b=ValorMasGrande;
    printf("el valor mas chico es %d y el mas grande es %d \n",a,b);
}

int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int cuadrado=cuadradoNum(a);
    cuadradoNumm(a);
    Invertir(a,b);
    orden(a,b);
    
    return 0;
}

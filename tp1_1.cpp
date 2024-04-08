#include <stdio.h>
main(){
    printf("hello world");
    int num = 11; 
    int *puntero = &num; /

    printf("El contenido del puntero: %d\n", *puntero); // Imprimimos el contenido del puntero
    printf("La dirección de memoria almacenada por el puntero: %p\n", puntero); // Imprimimos la dirección de memoria almacenada por el puntero
    printf("La dirección de memoria de la variable: %p\n", &num); // Imprimimos la dirección de memoria de la variable num
    printf("La dirección de memoria del puntero: %p\n", &puntero); // Imprimimos la dirección de memoria del puntero
    printf("El tamaño de memoria utilizado por esa variable usando la función sizeof(): %lu\n", sizeof(num)); // Imprimimos el tamaño de memoria utilizado por la variable num usando la función sizeof()

    return 0;
}
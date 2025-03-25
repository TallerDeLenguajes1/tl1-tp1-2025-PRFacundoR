#include <stdio.h>

int main()
{

    int num=2;
    int memoria= sizeof(num);
    int *punt=&num;

    printf("El contenido del puntero es %d\n",*punt);
    printf("La direccion de memoria almacenada en el puntero es %p\n",punt);
    printf("La direccion de memoria de la variable es %p\n",&num);
    printf("La direccion de memoria del puntero es %p\n",&punt);
    printf("El tamaño de la variables usando sizeof(), es %d",memoria);
    

    return 0;
}

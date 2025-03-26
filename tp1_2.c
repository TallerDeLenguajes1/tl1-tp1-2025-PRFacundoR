#include <stdio.h>

int numCuadrado(int num1);
void numCuadrado2(int *num2);

void Invertir(int*a,int*b);
void ordenar(int *a, int *b);

int main(int argc, char const *argv[])
{
    int num1,num3, num2,a,b;
    


    printf("Ingrese 4 numeros(num1,num2,a,b)");
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&a);
    scanf("%d",&b);


    int *punt=&num2;
    

    num3=numCuadrado(num1);
    printf("El cuadrado del primer numero es: %d\n",num3);
    
    numCuadrado2(&num2);
    printf("El cuadrado del segundo numero es: %d",*punt);

     Invertir(&a, &b);
    printf("Los valores, se invirtieron, a esta en b , %d y b en a, %d ",b,a);

     ordenar(&a, &b);
     printf("Los valores, se ordenaron, a es el mas chico , %d y b es el mas grande, %d ",a,b);

    return 0;
}

int numCuadrado(int num1){
int num2=num1*num1;

return num2;

}
void numCuadrado2(int *num2){

    *(num2)*=*num2;
}


void Invertir(int*a,int*b){

    int *aux=*b;
    *b=*a;
    *a=*aux;


}
void ordenar(int *a, int *b){

    if (*a>*b)
    {
    int *aux=*b;
    *b=*a;
    *a=*aux;
    }
    
}
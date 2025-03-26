#include <stdio.h>

int numCuadrado(int num1);
void numCuadrado2(int *num2);

void Invertir(int*a,int*b);
void ordenar(int *c, int *d);

int main(int argc, char const *argv[])
{
    int num1,num3, num2;
    


    printf("Ingrese dos numeros");
    scanf("%d",&num1);
    scanf("%d",&num2);

    int *punt=&num2;

    num3=numCuadrado(num1);
    printf("El cuadrado del primer numero es: %d\n",num3);
    
    numCuadrado2(&num2);
    printf("El cuadrado del segundo numero es: %d",*punt);

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
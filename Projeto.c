#include <stdio.h>
#include <math.h>

int main(void){
    int nmr1,nmr2; //Números da operação
    int op; //Variável do menu

    printf("Escolha o primeiro numero: ");
    scanf("%i",&nmr1);

    printf("Escolha a operacao:");
    printf("\n<1> Somar");
    printf("\n<2> Subtrair");
    printf("\n<3> Multiplicar");
    printf("\n<4> Dividir");
    printf("\n<5> Exponenciar");
    printf("\n<6> Racionalizar\n");
    scanf("%i",&op);

    if(op == 6)
     raiz(nmr1);
    else
        printf("Escolha o segundo numero: "); //Se preferível, pode vir antes do menu
        scanf("%i",&nmr2);

        if(op == 1) //Chama a função somar
         somar(nmr1,nmr2);
        
        else if(op == 2) //Chama a função subtrair
         subtrair(nmr1,nmr2);

        else if(op == 3) //Chama a função multiplicar
         multiplicar(nmr1,nmr2);
        
        else if(op == 4) //Chama a função dividir
         dividir(nmr1,nmr2);

        else if(op == 5) //Chama a função pontencia
         potencia(nmr1,nmr2);
}

int somar(nmr1,nmr2){
    printf("\nNumero 1: %i\nNumero 2: %i\nSoma: %i",nmr1,nmr2,nmr1+nmr2);
}

int subtrair(nmr1,nmr2){
    printf("\nNumero 1: %i\nNumero 2: %i\nSubtracao: %i",nmr1,nmr2,nmr1-nmr2);
}

int multiplicar(nmr1,nmr2){
    printf("\nNumero 1: %i\nNumero 2: %i\nMultiplicao: %i",nmr1,nmr2,nmr1*nmr2);
}

int dividir(nmr1,nmr2){
    printf("\nNumero 1: %i\nNumero 2: %i\nDivisao: %i",nmr1,nmr2,nmr1/nmr2);
}

int potencia(nmr1,nmr2){
    if(nmr2 == 0)
     nmr1 = 1;
    
    else if(nmr2 == 1)
     ; 
    else
     for (int i=0; i<nmr2-1;i++){
        nmr1 = nmr1*nmr1;
     }
    printf("Potencia: %i",nmr1);
    
}

int raiz(nmr1){
    float raiz = sqrt(nmr1);
    printf("Raiz: %f",raiz);
}
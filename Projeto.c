#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void){
    int opcao; //Variável do menu
    int numero1,numero2,numero3, expoente; //Números da operação

    while (opcao != 10){
        printf("\n<1> Somar");
        printf("\n<2> Subtrair");
        printf("\n<3> Multiplicar");
        printf("\n<4> Dividir");
        printf("\n<5> Exponenciar");
        printf("\n<6> Racionalizar");
        printf("\n<7> Equacao 2 Grau");
        printf("\n<8> Equacao 3 Grau");
        printf("\n<9> Fatorial");
        printf("\n<10> Sair");
        printf("\n\nEscolha a operacao: ");
        scanf("%d", &opcao);
        
        if(opcao == 10){
            exit(0);
        }

        if((opcao != 7) && (opcao != 8)){
            printf("Escolha o primeiro numero: ");
            scanf("%d", &numero1);
        }

        switch (opcao){
        case 1:
            printf("Escolha o segundo numero: "); //Se preferível, pode vir antes do menu
            scanf("%d",&numero2);
            somar(numero1,numero2);
            break;
        case 2:
            printf("Escolha o segundo numero: "); //Se preferível, pode vir antes do menu
            scanf("%d",&numero2);
            subtrair(numero1,numero2);
            break;
        case 3:
            printf("Escolha o segundo numero: "); //Se preferível, pode vir antes do menu
            scanf("%d",&numero2);
            multiplicar(numero1,numero2);
            break;
        case 4:
            printf("Escolha o segundo numero: "); //Se preferível, pode vir antes do menu
            scanf("%d",&numero2);
            dividir(numero1,numero2);
            break;
        case 5:
            printf("Escolha o expoente: ");
            scanf("%d", &expoente);
            potencia(numero1,expoente);
            break;
        case 6:
            raiz(numero1);
            break;
        case 7:
            printf("Digite o A da equacao: ");
            scanf("%d", &numero1);
            printf("Digite o B da equacao: ");
            scanf("%d", &numero2);
            printf("Digite o C da equacao: ");
            scanf("%d", &numero3);
            funcao2Grau(numero1,numero2,numero3);
            break;
        case 8:
        
            break;
        case 9:

            break;
        case 10:
            break;
        
        default:
            printf("Opcao invalida. Digite novamente.");
            break;
        }
        printf("\n");
        system("pause");
        system("cls");
    }
}

    /*if(opcao == 6)
     raiz(numero1);
    else
        printf("Escolha o segundo numero: "); //Se preferível, pode vir antes do menu
        scanf("%d",&numero2);

        if(opcao == 1) //Chama a função somar
         somar(numero1,numero2);
        
        else if(opcao == 2) //Chama a função subtrair
         subtrair(numero1,numero2);

        else if(opcao == 3) //Chama a função multiplicar
         multiplicar(numero1,numero2);
        
        else if(opcao == 4) //Chama a função dividir
         dividir(numero1,numero2);

        else if(opcao == 5) //Chama a função pontencia
         potencia(numero1,numero2);
}*/

int somar(numero1,numero2){
    printf("\nNumero 1: %d\nNumero 2: %d\nSoma: %d",numero1,numero2,numero1+numero2);
}

int subtrair(numero1,numero2){
    printf("\nNumero 1: %d\nNumero 2: %d\nSubtracao: %d",numero1,numero2,numero1-numero2);
}

int multiplicar(numero1,numero2){
    printf("\nNumero 1: %d\nNumero 2: %d\nMultiplicao: %d",numero1,numero2,numero1*numero2);
}

int dividir(numero1,numero2){
    printf("\nNumero 1: %d\nNumero 2: %d\nDivisao: %d",numero1,numero2,numero1/numero2);
}

int potencia(numero1,expoente){
    if(expoente == 0)
     numero1 = 1;
    
    else if(expoente == 1)
     ; 
    else
     for (int i=0; i<expoente-1;i++){
        numero1 = numero1*numero1;
     }
    printf("Potencia: %d",numero1);
    
}

int raiz(numero1){
    float raiz = sqrt(numero1);
    printf("Raiz: %f",raiz);
}

int funcao2Grau(numero1,numero2,numero3){
    float delta = (numero2*numero2)-4*numero1*numero3;
    if(delta>=0){
        float x1 = ((numero2*(-1))+sqrt(delta))/(2*numero1);
        float x2 = ((numero2*(-1))-sqrt(delta))/(2*numero1);
        printf("x' eh: %f",x1);
        printf("\nx'' eh: %f",x2);
    }
    else{
        printf("A raiz nao eh real, tente com novos valores");
    }
}

// int funcao3Grau(){
    
// }
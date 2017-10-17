#include <stdio.h>
#include <stdlib.h>

int tipo = 0 , eixo = 0 , especificacao = 0 , resp = 1;
float M = 0 , L = 0 , a = 0 , b = 0 , I = 0;

int main(){

    printf("------------------- ATENCAO! -------------------\n\n");
    printf("UNIDADE DE MASSA => QUILOGRAMA\nUNIDADE DE COMPRIMENTO => METRO\n\n");

    while(resp == 1){

    printf("--------------- CALCULO DO MOMENTO DE INERCIA! ---------------\n\n");
    printf("Escolha a forma desejada:\n1-Anel Fino\n2-Cilindro\n3-Barra Fina\n4-Esfera\n5-Placa Fina\n");
    scanf("%d",&tipo);

    if(tipo==1){
        printf("\nEscolha sobre qual eixo o Anel Fino estará:\n1-Em torno de um eixo central\n2-Em torno de um diametro\n");
        scanf("%d",&eixo);
        if(eixo == 1){
            printf("\nDigite o Raio e a Massa do anel:\n");
            scanf("%f",&a);
            scanf("%f",&M);
            I = M*a*a;
        }else if(eixo == 2){
            printf("\nDigite o Raio e a Massa do anel:\n");
            scanf("%f",&a);
            scanf("%f",&M);
            I = (M*a*a)/2;
        }
    }else if(tipo==2){
        printf("\nQual tipo de Cilindro:\n1-Cilindro Oco\n2-Cilindro Maciço\n");
        scanf("%d",&especificacao);
        if(especificacao == 1){
            printf("\nDigite sobre qual eixo o cilindro oco estara:\n1-Em torno de um eixo central\n");
            scanf("%d",&eixo);
            if(eixo == 1){
                printf("\nDigite o R1 , R2 e a Massa do cilindro:\n");
                scanf("%f",&a);
                scanf("%f",&b);
                scanf("%f",&M);
                I = (M*(a*a+b*b))/2;
            }
        }else if(especificacao == 2){
            printf("\nDigite sobre qual eixo o cilindro maciço estará:\n1-Em torno do eixo central\n2-Em torno do diametro central\n");
            scanf("%d",&eixo);
            if(eixo == 1){
                printf("\nDigite o Raio e a Massa do cilindro:\n");
                scanf("%f",&a);
                scanf("%f",&M);
                I = (M*a*a)/2;
            }else if(eixo == 2){
                printf("\nDigite o Raio , a Massa e o Comprimento do cilindro:\n");
                scanf("%f",&a);
                scanf("%f",&M);
                scanf("%f",&L);
                I = ((M*a*a)/4)+((M*L*L)/12);
            }
        }
    }else if(tipo == 3){
        printf("Digite sobre qual eixo a barra fina estará:\n1-Em torno de um eixo central perpendicular a maior dimensao\n");
        scanf("%d",&eixo);
        if(eixo == 1){
            printf("\nDigite a Massa e o Comprimento da barra:\n");
            scanf("%f",&M);
            scanf("%f",&L);
            I = M*L*L/12;
        }
    }else if(tipo == 4){
        printf("Qual tipo de Esfera:\n1-Casca Esferica\n2-Esfera Macica\n");
        scanf("%d",&especificacao);
        if(especificacao == 1){
            printf("\nDigite sobre qual eixo a Casca Esferica estara:\n1-Em torno de um diametro\n");
            scanf("%d",&eixo);
            if(eixo == 1){
                printf("\nDigite o Raio e a Massa da esfera:\n");
                scanf("%f",&a);
                scanf("%f",&M);
                I = (M*a*a*2)/3;
            }
        }else if(especificacao == 2){
            printf("\nDigite sobre qual eixo a Esfera Maciça estara:\n1-Em torno de um diametro\n");
            scanf("%d",&eixo);
            if(eixo == 1){
                printf("\nDigite o Raio e a Massa da esfera:\n");
                scanf("%f",&a);
                scanf("%f",&M);
                I = (2*M*a*a)/5;
            }
        }
    }else if(tipo == 5){
        printf("\nDigite sobre qual eixo a placa fina estara:\n1-Em torno de um eixo perpendicular passando pelo centro\n");
        scanf("%d",&eixo);
        if(eixo == 1){
            printf("\nDigite a Massa , o Comprimento e a Largura da placa:\n");
            scanf("%f",&M);
            scanf("%f",&a);
            scanf("%f",&b);
            I = (M*(a*a+b*b))/12;
        }
    }

    printf("--------------- MOMENTO DE INERCIA = %.2f Kg.m² ---------------",I);

    printf("\n\nDeseja calcular outro momento de inercia:\n1-Sim\n2-Nao\n");
    scanf("%d",&resp);

    }
}

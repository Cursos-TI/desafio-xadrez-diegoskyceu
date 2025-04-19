#include <stdio.h> 

//MOVIMENTO DO BISPO
void moverBispo(int casas){
    if (casas > 0)
    {
        printf("BISPO - Cima, Direita \n");
        moverBispo(casas - 1);
    }    
}

//MOVIMENTO DA RAINHA
void moverRainha(int casas){
    if (casas > 0)
    {
        printf("RAINHA - Esquerda \n");
        moverRainha(casas - 1);
    }    
}

//MOVIMENTO DA TORRE
void moverTorre(int casas){
    if (casas > 0)
    {
        printf("TORRE - Direita \n");
        moverTorre(casas - 1);
    }
}

//MOVIMENTO DO CAVALO
void moverCavalo(int casas){
    if (casas > 0){
        for (int i = 0; i < 2; i++)
            {
            printf("CAVALO - Baixo\n");
            }
            printf("CAVALO - Esquerda\n");
            moverCavalo(casas - 1);
        }
}
        

int main(){

    //EXIBIÇÃO DAS PEÇAS NO TABULEIRO
    moverCavalo(1);
    printf("\n");

    moverBispo(5);
    printf("\n");

    moverRainha(8);
    printf("\n");

    moverTorre(5);
    
    return 0;
}

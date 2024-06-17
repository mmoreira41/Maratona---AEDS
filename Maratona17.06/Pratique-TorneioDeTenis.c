#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int Grupo1(){


}



main(void){

    int totalJogos = 6;
    char jogosJogados[6];
    int jogosGanhos= 0;
    char resposta;

    printf("Quero que me diga quais jogos voce venceu (V para Vitoria e P para Perdeu):\n");
    for(int i = 1; i <
     totalJogos; i++){
        printf("Jogo%d:",i);
        scanf("%c\n",&resposta);
        jogosJogados[i] = resposta;
    }
    for(int j=0; j < totalJogos; j++){
        if(jogosJogados[j] == 'V'){
            jogosGanhos+=1;
        }
    }
    printf("Jogos Ganhos: %d \n", jogosGanhos);
    if(jogosGanhos < 0){
        printf("-1");
    } else if(jogosGanhos <=2){
        printf("GRUPO: 3");
    }else if(jogosGanhos <=4){
        printf("GRUPO: 2");
    }
    else if(jogosGanhos <=6){
        printf("GRUPO: 1");
    }else{
        printf("\n indefinido");
    }

}

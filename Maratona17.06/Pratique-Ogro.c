#include <stdio.h>
#include <stdlib.h>
#include <string.h>




main(void){


    int maxMao = 5;

    char maoDireita[5];
    char maoEsquerda[5];
    int numDigitado = 0;

    printf("Digite o o número de 0 a 10 que deve ser representado com os dedos das maos: ");
    scanf("%d",&numDigitado);

    if(numDigitado < 0){
        printf("Numero Invalido, digite um numero de 0 a 10");
    } else if(numDigitado > 10){
        printf("Numero Invalido, digite um numero de 0 a 10");
    } else{
        for(int i = 1; i<=numDigitado; i++){
            if(numDigitado < 5){
               maoEsquerda[i] = 'I';
               printf("%c",maoEsquerda[i]);
            }else{
                while(maoEsquerda < 5)
                {
                    maoEsquerda[i] = 'I';

                }
                maoDireita[i] = 'I';
                printf("%c %c",maoEsquerda[i],maoDireita[i]);
            }


        }

    }


}

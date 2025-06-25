/*
#include <stdio.h>
int main(){
    int a,b,c,d,e;
    char linha[10]={'A','B','C','D','E','F','G','H','I','J'};
    int n[10][10]={7};
    printf("     ");
    printf("Batalha Naval ");
    printf(" \n ");
    printf("  ");



    /*
    #define n 10
    #define c 10
    int m[n][c];
    int s=0;
    for(int a=0; a<n;a++){
        for(b=0;b<c;b++){
            s++;
            m[n][c]=s;
            printf("%d ", m[n][c]);
        }
        printf("\n ");
    }
    */ 

    //for (c=0;c<5;c++){
      //  n[3][3+b]=5;
   // }
   /*
   for (int i = 0; i < 3; i++) {
        n[2][2 + i] = 3;
    }
    for ( int l = 0; l < 10; l++){
            printf("%c ", linha[l]);
            }
            printf("\n");
    for (a = 1; a < 11; a++){
        printf("%2d ", a);
        for ( b = 0; b < 10; b++){
            printf("0 ");
        };
        printf("\n");
        }

        */

        #include <stdio.h>

int main() {
    int a, b;
    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int n[10][10] = {0}; // Tabuleiro inicializado com 0

    // Posicionar navio horizontal (linha 2, colunas 2 a 4)
    for (int i = 0; i < 3; i++) {
        n[2][2 + i] = 3;
    }

    // Posicionar navio vertical (coluna 8, linhas 3 a 5)
    for (int i = 0; i < 3; i++) {
        n[3 + i][8] = 3;
    }

    // Posicionar navio diagonal principal (de 6,6 a 8,8)
    for (int i = 0; i < 3; i++) {
        n[6 + i][6 + i] = 3;
    }

    // Posicionar navio diagonal secundária (de 5,6 a 7,4)
    for (int i = 0; i < 3; i++) {
        n[5 + i][6 - i] = 3;
    }

    // Impressão do título e cabeçalho
    printf("     Batalha Naval\n\n  ");
    for (int l = 0; l < 10; l++) {
        printf("%c ", linha[l]);
    }
    printf("\n");

    // Impressão do tabuleiro com navios
    for (a = 0; a < 10; a++) {
        printf("%2d ", a + 1);
        for (b = 0; b < 10; b++) {
            printf("%d ", n[a][b]);
        }
        printf("\n");
    }

    return 0;
}

        /*
        n[2][2]=3,n[2][3]=3,n[2][4]=3;
        n[5][8]=3,n[4][8]=3,n[3][8]=3;
        n[7][7]=3,n[8][8]=3,n[9][9]=3;
        n[5][6]=3,n[6][7]=3,n[7][8]=3;
        
        
        scanf("[a] %d", &a);
        scanf("[b] %d", &b);
        if ()
        {
            printf("3", n[0][0]);
        }
        */
        //
        /**/
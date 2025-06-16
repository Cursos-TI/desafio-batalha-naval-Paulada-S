#include <stdio.h>
int main(){
    int a,b,c,d,e;
    char linha[10]={'A','B','C','D','E','F','G','H','I','J'};
    int n[10][10]={{}};
    printf("     ");
    printf("Batalha Naval\n");
    printf("\n");
    printf("  ");
    for ( int l = 0; l < 10; l++){
            printf("%c ", linha[l]);
            }
            printf("\n");
    for (a = 0; a < 10; a++){
        printf("%d ", a);
        for ( b = 0; b < 10; b++){
            printf("%d ", n[a][b]);
        };
        printf("\n");
        n[2][2]=3,n[2][3]=3,n[2][4]=3,n[5][8]=3,n[4][8]=3,n[3][8]=3;
    };
}
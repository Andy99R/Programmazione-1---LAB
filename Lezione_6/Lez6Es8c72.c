//Esercizio NON funzionante!
#include <stdio.h>

#define rw 4
#define cl 3

int main (){
    int i;
    int j;
    int n;
    int m1[rw][cl];
    int m2[rw][cl];
    int m_res[rw][cl];
    
    for (i=0;i<rw;i++){ 
        for (j=0;j<cl;j++){
            scanf("%d",&m1[i][j]);
        }}
    for (i=0;i<rw;i++){
        for (j=0;j<cl;j++){
            scanf("%d",&m2[i][j]);
        }}
    for (i=0;i<rw;i++){
        for (j=0;j<cl;j++){
            m_res[i][j]=m1[i][j]+m2[i][j];}}
    i=0;
    while(i<rw){
    for (j=0;j<cl;j++){
            printf("%d ",m_res[i][j]);}
        printf("\n");
        i++;}
    return 0;
}

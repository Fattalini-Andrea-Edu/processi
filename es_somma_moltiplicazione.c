#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <string.h>
//ellisse= simbolo processo
//fork() ---> disegno del pallino con freccie in basso a destra e sinistra alle frecce attaccato un cerchio a sinistra e a destra che indicano altri processi
//i due processi poi si divideranno in altri due processi ciascuno
int main(){
    int pid,A,B;
    printf("inserisci numero 1");
    scanf("%d",&A);
    printf("inserisci numero 2");
    scanf("%d",&B);
    pid=fork();
    int C,D;
    if(pid==0()){
        C=B*A;
        printf("\nla moltiplicazione vale: %d",C);
        //moltiplicazione
        //sono dentro il pallino figlio
    }else{
        D=B+A;
         printf("\nla somma vale: %d",C);
        //somma
        //sono dentro il pallino padre
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <string.h>

int main(){
    int pid,pid2,pid3,num1,num2;
    printf("inserisci il primo numero:\n");
    scanf("%d",&num1 );
    printf("inserisci il secondo numero:\n");
    scanf("%d",&num2 );
    pid=fork();
    printf("identificatore del padre:%d\n",getpid());
    if(pid==0){
        //processo figlio
        //printf("valore variabile pid figlio: %d\n",pid);
        //printf("identificativo del processo figlio:%d\n",getpid());

       // printf("identificativo padre:%d\n",getppid());
        pid2=fork();
        if(pid2==0){
            float div=num1/num2;
            printf("divisione del processo padre,figlio pid2:%f\n",div);
            printf("identificatore del figlio pid2:%d\n",getpid());
            printf("identificatore del padre del figlio pid2:%d\n",getppid());
        }else{
            int prodotto=num1*num2;
            printf("prodotto del processo figlio copia:%d\n",prodotto);
            printf("identificatore del padre del figlio pid2:%d\n",getpid());

        }



    }else{
        //processo padre
        //printf("valore variabile pid padre: %d\n",pid);
        printf("identificativo del processo padre:%d\n",getpid());
        pid3=fork();
        if(pid3==0){
            int somma=num1+num2;
            printf("somma del processo padre,figlio pid3:%d\n",somma);
            printf("identificatore del padre del figlio di pid2:%d\n",getppid());

        }
    }

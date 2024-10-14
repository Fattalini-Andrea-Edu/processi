#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <string.h>

int main(){
    char username[30]="paolo";
    char password[30]="12345";
    char user[30];
    char pas[30];
    int num1,num2;
    printf("inserisci username:\n");
    scanf("%s",user);
    printf("inserisci password:\n");
    scanf("%s",pas);
    if((strcmp(username,user)==0)&&strcmp(password,pas)==0){
        //condizione vera
        printf("utente presente\n");
    }else{
        //condizione falsa
        num1=strcmp(username,user);
        num2=strcmp(password,pas);
        printf("utente non presente\n");
        printf( num);
    }


}

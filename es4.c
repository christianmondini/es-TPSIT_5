#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <string.h>


void Creaarray(int vettore[],int n){
    for(int i=0;i<n;i++){
        printf("Insersisci il %d numero:\n",(i+1));
        int num;
        scanf("%d",&num);
        vettore[i]=num;
    }

}



int main(int argc, char *argv[]){
    int n;
    do{
        printf("Scegli quanti elementi vuoi nel tuo array: \n");
        scanf("%d",&n);
        if(n<1){
            printf("Almeno 1 elemento nell'array\n");
        }
    }while(n<1);
    
    int vettore[n];
    Creaarray(vettore,n);


    while(1){
    printf("Scegli cosa vuoi fare: premi 1 per stampare tutto il tuo array,premi 2 per stampare l'array al contrario,premi 3 per ,premi 4 per ,premi 5 per ,premi 6 per ,premi 7 per ,premi 8 per ,oppure premi 9 per uscire.\n");
    int scelta;
    scanf("%d",&scelta);

    switch(scelta){
        case 1:{
                for(int i=0;i<n;i++){
            printf("%d valore=%d\n",(i+1),vettore[i]);
            }
        };
         case 2:{
            for(int i=(n-1);i==0;i--){
            printf("%d valore=%d\n",(i+1),vettore[i]);
            }
                
        };
         case 3:{
                
        };
         case 4:{
               
        };
         case 5:{
               
        };
         case 6:{
                
        };
         case 7:{
               
        };
         case 8:{
                
        };
         case 9:{
                exit(0);
        };
    }
    
    }


    return 0;
}
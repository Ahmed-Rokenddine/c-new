#include <stdio.h>
#include <stdbool.h>

int main(){
    int jour,mois,anne;
    printf("Veileur entrer la date");
    scanf("%d / %d / %d",&jour,&mois,&anne);
    switch (mois)  
    {
    case 1 : printf("janvier ");
    
        break;
    
    case 2 : printf("fevrier ");
      
        break;
    
    case 3 : printf("mars ");

       break;
    
    case 4 : printf("avril ");

       break;
    
    case 5 : printf("Mai ")
     
       break;

    case 6 : printf("juin ")

       break;

    case 7 : printf("juillet ");
    
        break;
    
    case 8 : printf("aout ");
      
        break;
    
    case 9 : printf("septembre ");

       break;
    
    case 10 : printf("octobre ");

       break;
    
    case 11 : printf("novembre ");
     
       break;

    
    default: printf("decembre ");
        break;
    }
}

//5/9/2012 = 5-spetembre-2012


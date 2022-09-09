#include <stdio.h>
#include <stdbool.h>


int main() {
    float x,y;
    char op;
printf("Entrer nombre A : ");
        scanf("%f", &x);
        printf("Entrer l'operateur : ");
        scanf("%s", &op);
        printf("Entrer nombre B : ");
        scanf("%f", &y);

        switch (op) {
            case '+' :
                printf("A + B = %.2f \n" , x + y);
                break;
            case '-' :
                printf("A - B = %.2f \n" , x - y);
                break;
printf("Entrer l'operateur  : ");
        }
}

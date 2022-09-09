#include <stdio.h>
#include <stdbool.h>


int main() {
    float x,y;
    char op;
printf("x : ");
        scanf("%f", &x);
        printf("op : ");
        scanf("%s", &op);
        printf("y: ");
        scanf("%f", &y);

        switch (op) {
            case '+' :
                printf("x + y = %.2f \n", x + y);
                break;
            case '-' :
                printf("x - y = %.2f \n", x - y);
                break;
            case '*' :
                printf("x * y = %.2f \n", x*y);
                break;
            case '/' :
                printf("x / y = %.2f \n",x/y);
                break;
        }
}



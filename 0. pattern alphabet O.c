#include <stdio.h>

int main() {
    int i, j, n = 7;

    for (i = 1; i <= n; i++) {
        for(j=1; j<=n; j++){
           if(i>=2 && i<=6){
            if(j>=2 && j<=6){
                printf(" ");
            } else{
            printf("#");
            }
           } else{
           printf("#");}

        }
        printf("\n");
    }

    return 0;
}

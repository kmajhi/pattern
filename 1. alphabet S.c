//i
#include <stdio.h>

int main() {
    int i, j, n = 5;

    for (i = 1; i <= n; i++) {
        for(j=1; j<=n; j++){
           if(i>=1&& i<=5){
                if(i==2){
                        if(j==1){
                            printf("* ");
                        } else {
                        printf(" ");
                        }

                } else if(i==4){
                    if(j==5){
                            printf("\t*");
                        } else {
                        printf(" ");
                        }
                }
            else{
                     printf("* ");
                }
           }
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    char* c1 = (char*)malloc(sizeof(char));
    char* c2 = (char*)malloc(sizeof(char));

    int f1 = 0;
    int f2 = 0;

    char m;
    while((m = getchar()) != '|'){

        c1[f1++] = m;
        c1 = (char*)realloc(c1, f1 * sizeof(char));
    }
    c1[f1] = '\0';

    if(m == '|'){

        while((m = getchar()) != '\n'){

            c2[f2++] = m;
            c2 = (char*)realloc(c2, f2 * sizeof(char));
        }
        c2[f2] = '\0';
    }
    
    double ch = 0.0;
    int i;

    for(i = 0; i < f1 - 1; i++){
        ch += ((int)(c1[i] - '0')) * pow(10, f1 - i - 2);
    }

    for(i = f2 - 1; i > 0; i--){
        ch += ((int)(c2[i] - '0')) / pow(10, i);
    }

    printf("%f\n", ch);

    return 0;
}

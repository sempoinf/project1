#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void)
{
    int c1 = 0;
    int c2 = 0;
    char s1;
    
   
    
    
printf("Введите значения: ");
        while (  scanf("%d",&c1) == 0 ) {
            printf("Неверное полученное значения, попробуйте еще: ");
                while(getchar()!='\n'); // Чистим буфер
        }
     char s2[10];
    char d;
    while (((d = getchar()) == ' ') || (d == '|'));

    int count = 0;
    s2[count++] = d;
    while ((d = getchar()) != '\n')
        s2[count++] = d;
    double c3 = 0.0;

    c3 += c1;

    for (int i = 0; i < count; i++)
       c3 += (s2[i] - '0') / pow(10, i + 1);

    printf("%lf\n", c3);

    

  return 0;
}

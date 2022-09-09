#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
// Aditya Seth.
    int second_integer;
    double second_double;
    char second_string[100];
    
    scanf("%d\n",&second_integer);
    scanf("%lf\n",&second_double);
    fgets(second_string, 100, stdin);

    printf("%d\n",i+second_integer);
    
    printf("%.1lf\n",d+second_double);
    
    printf("%s%s",s,second_string);

    return 0;
}

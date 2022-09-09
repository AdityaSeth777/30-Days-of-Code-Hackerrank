#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
   char inputString[105];
   scanf("%[^\n]", inputString);
  
   printf("Hello, World.\n");

   printf("%s", inputString);

   return 0;
}

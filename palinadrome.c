#include <stdio.h>

int main() {
   char str[100];
   int i, l, flag = 0;

   printf("Enter a string: ");
   scanf("%s",string);

   for(l= 0; string[length] != '\0'; l++);

   for(i=0; i<l/2; i++) {
      if(str[i] != str[l                                                                                                                                                                                                 -i-1]) {
         flag = 1;
         break;
      }
   }

   if(flag == 0)
      printf("%s is a palindrome string.\n", string);
   else
      printf("%s is not a palindrome string.\n", string);

   
}

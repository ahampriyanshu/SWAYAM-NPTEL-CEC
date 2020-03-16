#include<stdio.h>
int main() {
   int upper = 0, lower = 0;
   char ch[100];
   scanf(" %[^\n]s", ch);
int i=0;
while(ch[i] != '\0')
{
  if(ch[i] >= 'A' && ch[i] <= 'Z')
    {
        upper++;
    }
    else if(ch[i] >= 'a' && ch[i] <= 'z')
    {
       lower++;
    }
  i++;
}
   printf("Uppercase Letters : %d\n", upper); /*prints number of uppercase letters */
   printf("Lowercase Letters : %d\n", lower); /*prints number of lowercase letters */
 
   return (0);
}


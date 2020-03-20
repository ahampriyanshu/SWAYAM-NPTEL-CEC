#include<stdio.h>
#include<string.h>

void reverse(char[], int, int);
    int main()
    {
        char str1[20];
        scanf("%s", str1); //The string is taken as input form the test data. 
     int i;
reverse(str1, i , strlen(str1));
printf("The string after reversing is: %s\n", str1); 
}

void reverse(char str1[], int i, int len)
{
  int c,j;

  j = len - (i + 1);
    
    if( i < j )
    {
        c = str1[i];
        str1[i] = str1[j];
        str1[j] = c;

        reverse(str1,++i,len);
    }
}

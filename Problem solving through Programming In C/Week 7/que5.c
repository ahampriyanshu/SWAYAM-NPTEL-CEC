#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]={0},substr[100][100]={0}; 
//str[100] is for storing the sentence and substr[50][50] is for storing each word.
    
scanf("%[^\n]s", str);
int i=0,j=0,k=0,a,minindex=0,maxindex=0,max=0,min=0;
char c;
while( str[k] != '\0' )
{
  j=0;
  while( str[k] != ' ' && str[k] != '\0' && str[k] != '.' )
  {
    substr[i][j]=str[k];
    k++;
    j++;
  }
  substr[i][j]='\0';
  i++;
  if( str[k] != '\0' )
  {
     k++;
  }
}
int len = i;
max = strlen(substr[0]);
min = strlen(substr[0]);
for ( i=0 ; i< len ; i++ )
{
  a = strlen(substr[i]);
  if ( a>max )
  {
    max =a;
    maxindex = i;
  }
   if ( a<min )
  {
   	min=a;
    minindex = i;
  }
}
printf("Largest Word is: %s\nSmallest word is: %s\n", substr[maxindex],substr[minindex]);
return 0;
}

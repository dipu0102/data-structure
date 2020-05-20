#include <stdio.h>

int main()
{
    char s1[20];
    printf("enter the name:\n");
    gets(s1);
    strrev(s1);

    return 0;
}
void strrev(char s1[]){
  char s2[20];
  int i,j;
  i=0;
  while(s1[i]!='\0'){
      i++;
  }
  j=0;
  
  for(i=i-1;i>=0;i--){
      s2[j]=s1[i];
      j++;
  }
  s2[j]='\0';
  printf("the reverse string is %s",s2);
    
}
#include<stdio.h>
int main()
{
	char s[50];
	printf("enter the string:");
	gets(s);
	strrev(s);
}
void strrev(char s[]){
	int i=0;
	while(s[i]!='\0'){
		if(s[i]>=97 && s[i]<=122){
			s[i]=s[i]-32;
		} 
		i++;
	}
	printf("\n the string is %s",s);
}
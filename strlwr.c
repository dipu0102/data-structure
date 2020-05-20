#include<stdio.h>
int main()
{
	char s[50];
	printf("enter the string:");
	gets(s);
	strlwr(s);
}
void strlwr(char s[]){
	int i=0;
	while(s[i]!='\0'){
		if(s[i]>=65 && s[i]<=90){
			s[i]=s[i]+32;
		} 
		i++;
	}
	printf("\n the string is %s",s);
}
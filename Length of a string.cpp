#include<stdio.h>
#include<string.h>
int main (){
	char s[100];
	int len=0;
	fgets (s);
	for (int i=0; s[i]!='\0'; i++)
	{
		len++;	
	}
	printf ("Length of string = %d", len);
	return 0;
}

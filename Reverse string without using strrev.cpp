#include<stdio.h>
#include<string.h>
int main (){
	char s[100], temp=0;
	gets(s);
	
	int len = strlen(s)-1;
	for (int i=l; i>=0; i--)
	{
		temp = s[i];
		s[i] = s[l];
		s[l--] = temp;
	}
	puts(s);
	return 0;
}

// lenght of sting
#include <stdio.h>
#include <string.h>
int string_length(char *s){
	
	int c = 0;
	
	while((s[c])!= '\0')
		c++;
	
	return c;
}
int main(){

	char s[10];
	int len;
	
	gets(s);
	len = string_length(s);
	printf("len = %d",len);


}

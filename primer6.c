//reserve
#include <stdio.h>
#define MAXLINE 10
void reserve(char *s){
	int len, c;
	char *begin, *end,temp;
	
	len = string_length(s);
	
	begin = s;
	end = s;
	
	for(c = 0; c < len -1 ;c++)
		end++;
	
	for(c = 0; c < len/2; c++){
		temp = *end;
		*end = *begin;
		*begin = temp;
		
		begin++;
		end--;
	}
}
int string_length(char *pointer){
		int c = 0;
		
		while(*(pointer+c)!= '\0')
			c++;
		return c;
}
int main(){
	
	char s[MAXLINE];
	gets(s);
	
	reserve(s);
	printf("%s",s);
	
}

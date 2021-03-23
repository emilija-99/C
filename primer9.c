// copying sting
#include <stdio.h>
#include <string.h>
void copyString(char a[], char b[]){
	
	int c = 0;
	
	while(a[c] != '\0'){
		b[c] = a[c];
		c++;
	}
	b[c] = '\0';
}
int main(){
	
	char a[10],b[10];
	
	printf("Input a:\n");
	gets(a);
	
	copyString(a,b);
	
	printf("b : %s\n",b);
}

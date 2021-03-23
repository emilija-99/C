//String concatenation 
#include <stdio.h>
#include <string.h>
#define MAXSTRING 10
void concat(char a[], char b[]){
	
	int i,j;
	i = 0;
	
	while(a[i] != '\0'){
		i++;
	}
	
	j = 0;
	
	while(b[j] != '\0'){
		a[i] = b[j];
		j++;
		i++;
	}
	
	a[i] = '\0';
}
int main(){
		
	char a[MAXSTRING],b[MAXSTRING];
	
	printf("Unesi a:");
	gets(a);
	
	printf("\n Unesi b:\n");
	gets(b);
	
	concat(a,b);
	
	printf("%s",a);
}
	

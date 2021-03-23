// compare string
#include <stdio.h>
#include <string.h>
int compare(char a[], char b[]){
	
	int c = 0;
	
	while(a[c] == b[c]){
		if(a[c] == '\0' || b[c] == '\0')
			break;
		c++;
	}
	if(a[c] == '\0' && b[c] == '\0')
		return 0;
	else
		return 1;
}
int main(){
	
	char a[10],b[10];
	
	printf("Unesi a:\n");
	gets(a);
	printf("Unesi b:\n");
	gets(b);
	
	if(compare(a,b) == 0){
		printf("equal");
	}
	else{
		printf("unequal");
	}
	
	return 0;
}
		
	

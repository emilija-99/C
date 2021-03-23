// Program za brojanje reci
#include <stdio.h>
#define IN 1 //inside a word
#define OUT 0 //outside a word
int main(){
	
	int c, state, count = 0;
	
	state = OUT;
	
	while((c = getchar())!=EOF){
		if(c == ' ' || c == '\n' || c == '\n'){
			if(state == IN){
				putchar('\n');
				state = OUT;
			}
		}
		else if(state == OUT){
				state = IN;
				count++;
				putchar(c);
			}
		else{
			putchar(c);
		}
		
	}printf("count = %d\n",count);
}
		
	

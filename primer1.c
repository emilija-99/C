// Napisati program koji broji razmake, tab i nove redove
#include <stdio.h>
int main(){
	
	int c, nb, nt, nl;
	
	nb = nt = nl = 0;
	
	while((c = getchar()) != EOF){
			if(c == ' ')
				++nb;
			else if(c == '\n')
				++nl;
			else if(c == '\t')
				++nt;
		}
	printf("nb : %d ; nt = %d ; nl = %d\n",nb,nt,nl);
	
}

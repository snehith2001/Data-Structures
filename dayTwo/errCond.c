#include <stdio.h>

void recur(int);

int main(){
	recur(1);
	printf("\n");
}
void recur(int num){
	printf("%d  ", num);
	recur(num+1);
}

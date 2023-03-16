#include <stdio.h>
#include <stdlib.h>
int primenumber(int number){
	int i;
	for(i=2;i<number;i++)
	{
		if(number%i==0){
			return 0;
		}
		
		else 
		return 1;
	}
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 int n;
	 printf("entry a number\n");
	 scanf("%d",&n);
	 if(primenumber(n)==0){
	 	printf("it is NOT a prime number");
	 }
	 
	 else {
	 	 printf("it is a prime number");
	
	 }
	return 0;
}
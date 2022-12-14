#include "requirelib/require.h"
#include "user/processing.h"

int main(){
	int N=1;
	printf("count people to add : ");
	scanf("%d%*c",&N);
	People *peoples;
	peoples = insertPeople(N);
	printPeople(&peoples, N);
}

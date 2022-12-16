#include "requirelib/require.h"
#include "user/processing.h"

int main(){
	int N=1;
	printf("count people to add : ");
	scanf("%d%*c",&N);
	People *peoples;
	peoples = insertPeople(N);
	//printPeople(&peoples, N);

	printf("\n\n");
  printf("=======================================\n");
  printf("=====  		LIST USERS 	  =====\n");
  printf("=======================================\n");

  for(int x=0; x<N; x++){
    printf("%d.	Nama : %s", x+1, peoples[x].name);
    printf("	Address : %s", peoples[x].address);
    printf("	Gender : %s", peoples[x].gender);
    printf("	Phone : %s", peoples[x].phone);
    printf("	Email : %s", peoples[x].email);
		printf("\n");
  }
  printf("=======================================\n");

}

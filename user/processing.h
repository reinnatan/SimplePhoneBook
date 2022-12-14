 typedef struct {
	char *id;
	char *name;
	char *address;
	char *gender;
	char *phone;
	char *email;
}People;

People *insertPeople(int count){
  People *peoples;

  peoples = (People *) malloc(count*sizeof(People));
  for(int x=0; x<count; x++){
    peoples[x].name = malloc(256);
    peoples[x].address = malloc(256);
    peoples[x].gender = malloc(11);
    peoples[x].phone = malloc(21);
    peoples[x].email = malloc(51);

    printf("%d. user\n", x+1);
    printf("Name : ");
    fgets(peoples[x].name, 255, stdin);

    printf("Address : ");
    fgets(peoples[x].address, 255, stdin);

    printf("Gender : ");
    fgets(peoples[x].gender, 10, stdin);

    printf("Phone : ");
    fgets(peoples[x].phone, 20, stdin);

    printf("Email : ");
    fgets(peoples[x].email, 50, stdin);
  }

  return peoples;
}

void printPeople(People **peoples, int count){
  printf("\n\n");
  printf("=======================================\n");
  printf("=====  		LIST USERS 	  =====\n");
  printf("=======================================\n");
  for(int x=0; x<count; x++){
    printf("Nama : %s", peoples[x]->name);
    printf("Address : %s", peoples[x]->address);
    printf("Gender : %s", peoples[x]->gender);
    printf("Phone : %s", peoples[x]->phone);
    printf("Email : %s", peoples[x]->email);
  }
  printf("=======================================\n");

}

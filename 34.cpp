#include <stdio.h>
#include <string.h>

int main(void) {
  char address[100];

  while (1) {
    printf("Please enter an address: ");
    scanf("%s", address);

    if (strcmp(address, ".") == 0) {
      break;
    } else {
      printf("You entered: %s\n", address);
    }
  }

 
}


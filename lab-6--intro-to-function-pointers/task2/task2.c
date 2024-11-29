#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
void exit_program();

int (*operations[5])(int, int) = {add, subtract, multiply, divide, NULL};


int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
  int a = 6, b = 3, result;

  printf("Operand ‘a’ : %d | Operand ‘b’ : %d\n", a, b);
  printf("Specify the operation to perform (0 : add | 1 : subtract | 2 : multiply | 3 : divide | 4 : exit): ");

  char choice;
  scanf(" %c", &choice);

  int index = choice - '0'; 
  result = (index == 4) ? (exit_program(), 0) : operations[index](a, b);

  if (index != 4) {
      printf("Result: %d\n", result);
  }

	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }

int subtract(int a, int b) {
    printf("Subtracting ‘b’ from ‘a’\n");
    return a - b;
}

int multiply(int a, int b) {
    printf("Multiplying ‘a’ and ‘b’\n");
    return a * b;
}

int divide(int a, int b) {
    printf("Dividing ‘a’ by ‘b’\n");
    return b != 0 ? a / b : 0; // Handle division by zero gracefully
}

void exit_program() {
    printf("Exiting program...\n");
    exit(0);
}

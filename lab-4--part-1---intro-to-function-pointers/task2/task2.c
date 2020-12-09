#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int subtract (int a, int b);
int multiply (int a, int b);
int divide (int a, int b);


int (*options[4]) (int x, int y);
int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
  int num, input;
  
  options[0] = add;
  options[1] = subtract; 
  options[2] = multiply; 
  options[3] = divide; 
 

  while(input != 4){
  printf("Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit): ");
  scanf("%d", &input);
  
  num = (*options[input]) (10, 5);
  printf("x = %d\n", num);
  }
	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }
int subtract (int a, int b) {printf("Subtract 'a' and 'b'\n"); return a - b;}
int multiply (int a, int b){printf("Multiply 'a' and 'b' \n"); return a*b;}
int divide (int a, int b){printf("Divide 'a' and 'b' \n"); return a/b;}

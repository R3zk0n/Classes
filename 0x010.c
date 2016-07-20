#include <stdio.h>


int main(void) // Int means its gonna have a return value which means return 0;
//Void means your not sending arguments to the function so it can run full no argc
{

  int User;
  int Count = 0;
  printf("Please enter a int value\n");
  scanf("%i", &User);
  for (int i = 0; i < User; i++)
  {
    printf("[%d] Hello Reddit\n", Count, ++Count);
  }
  return 0; //Return control back to os,
}

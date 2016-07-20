#include <stdio.h>


int main(void) // Int means its gonna have a return value which means return 0;
//Void means your not sending arguments to the function so it can run full no argc
{
  int User;  //Int user
  int Count = 0; // Count.
  int *Point;

  Point = &Count;

  printf("Please enter a int value\n");
  scanf("%i", &User);
  for (int i = 0; i < User; i++) //Nice incrementation
  {
    printf("[%d] Hello Reddit\n", Count, ++Count); //Well this is neat.
    if (Count == 100)
    {
      printf("The Address of count is:%x\n",&Count);
      printf("Acessing the variable: %x\n", Point);
    }
  }
  return 0; //Return control back to os,
}

#include <cs50.h>   // for get int function
#include <stdio.h>      // for printf function

int main(void)
{
    char c = get_char("Do you agree? ");

    if (c == 'y' || c == 'Y')
  {
        printf("Agreed.\n");
  }
    else if (c == 'n' || c == 'N')
  {
        printf("Not agreed.\n");
  }
}

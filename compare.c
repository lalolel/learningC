#include <cs50.h>   // for get int function
#include <stdio.h>      // for printf function

int main(void)
{
  int x = get_int("What's x? ");
  int y = get_int("What's y? ");

if (x < y)
{
printf("x is less than y\n");
}
else if (x > y)
{
printf("x is greater than y\n");
}
else
{
printf("x is equal to y\n");
}

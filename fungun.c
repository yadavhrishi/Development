#include<stdio.h>

void gun();
void fun();

int main()
{
   printf("Inside main");
   fun();
   gun();
   return 0;
}

void gun()
{
   pritntf("Inside gun");
   
}

void fun()
{
   printf("Inside fun");   
   
}
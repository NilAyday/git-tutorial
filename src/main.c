#include <stdio.h>
#include <espl_lib.h>
int main()
{
  char answer='y';
  int number= 1;
  while( answer!='n')
  {
     printf("Please write  a number\n");
     scanf("%d", &number);
     printf("Your number = %s\n",num_to_words(number));
     printf("do you wish to give an another number? (y/n)\n");
     scanf(" %c",&answer);
   }
   return 0;
}

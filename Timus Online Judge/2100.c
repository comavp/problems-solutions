/*
Свадебный обед
https://acm.timus.ru/problem.aspx?space=1&num=2100
*/

#include <stdio.h>

int main()
{
   int n, j;
   char name[30];
   scanf("%d", &n);
   for(int i = n; i > 0; i--)
   {
      scanf("%s", name);
      j = 0;
      while(name[j])
      {
         if(name[j] == '+')
         {
            n++;
         }
         j++;
      }
   }
   if(n + 2 == 13)
      printf("%d", 100 * (n + 3));
   else
      printf("%d", 100 * (n + 2));
   return 0;
}
#include <stdio.h>
/* Include other headers as needed */
int Fibonacci(int);
 
int main()
{
   int n, i = 0, c;
   scanf("%d",&n);
   for ( c = n-1 ; c >= 0 ; c-- )
   {
      printf("%d\n", Fibonacci(c));
      i++; 
   }
   return 0;
}
int Fibonacci(int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( Fibonacci(n-1) + Fibonacci(n-2) );
}

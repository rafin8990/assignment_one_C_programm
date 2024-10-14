// problem 1

// Abul Babul and Bablu are three friends. This year Abul got X taka Salami, Babul got Y taka Salami and Bablu got Z taka salami.Now the want to know what is the total amount of salami they got in this year.

// Input will contain three variable X,Y,Z.
// constractor: 0<=X,Y,Z<=1000

#include <stdio.h>
int main()
{
  int X;
  int Y;
  int Z;

  scanf("%d %d %d", &X, &Y, &Z);
  printf("%d", X + Y + Z);
}

// Problem 2

// you will be given two integer A and B. You need to multiplication them.

#include <stdio.h>

int main()
{
  long long int A;
  long long int B;

  scanf("%lld %lld", &A, &B);
  printf("%lld", A * B);
}

// problem 3

#include <stdio.h>

int main()
{
  int M;

  scanf("%d", &M);
  if (M >= 1000)
  {
    printf("Three Kacchi");
  }
  else if (M >= 500)
  {
    printf("One Large Pizza");
  }
  else if (M < 500 && M >= 250)
  {
    printf("Three Small Burger");
  }
  else if (M >= 100)
  {
    printf("Three Fuchka");
  }
  else
  {
    printf("Nothing");
  }
}

// problem 4

#include <stdio.h>

int main()
{
  int M;

  scanf("%d", &M);

  if (M % 3 == 0)
  {
    printf("Yes");
  }
  else
  {
    printf("No");
  }
}

// problem 5

#include <stdio.h>

int main()
{
  int N;
  int i;

  scanf("%d", &N);

  for (i = 1; i <= N; i++)
  {
    if (i % 3 == 0 || i % 5 == 0)
    {
      printf("%d Yes\n", i);
    }
    else
    {
      printf("%d No\n", i);
    }
  }
}

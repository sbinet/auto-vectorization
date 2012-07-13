#include <stdio.h>

int main() 
{
  const unsigned int N = 10000000;
  float *a = new float[N];
  float *b = new float[N];
  float *c = new float[N];

  for (unsigned int j = 0; j<200; j++) {
    for (unsigned int i = 0; i < N; i++) {
      c[i] = a[i] * b[i];
    }
  }

  return 0;
}

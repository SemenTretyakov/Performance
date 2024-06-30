#include <iostream>

// int main()
// {
//   float k = 0.5f, b = -1.4f;
//   int n = 100;
//   // определяем массив сами с помощью оператора new
//   // после этого по завершению программы, нужно очистить выделенную память
//   float* y = new float[n];
//   for (int x; x < 100; x++) {
//     y[x] = k * x + b;
//     printf("%. 2f", y[x]);
//   }

//   // освобждение памяти
//   delete[] y;

//   return 0;
// }

int main()
{
  const int N = 20;
  char marks[N] = { 2, 2, 3 };

  printf("%d ", marks);


  return 0;
}
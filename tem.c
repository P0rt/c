#include <stdio.h>

// вывод таблицы по фарингейту и по цельсию
// для farh = 0, 20, ... , 300
int main ()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0; /* нижняя граница темпиратур в таблице */
  upper = 300; /* верхняя граница */
  step = 10; /* величина шага */
  printf ("\n");
  celsius = lower;
  while (fahr <= upper) {
    fahr = (celsius * 1.8) + 32;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius  + step;
  }
}
// Градусы по Цельсию = (градусы по Фаренгейту - 32) / 1.8
// Градусы по Фаренгейту = (градусы по Цельсию x 1.8) + 32

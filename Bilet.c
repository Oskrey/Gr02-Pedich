#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main()
{
int N, sum;
int *m;

printf("Введите колличество оценок: ");
scanf("%d", &N);

m = (int*) malloc(N * sizeof(int));

for (int i = 0; i < N; i++)
{
m[i] = rand() % 5 + 2;
printf("Предмет %d = ", i); printf("%d\n", m[i]);
sum += m[i];
}

float GPA = (float)sum / (float)N;
printf("Средний балл = %1.2f\n", GPA);

if (GPA < 4.6)
printf("Ваш балл не достаточен для поступления\n");
else
printf("Ваш балл достаточен для поступления\n");

free(m);

return 0;
}
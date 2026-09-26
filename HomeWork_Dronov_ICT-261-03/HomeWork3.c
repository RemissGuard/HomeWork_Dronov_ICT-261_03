#include <stdio.h>
#include <locale.h>
#define H 3600
#define M 60
main()
{
	setlocale(LC_ALL, "RUS");
	int t;
	puts("Введите количество секунд\n");
	scanf("%d", &t);
	puts("");
	puts("ОТВЕТ:\n");
	printf("%d секунд - это %d час(-а / -ов), %d минут(-ы / -а) и %d секунд(-а / -ы)\n", t, t/H, t%H/M, t%M);
}

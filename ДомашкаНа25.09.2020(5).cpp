#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int x, y, z, u, v;
	printf("Введите параметры кирпича : Длина, Ширина, Высота \n");
	scanf_s("%d %d %d", &x, &y, &z);
	printf("Введите параметры дырки:Длина и Ширина \n");
	scanf_s("%d %d", &u, &v);
	if (x <= u || y <= u || z <= u || x <= v || y <= v || z <= v) printf("Кирпич войдет в дырку \n");
	else printf("Кирпич не войдет в дырку \n");
}

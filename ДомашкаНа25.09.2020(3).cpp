#include<iostream>

using namespace std;

int main() {
    int n, a, b(0);
    setlocale(LC_ALL, "RUS");
    scanf_s("%d", &n);
    if (n > 0 && n < 5) {
        for (int i = 0; i < n; i++) {
            scanf_s("%d", &a);
            b += a;
        }
        printf("Сумма чисел равна %d", b);
    }
    else {
        printf("Введите заново число от 0 до 5");
    }
    return 0;
}
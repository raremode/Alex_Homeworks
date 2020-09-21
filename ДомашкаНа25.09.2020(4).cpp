#include <iostream>

using namespace std;

int main() {
    int n, a, b;
    scanf_s("%d %d", &a, &b);
    for (int i = 0; i <= a;) {
        printf("%d \n", i);
        i += b;
    }
    return 0;
}
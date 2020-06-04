#include <iostream>
#include <locale>

using namespace std;

int sum(int n, ...) {
    int* p = &n, summ = 0;
    for (int i = n; n != 0; n--) summ += *(++p);
    return summ;
}

int main() {
    setlocale(LC_ALL, "rus");
    cout << "Сумма 3 единиц равна: " << sum(3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1) << endl;
    cout << "Сумма 7 единиц равна: " << sum(7, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1) << endl;
    cout << "Сумма 11 единиц равна: " << sum(11, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1) << endl;
}
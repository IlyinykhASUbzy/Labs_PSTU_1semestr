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
    cout << "����� 3 ������ �����: " << sum(3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1) << endl;
    cout << "����� 7 ������ �����: " << sum(7, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1) << endl;
    cout << "����� 11 ������ �����: " << sum(11, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1) << endl;
}
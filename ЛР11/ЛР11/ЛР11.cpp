#include <ctime>
#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    int* array = 0;
    int n = 0;
    int iD = 0;
    int iI = 0, iE = 0;
    int i, j;

    srand(time(0));

    cout << "¬ведите колличество элементов в массиве: " << endl;
    cin >> n;
    array = new int[n];
    cout << "—формированный массив: ";

    for (i = 0; i < n; i++)
        cout << (array[i] = rand() % 10) << " ";
    cout << endl;
    cout << "введите номер удал€емого элемента: " << endl;
    cin >> iD;

    for (i = 0; i < n; i++) {
        if (i == (iD - 1)) {
            for (int l = i; l < n - 1; l++) {
                array[l] = array[l + 1];
            }
            n--;
        }
    }
    for (i = 0; i < n; i++) {
        cout << array[i] << "  ";
    }
    cout << endl;
    n++;
    cout << "введите номер нового элемента: " << endl;
    cin >> iI;
    cout << "¬ведите новый элемент: " << endl;
    cin >> iE;
    for (int i = n - 1; i > iI - 1; i--) {
        array[i] = array[i - 1];
    }
    array[iI - 1] = iE;
    for (i = 0; i < n; i++) {
        cout << array[i] << "  ";
    }

    delete[] array;

    return 0;
}

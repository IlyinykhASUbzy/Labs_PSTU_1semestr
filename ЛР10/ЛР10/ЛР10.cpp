#include <iostream>
#include <fstream>
#include <locale>
#define MAXLINE 255
#pragma warning(disable : 4996)

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int nSTRING = 10, nLINE = 0;
    long sizeIN, sizeOUT;
    FILE* in, * out;
    char buf[MAXLINE];
    char buf1[255]{ "1" },
        buf2[255]{ "2" },
        buf3[255]{ "3" },
        buf4[255]{ "4" },
        buf5[255]{ "5" },
        buf6[255]{ "6" },
        buf7[255]{ "7" },
        buf8[255]{ "8" },
        buf9[255]{ "9" },
        buf10[255]{ "10" };

    if ((in = fopen("in.txt", "w")) == NULL) exit(1);
    while (nSTRING--) {
        if (nSTRING == 9) { fputs(buf1, in); cout << "Строка 1 записана" << endl; }
        if (nSTRING == 8) { fputs(buf2, in); cout << "Строка 2 записана" << endl; }
        if (nSTRING == 7) { fputs(buf3, in); cout << "Строка 3 записана" << endl; }
        if (nSTRING == 6) { fputs(buf4, in); cout << "Строка 4 записана" << endl; }
        if (nSTRING == 5) { fputs(buf5, in); cout << "Строка 5 записана" << endl; }
        if (nSTRING == 4) { fputs(buf6, in); cout << "Строка 6 записана" << endl; }
        if (nSTRING == 3) { fputs(buf7, in); cout << "Строка 7 записана" << endl; }
        if (nSTRING == 2) { fputs(buf8, in); cout << "Строка 8 записана" << endl; }
        if (nSTRING == 1) { fputs(buf9, in); cout << "Строка 9 записана" << endl; }
        if (nSTRING == 0) { fputs(buf10, in); cout << "Строка 10 записана" << endl; }
        fputs("\n", in);
    }
    cout << "Запись в первый фаил завершена" << endl;
    fclose(in);

    if ((in = fopen("in.txt", "r")) == NULL) exit(2);
    if ((out = fopen("out.txt", "w")) == NULL) exit(3);

    while (fgets(buf, MAXLINE, in)) {
        ++nLINE;
        if (nLINE % 2 == 0) fputs(buf, out);
    }
    cout << "Копирование четных строк завершено" << endl;
    fseek(in, 0, SEEK_END);
    sizeIN = ftell(in);
    cout << "Размер исходного файла: " << sizeIN << " байт " << endl;
    fseek(out, 0, SEEK_END);
    sizeOUT = ftell(out);
    cout << "Размер файла содержащего только четные строки: " << sizeOUT << " байт " << endl;
    fclose(in);
    fclose(out);
    return 0;
}

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
        if (nSTRING == 9) { fputs(buf1, in); cout << "������ 1 ��������" << endl; }
        if (nSTRING == 8) { fputs(buf2, in); cout << "������ 2 ��������" << endl; }
        if (nSTRING == 7) { fputs(buf3, in); cout << "������ 3 ��������" << endl; }
        if (nSTRING == 6) { fputs(buf4, in); cout << "������ 4 ��������" << endl; }
        if (nSTRING == 5) { fputs(buf5, in); cout << "������ 5 ��������" << endl; }
        if (nSTRING == 4) { fputs(buf6, in); cout << "������ 6 ��������" << endl; }
        if (nSTRING == 3) { fputs(buf7, in); cout << "������ 7 ��������" << endl; }
        if (nSTRING == 2) { fputs(buf8, in); cout << "������ 8 ��������" << endl; }
        if (nSTRING == 1) { fputs(buf9, in); cout << "������ 9 ��������" << endl; }
        if (nSTRING == 0) { fputs(buf10, in); cout << "������ 10 ��������" << endl; }
        fputs("\n", in);
    }
    cout << "������ � ������ ���� ���������" << endl;
    fclose(in);

    if ((in = fopen("in.txt", "r")) == NULL) exit(2);
    if ((out = fopen("out.txt", "w")) == NULL) exit(3);

    while (fgets(buf, MAXLINE, in)) {
        ++nLINE;
        if (nLINE % 2 == 0) fputs(buf, out);
    }
    cout << "����������� ������ ����� ���������" << endl;
    fseek(in, 0, SEEK_END);
    sizeIN = ftell(in);
    cout << "������ ��������� �����: " << sizeIN << " ���� " << endl;
    fseek(out, 0, SEEK_END);
    sizeOUT = ftell(out);
    cout << "������ ����� ����������� ������ ������ ������: " << sizeOUT << " ���� " << endl;
    fclose(in);
    fclose(out);
    return 0;
}

﻿#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int num;
    int num2;
    char sim;

    cout << "[+] программа: фигуры" << endl;
    cout << endl;
    cout << "1 Линия" << endl;
    cout << "2 Квадрат" << endl;
    cout << "выберите фигуру От 1 до 2: ";
    cin >> num;
    system("cls");
    switch (num)
    {
    case 1:
        cout << "+ Программа: фигуры, линия" << endl;
        cout << endl;
        cout << "размер фигуры: ";
        cin >> num2;
        system("cls");
        cout << "[+] программа: Фигуры" << endl;
        cout << endl;
        cout << "1 горизонтальная" << endl;
        cout << "2 вертикальная" << endl;
        cout << "выберите тип линии от 1 до 2: ";
        cin >> num;
        system("cls");

        switch (num)
        {
        case 1:
            cout << "выберите символ: ";
            cin >> sim;
            system("cls");
            for (int i = 0; i < num2; i++)
            {
                cout << sim;
            }
            break;
        case 2:
            cout << "выберите символ: ";
            cin >> sim;
            system("cls");
            for (int i = 0; i < num2; i++)
            {
                cout << endl << sim;
            }
            break;
        default:
            cout << "вы ввели неправильно.";
            break;

        }
    }
    return 0;
}
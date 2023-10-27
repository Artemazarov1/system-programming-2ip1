#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    while (true) {
        cout << "1. линия" << endl;
        cout << "2. квадрат" << endl;
        cout << "3. прямоугольник" << endl;
        cout << "4. треугольник" << endl;
        cout << "0. выход" << endl;
        cout << "выберите фигуру: " << endl;

        int choice;
        cin >> choice;
        cout << endl;

        if (choice == 0) {
            cout << "выход из программы." << endl;
            break;
        }
        else if (choice < 1 || choice > 4) {
            cout << "ошибка. некорректный выбор." << endl << endl;
            continue;
        }

        cout << "введите символ: ";
        char symbol;
        cin >> symbol;

        cout << "введите 1, чтобы фигура была заполненной, или 0, чтобы не была: ";
        bool filled;
        cin >> filled;
        cout << endl;

        if (choice == 1) {
            int length;
            cout << "введите длину линии: ";
            cin >> length;

            for (int i = 0; i < length; i++) {
                cout << symbol << " ";
            }

            cout << endl << endl;
        }
        else if (choice == 2) {
            int sideLength;
            cout << "введите длину стороны квадрата: ";
            cin >> sideLength;

            if (filled) {
                for (int i = 0; i < sideLength; i++) {
                    for (int j = 0; j < sideLength; j++) {
                        cout << symbol << " ";
                    }
                    cout << endl;
                }
            }
            else {
                for (int i = 0; i < sideLength; i++) {
                    for (int j = 0; j < sideLength; j++) {
                        if (j == 0 || i == 0 || i == sideLength - 1 || j == sideLength - 1) {
                            cout << symbol << " ";
                        }
                        else {
                            cout << "  ";
                        }
                    }
                    cout << endl;
                }
            }

            cout << endl;
        }
        else if (choice == 3) {
            int width, height;
            cout << "Введите ширину прямоугольника: ";
            cin >> width;
            cout << "Введите высоту прямоугольника: ";
            cin >> height;

            if (filled) {
                for (int i = 0; i < height; i++) {
                    for (int j = 0; j < width; j++) {
                        cout << symbol << " ";
                    }
                    cout << endl;
                }
            }
            else {
                for (int i = 0; i < height; i++) {
                    for (int j = 0; j < width; j++) {
                        if (j == 0 || i == 0 || i == height - 1 || j == width - 1) {
                            cout << symbol << " ";
                        }
                        else {
                            cout << "  ";
                        }
                    }
                    cout << endl;
                }
            }

            cout << endl;
        }
        else if (choice == 4) {
            int height;
            cout << "Введите высоту треугольника: ";
            cin >> height;

            if (filled) {
                for (int i = 0; i < height; i++) {
                    for (int j = 0; j <= i; j++) {
                        cout << symbol << " ";
                    }
                    cout << endl;
                }
            }
            else {
                for (int i = 0; i < height; i++) {
                    for (int j = 0; j <= i; j++) {
                        if (i == height - 1 || j == 0 || j == i) {
                            cout << symbol << " ";
                        }
                        else {
                            cout << "  ";
                        }
                    }
                    cout << endl;
                }
            }

            cout << endl;
        }
    }

    return 0;
}
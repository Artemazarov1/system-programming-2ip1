#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");

    int arrInt[]{10 , 20 ,30 ,40 ,50 ,60 ,70 ,80 ,90 ,100};
    cout << "массивы с типом данных Int\n";
    for (int i = 0; i < 10; i++)
    {
        cout << arrInt[i] << endl;
    }

    long arrLong[]{1000, 2000 ,3000 ,4000 ,5000 ,6000 ,7000 ,8000 ,9000 ,10000};
    cout << "массивы с типом данных  Long\n";
    for (int i = 0; i < 10; i++)
    {
        cout << arrLong[i] << endl;
    }


    short arrShort[]{1 , 2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 ,10 };
    cout << "массивы с типом данных  Short\n";
    for (int i = 0; i < 10; i++)
    {
        cout << arrShort[i] << endl;
    }

    float arrFloat[]{0.1, 0.2 ,0.3 ,0.4 ,0.5 ,0.6 ,0.7 ,0.8 ,0.9 ,0.10};
    cout << "массивы с типом данных float\n";
    for (int i = 0; i < 10; i++)
    {
        cout << arrFloat[i] << endl;
    }

    double arrDouble[]{0.001, 0.002 ,0.003 ,0.004 ,0.005 ,0.006 ,0.007 ,0.08 ,0.009 ,0.0010};
    cout << "массивы с типом данных Double\n";
    for (int i = 0; i < 10; i++)
    {
        cout << arrDouble[i] << endl;
    }

    bool arrBool[]{true, false, true, true ,true, true, true, false , false, true};
    cout << "массивы с типом данных bool\n";
    for (int i = 0; i < 10; i++)
    {
        cout << arrBool[i] << endl;
    }


    char arrChar[]{'q', 'a', 'z', 'x', 's', 'w' , 'e', 'd' , 'i' , 'b'};
    cout << "массивы с типом данных char \n";
    for (int i = 0; i < 10; i++)
    {
        cout << arrChar[i] << endl;
    }
    return 0;
}
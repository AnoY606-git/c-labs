//Шаблоны классов

#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

class Point
{
public:
    Point()
    {
        x = y = z = 0;
    }
    Point(int x, int y, int z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    int x;
    int y;
    int z;
private:

};

template <class T1, class T2, class T3> 
class MyClass
{
public:

    MyClass(T1 value, T2 value2, T3 value3)
    {
        this->value = value;
        this->value2 = value2;
        this->value3 = value3;
    }

    void DataTypeSize()
    {
        cout << "Value = " << sizeof(value) << endl;
        cout << "Value2 = " << sizeof(value2) << endl;
        cout << "Value3 = " << sizeof(value3) << endl;
    }

private:
    T1 value;
    T2 value2;
    T3 value3;
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a = 5;
    Point p;
    string c = "Абоба";
    
    MyClass<int, Point, string> b(a, p, c);

    b.DataTypeSize();

    return 0;
    system("pause");
}



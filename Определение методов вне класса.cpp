//Определение методов вне класса

#include <iostream>
#include <Windows.h>
using namespace std;

class MyClass
{
public:
    void PrintMessage();

private:

};

void MyClass::PrintMessage()
{
    cout << "Чупапи Муняня - Бесплатный!" << endl;   
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    MyClass a;

    a.PrintMessage();

    return 0;
    system("pause");
}

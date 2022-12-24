//Реализация односвязного списка

#include <iostream>
#include <Windows.h>
using namespace std;

template<class T> // Шаблонный класс List для работы с разными типами данных
class List
{
public:
	List();
	~List();

    void pop_front();
    void clear();
    void push_back(T data);
    int GetSize() { return Size; } // Выводим на консоль отладочную информацию о количестве элементов в списке
    T& operator[](const int index); // Ссылка на T 


    void push_front(T data);
    void insert(T data, int index);
    void removeAt(int index);
    void pop_back();


private:

    template<class T> // Шаблонный класс Node для работы с разными типами данных
    class Node // Node - узел нашего списка
    {
    public:
        Node *pNext; // Указатель на следующий элемент
        T data; // Адресс в ячейке памяти
        Node(T data = T(), Node* pNext = nullptr) // Конструктор куда будем передавать данные и указатель на следующий элемент
        {
            // Присваиваем входящие параметры
            this->data = data;  
            this->pNext = pNext;
        }
    };

    int Size; // Size будет хранить количество элементов в нашем списке
    Node<T> *Head; // Head нашего списка тоже будет шаблонным, он так же будет указателем, ибо все элементы списка в динамической памяти

};

template<class T> // Конструктор у нас шаблонный
List<T>::List()
{
    Size = 0; // Присвоим переменной 0, для того, чтобы там не было мусора
    Head = nullptr; // Указателю присваиваем nullptr, чтобы там не было мусора
}

// Очистка данных в списке
template<class T>
void List<T>::pop_front()
{
    Node<T> *temp = Head; // Создаём временную указатель temp, куда присваиваем значение head

    Head = Head->pNext; // После того, как занесли данные во временную переменную, присваиваем нашему head значение head следующего элемента

    delete temp; // Удаляем данные из temp

    Size--; // Уменьшаем size на один
} // В конце очистке из списка будет убран первый элемент

// Очистка всех элементов из списка
template<class T>
void List<T>::clear()
{
    while (Size) // Передаём в цикл переменную Size, которая отвечает за кол. элементов в списке
    {
        pop_front(); // Удаляет элементы из списка
    }
} // Как только в списке не останется элементов, цикл закончится 

template<class T> // Деструктор тоже шаблонный
List<T>::~List()
{

}

template<class T> // Реализация метода, чтобы можно было вставить данные в конец списка
void List<T>::push_back(T data)
{
    if (Head == nullptr) // Проверяем пустой ли наш head
    {
        Head = new Node<T>(data); // Если он пустой то мы создаем элемент и передаём туда наши данные
    }
    else
    {
        // Создаём временную переменную типа Node, это указатель "current" на Node и присваиваем туда значение нашего заголовка
        Node<T>* current = this->Head;

        // Проверяем на, что указывает поле pNext нашего текущего элемента и если она не равна nullptr
        while (current->pNext != nullptr) 
        {
            // Присваиваем указатель на следующий элемент, пока не найдем ту Node, которая указывает на nullptr
            current = current->pNext; 
        }
        // Когда мы находим элемент, у которого адресс указывает на nullptr, мы создаём новый элемент и присваиваем ему новый адрес за место nullptr
        current->pNext = new Node<T>(data);  
    }

    Size++; // Увеличиваем переменную Size на 1, для того, чтобы знать, сколько элементов у нас в списке
}

// Логика нахождения нужного элемента в списке
template<class T> 
T& List<T>::operator[](const int index) // index - это число которое мы передали, чтобы получить данные из данного элемента в списке
{
    // Счётчик который считает, в каком элементы мы сейчас находимся
    int counter = 0; 
    // Создаём временный объект current, который отвечает в каком сейчас элементе мы находимся, чтобы проверить адрес следующего элемента
    Node<T>* current = this->Head;

    // Цикл будет работать, пока текущий указатель не будет равен nullptr
    while (current != nullptr) 
    {
        if (counter == index) // Проверяем значение нашего счётчика, равен ли он index, если равен, то мы нашли наш элемент
        {
            return current->data; // Забираем у текущего элемента данные из поля data
        }
        else
        {
            current = current->pNext; // Если элемент не найден, то спрашиваем у текущего эеменета адресс следующего элемента
            counter++; // Увеличиваем счётчик на 1 элемент
        }
    }
}

template<class T> 
void List<T>::push_front(T data) // Добавляем новый элемент в начало списка
{
    // new - создание нового элемента. "Head =" указание, что новый элемент становится Head. Вторым параметром закидываем старый Head
    Head = new Node<T>(data, Head); 
    Size++; // Увеличиваем Size на 1
}

template<class T>
void List<T>::insert(T data, int index) // Добавление элемента между двумя элементами в списке
{

    if (index == 0) // Проверяем, если индекс элемента равен 0, то используем push_front 
    {
        push_front(data);
    }
    else
    {
        Node<T>* previous = this->Head; // Присваиваем временному указателю pervious ардес памяти нашего Head

        for (int i = 0; i < index - 1; i++) // Цикл, чтобы найти элемент, который предшествует элементу, на место которого мы хотим поместить элемент
        {
            previous = previous->pNext; // Присваиваем указатель во временную переменную указатель, который будет содержать адрес элемента до
        }

        Node<T>* newNode = new Node<T>(data, previous->pNext); // Создаём элемент, передаём ему данные и у предыдущего элемента берём поле pNext
        previous->pNext = newNode; // Адрес предыдущего элемента присваиваем адрес нового элемента

        Size++; // Увеличиваем Size на 1
    }

}

template<class T>
void List<T>::removeAt(int index)
{
    if (index == 0) // Если индекс равен нулю, то используем функцию pop_front
    {
        pop_front();
    }
    else
    {
        Node<T>* previous = this->Head; // Создаём временный указатель на Head 
        for (int i = 0; i < index - 1; i++) // Ищем нужный индекс
        {
            previous = previous->pNext;
        }

        Node<T>* toDelete = previous->pNext; // Создаём новый элемент и присваиваем временному указателю, указатель на Head

        previous->pNext = toDelete->pNext; // Присваиваем временный указатель на новый элемент

        delete toDelete; // Удаляем данные
        Size--; // Уменьшаем список на 1
    }
}

template<class T>
void List<T>::pop_back() // Удаляем последний элемент в списке
{
    removeAt(Size - 1); // Size - 1, то есть 0,1,2. Третий элемент удаляем...
}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    List<int> lst;

    int numberCount;
    cout << "Введите количество элементов в списке: ";
    cin >> numberCount;

    for (int i = 0; i < numberCount; i++) // Цикл который заполняет рандомные данные в список
    {
        lst.push_back(rand()&1000);
    }

    cout << "Всего элементов в списке: " << lst.GetSize() << endl; // Проверка на количество элементов в списке

    int vvod;
    cout << "Введите номер элемента, который хотите заменить: ";
    cin >> vvod;

    int userNumber;
    cout << "Введите число которое хотите добавить в список: ";
    cin >> userNumber;

    lst.insert(userNumber, vvod); // Перое число, это элемент, который мы пердаём в новый элемент, а второе число, это номер элемента

    cout << "Всего элементов в списке: " << lst.GetSize() << endl; // Проверка на количество элементов в списке

    for (int i = 0; i < lst.GetSize(); i++) // Цикл вывода элементов списка 
    {
        cout << "Элемент " << i << " = " << lst[i] << endl;
    }

    int userDelete;
    cout << "Введите номер элемента, который хотите удалить: " << endl;
    cin >> userDelete;

    lst.removeAt(userDelete);

    cout << "Всего элементов в списке: " << lst.GetSize() << endl; // Проверка на количество элементов в списке

    for (int i = 0; i < lst.GetSize(); i++) // Цикл вывода элементов списка 
    {
        cout << "Элемент " << i << " = " << lst[i] << endl;
    }

    cout << "Выполнено удаление элемента из списка" << endl;
    lst.pop_front(); // Вызываем функцию для удаления первого элемента в списке

    cout << "Всего элементов в списке: " << lst.GetSize() << endl;


    cout << "Выполнено удаление всех элементов из списка" << endl;
    lst.clear();

    cout << "Всего элементов в списке: " << lst.GetSize() << endl;

    return 0;
    system("pause");
}
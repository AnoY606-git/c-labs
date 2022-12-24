#include <iostream>
#include <windows.h>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
using namespace std;

struct Node 
{
    string name;
    int index;
    int mass;                  // вес
    Node *pFather;          // отец в исходном дереве
    vector<Node*> sonsTree;  // указатели на сыновей

};



int main(Node*& aboba)
{
    string buffer;
    int i, top, topFirst, topSecond, length;
    Node* pNode, * qNode, * nullNode;       // *root = 0 
    topSecond = -1;                    // уровень предыдущей вершины
    nullNode = NULL;                // указатель на предыдущую вершину
    while (!F.eof())
    {
        getline(F, buffer);
        length = buffer.length();
        if (length == 0) continue;       // если конец файла в следующей строке или пустая строка
        topFirst = 0;
        while (buffer[topFirst] == '.') topFirst++;     // topFirst-уровень вершины
        pNode = new Node;
        i = 0;        top = topFirst;
        while ((top < length) && (buffer[top] != ' ')) top++;       // buffer[top] == ' ' или top == length
        pNode->name = buffer.substr(topFirst, top - topFirst);
        pNode->index = topFirst;
        pNode->mass = 0;
        top++;

        while (top < length)
        {
            pNode->mass = 10 * (pNode->mass) + buffer[top++] - '0';    // очередная цифра
        }
        if (topFirst == 0)                    // корень
        {
            aboba = pNode;  nullNode = aboba;
            topSecond = 0;
            continue;
        }
        if (topFirst > topSecond)                  // переход на следующий уровень
        {
            nullNode->sonsTree.push_back(pNode);
            pNode->pFather = nullNode;
        }
        else if (topFirst == topSecond)            // тот же уровень
        {
            qNode = nullNode->pFather;
            qNode->sonsTree.push_back(pNode);
            pNode->pFather = qNode;
        }
         else        // подъем по дереву на topSecond-topFirst+1 уровней
        {
            qNode = nullNode;
            for (i = 0; i <= topSecond - topFirst; i++) qNode = qNode->pFather;
            // qNode - отец вводимой вершины pNode
            qNode->sonsTree.push_back(pNode);
            pNode->pFather = qNode;
        }
        topSecond = topFirst;      // текущий уровень
        nullNode = pNode;      // текущая вершина
    }
    F.close();
    return 0;
}

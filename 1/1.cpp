#include <iostream>
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
    setlocale(0, "ru");
    int a[10][10], x, b;
    cout << "Введите количество строк: " << endl;
    cin >> x;
    cout << "Введите количество столбцов: " << endl;
    cin >> b;
    cout << "Введите элементы массива: " << endl;
    for (int i = 0; i < x; i++)
        for (int j = 0; j < b; j++)
        {
            cin >> a[i][j];
        }
    cout << "Матрица:\n";
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < b; j++)
            cout << a[i][j] << "\t";
        cout << endl;
    }
    int max = a[0][0]; // присваиваем перемнной максимума самое первое значение двумерного массива
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j]; // находим максимальный элемент массива
            }
        }
    }
    cout << "Элементы, которые не совпадают с максимальным: " << endl;
    for (int i = 0; i < x; i++) 
    {
        for (int j = 0; j < b; j++)
        {
            if (a[i][j] != max)
            {
                cout << "\n" << a[i][j];
            }
        }
    }
    cout << "\n";
    system("pause");
}
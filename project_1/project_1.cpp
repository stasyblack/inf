// project_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

double add_numb(int a1, int b1)
{
    return (a1 + b1);
}
double sub_numb(int a1, int b1)
{
    return (a1 - b1);
}
double mul_numb(int a1, int b1)
{
    return (a1 * b1);
}
double div_numb(int a1, int b1)
{
    return (a1 / b1);
}
void test(int a1, int b1)
{
    cout << "\nFor numbers a=" << a1 << " b=" << b1 << " calculations are correct";
}

int main()
{
    double a, b, c;
    cout << "Input a: ";
    cin >> a;
    cout << "\nInput b: ";
    cin >> b;
    //c = a + b;
    cout << "\nc=a+b= " << add_numb(a, b);
    //c = a * b;
    cout << "\nc=a*b= " << mul_numb(a,b);
    //c = a - b;
    cout << "\nc=a-b= " << sub_numb(a, b);
    //c = a / b;
    cout << "\nc=a/b= " << div_numb(a,b);
    if ((add_numb(a, b) == (a + b)) && (mul_numb(a, b) == (a * b)) && (sub_numb(a, b) == (a - b)) && (div_numb(a, b) == (a / b))) test(a, b);
    cout << "\nHello World!\n";
    cout << "It is my first program!\n";
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

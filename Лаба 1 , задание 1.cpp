﻿// Лаба 1 , задание 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");


    double a = 100, b = 0.001, r, t, u, i, p, z, x, c, v, n, j, h, g;
    float a1 = 100, b1 = 0.001, r1, t1, u1, i1, p1, z1, x1, c1, v1, n1, j1, h1, g1;

    r = pow((a + b), 4);
    t = pow(a, 4);
    i = pow(a, 3);
    p = i * 4 * b;
    z = pow(a, 2);
    x = pow(b, 2);
    c = pow(b, 3);
    v = a * c * 4;
    n = pow(b, 4);
    u = r - (t + p);
    j = 6 * z * x;
    h = j + v + n;
    g = u / h;


    r1 = pow((a1 + b1), 4);
    t1 = pow(a1, 4);
    i1 = pow(a1, 3);
    p1 = i1 * 4 * b1;
    z1 = pow(a1, 2);
    x1 = pow(b1, 2);
    c1 = pow(b1, 3);
    v1 = a1 * c1 * 4;
    n1 = pow(b1, 4);
    u1 = r1 - (t1 + p1);
    j1 = 6 * z1 * x1;
    h1 = j1 + v1 + n1;
    g1 = u1 / h1;
    cout << setprecision(9) << fixed << endl;

    cout << "                   " << "double    " << "                              " << "float     " << endl;
    cout << "r=pow((a + b), 4): " << r << "  " << "r=pow((a + b), 4): " << r1 << endl;
    cout << "      t=pow(a, 4): " << t << "       " << " t=pow(a, 4): " << t1 << endl;
    cout << "      i=pow(a, 3): " << i << "          " << "i=pow(a, 3): " << i1 << endl;
    cout << "      p=i * 4 * b: " << p << "            " << " p=i * 4 * b: " << p1 << endl;
    cout << "      z=pow(a, 2): " << z << "           " << " z=pow(a, 2): " << z1 << endl;
    cout << "      x=pow(b, 2): " << x << "           " << "     x=pow(b, 2): " << x1 << endl;
    cout << "      c=pow(b, 3): " << c << "           " << "     c=pow(b, 3): " << c1 << endl;
    cout << "      v=a * c * 4: " << v << "           " << "     v=a * c * 4: " << v1 << endl;
    cout << "      n=pow(b, 4): " << n << "             " << "   n=pow(b, 4): " << n1 << endl;
    cout << "    u=r - (t + p): " << u << "            " << "  u=r - (t + p): " << u1 << endl;
    cout << "      j=6 * z * x: " << j << "            " << "    j=6 * z * x: " << j1 << endl;
    cout << "      h=j + v + n: " << h << "            " << "    h=j + v + n: " << h1 << endl;
    cout << "        g=u1 / h1: " << g << "               " << "   g=u1 / h1: " << g1 << endl;
    cout << "            Ответ: " << g << "               " << "     Ответ 2: " << g1 << endl;

    return 0;

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

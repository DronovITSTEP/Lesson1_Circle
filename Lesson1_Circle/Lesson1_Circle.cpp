﻿#include <iostream>
#include "Circle.h"

/*
Создайте класс Circle (окружность):
Реализуйте через перегруженные операторы:
    1. Проверка на равенство радиусов двух окружностей (операция ==);
    2. Сравнения длин двух окружностей (операция >).
    3. Пропорциональное изменение размеров окружности, путем изменения ее радиуса (операция += и -=)

    P.S.: сначала создать обычный класс, потом перевести его в шаблон
*/

using namespace std;

int main()
{
    Circle<int> c1(6);
    Circle<double> c2(5);
    c1 -= 5;
    cout << c1.getLength();
}
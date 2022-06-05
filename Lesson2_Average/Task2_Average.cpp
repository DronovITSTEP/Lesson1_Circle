#include <iostream>

/*
Написать шаблон функции для поиска среднего арифметического значений массива.
*/

template<typename T>
double avg(T* arr, size_t r) {
    T sum = 0;
    for (int i = 0; i < r; i++) {
        sum += arr[i];
    }
    return sum / r;
}

/*
Написать перегруженные шаблоны функций для нахождения
корней линейного (a*x + b = 0) и квадратного (a*x2+b*x + c = 0) уравнений.
Замечание:в функции передаются коэффициенты уравнений.
*/

template<typename T>
void quadratic(T a, T b) {
    cout <<"x = " << - b / a << endl;
}

template<typename T>
void quadratic(T a, T b, T c) {
    T D = b * b - 4 * a * c;
    if (D > 0) {
        cout << "x1 = " << (-b - sqrt(D)) / (2 * a) << endl;
        cout << "x1 = " << (-b + sqrt(D)) / (2 * a) << endl;
    }
    else if (D == 0) {
        cout << "x = " << -b / (2 * a) << endl;
    }
    else {
        cout << "No solutions";
    }
}


int main()
{
    
}
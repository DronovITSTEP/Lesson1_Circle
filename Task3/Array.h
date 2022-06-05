#pragma once
#include <iostream>

using namespace std;

class Array
{
	int* arr;
	size_t s;

	void createArray(int s) { arr = new int[s]; }

public:
	Array(size_t s) : s{ s } {
		createArray(s);
	}
	Array():arr{nullptr}, s{0}{}

	// задает размер массива, который создан конструктором по умолчанию
	void setSize(int s) {
		if (this->s == 0) {
			this->s = s;
			createArray(s);
		}
		else cout << "Размер массива уже задан" << endl;
	}

	// добавление значений в массив
	void addArray();
	// отображение массива на экране
	void showArray();
	// изменение массива (создается новый удаляется старый)
	void resizeArray(int s);
	// сортировка массива (пузырьковый метод)
	void sortArray();
	// максимальный элемент
	int getMax();
	// минимальный элемент
	int getMin();

	// деструктор
	~Array() {
		if (arr != nullptr) {
			delete[]arr;
		}
	}

};


// cpp_sorts.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

using namespace std;

void BubbleSort(vector<int>& values) {
    for (size_t idx_i = 0; idx_i + 1 < values.size(); ++idx_i) {
        for (size_t idx_j = 0; idx_j + 1 < values.size() - idx_i; ++idx_j) {
            if (values[idx_j + 1] < values[idx_j]) {
                swap(values[idx_j], values[idx_j + 1]);
            }
        }
    }

	/*
	| Сложность |	Наилучший случай |	В среднем |	Наихудший случай |
	| Время		|		O(n)		 |	O(n2)	  |		O(n2)		 |
	| Память	|		O(1)		 |	O(1)	  |		O(1)		 |
	*/
}

int main()
{
	vector<int> list = { 3,19,8,0,48 };
	cout << "Input array ..." << endl;
	for (int i = 0; i < 5; i++)
		cout << list[i] << '\t';
	cout << endl;

	BubbleSort(list);

	cout << "Sorted array ..." << endl;
	for (int i = 0; i < 5; i++)
		cout << list[i] << '\t';
	cout << endl;
}


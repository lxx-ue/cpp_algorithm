// cpp_sorts.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <algorithm>

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

void SelectionSort(vector<int>& values) {
	for (auto i = values.begin(); i != values.end(); ++i) {
		auto j = std::min_element(i, values.end());
		swap(*i, *j);
	}
	/*
	| Сложность |	Наилучший случай |	В среднем |	Наихудший случай |
	| Время		|		O(n2)		 |	O(n2)	  |		O(n2)		 |
	| Память	|		O(1)		 |	O(1)	  |		O(1)		 |
	*/
}

void InsertionSort(vector<int>& values) {
	for (size_t i = 1; i < values.size(); ++i) {
		int x = values[i];
		size_t j = i;
		while (j > 0 && values[j - 1] > x) {
			values[j] = values[j - 1];
			--j;
		}
		values[j] = x;
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
	for (int i = 0; i < list.size(); i++)
		cout << list[i] << '\t';
	cout << endl;

	BubbleSort(list);

	cout << "Sorted array ..." << endl;
	for (int i = 0; i < list.size(); i++)
		cout << list[i] << '\t';
	cout << endl;

	vector<int> list2 = { 3, 4, 7, 4, 6, 5, 8 };
	cout << "Input array ..." << endl;
	for (int i = 0; i < list2.size(); i++)
		cout << list2[i] << '\t';
	cout << endl;

	SelectionSort(list2);

	cout << "Sorted array ..." << endl;
	for (int i = 0; i < list2.size(); i++)
		cout << list2[i] << '\t';
	cout << endl;
}


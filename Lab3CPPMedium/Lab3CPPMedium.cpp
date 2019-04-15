//Вариант 17
//Введите 5 массивов символов длиной 8 элементов.
//Расположить строки в алфавитном порядке (как в словаре)
#include <iostream>
#include <Windows.H>

using namespace std;

void sortByAlphabet(char** arr, int N) {
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++)
			if (strcmp(arr[i], arr[j]) > 0) {
				char* tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
	}
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int N = 5;

	char** arr = new char* [N];

	cout << "Введите 5 слов : " << endl;
	for (int i = 0; i < N; i++) {
		arr[i] = new char[8];
		cin >> arr[i];
	}
	
	
	sortByAlphabet(arr, N);
	cout << "Сортированный массив : " << endl;
	for (int i = 0; i < N; i++) {
		cout << "\t" << arr[i] << endl;
	}
}




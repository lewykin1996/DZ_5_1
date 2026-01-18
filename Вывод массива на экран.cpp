// Вывод массива на экран.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int arr[10] = { 5, 6, 7, 8, 60, 10, 11, 12, 13, 14 };
	cout << '\n' << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i];

		if (i < 9)
		{
			cout << ",";
		}
	}
	cout << '\n' << endl;

	return 0;
}
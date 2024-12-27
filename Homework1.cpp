#include <iostream>
using namespace std;

int Sum(int array[], int size);
float Average(int array[], int size);
void Ascending(int array[], int size); //��������
void Descending(int array[], int size); //��������

int main()
{
	int array[5];
	int size_of_array = sizeof(array) / sizeof(int);
	int sum = 0;
	float avg = 0;
	int input = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> array[i];
	}
	sum = Sum(array, size_of_array);
	avg = Average(array, size_of_array);
	cout << "���� : " << sum << "�Դϴ�." << '\n';
	cout << "����� : " << avg << "�Դϴ�." << '\n';

	cout << "�������� ������ 1, �������� ������ 2�� �Է��ϼ��� : ";
	cin >> input;
	if (input == 1) Ascending(array, size_of_array);
	else if (input == 2) Descending(array, size_of_array);

	cout << "���� ��� : ";
	for (int i = 0; i < size_of_array; i++)
	{
		cout << array[i] << " ";
	}
	return 0;
}

int Sum(int array[], int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += array[i];
	}
	return sum;
}

float Average(int array[], int size)
{
	float avg = 0;
	float sum = static_cast<float>(Sum(array, size));
	avg = sum / static_cast<float>(size);
	return avg;
}

void Ascending(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}

void Descending(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (array[i] < array[j])
			{
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}
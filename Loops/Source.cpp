#include<iostream>
#include<conio.h>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

#define PALINDOM
//#define WHILE
#define tab "\t"
#define ESCAPE 27

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef PALINDOM
unsigned long long int number; // ����� �������� � ����������
cout << "������� �����: " << endl; cin >> number;
unsigned long long int buffer = number; //����� ��������� �����
unsigned long long int mirror_number = 0; //����� ���������� ��������
while (buffer)
{
	mirror_number *= 10;
	mirror_number += buffer % 10; //��������� ������� ������ ��������� �����
	//mirror_number = mirror_number * 10 + buffer % 10;
	buffer /= 10; //������� ���������� ����� ������

}
if (number == mirror_number)
{
	cout << "����� �������� �����������" << endl;
}
else
{
	cout << "����� �� �������� �����������" << endl;
}
#endif // PALINDOM

#ifdef WHILE
	int n;  // ���������� ��������
	int i = 0;  //������� �����
	cout << "������� ���������� ��������: "; cin >> n;
	/*while (i++ < n)
	{
		cout << i << "Hello world!\n";
		
	}
	while (n /= 5)
	{
		cout << n << "Hello World!" << endl;
	}*/
#endif // WHILE
	/*char key; //����� ������� ��� �������
	do
	{
		key = _getch();
		cout << (int)key << tab << key << endl;
	}while (key != ESCAPE);*/
	
	/*char key;
	do
	{
		key = _getch();
		//cout << (int)key << tab << key << endl;
		switch (key)
		{
		case (119): cout << "�����" << endl; break;
		case (115): cout << "�����" << endl; break;
		case (97): cout << "�����" << endl; break;
		case (100): cout << "������" << endl; break;
		
		}
	}while (key != ESCAPE);*/
	
}
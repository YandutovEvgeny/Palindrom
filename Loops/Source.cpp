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
unsigned long long int number; // Число вводимое с клавиатуры
cout << "Введите число: " << endl; cin >> number;
unsigned long long int buffer = number; //Копия введённого числа
unsigned long long int mirror_number = 0; //Число записанное наоборот
while (buffer)
{
	mirror_number *= 10;
	mirror_number += buffer % 10; //Сохраняем младший разряд исходного числа
	//mirror_number = mirror_number * 10 + buffer % 10;
	buffer /= 10; //Убираем сохранённый ранее разряд

}
if (number == mirror_number)
{
	cout << "Число является палиндромом" << endl;
}
else
{
	cout << "Число НЕ является палиндромом" << endl;
}
#endif // PALINDOM

#ifdef WHILE
	int n;  // Количество итераций
	int i = 0;  //Счётчик цикла
	cout << "Введите количество итераций: "; cin >> n;
	/*while (i++ < n)
	{
		cout << i << "Hello world!\n";
		
	}
	while (n /= 5)
	{
		cout << n << "Hello World!" << endl;
	}*/
#endif // WHILE
	/*char key; //Будет хранить код клавиши
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
		case (119): cout << "Вперёд" << endl; break;
		case (115): cout << "Назад" << endl; break;
		case (97): cout << "Влево" << endl; break;
		case (100): cout << "Вправо" << endl; break;
		
		}
	}while (key != ESCAPE);*/
	
}
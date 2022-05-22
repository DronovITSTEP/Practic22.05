
#include <iostream>

using namespace std;

int main()
{
	/*
	int number, temp = 0;
	cin >> number;
	while (temp <= number)
	{
		if (temp % 2 == 0) cout << temp << " ";
		temp++;
	}
	

	int num;
	do {
		cin >> num;
	} while (num != 7);
	
	
	int n = 5;
	while (n > 0) {
		cout << n << " ";
		//if (n == 3) break;
		if (n == 3) { 
			n--; 
			continue; }
		cout << "next ";
		n--;
	}
	cout << n;



	Вывести на экран все числа от нуля до вве-
	денного пользователем числа.
	
	int n, i=0;
	cin >> n;
	while (i <= n) {
		cout << i++ << endl;
		//i++;
	}

	int n;
	cin >> n;
	for (int i = 0; i <= n; i++) {
		cout << i << endl;
	}

	Пользователь вводит две границы диапазона.
	Посчитать сумму всех чисел диапазона.


	int n1, n2;
	cin >> n1 >> n2;
	//int min1 = min(n1, n2), max1 = max(n1, n2);
	int min, max, summa = 0;
	if (n1 < n2) {
		min = n1;
		max = n2;
	}
	else {
		min = n2;
		max = n1;
	}

	while (min <= max) {
		summa += min;
		min++;
	}
	cout << summa;

	int n1, n2, summa = 0;
	cin >> n1, n2;
	for (int i = min(n1, n2); i <= max(n1, n2); i++) {
		summa += i;
	}
	cout << summa;
	
	Пользователь с клавиатуры вводит числа.
	Посчитать их сумму и вывести на экран, 
	как только пользователь введет ноль или семь

	int a, sum = 0;
	do
	{
		cin >> a;
		sum += a;
	} while (a != 0 && a != 7);
	cout << sum;
	
	int a, sum = 0;
	cin >> a;
	for (; a != 0 && a != 7;sum += a) {
		cin >> a;
	}
	cout << sum;
	
	Пользователь вводит две границы диапазона,
	вывести на экран все числа из этого диапазона. 
	Предусмотреть, чтобы пользователь мог вводить 
	границы диапазона в произвольном порядке.

	■ вывести все четные числа из диапазона.
	■ вывести все нечетные числа из диапазона.
	■ вывести все числа, кратные семи.
	
	int n1, n2;
	cin >> n1 >> n2;
	int minN = min(n1, n2), maxN = max(n1, n2);

	//для четных чисел
	cout << "For even numders\n";
	while (minN <= maxN)
	{
		if (minN % 2 == 0) cout << minN++ << " ";

		if (minN % 2) { minN++; continue; }
		cout << minN << " ";
		minN++;
		
	}
	minN = min(n1, n2);

	//для нечетных чисел
	cout << "\nFor odd numders\n";
	while (minN <= maxN)
	{
		if (minN % 2 == 1) cout << minN << " ";
		minN++;
	}
	minN = min(n1, n2);
	// для кратных 7
	cout << "\nFor multiple 7 numders\n";
	while (minN <= maxN)
	{
		if (minN % 2 == 7) cout << minN << " ";
		minN++;
	}
	

	int n;
	while (true) {
		cin >> n;
		if (n == 0) break;
	}
	
	int n1, n2;
	cin >> n1 >> n2;
	int minN = min(n1, n2), maxN = max(n1, n2);

	for (int i = minN; i <= maxN; i++) {
		if (i % 2 == 0) cout << i << " ";
	}
	for (int i = minN; i <= maxN; i++) {
		if (i % 2 == 1) cout << i << " ";
	}
	for (int i = minN; i <= maxN; i++) {
		if (i % 2 == 7) cout << i << " ";
	}
	
int n;
	do {
		cin >> n;
	} while (n);
	
	int i = 8;
	for (; i < 19; i++) {}
	for (int i = 7; ;i--) {}
	for (;;) {}
	for (int i = 0, j = 6, k = i; 
		i < 6 && j > 9 || k != 0;
		i++, j +=5, k -= 8) {
		for (;;) { cout << j; }
	}
	cout << j;
	*/

/*
Написать игру «Угадай число». Программа
загадывает число в диапазоне от 1 до 500 Пользователь
пытается его угадать. После каждой попытки программа
выдает подсказки, больше или меньше его число загаданного. 
В конце программа выдает статистику: за сколько
попыток угадано число, сколько времени это заняло.
Предусмотреть выход по 0, в случае, если пользователю
надоело угадывать число.
*/
setlocale(LC_ALL, "");
//число пользователя, компьютера и счетчик
int num_user, rand_num_computer, counter = 0;
//вермя итоговое, начало и конец
long time_final, time_start, time_end;
srand(time(NULL)); // динамичное изменение точки старта для рандома
rand_num_computer = rand()%500; // рандомное число компьютера
time_start = time(NULL); // старт времени отсчета
	// цикл для ввода числа, пока не угадаем загаданное или не введем 0
	do {
		counter++; // кол-во попыток
		cout << "Введите число: ";
		cin >> num_user;
		if (num_user == 0) break;
		if (num_user > rand_num_computer) 
			cout << "Загаданное число меньше\n";
		else if (num_user < rand_num_computer) 
			cout << "Загаданное число больше\n";
	} while (num_user != rand_num_computer);
	
	time_end = time(NULL); // время окончания

	// кол-во секунд, которые потребовались для решения задачи
	time_final = time_end - time_start; 
	
	if (num_user == 0) 
		cout << "Вы сдались, слабачье!\n";
	else 
		cout << "Вы победили!\n"
			 << "Количество попыток: " << counter
			 << "\nВремени потребовалось: " << time_final;

/*
Написать программу-конвертер валют. 
Реализовать общение с пользователем через меню.
1 доллар = 62р
1 евро = 65р
*/
}

#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int task;
	cout << "¬ведите є задани€""\n";
	cin >> task;
	if (task == 5)
	{
		//5.	ƒаны три действительные числа.¬озвести в квадрат те из них, значени€ которых неотрицательны.
		int a, b, c;
		cin >> a;
		cin >> b;
		cin >> c;
		if (a > 0)
			cout << a*a << "\n";
		if (b > 0)
			cout << b*b << "\n";
		if (c > 0)
			cout << c*c << "\n";
	}
	if (task == 6)
		//6.	≈сли сумма трех попарно различных действительных чисел х, у, z меньше единицы, 
		//то наименьшее из этих трех чисел заменить полусуммой* двух других; в противном случае 
		//заменить меньшее из х и у полусуммой* двух оставшихс€ значений.
	{
		int x, y, z, a, b, c;
		cin >> x;
		cin >> y;
		cin >> z;
		a = min(min(x, y), (z));
		cout << a << "\n";
		b = max(max(x, y), (z));
		cout << b << "\n";
		c = (x > a&&x < b) ? x : (y > a&&y < b) ? y : z;
		cout << c << "\n";
		if (x + y + z < 1)
		{
			cout << (b + c) / 2 << "\n";
		}
		else
		{
			cout << (b + c) / 2 << "\n";
		}

	}
	if (task == 7)
		//7.	ƒаны действительные числа х, у. ≈сли х и у отрицательны, то каждое значение заменить его модулем; 
		//если отрицательно только одно из них, то оба значени€ увеличить на 0.5; если оба значени€ 
		//неотрицательны и ни одно из них не принадлежит отрезку [0.5, 2.0], то оба значени€ уменьшить в 10 раз; 
		//в остальных случа€х х и у оставить без изменени€.
	{
		double x, y;
		cin >> x;
		cin >> y;
		if (x < 0 && y < 0)
		{
			x = -x;
			y = -y;
			cout << x << "\n";
			cout << y << "\n";
		}
		else if (x < 0 || y < 0)
		{
			x = x*0.5;
			y = y*0.5;
			cout << x << "\n";
			cout << y << "\n";
		}
		else if ((x < 2 && x > 0.5 && x > 0) && (y < 2 && y > 0.5 && y > 0))
		{
			x = x / 10;
			y = y / 10;
			cout << x << "\n";
			cout << y << "\n";
		}
		else
		{
			cout << x << "\n";
			cout << y << "\n";

		}



	}
	else if (task == 8)
		//8. ƒаны действительные положительные числа х, у, z. 
		//a.¬ы€снить, существует ли треугольник с длинами сторон х, у, z.
		//b.≈сли треугольник существует, то ответитьЧ€вл€етс€ ли он остроугольным.
	{
		int x, y, z, f, d, s;
		cin >> x;
		cin >> y;
		cin >> z;
		f = max(max(x, y), (z));
		d = min(min(x, y), (z));
		s = (x > d&&x < f) ? x : (y > d&&y < f) ? y : z;
		cout << "max= " << f << "\n";
		cout << "min= " << d << "\n";
		cout << "mid= " << s << "\n";
		if (f < d + s)

		{
			cout << "Treugolnik sushestvuet""\n";
			if (f*f < d*d + s*s)
				cout << "Treugolnik ostrougolniy""\n";
			else
				cout << "treugolnik ne ostrougolniy""\n";
		}
		else
			cout << "Treugolnik ne sushestvuet" << "\n";
	}

	else if (task == 9)
	{
		/*/	9.	ƒаны действительные числа а, b, с(a != 0).ѕолностью исследовать биквадратное уравнение ах4 + №х2 + с = 0,
		т.е.если действительных корней нет, то должно быть выдано сообщение об этом, иначе должны быть выданы два или
		четыре корн€.*/
		double a, b, c, x, y;
		cin >> a;
		cin >> b;
		cin >> c;
		if ((b*b - 4 * a*c) > 0)

			if ((b + pow(b*b - 4 * a*c, 0.5) / 2 * a >= 0 && (-b + pow(b*b - 4 * a*c, 0.5) / 2 * a >= 0)))
			{
				cout << "kornei v uravnenii= 4" << "\n";
			}
			else if ((b + pow(b*b - 4 * a*c, 0.5) / 2 * a >= 0 || (-b + pow(b*b - 4 * a*c, 0.5) / 2 * a >= 0)))
			{
				cout << "kornei v uravnenii= 2" << "\n";
			}
			else
			{
				cout << "kornei net" << "\n";
			}
		
		else
			cout << "kornei ne sushestvuet" << "\n";
	}
	else
		cout << "Takogo zadaniya ne sushestvuet""\n";



	return 0;

	system("pause");




}
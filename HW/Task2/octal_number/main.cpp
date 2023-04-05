
#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

class Octal
{
private:
	unsigned char* number;
	int size;

public:

	Octal(const Octal& obj)
	{
		size = obj.size;
		number = new unsigned char[size];
	
		for (int i = 0; i < size; i++)
		{
			number[i] = obj.number[i];
		}
	}

	Octal(string mass)
	{
		int size0 = 0;
		while (mass[size0] != NULL)
		{
			size0++;
		}
		size = size0;
		number = new unsigned char[size];
		for (int i = 0; i < size; i++)
		{
			number[i] = mass[size - i - 1];
		}
	}

	Octal(int size1)
	{
		size = size1;
		number = new unsigned char[size];
		for (int i = 0; i < size; i++)
		{
			number[i] = '0';
		}
	}

	Octal& operator=(const Octal& right)
	{
		if (this == &right)
		{
			return *this;
		}

		size = right.size;
		for (int i = 0; i < size; i++)
		{
			number[i] = right.number[i];
		}
		return *this;
	}

	bool operator==(const Octal& right)
	{
		int flag = 1;

		if (size != right.size) return false;

		for (int i = 0; i < size; i++)
		{
			if (this->number[i] != right.number[i]) flag = 0;
		}
		if (flag == 0) return false;
		else return true;
	}

	bool operator!=(const Octal& right)
	{
		int flag = 1;

		if (size != right.size) return true;
		else
		{
			for (int i = 0; i < size; i++)
			{
				if (this->number[i] != right.number[i]) flag = 0;
			}
			if (flag == 0) return true;
			else return false;
		}
	}

	bool operator>(const Octal& right)
	{
		int flag = 1;
		int buffer1, buffer2;

		if (this->size > right.size) return true;
		else
		{
			for (int j = size - 1; j >= 0; j--)
			{
				buffer1 = static_cast<int>(this->number[j]);
				buffer2 = static_cast<int>(right.number[j]);

				if (buffer1 > buffer2) return true;
				else return false;
			}
		}
	}

	bool operator<(const Octal& right)
	{
		int flag = 1;
		int buffer1, buffer2;

		if (this->size > right.size) return false;
		else
		{
			for (int j = size - 1; j >= 0; j--)
			{
				buffer1 = static_cast<int>(this->number[j]);
				buffer2 = static_cast<int>(right.number[j]);

				if (!(buffer1 > buffer2)) flag = 0;
			}
			if (flag == 0) return false;
			else return true;
		}
	}

	Octal operator+(const Octal& right)
	{
		int num = 0;
		string sumnum = "";
		int sumsize, buffer1, buffer2, buffer3, over7 = 0;
		if (this->size > right.size) sumsize = this->size;
		else sumsize = right.size;
		for (int i = 0; i < sumsize; i++)
		{
			sumnum = sumnum + "";
		}

		Octal left(sumnum);
		for (int i = 0; i < left.size; i++)
		{
			buffer1 = (number[i] - '0') + (num * 10);
			buffer2 =(right.number[i] - '0') + (num * 10);
			buffer3 = buffer1 + buffer2 + over7;
			if (buffer3 > 7)
			{
				buffer3 -= 7;
				over7 = 1;
				left.number[i] = (unsigned char)buffer3;
			}
			else if ((buffer3 > 7) && (i = left.size)) left.number[i] = (unsigned char)buffer3;
			else over7 = 0;
		}
		return left;
	}

	Octal operator-(const Octal& right)
	{
		if ((this->size >= right.size) && (this->number[this->size - 1] >= right.number[right.size - 1]))
		{
		
			string difnum = "";
			int difsize, buffer1, buffer2, buffer3, less0 = 0;
			if (this->size > right.size) difsize = this->size ;
			else difsize = right.size ;
			for (int i = 0; i < difsize; i++)
			{
				difnum = difnum + "0";
			}

			Octal left(difnum);
			for (int i = 0; i < left.size; i++)
			{
				buffer1 = static_cast<int>(this->number[i]);
				buffer2 = static_cast<int>(right.number[i]);
				buffer3 = buffer1 - buffer2 - less0;
				if (buffer3 < 0)
				{
					buffer3 += 7;
					less0 = 1;
					left.number[i] = (unsigned char)buffer3;
				}
				else less0 = 0;
			}
			return left;
			
		}
		else cout << "\nERROR! 1st number must be begger then the 2nd number!";

	}

	char operator[](int index)
	{
		return this->number[index];
	}

	ostream& operator<<(ostream& out)
	{
		cout << "\nOctale number = ";
		for (int j = size - 1; j >= 0; j--)
		{
			cout << number[j];
		}
	}

	istream& operator>>(istream& out)
	{
		int flag, buffer;
		while (flag == 1)
		{
			flag = 1;
			string chslo;
			cout << "\nInput your octal number";
			cin >> chslo;

			int size0 = 0;
			while (chslo[size0] != NULL)
			{
				size0++;
			}
			size = size0;
			number = new unsigned char[size];
			for (int i = 0; i < size; i++)
			{
				number[i] = chslo[size - i - 1];
				buffer = number[i] - '0';
				if ((buffer < 8) && (buffer >= 0)) flag = 0;
				else cout << "\nit's not octal number, try again";
			}
		}
	}

	void print()
	{
		cout << "number = ";
		for (int j = size - 1; j >= 0; j--)
		{
			cout << number[j];
		}
		cout << "\tvalue = " << size << "\n";
	}

	~Octal()
	{
		delete[] number;
		cout << " \n\nThe end...";
	}
};

int main()
{
	string chislo1 = "183";
	string chislo2 = "321";
	string chislo3 = "000";
	Octal a(chislo1);
	Octal b(chislo2);

	Octal c = b + a;
	
	cout << "a ";
	a.print();
	cout << "b ";
	b.print();

	cout << "\n\nAssigment:\n";
	a = b;
	cout << "a ";
	a.print();
	cout << "b ";
	b.print();

	cout << "\n Indexing: a[0] = " << a[0];

	cout << "\n\nEquality: ";
	if (a == b) cout << "\na = b";
	else cout << "\n  a != b";

	cout << "\nSum:\n";
	//c = a - b;
	c.print();

	_getch();
	return 0;
}

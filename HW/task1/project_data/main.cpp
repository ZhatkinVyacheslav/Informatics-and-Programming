#include <iostream>
#include <string>
#include <random>
using namespace std;

  class Date
{
public:
	int day;
	int month;
	int year;

	string date_str;

	Date(int nday, int nmonth, int nyear)
	{
		day = nday;
		month = nmonth;
		year = nyear;
		date_str = to_string(nday) + "." + to_string(nmonth) + "." + to_string(nyear);
	}

	Date& operator=(const Date& right)
	{
		if (this == &right)
		{
			return *this;
		}
		day = right.day;
		month = right.month;
		year = right.year;
		date_str = right.date_str;
		return *this;
	}

	Date& operator+(const int term){
		day = this->day + term;
		while ((day > 31) || (month > 12))
		{
			if (day > 31) {
				day = day - 31;
				month += 1;
			}
			if (month > 12) {
				month -= 12;
				year += 1;
			}
		}
		return *this;
	}

	Date& operator-(const int term) {
		day = this->day - term;
		while ((day < 1) || (month < 1))
		{
			if (day < 1) {
				day = day + 31;
				month -= 1;
			}
			if (month < 1) {
				month += 12;
				year -= 1;
			}
		}
		return *this;
	}

	Date& operator<(const Date& right) {
		if (this->year < right.year) cout << "left date was before";
		else if (this->year > right.year) cout << "left date was later ";
		else if (this->year == right.year) {
			if (this->month < right.month) cout << "left date was before";
			else  if (this->month > right.month) cout << "left date was later ";
			else if (this->month == right.month) {
				if (this->day < right.day) cout << "left date was before";
				else if (this->day > right.day) cout << "left date was later ";
				else if (this->month == right.month) cout << "they are same dates";
			}
		}
		return *this;
	}

	Date& operator>(const Date& right) {
		if (this->year < right.year) cout << "left date was before";
		else if (this->year > right.year) cout << "left date was later ";
		else if (this->year == right.year) {
			if (this->month < right.month) cout << "left date was before";
			else  if (this->month > right.month) cout << "left date was later ";
			else if (this->month == right.month) {
				if (this->day < right.day) cout << "left date was before";
				else if (this->day > right.day) cout << "left date was later ";
				else if (this->month == right.month) cout << "they are same dates";
			}
		}
		return *this;
	}

		void printDate() {
		cout <<"\n" + date_str;
	}

};

int main()
{
	int d = 0, m = 0, y = 0, d1, m1, y1;
	int flag;
	string mydate;

	cout << "Input your date, please: ";

	do
	{
		flag = 0;
		cin >> mydate;

		string bufer = "";
		for (int i = 0; i < 10; i++) {
			if (mydate[i] != '.') {
				bufer += mydate[i];
			}

			if (i == 1) {
				d = stoi(bufer);
				bufer = "";
			}
			else if (i == 4) {
				m = stoi(bufer);
				bufer = "";
			}
			else if (i == 9) {
				y = stoi(bufer);
				bufer = "";
			}
		}
		
		if ((d > 31) || (d < 1) || (m > 12) || (m < 1) || (y < 0))
		{
			cout << "\nThis date cannot exist :(, please enter an existing date: ";
			flag = 1;
		}
	} while ((d > 31) || (d < 1) || (m > 12) || (m < 1) || (y < 0));

	Date Mydr(d, m, y);
	Mydr.printDate();

	d1 = rand() % 31 + 1;
	m1 = rand() % 12 + 1;
	y1 = rand() % 2022;

	Date Randdate(d1, m1, y1);
	Randdate.printDate();

	cout << "\nComparizon";
	Mydr < Randdate;

	cout << "\nAppropriatonal";
	Mydr = Randdate;
	Mydr.printDate();

	cout << "\nSumm";
	Mydr = Mydr + 8;
	Mydr.printDate();

	return 0;
}

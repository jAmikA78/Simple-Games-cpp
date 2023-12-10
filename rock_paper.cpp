#include <iostream>
using namespace std;
int main()
{
	int m1 = 0, m2 = 0;
	string p1 = "rock", p2 = "paper", p3 = "scissors", p4, p5, n1, n2;
	cout << "Please, enter the first name\n";
	cin >> n1;
	cout << "Please, enter the secound name\n";
	cin >> n2;
	while (1)
	{
	cout << "Please, enter the first state(rock,paper,scissors)\n";
	cin >> p4;
	cout << "Please, enter the secound state(rock,paper,scissors)\n";
	cin >> p5;
	if (p4 != p1 && p4 != p2 && p4 != p3)
	{
		break;
	}
	else if (p5 != p1 && p5 != p2 && p5 != p3)
	{
		break;
	}
	else if (p4 == p2 && p5 == p1)
	{
		m1++;
		cout << n1 << " is winer!!!!\n" << n1 << " " << m1 << " " << n2 << " " << m2 << endl;
	}
	else if (p4 == p1 && p5 == p3)
	{
		m1++;
		cout << n1 << " is winer!!!!\n" << n1 << " " << m1 << " " << n2 << " " << m2 << endl;
	}
	else if (p4 == p3 && p5 == p1)
	{
		m1++;
		cout << n1 << " is winer!!!!\n" << n1 << " " << m1 << " " << n2 << " " << m2 << endl;
	}
	else if (p4 == p5)
	{
		cout << "no one is loser ,,,,no one is winer\n" << n1 << " " << m1 << " " << n2 << " " << m2 << endl;
	}
	else if (p5 == p2 && p4 == p1)
	{
		m2++;
		cout << n2 << " is winer!!!!\n" << n1 << " " << m1 << " " << n2 << " " << m2 << endl;
	}
	else if (p5 == p1 && p4 == p3)
	{
		m2++;
		cout << n2 << " is winer!!!!\n" << n1 << " " << m1 << " " << n2 << " " << m2 << endl;
	}
	else if (p5 == p3 && p4 == p1)
	{
		m2++;
		cout << n2 << " is winer!!!!\n" << n1 << " " << m1 << " " << n2 << " " << m2 << endl;
	}
	}
	return 0;
}
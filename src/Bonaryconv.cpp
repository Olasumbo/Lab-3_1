#include <iostream>
using namespace std;

unsigned short Arithmetic (unsigned short x , unsigned short store[]);
unsigned short Bitwise (unsigned short x , unsigned short store[]);

int main()
{
	unsigned short num;
	int choice;
	cout << "Enter 1 for Arithmetic \nEnter 2 for Bitwise" << endl; // prints
	cin >> choice;
	while(choice > 2 || choice < 1)
		{
			cout << "Error!\nEnter 1 for Arithmetic OR Enter 2 for Bitwise\n";
			cin >> choice;
		}
	cout << "Enter a num: ";
	cin >> num;
	unsigned short safe[16] = { 0 };

	if ( choice == 1)
	{
		Arithmetic (num , safe);
	}
	else if( choice == 2)
	{
		Bitwise (num, safe);
	}
	else
	{
		cout << "invalid Choice";
	}

	return 0;
}

unsigned short Arithmetic (unsigned short x , unsigned short store[])
{
	int i = 0;
	//int rem;
	while( x > 0)
	{
		store[i] = (x % 2);
		x = (x / 2);
		if(x == 0)
		{
			break;
		}
		i++;
	}
	for(i = 15; i>= 0; i--)
	{
		cout << store[i];
	}
	return 0;
}

unsigned short Bitwise (unsigned short x , unsigned short store[])
{
			int i;
			for(i = 0;i < 16; i++)
				store[16 - i - 1] = (x & (1 << i)) >> i;
			for(i = 0; i < 15; i++)
				if(store[i] == 1)
				break;
			for(i = 0; i <= 15; i++)
			{
				cout << store[i];
			}

	  return 0;
}


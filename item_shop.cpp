#include <iostream>
using namespace std;

int main()
{
	char buy;
	char buyI;
	char buyA;
	char buyW;
	int quantity;

	puts("welcome in our store, what do you buy it\n");

	puts("1. item");
	puts("2. accessory");
	puts("3. weapon\n");

	cout << ':';
	cin >> buy;

	switch(buy)
	{
		case '1':
			puts("what do you want");
			
			puts("1. health capsul");
			puts("2. stamina capsul");
			puts("3. instant noodles");
			puts("4. energy drink");
			puts("5. revive chip\n");

			cout << ':';
			cin >> buyI;

			switch(buyI)
			{
				case '1':
					puts("how many do you want\n");
					
					cout << ':';
					cin >> quantity;
					int total = quantity * 1000;

					printf("*you buy %d health capsul with price DRP.%d\n", quantity, total);
			}
	}

	return 0;
}

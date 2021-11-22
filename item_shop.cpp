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
					
					printf("*you buy %d health capsul with price DRP.%d\n\n", quantity, quantity * 1000);
					break;

				case '2':
					puts("how many do you want\n");

					cout << ':';
					cin >> quantity;

					printf("*you buy %d stamina capsul with price DRP.%d\n\n", quantity, quantity * 2000);
					break;

				case '3':
					puts("how many do you want\n");

					cout << ':';
					cin >> quantity;	

					printf("*you buy %d instant noodles with price DRP.%d\n\n", quantity, quantity * 10000);
					break;

				case '4':
					puts("how many do you want\n");

					cout << ':';
					cin >> quantity;

					printf("*you buy %d energy drink with price DRP.%d\n\n", quantity, quantity * 15000);
					break;
					
				case '5':
					puts("how many do you want\n");

					cout << ':';
					cin >> quantity;
					
					printf("*you buy %d revive chip with price DRP.%d\n\n", quantity, quantity * 50000);
					break;
			}
			break;
	}

	puts("have the nice day!");

	return 0;
}

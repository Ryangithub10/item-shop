#include <iostream>
using namespace std;

int main()
{
	char buy;
	char buyI;
	char buyA;
	char buyW;
	char con;
	char con2;
	int quantity;

	puts("welcome in our store, what do you buy it\n");

	puts("1. item");
	puts("2. accessory");
	puts("3. weapon\n");

	cout << ':';
	cin >> buy;

	while(buy != '1' && buy != '2' && buy != '3')
	{
		puts("please, choice in menu with number\n");

		puts("1. item");
		puts("2. accessory");
		puts("3. weapon\n");

		cout << ':';
		cin >> buy;

	}

	switch(buy)
	{
		case '1':
			puts("what do you want");
			
			puts("1. health capsul\t price: 1000");
			puts("2. stamina capsul\t price: 2000");
			puts("3. indomie goreng\t price: 10000");
			puts("4. energy drink\t\t price: 15000");
			puts("5. revive chip\t\t price: 50000\n");

			cout << ':';
			cin >> buyI;

			switch(buyI)
			{
				case '1':
					puts("check it?");
					cout << "y/n: ";
					cin >> con;

					switch(con)
					{
						case 'y':
							do
							{
								puts("health capsul.");
								puts("clasic heal item.\n");
								
								puts("HP: 30\n");
								
								cout << "exit? y/n: ";
								cin >> con2;
							}
							while(con2 == 'n');

						case 'n':
							puts("how many do you want\n");
					
							cout << ':';
							cin >> quantity;
					
							printf("*you buy %d health capsul with price DRP.%d\n\n", quantity, quantity * 1000);
					break;
					}
					break;

				case '2':
					puts("check it?");
					cout << "y/n: ";
					cin >> con;

					switch(con)
					{
						case 'y':
							do
							{
								puts("stamina capsul");
								puts("clasic recover stamina item\n");
								puts("SP: +20\n");
								cout << "exit y/n: ";
								cin >> con2;
							} while(con2 == 'n');

					} 

					puts("how many do you want\n");

					cout << ':';
					cin >> quantity;

					printf("*you buy %d stamina capsul with price DRP.%d\n\n", quantity, quantity * 2000);
					break;

				case '3':
				  puts("check it?");
				  cout << "y/n: ";
					cin >> con;

					switch(con)
				  {
				  	case 'y':
				     do{
								cout << "indomie goreng" << endl;
								cout << "the food a million people\n" << endl;

								puts("HP: +80\n");

								cout << "exit y/n: ";
								cin >> con2;

												} while(con2 == 'n');
					}

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

		case '2':
			puts("what do you want\n");

			puts("1. stamina capsul pouch\t price: 10000");
			puts("2. ring exp\t\t price: 5000");
			puts("3. digital vest\t\t price: 10000");
			puts("4. heavy armor\t\t price: 8000\n");

			cout << ':';
			cin >> buyA;

			switch(buyA)
			{
				case '1':
					puts("how many do you want\n");

					cout << ':';
					cin >> quantity;
					
					printf("*you buy %d stamina capsul pouch with price DRP.%d\n\n", quantity, quantity * 10000);
					break;

				case '2':
					puts("how many do you want\n");

					cout << ':';
					cin >> quantity;
					
					printf("*you buy %d ring exp with price DRP.%d\n\n", quantity, quantity * 5000);
					break;

				case '3':
					puts("how many do you want\n");

					cout << ':';
					cin >> quantity;
					
					printf("*you buy %d digital vest with price DRP.%d\n\n", quantity, quantity * 10000);
					break;

				case '4':
					puts("how many do you want\n");

					cout << ':';
					cin >> quantity;
					
					printf("*you buy %d heavy armor with price DRP.%d\n\n", quantity, quantity * 8000);
					break;
			}
			break;

		case '3':
			puts("what do you want\n");

			puts("1. X saber");
			puts("2. cyber cresent");
			puts("3. neo mp5 gun");
			puts("4. double neo devil handgun\n");

			cout << ':';
			cin >> buyW;

			switch(buyW)
			{
				case '1':	
					printf("*you buy X saber\n\n");
					break;

				case '2':	
					printf("*you buy cyber cresent\n\n");
					break;

				case '3':	
					printf("*you buy neo mp5 gun\n\n");
					break;

				case '4':
					printf("*you buy double neo devil handgun\n\n");
					break;
			}
	}

	puts("have the nice day!");

	return 0;
}

#include <iostream>
#include <string>
#include <vector>


std::string itemsArr[16][2] = { {"milk", "its white"}, {"tofu","its sexy"},{"soya","white liquid "},{"chocolate", "brown shit"},{"flour", "pon tia na fav"},{"sugar", "sweet like me"},

{"salt","salty as nic"},{"item 8", "8888"},{"item 9", "police"},{"item 10", "tententen"},{"item 11", "oof 11"},{"item 12", "12 am bitch"},{"item 13", "13 odd af"},{"item 14", "14 unlucky"},{"item 15", "ew no"},{"item 16", "16 is what"} };
int priceArr[16] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
std::vector<std::string> cartList;
std::vector<int> cartPrice;


void printmenubitch() {

	std::cout << "Welcome to Online Grocery shopping Main Menu" << std::endl;		// main menu starts
	std::cout << "select the proper number to proceed" << std::endl;
	std::cout << "1. Start shopping" << std::endl;
	std::cout << "2. Exit" << std::endl;		// main menu ends
}

void buyFunc(int plusplus, int selection)
{
	int q = 0;
	std::cout << "you have selected: " << itemsArr[selection - 1 + plusplus][0] << std::endl;
	std::cout << "price of each is: " << priceArr[selection - 1 + plusplus] << std::endl;
	std::cout << "choose how many you wan to buy: " << std::endl;
	std::cin >> q;

	for (int i = 0; i < q; i++) {

		cartList.push_back(itemsArr[selection - 1 + plusplus][0]);
		cartPrice.push_back(priceArr[selection - 1 + plusplus]);

	}


}

void showdetails(int plusplus, int selection) {

	std::cout << "you have selected: " << itemsArr[selection - 1 + plusplus][0] << std::endl;
	std::cout << itemsArr[selection - 1 + plusplus][1] << std::endl;
	std::cout << "1. buy" << std::endl;
	std::cout << "2. go back" << std::endl;
	std::cout << std::endl;
	


}

void showBuyList() {
	
	for (size_t i = 0; i < cartList.size(); i++) {
		std::cout << cartList.at(i) << "     " << cartPrice.at(i) << std::endl;
	}


}


void catFunction() {

	int z;
	int y;

	while (true) {

		std::cout << "Select the category that you want to buy item from" << std::endl;
		std::cout << "1. Dairy and Bread" << std::endl;
		std::cout << "2. Canned Food" << std::endl;
		std::cout << "3. Dry and Pack" << std::endl;
		std::cout << "4. Household" << std::endl;
		std::cout << "5. checkout" << std::endl;
		std::cin >> y;
		std::cout << std::endl;

		if (y == 1) {

			while (true) {
				std::cout << "select item for more details" << std::endl;
				for (int i = 0; i < 4; i++) {
					std::cout << i << ": " << itemsArr[i][0] << std::endl;
				}
				std::cout << std::endl;
				std::cout << "5. go back" << std::endl;

				std::cin >> z;
				std::cout << std::endl;

				if (z == 5) {
					break;
				}

				if (z >= 1 && z <= 4) {
					while (true) {

						int p = 0;

						showdetails(0,z);
						std::cin >> p;

						if (p == 1) {

							buyFunc(0, z);
							break;
						}
						else if (p == 2) {
							break;
						}

					}
				}



			}

		}
		else if (y == 2) {

			while (true) {
				std::cout << "select item for more details" << std::endl;
				for (int i = 4; i < 8; i++) {
					std::cout << i-3 << ": " << itemsArr[i][0] << std::endl;
				}
				std::cout << std::endl;
				std::cout << "5. go back" << std::endl;

				std::cin >> z;
				std::cout << std::endl;
				

				if (z == 5) {
					break;
				}

				if (z >= 1 && z <= 4) {
					while (true) {

						int p = 0;

						showdetails(4, z);
						std::cin >> p;

						if (p == 1) {

							buyFunc(4, z);
							break;
						}
						else if (p == 2) {
							break;
						}

					}
				}


			}
		}
		else if (y == 3) {

			while (true) {
				std::cout << "select item for more details" << std::endl;
				for (int i = 8; i-7 < 12; i++) {
					std::cout << i << ": " << itemsArr[i][0] << std::endl;
				}
				std::cout << std::endl;
				std::cout << "5. go back" << std::endl;

				std::cin >> z;
				std::cout << std::endl;

				if (z == 5) {
					break;
				}

				if (z >= 1 && z <= 4) {
					while (true) {

						int p = 0;

						showdetails(8, z);
						std::cin >> p;
						if (p == 1) {

							buyFunc(8, z);
							break;
						}
						else if (p == 2) {
							break;
						}

					}
				}

			}
		}
		else if (y == 4) {

			while (true) {
				std::cout << "select item for more details" << std::endl;
				for (int i = 12; i < 16; i++) {
					std::cout << i-11 << ": " << itemsArr[i][0] << std::endl;
				}
				std::cout << std::endl;
				std::cout << "5. go back" << std::endl;

				std::cin >> z;
				std::cout << std::endl;
				
				if (z == 5) {
					break;
				}

				if (z >= 1 && z <= 4) {
					while (true) {

						int p = 0;

						showdetails(12, z);
						std::cin >> p;

						if (p == 1) {

							buyFunc(12, z);
							break;
						}
						else if (p == 2) {
							break;
						}

					}
				}


			}

		}
		else if (y == 5) {
			break;
		}
	}

}



int main(void) {

	int x = 0;

	printmenubitch();

	std::cin >> x;
	std::cout << std::endl;

	if (x == 1) {

		while (true) {

			catFunction();

			showBuyList();

		}

	}

}
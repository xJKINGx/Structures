#include <iostream>
#include <string>

struct Person {
	std::string name{};
	int phoneNum{};
};
Person P1{ "Alex Jensen", 46734774 };
Person P2{ "Mia Pettersen", 41298134 };
Person P3{ "Edvard Ruud", 99774446 };
Person P4{ "Henriette Jones", 99832351 };
Person P5{ "Margit Helland", 46054991 };
Person P6{ "Inger Rønning", 48975121 };
Person P7{ "Knut Bui", 47107649 };
Person P8{ "Roger Follestad", 98484001 };
Person P9{ "Linda Mohn", 59616182 };
Person P10{ "Henry Danielsen", 41662754 };

Person PeopleList[10] = { P1,P2,P3,P4,P5,P6,P7,P8,P9,P10 };
int main() {
	bool active = true;
	while (active) {
		std::cout << "[P1,P2,P3,P4,P5,P6,P7,P8,P9,P10]" << std::endl;
		std::cout << "Write one of the IDs to show more information about them: ";
		std::string userInput{};
		getline(std::cin, userInput);

		if (userInput == "P1") {
			std::cout << "[Name:" << PeopleList[0].name << ", Phone Number:" << PeopleList[0].phoneNum
				<< "]" << std::endl;
		}
		else if (userInput == "P2") {
			std::cout << "[Name:" << PeopleList[1].name << ", Phone Number:" << PeopleList[1].phoneNum
				<< "]" << std::endl;
		}
		else if (userInput == "P3") {
			std::cout << "[Name:" << PeopleList[2].name << ", Phone Number:" << PeopleList[2].phoneNum
				<< "]" << std::endl;
		}
		else if (userInput == "P4") {
			std::cout << "[Name:" << PeopleList[3].name << ", Phone Number:" << PeopleList[3].phoneNum
				<< "]" << std::endl;
		}
		else if (userInput == "P5") {
			std::cout << "[Name:" << PeopleList[4].name << ", Phone Number:" << PeopleList[4].phoneNum
				<< "]" << std::endl;
		}
		else if (userInput == "P6") {
			std::cout << "[Name:" << PeopleList[5].name << ", Phone Number:" << PeopleList[5].phoneNum
				<< "]" << std::endl;
		}
		else if (userInput == "P7") {
			std::cout << "[Name:" << PeopleList[6].name << ", Phone Number:" << PeopleList[6].phoneNum
				<< "]" << std::endl;
		}
		else if (userInput == "P8") {
			std::cout << "[Name:" << PeopleList[7].name << ", Phone Number:" << PeopleList[7].phoneNum
				<< "]" << std::endl;
		}
		else if (userInput == "P9") {
			std::cout << "[Name:" << PeopleList[8].name << ", Phone Number:" << PeopleList[8].phoneNum
				<< "]" << std::endl;
		}
		else if (userInput == "P10") {
			std::cout << "[Name:" << PeopleList[9].name << ", Phone Number:" << PeopleList[9].phoneNum
				<< "]" << std::endl;
		}
		else {
			std::cout << "No ID matches that input. Would you like to exit? (Y/N): " << std::endl;
			char ch{};
			std::cin >> ch;
			if (ch == 'Y') {
				exit(0);
			}
		}
	}
}
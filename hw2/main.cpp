#include<iostream>
#include<string>
#include<vector>
#include<iterator>
#include"phone.h"
#include<windows.h>

int main(){
	std::cout << "Phone book";
	/*Sleep(115);*/
	std::cin.get();
	int n;
	Phone piple;
	std::string a, b;
	std::cin.flags();
	GoTo:
	system("cls");
	std::cout << "1. Enter new abonent\n2. Show all abonents\n3. Delete abonent\n4. Exit program\nEnter action -> ";
	std::cin >> n;
	switch (n) {
	case 1: {
		system("cls");
		std::cin.ignore();
		std::cout << "Enter name -> ";
		std::getline(std::cin, a);
		std::cout << "Enter number -> ";
		std::getline(std::cin, b);
		piple.AddHuman(a, b);
		goto GoTo;
	}
	case 2: {
		//system("cls");
		piple.ShowData();
		system("pause");
		goto GoTo;
		  }
	case 4:
		break;
	default:{
		system("cls");
		std::cout << "Enter error!!!";
		system("pause");
		goto GoTo;
	}
	}


	return 0;
}
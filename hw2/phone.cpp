#include "phone.h"

Phone::Human::Human(std::string name, std::string number){
	_name = name;
	_number = number;
}



void Phone::AddHuman(std::string name, std::string number){
	_human.push_back(Human(name, number));
}

std::string Phone::GetName(int index){return _human[index]._name;}

std::string Phone::GetNumber(int index){return _human[index]._number;}

void Phone::ShowData(){
	std::vector<Human>::iterator it = _human.begin();
	int i = 0;
	for (auto el = _human.begin(); el != _human.end(); ++el, i++) {
		std::cout << i + 1 << ".  Abonent \n";
		std::cout << "Name of abonent is " << _human[i]._name << std::endl;
		std::cout << "Number of abonent is " << _human[i]._number<<std::endl;
		std::cout << "\n";
	}
}

void Phone::DelHuman(){
	std::cout << "Enter abonent to delete -> ";
	int n;
	std::cin >> n;
	if (n > 0 && n <= _human.size() + 1)
		_human.erase(_human.begin()+(n-1));

}

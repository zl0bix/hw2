#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<iterator>

class Phone {
	class Human {
	public:
		std::string _name;
		std::string _number;
		Human(std::string name, std::string number);
	};
	std::vector<Human>_human;
public:
	void SetName(int index);
	void SetNumber(int index);
	void AddHuman(std::string name, std::string number);
	std::string GetName(int index);
	std::string GetNumber(int index);
	void ShowData();
	void DelHuman();
};
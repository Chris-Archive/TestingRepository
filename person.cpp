#pragma once
#include <string>

class person { 
public:
	std::string getName(){
		return name;
	}
	int getAge(){
		return age;
	}

	void setName(std::string name){
		this->name = name;
	}
	
	void setAge(int age){
		this->age = age;
	}

private:
	std::string name;
	int age;
};
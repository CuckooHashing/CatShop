#pragma once
#include <string>
#include <sstream>
#include <iostream>

class Cat
{
private:
	std::string name;
	std::string breed;
	std::string photo;
	int age;

public:
	Cat(const std::string & name, const std::string & breed, const std::string & link, int age);
	Cat();
	~Cat();
	bool operator==(const Cat& kitty);
	Cat& operator=(const Cat& kitty)
	{
		this->name = kitty.name;
		this->age = kitty.age;
		this->breed = kitty.breed;
		this->photo = kitty.photo;
		return *this;

	}
	std::string get_name();
	std::string get_breed();
	std::string get_photo();
	void set_name(std::string & name);
	void set_breed(std::string & breed);
	void set_photo(std::string & photo);
	void set_age(int age);
	int get_age() { return this->age; }
	void picture();
	std::string form()
	{
		std::string s;
		s += this->name + ", " + this->breed + ", " + std::to_string(this->age);
		return s;
	}
	std::string toString();

};


#include "Cat.h"
#include <string>
#include <sstream>
#include <iostream>
#include <Windows.h>



Cat::Cat(const std::string& name, const std::string&breed, const std::string&link, int age) : name{ name }, breed{ breed }, photo{ link }, age{ age }
{/*
	this->name = name;
	this->breed = breed;
	this->photo = link;
	this->age = age;*/
}

Cat::Cat(): name { "" }, breed{ "" }, photo{ "" }, age{0}
{
}


Cat::~Cat()
{
}

void Cat::picture()
{
	ShellExecuteA(NULL, NULL, "chrome.exe", this->photo.c_str(), NULL, SW_SHOWMAXIMIZED);
}

bool Cat::operator==(const Cat& kitty)
{
	if ((strcmp(this->name.c_str(), (kitty.name).c_str()) == 0) && (strcmp(this->breed.c_str(), (kitty.breed).c_str()) == 0) && (this->age == kitty.age))
		return true;
	return false;
	
}

std::string Cat::get_name()
{
	std::string name = this->name;
	return name;
}

std::string Cat::get_breed()
{
	std::string name = this->breed;
	return name;
	
}

std::string Cat::get_photo()
{
	std::string name = this->photo;
	return name;

}

void Cat::set_name(std::string & name)
{
	this->name = name;
}

void Cat::set_breed(std::string & breed)
{
	this->breed = breed;
}

void Cat::set_photo(std::string & photo)
{
	this->photo = photo;
}

void Cat::set_age(int age)
{
	this->age = age;
}

std::string Cat::toString()
{
	std::string thing = "\nThis cat's name is ";
	thing = thing + this->name + ", of age " + std::to_string(this->age) + " and its breed is " + this->breed + ".\n";
	/*this->picture();
	std::cout << "\nThis cat's name is " << this->name << ", of age " << this->age << " and its breed is " << this->breed << ".\n";*/
	return thing;
}

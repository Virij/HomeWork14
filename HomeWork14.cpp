
#include <iostream>
#include <string>   

int main()
{
	std::string name;
	name = "Aleksandr";

	std::cout << name << "\n";
	std::cout << name.length() << "\n";
	std::cout << name[0] << "\n";
	std::cout << name[name.length() -1];
	return 0;

}


#pragma once
#include "CustomAdven.h"
class andrews_class
{
public:

	void run(CustomAdven& adv);
	andrews_class();
	~andrews_class();
private:
	//bool m_hasAxe = false;
	//std::string gainAxe(std::string input, path currentPath) {
	//	if (input == "PICK UP AXE") {
	//		m_hasAxe = true;
	//	}
	//	return currentPath.choices.find(input)->second;
	//}
	bool m_hasAxe = false;
	std::string &gainAxe(std::string input, path currentPath) {
		if (input == "yes") {
			m_hasAxe = true;
		}
		return currentPath.choices.find(input)->second;
	}

	
};


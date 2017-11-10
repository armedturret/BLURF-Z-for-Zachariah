#pragma once

#include "CustomAdven.h"

class RobertosCode
{
public:
	RobertosCode();
	~RobertosCode();

	void run(CustomAdven& adv);

private:
	bool m_hasAxe = false;
};


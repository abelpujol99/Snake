#pragma once
#include <vector>
#include <iostream>
#include "ConsoleControl.h"

using namespace std;

class Input
{
public:
	vector<char>* inputsRead = new vector<char>();


	void Listener();
};


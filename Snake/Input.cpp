#include "Input.h"

void Input::Listener()
{
	while (true) {
		int key = ConsoleControl::WaitForReadNextKey();
		cout << key << endl;
	}
}

#include "Input.h"
#include <thread>

int main() {

	Input* input = new Input();
	thread* keyListenerThread = new thread(&Input::Listener, input);
	keyListenerThread->detach();
	

	while (true) {
		char lastChar = input->LastInput();
		if (lastChar != 0) {
			cout << lastChar << endl;
		}
	}
}
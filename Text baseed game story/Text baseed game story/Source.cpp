#include<iostream> //output library: a file of prewritten code
using namespace std; //cheat code that makes io stream easier to use
int main() {//starting point of your program!

	//cout prints to screen, endl skips a line
	//for random spawn locations use bools as the conditional
	cout << "Welcome Screen" << endl;
	cout << endl << endl;
	cout << "You wake up in a bed, it is very dark" << endl;
	cout << "You turn on the lights and find the room to be unfimiliar." << endl; // if turn on lights
	cout << "There is a door to the east a closet to the south and a window to the west" << endl; // if look
	cout << "You go to the window and find you are on the third floor of an apartment" << endl; //if window
	cout << "It is dark but you can tell that you are no longer in the city" << endl; // time sleep continuation of if window
	cout << "You try to open the door and find it is locked" << endl; //if door
	char answer;
	int room = 1;
	while (true) {
		switch (room) {
		case 1:
			cout << "You are in a bedroom" << endl;
			cin >> answer;
			if (answer == 'e')
				room = 3;
			if (answer == 's')
				room = 2;
			break;
		case 2:
			cout << "You are in the wardrobe" << endl;
			cin >> answer;
			if (answer == 'n')
				room = 1;
			break;
		case 3:
			cout << "You are in the hallway" << endl;
			cin >> answer;
			if (answer == 'e')
				room = 4;
			if (answer == 'w')
				room = 1;
			if (answer == 's')
				room = 6;
			break;
		case 4:
			cout << "You are in the bedroom" << endl;
			cin >> answer;
			if (answer == 'w')
				room = 3;
			break;
		case 5:
			cout << "You are in the bathroom" << endl;
			cin >> answer;
			if (answer == 'w')
				room = 3;
			break;
		case 6:
			cout << "You are in the living room" << endl;
			cin >> answer;
			if (answer == 'n')
				room = 3;
			if (answer == 'e')
				room = 9;
			if (answer == 'w')
				room = 7;
			break;
		case 7:
			cout << "You are in the kitction" << endl;
			cin >> answer;
			if (answer == 'n')
				room = 8;
			if (answer == 'e')
				room = 6;
			break;
		case 8:
			cout << "You are in a hidden room" << endl;
			cin >> answer;
			if (answer == 's')
				room = 7;
			break;
		case 9:
			cout << "You are in the foyer" << endl;
			cin >> answer;
			if (answer == 'w')
				room = 6;
			break;
		default:
			cout << "I don't know where this is" << endl;
			break;
		}
	}
}
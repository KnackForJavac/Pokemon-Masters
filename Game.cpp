#include <iostream>
#include <Windows.h>
using namespace std;

class Pokemon {
public:
	int hp = 0;
	int stats[3] = { 10,10,10 };
	string name = "none";
	string moves[4] = { " "," "," "," " };
};

Pokemon bulbasuar{ {100}, {15, 3, 25}, {"Bulbasuar"}, {"Tackle", "Leech-Seed", "Giga-Drain", "Growl",} };
Pokemon ivysuar{ {120}, {20, 10, 25}, {"Ivysuar"}, {"Leech-Seed", "Giga-Drain", "Vine-Whip", "Tackle",} };
Pokemon venasuar{ {140}, {25, 15, 30}, {"Venasuar"}, {"Giga-Drain", "Tackle", "Leech-Seed", "Vine-Whip"} };

Pokemon poke;
Pokemon ePoke{ {100}, {20, 5, 25}, {"Mewtwo"}, {"Pyschic", "Psystrike", "Power-Swap", "Anicent-Power",} };

int main() {
	int wins = 0;
	int winstreak = 0;
game:
	cout << "\n\n\n";
	cout << "You have a win streak of " << winstreak << ".\n";
	cout << "You have " << wins << " wins.\n";
	Sleep(2000);
	cout << "Choose Your Pokemon: \n";
	cout << bulbasuar.name << "[1]\n";
	cout << ivysuar.name << "[2]\n";
	cout << venasuar.name << "[3]\n";
	int pokemon;
	cin >> pokemon;

	if (pokemon == 1) {
		poke.hp = bulbasuar.hp;
		poke.stats[0] = bulbasuar.stats[0];
		poke.stats[1] = bulbasuar.stats[1];
		poke.stats[2] = bulbasuar.stats[2];
		poke.name = bulbasuar.name;
		poke.moves[0] = bulbasuar.moves[0];
		poke.moves[1] = bulbasuar.moves[1];
		poke.moves[2] = bulbasuar.moves[2];
		poke.moves[3] = bulbasuar.moves[3];
	}
	else if (pokemon == 2) {
		poke.hp = ivysuar.hp;
		poke.stats[0] = ivysuar.stats[0];
		poke.stats[1] = ivysuar.stats[1];
		poke.stats[2] = ivysuar.stats[2];
		poke.name = ivysuar.name;
		poke.moves[0] = ivysuar.moves[0];
		poke.moves[1] = ivysuar.moves[1];
		poke.moves[2] = ivysuar.moves[2];
		poke.moves[3] = ivysuar.moves[3];
	}
	else if (pokemon == 3) {
		poke.hp = venasuar.hp;
		poke.stats[0] = venasuar.stats[0];
		poke.stats[1] = venasuar.stats[1];
		poke.stats[2] = venasuar.stats[2];
		poke.name = venasuar.name;
		poke.moves[0] = venasuar.moves[0];
		poke.moves[1] = venasuar.moves[1];
		poke.moves[2] = venasuar.moves[2];
		poke.moves[3] = venasuar.moves[3];
	}
	else {
		cout << "Invalid Request\n";
		Sleep(100);
		goto game;
	}
	cout << "You chose " << poke.name << "!\n";
	battle:
	Sleep(2500);
	if (poke.hp <= 0) {
		winstreak = 0;
		cout << "Your " << poke.name << " fainted!""\n";
		Sleep(100);
		goto game;
	}
	else if (ePoke.hp <= 0) {
		winstreak += 1;
		wins += 1;
		cout << "The " << ePoke.name << " fainted!""\n";
		cout << "You won the battle!\n";
		Sleep(100);
		goto game;
	}
	cout << ePoke.name << "   " << ePoke.hp << "\n";
	cout << "\n\n\n";
	cout << poke.name << "   " << poke.hp << "\n";
	cout << "Moves:\n";
	cout << poke.moves[0] << "[1]\n";
	cout << poke.moves[1] << "[2]\n";
	cout << poke.moves[2] << "[3]\n";
	cout << poke.moves[3] << "[4]\n";
	int move;
	cin >> move;

	if (move == 1) {
		ePoke.hp -= poke.stats[0] - ePoke.stats[1];
		goto end;
	}
	else if (move == 2) {
		ePoke.hp -= poke.stats[0] - ePoke.stats[1];
		goto end;
	}
	else if (move == 3) {
		ePoke.hp -= poke.stats[0] - ePoke.stats[1];
		goto end;
	}
	else {
		ePoke.hp -= poke.stats[0] - ePoke.stats[1];
		goto end;
	}
	end:
	poke.hp -= ePoke.stats[0] - poke.stats[1];
	Sleep(100);
	goto battle;
}

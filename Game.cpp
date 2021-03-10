#include <iostream>
#include <Windows.h>
using namespace std;

const string version = "0.0.2";

class Pokemon {
public:
	int hp = 0;
	int stats[3] = { 10,10,10 };
	string name = "none";
	string moves[4] = { " "," "," "," " };
};

Pokemon bulbasuar{ {100}, {15, 3, 25}, {"Bulbasuar"}, {"Tackle", "Leech-Seed", "Giga-Drain", "Growl",} };
Pokemon ivysuar{ {120}, {20, 10, 25}, {"Ivysuar"}, {"Leech-Seed", "Giga-Drain", "Vine-Whip", "Tackle",} };
Pokemon venasuar{ {140}, {25, 15, 30}, {"Venasuar"}, {"Giga-Drain", "Tackle", "Leech-Seed", "Vine-Whip",} };

Pokemon charmander{ {100}, {15, 5, 20}, {"Charmander"}, {"Fire-Blast", "Tackle", "Growl", "Tail-Whip",} };
Pokemon charmeleon{ {120}, {20, 10, 25}, {"Charmeleon"}, {"Inferno", "Fire-Blast", "Flamethrower", "Growl",} };
Pokemon charizard{ {140}, {30, 20, 25}, {"Charizard"}, {"Flame-Thrower", "Inferno", "Fire-Blast", "Fly",} };

Pokemon squrtile{ {100}, {10, 15, 15}, {"Squrtile"}, {"Water-Gun", "Shell-Shock", "Tail-Whip", "Growl",} };
Pokemon wartortle{ {120}, {15, 20, 25}, {"Wartortle"}, {"Shell-Shock", "Water-Gun", "Hydro-Pump", "Tail-Whip",} };
Pokemon blastoise{ {140}, {25, 35, 30}, {"Blastoise"}, {"Growl", "Shell-Shock", "Water-Gun", "Hydro-Pump",} };

Pokemon poke;
Pokemon ePoke{ {100}, {20, 5, 25}, {"Mewtwo"}, {"Pyschic", "Psystrike", "Power-Swap", "Anicent-Power",} };

int main() {
	int wins = 0;
	int winstreak = 0;
game:
	ePoke.hp = 100;
	cout << "\n\n\n";
	cout << "You have a win streak of " << winstreak << ".\n";
	cout << "You have " << wins << " wins.\n";
	Sleep(2000);
	cout << "Choose Your Pokemon: \n";
	cout << bulbasuar.name << "[1]\n";
	cout << ivysuar.name << "[2]\n";
	cout << venasuar.name << "[3]\n";
	cout << charmander.name << "[4]\n";
	cout << charmeleon.name << "[5]\n";
	cout << charizard.name << "[6]\n";
	cout << squrtile.name << "[7]\n";
	cout << wartortle.name << "[8]\n";
	cout << blastoise.name << "[9]\n";
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
	else if (pokemon == 4) {
		poke.hp = charmander.hp;
		poke.stats[0] = charmander.stats[0];
		poke.stats[1] = charmander.stats[1];
		poke.stats[2] = charmander.stats[2];
		poke.name = charmander.name;
		poke.moves[0] = charmander.moves[0];
		poke.moves[1] = charmander.moves[1];
		poke.moves[2] = charmander.moves[2];
		poke.moves[3] = charmander.moves[3];
	}
	else if (pokemon == 5) {
		poke.hp = charmeleon.hp;
		poke.stats[0] = charmeleon.stats[0];
		poke.stats[1] = charmeleon.stats[1];
		poke.stats[2] = charmeleon.stats[2];
		poke.name = charmeleon.name;
		poke.moves[0] = charmeleon.moves[0];
		poke.moves[1] = charmeleon.moves[1];
		poke.moves[2] = charmeleon.moves[2];
		poke.moves[3] = charmeleon.moves[3];
	}
	else if (pokemon == 6) {
		poke.hp = charizard.hp;
		poke.stats[0] = charizard.stats[0];
		poke.stats[1] = charizard.stats[1];
		poke.stats[2] = charizard.stats[2];
		poke.name = charizard.name;
		poke.moves[0] = charizard.moves[0];
		poke.moves[1] = charizard.moves[1];
		poke.moves[2] = charizard.moves[2];
		poke.moves[3] = charizard.moves[3];
	}
	else if (pokemon == 7) {
		poke.hp = squrtile.hp;
		poke.stats[0] = squrtile.stats[0];
		poke.stats[1] = squrtile.stats[1];
		poke.stats[2] = squrtile.stats[2];
		poke.name = squrtile.name;
		poke.moves[0] = squrtile.moves[0];
		poke.moves[1] = squrtile.moves[1];
		poke.moves[2] = squrtile.moves[2];
		poke.moves[3] = squrtile.moves[3];
	}
	else if (pokemon == 8) {
		poke.hp = wartortle.hp;
		poke.stats[0] = wartortle.stats[0];
		poke.stats[1] = wartortle.stats[1];
		poke.stats[2] = wartortle.stats[2];
		poke.name = wartortle.name;
		poke.moves[0] = wartortle.moves[0];
		poke.moves[1] = wartortle.moves[1];
		poke.moves[2] = wartortle.moves[2];
		poke.moves[3] = wartortle.moves[3];
	}
	else if (pokemon == 9) {
		poke.hp = blastoise.hp;
		poke.stats[0] = blastoise.stats[0];
		poke.stats[1] = blastoise.stats[1];
		poke.stats[2] = blastoise.stats[2];
		poke.name = blastoise.name;
		poke.moves[0] = blastoise.moves[0];
		poke.moves[1] = blastoise.moves[1];
		poke.moves[2] = blastoise.moves[2];
		poke.moves[3] = blastoise.moves[3];
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

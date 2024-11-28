#include <iostream>
#include <list>
#include <vector>
using namespace std;

#ifndef GAME_H_
#define GAME_H_

class Game
{

private:
	vector<string> players;

	const static int _MaxPlayers=6;
	const static int _MinPlayers=2;
	vector<string> placeCategory;

	bool inPenaltyBox[_MaxPlayers];
	int places[_MaxPlayers];
	int purses[_MaxPlayers];
	list<string> popQuestions;
	list<string> scienceQuestions;
	list<string> sportsQuestions;
	list<string> rockQuestions;

	int currentPlayer;
	bool isGettingOutOfPenaltyBox;
	bool isPlayable();
	bool add(string playerName);
	void getPlayerName();
	void reshuffle(list<string>& questionss);
	void initializePlayers();

public:
	Game();
	string createRockQuestion(int index);


	int howManyPlayers();
	void roll(int roll);

private:
	void askQuestion();
	string currentCategory();

public:
	bool wasCorrectlyAnswered();
	bool wrongAnswer();

private:
	bool didPlayerWin();
};

#endif /* GAME_H_ */

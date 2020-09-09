

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> board;
	board.push_back(0);
	board.push_back(0);
	board.push_back(0);
	board.push_back(0);
	board.push_back(0);
	board.push_back(0);
	board.push_back(0);
	board.push_back(0);
	board.push_back(0);

	// 1 = exes player , 2 = circle player

	// 0. Determine who moves
	// 1. check for empty space
	// 2. play   1, 2
	// 3. Check for victory or draw
	// 4. end turn

	bool gameRunning = true;

	bool turnOwner = true; // true exes  , false circles

	int moveIndex = -1;

	int winner = -1;

	while (gameRunning) {

		//Prints board
		
		for (int i = 0; i < board.size(); i = i + 3) {

			cout << board[i] << board[i + 1] << board[i + 2] << endl;
		}

		// 0. Determine who moves (checked)

		cout << "Please make a move.";
		cin >> moveIndex;

		// 1. check for empty space

		if (board[moveIndex] == 0) {

			// 2. play   1, 2
			if (turnOwner == true)
			{
				board[moveIndex] = 1;
			}
			else
			{
				board[moveIndex] = 2;
			}
		}

		// 3. Check for victory or draw
		int player = -1;
		if (turnOwner)
		{
			player = 1;
		}
		else
		{
			player = 2;
		}

		//first row
		if (board[0] == player && board[1] == player && board[2] == player)
		{
			//player 1 wins
			winner = player;
			gameRunning = false;
			break;
		}

		//second row
		if (board[3] == player && board[4] == player && board[5] == player)
		{
			//player 1 wins
			winner = player;
			gameRunning = false;
			break;
		}

		//third row
		if (board[6] == player && board[7] == player && board[8] == player)
		{
			//player 1 wins
			winner = player;
			gameRunning = false;
			break;
		}

		//first column
		if (board[0] == player && board[3] == player && board[6] == player)
		{
			//player 1 wins
			winner = player;
			gameRunning = false;
			break;
		}

		//second row
		if (board[1] == player && board[4] == player && board[7] == player)
		{
			//player 1 wins
			winner = player;
			gameRunning = false;
			break;
		}

		//third row
		if (board[2] == player && board[5] == player && board[8] == player)
		{
			//player 1 wins
			winner = player;
			gameRunning = false;
			break;
		}

		//diag left
		if (board[0] == player && board[4] == player && board[8] == player)
		{
			//player 1 wins
			winner = player;
			gameRunning = false;
			break;
		}

		//diag right
		if (board[2] == player && board[4] == player && board[6] == player)
		{
			//player 1 wins
			winner = player;
			gameRunning = false;
			break;
		}

		turnOwner = !turnOwner;
	}

	cout << "The winner is " << winner;


}


// 000
// 000
// 000
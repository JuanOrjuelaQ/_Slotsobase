#include <iostream>
#include <string>
#include <ctime>


using namespace std;


/// Remenber, think of functions as
/// OUTPUT problemBeingSolved (INPUT,INPUT...)

///Display a MENU SCREEN which gets a choice ( also show cash)
/// *Needs cash left (to display) 
/// *Returns choice
/// ____displayMenuGetChoice(_____cash)
/// {
///   // code goes here
///   return ___;
/// }
///

/// Display PLAY SLOTS SCREEN
/// Needs cash player has left before play 
/// Returns cash left after their bet and win/loss
/// ______ playSlots(_____cashIn)
/// {
/// 
///  //code goes here 
///  return cashOut;
/// }



///Didplay CREDITS SCREEN 
///  Needs nothing,gives back nothing.
/// void displayCredits()
/// { 
///   //code goes here 
/// returns; ///No value needed.

/// Display EXIT SCREEN
/// Basic version says bye/whatever exits.
/// I'd prefer a version that takes starting cash and cash left 
/// as arguments,then has something to say about your skills.
/// void displayExitScreen()
/// {
///   //code goes here 
///  return; value needed 
/// }  /// No 
  

void displayExitScreen() {
	cout << "See you later" << endl;
}
int playSlots(int cashIn) {
	
	int seed = time(NULL);
	srand(seed);
	int rawRandom = rand();
	
	if (rawRandom % 2 == 0) {
		cout << "You have won!!!!!" << endl;
		cashIn = cashIn + 100;
		
	}
	else
	{
		cout << "You have loose!!!" << endl;
		cashIn = cashIn - 100;
	}
	
	cout << "Wooo you're playing slots!" << endl;
	cout <<"  You have left   "<< cashIn<< endl << endl;
	return cashIn;
	
}
void displayCredits() {

	cout << "Your Credits" << endl;

}
int displayMenuGetChoice(int cash) { 
	cout << "-$-$-$-$-$-$HEY#HEY##IT'S<>SLOTSOBASE<>!!!!-$-$-$-$-$-$-$-$" << endl << endl;
	cout << "You have $......." << cash << endl;
	cout << " 1: play , 2 exit  , 3 credits , choose :         ";
	int x = 0;
	cin >> x;
	cout << endl;
	return x;

}

int main()
{
	const int STARTING_CASH = 2000;
	int cashLeft = STARTING_CASH;  /// Initialise cash Left using our constant.
	int choice = 0;

	do ///Core loop: shows menu, goes to screens or exits based on player choice 
	{
		choice = displayMenuGetChoice(cashLeft);

		if (choice == 1)
		{
			cashLeft = playSlots(cashLeft);

		}
		else if (choice == 3)
		{	
			displayCredits();
		}
		

	} while (choice != 2);
	
	displayExitScreen();


		return 0;
}

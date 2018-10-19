#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand( time(NULL) );     // variables for user input and random generation, including users total money,bet, and user gambled money
    int user;
    int bet;
    int money = 500;
    int random = rand() % 2;

    cout << "Welcome to Broulette you have $" << money << " Starting cash" << endl;

        while (money>0) // will loop program so long as money is over 0
        {
            cout << "You have $" << money << endl;         
            cout << "How much would you like to bet?" << endl; // takes in users bet
            cin >> bet;
            

                if ( bet <= money ) // if users bet is less or equal to total money allows user to continue
                {
                    
                    cout << " To place a bet please choose 1 or 0" << endl;
                    cin >> user; // takes user input for 1 or 0
                    

                        if (user == random)
                        {
                           
                           cout << "The wheel spins and spins and it lands on " << random << endl;
                           cout << "Winner, Winner, Chicken Dinner!" << endl;
                           money = money-bet;                                       // for winner subtracts bet from initial money then mulitplies bet and adds current money
                           money = bet*2+money;
                           cout << "You Current Balance is: $" << money << endl;
                        }
                        else if (user == 0 || user == 1)
                        {
                            cout << "The wheel spins and spins and it lands on " << random << endl;
                            cout << "You lose please try again!" << endl;                         // losing subtracts bet from total money
                            money = money-bet;
                            cout << "Your Current Balance is: $" << money << endl;                            
                        } 
                        else
                        {
                            cout << "You must enter '1' or '0'" << endl;  // if user enters something other than one or 0 it reminds user of correct input and closes program
                            break;  
                        }             
                }
                else
                {
                    cout << "You cant's bet with money you dont have!!" << endl; // tells user they dont have enough money to bet that amount and restarts
                    cout << "You have: $" << money << endl;
                    cout << "Please make your bet less than or equal to: $" << money << endl;
                }
        }

    cout << "Come back soon!" << endl; // program quit message







    return 0;
}
#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand( time(NULL) );
    int user;
    int bet;
    int money = 500;
    int random = rand() % 2;

    cout << "Welcome to Broulette you have $" << money << " Starting cash" << endl;

        while (money>0)
        {
            cout << "You have $" << money << endl;         
            cout << "How much would you like to bet?" << endl;
            cin >> bet;
            

                if ( bet <= money )
                {
                    money = money - bet;
                    cout << " To place a bet please choose 1 or 0" << endl;
                    cin >> user;
                    

                        if (user == random)
                        {
                           
                           cout << "The wheel spins and spins and it lands on " << random << endl;
                           cout << "Winner, Winner, Chicken Dinner!" << endl;
                           money = bet*2+money;
                           cout << "You Current Balance is: $" << money << endl;
                        }
                        else if (user == 0 || user == 1)
                        {
                            cout << "The wheel spins and spins and it lands on " << random << endl;
                            cout << "You lose please try again!" << endl;
                            money = money-bet;
                            cout << "Your Current Balance is: $" << money << endl;                            
                        } 
                        else
                        {
                            cout << "You must enter '1' or '0'" << endl;
                            break;
                        }             
                }
                else
                {
                    cout << "You cant's bet with money you dont have!!" << endl;
                    cout << "You have: $" << money << endl;
                    cout << "Please make your bet less than or equal to: $" << money << endl;
                }
        }

    cout << "Come back soon!" << endl;







    return 0;
}
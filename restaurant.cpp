//Mohammad Sufian Khan
//Sufian's Restaurant
// IMPORTANT: As I learn more c++, I will continue to improve this code. The final version will be released by the end of freshmen year. (Last Updated 12/05/2023)

#include <iostream>
#include <string>

using namespace std;
int x;
void menu()
    {   
        cout << " Number 1: $5 Beef burger/n Number 2: $5 Chicken Burger/n Number 3: $3 Strawberry Milkshake ";
        cin >> x;

    }

int main()
{

    

    string answer; 
    cout << "Hello and welcome to Sufian's coffee shop. Would you like to see the menu? " << endl;
    cin >> answer;

    if (answer == "yes" || "YES")
        {
         menu();
        }
         else{
         cout << "Ok, when your ready let me know! ";
         
        }

    switch (x)
    {
        case 1:
        cout << " Enjoy your Beef Burger! ";
        break;
        case 2:
        cout << "Here is your Chicken Burger. Enjoy! ";
        break;
        case 3: 
        cout << " Here you go, enjoy the Strawberry Milkshake! ";
        break;
    }


}

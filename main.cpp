#include <iostream>

using namespace std;

double currentBalance;

int main()
{


    string cityList[13] = {"Angeles", "Antipolo", "Cainta", "Cavite", "Laguna", "Las Piñas", "Malolos", "Mandaluyong", "Muntinlupa", "Parañaque", "Pasay", "Quezon", "Taguig"};
    char transactionChar;
    string creditCardNum;




    while(true){
            cout << "\n\nWelcome, username\n\nPurchase a ticket, press 1 / Refund a ticket, press 2 / Change Current Balance, press 3\n"<< endl;
            cout << "Current Balance: " << currentBalance << endl;
            cout << "Enter transaction number: ";
            cin >> transactionChar;


            if (transactionChar < '1' || transactionChar > '3'){

                cout << "Invalid Input";
                cout << "\nEnter transaction number: ";
                cin >> transactionChar;
                continue;
            }

            else if (transactionChar == '1'){
                cout << "\nTICKET PURCHASE\n";
                    //ticketPurchaseMenu();
                break;

            }

             else if (transactionChar == '2'){
                cout << "\nREFUND TICKET\n\n";
                cout << "Enter your credit card #: ";
                cin >> creditCardNum;
                cout << "Enter Remaining/Previous Balance: ";
                //cin >> remainingBalance;
                //cout << "Remaining Balance: " << remainingBalance << endl;
                cout << "\nRE-ENTER YOUR LAST TRANSACTION.\n\n";

                //ticketPurchaseMenu();
               // refundTicketMenu();
                break;
             }

             else if (transactionChar == '3'){
                cout << "\nCHANGE CURRENT BALANCE\n";
                cout << "Enter your credit card #: ";
                cin >> creditCardNum;
                cout << "Enter New Balance: ";
                cin >> currentBalance;
                cout << "Current Balance Successfully Changed!\n";
                continue;

            }

            else {

                cout << "\nInvalid Input: " << transactionChar;
                break;
            }
    }

    return 0;
}

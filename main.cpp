#include <iostream>

using namespace std;

void ticketPurchaseMenu();
void chooseMenu();
void payingMenu();
//void refundTicketMenu();
double currentBalance, remainingBalance;
double ticketFee;
string city;

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
                    ticketPurchaseMenu();
                break;

            }

             else if (transactionChar == '2'){
                cout << "\nREFUND TICKET\n\n";
                cout << "Enter your credit card #: ";
                cin >> creditCardNum;
                cout << "Enter Remaining/Previous Balance: ";
                cin >> remainingBalance;
                cout << "Remaining Balance: " << remainingBalance << endl;
                cout << "\nRE-ENTER YOUR LAST TRANSACTION.\n\n";

                ticketPurchaseMenu();
                //refundTicketMenu();
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

void ticketPurchaseMenu(){



    bool valueBoolean = true;

    cout << "Enter city: ";
    cin >> city;

    while (valueBoolean) {


        if (city == "Angeles" || city == "angeles"){
            cout << "\n\tClark International Airport - Trinoma" << endl;
            ticketFee = 150;
            payingMenu();
            break;
        }
    }
}

void payingMenu(){

    char confirm;

    cout << "\tCurrent Balance: " << currentBalance << " | " << "Ticket Fee: " << ticketFee << endl;
    cout << "\nYou are about to make a transaction, enter E to CONFIRM.";
    cin >> confirm;

    if (confirm == 'E' || confirm == 'e'){

    currentBalance = currentBalance - ticketFee;

    cout << "\n\tYou have successfully made a transaction!\n" << endl;
    cout << "Remaining Balance: " << currentBalance << endl;
    cout << "Your ticket is now booked. Valid only for today.\n\n\n\n\nRestart the program to make another transaction.\n\n\n";
    }

    else {
        cout << "\nTransaction Canceled. Restart the Program to make another Transaction.\n\n";
    }
}

void chooseMenu(){

    char ticketNum;

    if (city == "Antipolo" || city == "antipolo") {

        while (true){
            cout << "\nTicket Number: Origin - Destination\n" << endl;
            cout << "\t1:Antipolo Triangle Mall/Robinsons Place Antipolo - Robinsons Galleria" << endl;
            cout << "\t2:SM Cherry Antipolo/SM City Masinag - Greenbelt 5" << endl;

            cout << "\nEnter Ticket Number: ";
            cin >> ticketNum;

            if (ticketNum == '1'){
                ticketFee = 55;
                break;
            }

            else if (ticketNum == '2'){
                ticketFee = 80;
                break;
            }
            else {
                cout << "Invalid Number";
                continue;
            }

        }
    }
}

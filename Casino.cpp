// LET'S PLAY A CASINO GAME:

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


// TAKING YOUR INPUT
int yourChoise(){
    int num;   // num IS YOUR INPUT
    cout<<"Enter a Number(number <= 100): ";
    cin>>num;
    return num;
}

// THIS WILL GENERATE THE RANDOM NUMBERS IF THIS NUMBER MATCHES WITH YOUR INPUT THEN YOU WIN.
int compChoise(){
    srand(time(0));
    return rand() %100 +1;
}

int main(){
    int cnum;  // COMPUTER GENERATED NUMBER.
    int ynum;   // YOUR PREDICTED NUMBER.
    int count;  // BANK BALANCE
    cout<<"Enter your balance: ";    // THIS IS A AMOUNT IN YOUR BANK. I TAKE THIS AS A INPUT BECAUSE I DON'T KNOW YOUR BANK BALANCE.
    cin>>count;
    int bet;  // AMOUNT FOR BET.

    S1:    
    cout<<"Enter the amount you want to bet: ";
    cin>>bet;

    if(bet < count){
        ynum = yourChoise();      
        cnum = compChoise();  
        if(ynum > 100 || ynum <1){
            cout<<"Invalid number."<<endl;
        }
        else if(cnum == ynum){
            cout<<"You win."<<endl;
            count += bet;
        }else{
            cout<<"You lose."<<endl;
            count -= bet;
        }
        cout<<"Your current balance is: "<<count<<endl;
        cout<<"If you want to play again press 1 else press 0: ";
        int choice;
        cin>>choice;
        if(choice == 1){
            goto S1;
        }else cout <<"Thanks for playing."<<endl;
    }
    else cout<<"You don't have enough balance.Thankyou."<<endl;
    return 0;
}
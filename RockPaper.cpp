// ROCK, PAPER, SCISSOR GAME WITH COMPUTER:-

#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int getUserChoice(){
    int input;
    cout<<"1 : Rock \n2 : Paper \n3 : Scissor \n";
    cout<<"Your choise: ";

    cin>>input;

    if(input == 1){
        cout<<"Your Input is Rock"<<endl;
    } else if(input == 2){
        cout<<"Your Input is Paper"<<endl;
    }else if(input == 3){
        cout<<"Your Input is Scissor"<<endl;
    }
    return input;
}
int CompChoise(){
    int choise;
    srand(time(0));
    choise = rand()%3 +1;
    if(choise == 1){
        cout<<"Computer choise is Rock"<<endl;
    }else if(choise == 2){
        cout<<"Computer choise is Paper"<<endl;
    }else if(choise == 3){
        cout<<"Computer choise is Scissor"<<endl;   
    }
    return choise;
}

int main(){
    int yourPoints=0;
    int compPoints =0;
    cout<<"There are three rounds."<<endl;

    for(int i=0; i<3; i++){

        int a = getUserChoice();
        int b = CompChoise();
        if(a == b){
            cout<<"Draw."<<endl;
        }else if(a == 1 && b == 2 || a==2 && b==3 || a==3 && b==1){
            cout<<"You lose."<<endl;
            compPoints++;
        }else if(a == 1 && b == 3 || a==2 && b == 1 || a==3 && b==2){
            cout<<"You win."<<endl;
            yourPoints++;
        }
        cout<<endl;
    }
    cout<<"Your Points is: "<<yourPoints<<endl;
    cout<<"Computer Points is: "<<compPoints<<endl;
    if(yourPoints > compPoints){
        cout<<"Congratulations! You are a winner.";
    }else{
        cout<<"Better luck next time. This game Computer wins"<<endl;
    }

    return 0;
}
+#include <bits/stdc++.h>
using namespace std;
int main() {
    cout<<setw(80)<<"--> WELCOME TO CASINO WORLD..."<<endl;
    cout<<"\n\t<-- [CASINO NUMBER GUESSING RULES]!!! -->\n\t1. This game will be playing in between two players\n";
    cout<<"\t2. Choose a guessing number between 1 to 10\n\t3. Winner gets 10 times of the money bet\n";
    cout<<"\t4. Wrong bet and you lose the amount you bet\n\t5. Enter correct details otherwise strict action will be taken\n";
    cout<<"\t|-------------------------------------------------------------|\n"<<endl;
    
    string player1, player2;
    cout<<"Player-1, please enter your name : ";
    getline(cin, player1);
    cout<<"Player-2, please enter your name : ";
    getline(cin, player2);
    cout<<endl;
    
    cout<<"Player have balance : "<<endl;
    cout<<"--------------------"<<endl;
    int balance1, balance2;
    cout<<"Hey, "<<player1<<" "<<"please enter your total balance that you have : $";
    cin>>balance1;
    cout<<"Hey, "<<player2<<" "<<"please enter your total balance that you have : $";
    cin>>balance2;
    cout<<endl;
    
	int res=1;
	while(res) {
	cout<<"Player bet : "<<endl;
	cout<<"-----------"<<endl;
	int bet1, bet2;
	b1:
		cout<<"Hey, "<<player1<<" "<<"please enter your bet amount : $";
		cin>>bet1;
		if(bet1>balance1) {
			cout<<player1<<" "<<"you have not enough balance"<<endl;;
			goto b1;
		}
       b2:
		cout<<"Hey, "<<player2<<" "<<"please enter your bet amount : $";
		cin>>bet2;
		if(bet2>balance2) {
			cout<<player2<<" "<<"you have not enough balance"<<endl;;
			goto b2;
		}

	cout<<"\nPlayer just guess a number : "<<endl;
	cout<<"---------------------------"<<endl;
	int num1, num2;
	guess1:
		cout<<player1<<" "<<"please guess a number : ";
	    cin>>num1;
	    if(num1>=1 and num1<=10) {
	    	//do nothing, just go to the next line
		}
		else {
			cout<<"Please follow the rules"<<endl;
	    	goto guess1;
		}
	guess2:
		cout<<player2<<" "<<"please guess a number : ";
	    cin>>num2;
	    if(num2>=1 and num2<=10) {
	    	//do nothing, just go to the next line
		}
		else {
			cout<<"Please follow the rules"<<endl;
			goto guess2;
		}

	cout<<"\nResult of this game : "<<endl;
	cout<<"--------------------"<<endl;
	int num=rand()%10; //rand() generates a random number each time
	cout<<"\nWinning number is : "<<num<<endl;
	cout<<"|---------------------|"<<endl;
	cout<<endl;
	
	if(num==num1 and num==num2) {
		balance1+=(bet1*10);
		balance2+=(bet2*10);
		cout<<"Congratulations, you both have won the game"<<endl;
		cout<<endl;
		cout<<"Current balance of "<<player1<<" $"<<balance1<<endl;
		cout<<"Current balance of "<<player2<<" $"<<balance2<<endl;
	}
	else if(num==num1 and num!=num2) {
		balance1+=(bet1*10);
		balance2-=bet2;
		cout<<"Congratulations, "<<player1<<" "<<"you won this game"<<endl;
		cout<<"Sorry, "<<player2<<" "<<"you lost this game"<<endl;
		cout<<endl;
		cout<<"Current balance of "<<player1<<" $"<<balance1<<endl;
		cout<<"Current balance of "<<player2<<" $"<<balance2<<endl;
	}
	else if(num==num2 and num!=num1) {
		balance2+=(bet2*10);
		balance1-=bet1;
		cout<<"Congratulations, "<<player2<<" "<<"you won this game"<<endl;
		cout<<"Sorry, "<<player1<<" "<<"you lost this game"<<endl;
		cout<<endl;
		cout<<"Current balance of "<<player1<<" $"<<balance1<<endl;
		cout<<"Current balance of "<<player2<<" $"<<balance2<<endl;
	}
	else {
		balance1-=bet1;
		balance2-=bet2;
		cout<<"Sorry, you both have lost the game"<<endl;
		cout<<endl;
		cout<<"Current balance of "<<player1<<" $"<<balance1<<endl;
		cout<<"Current balance of "<<player2<<" $"<<balance2<<endl;
	}
	cout<<"------------------------------"<<endl;
	//end of the game
	key:
		int res;
	    cout<<"Enter 1: if you both want to play again, otherwise Enter 0: to exit the game --> ";
	    cin>>res;
	    if(res==1) {
	    	system("cls"); //just clear the screen and again play the game between the same player
	    }
	    else if(res==0) {
	    	break; //just exit from the game
	    }
	    else {
	    	cout<<"you have entered wrong key"<<endl;
		    cout<<"please enter the correct key"<<endl;
		    goto key;
	    }
	}
	return 0;
}

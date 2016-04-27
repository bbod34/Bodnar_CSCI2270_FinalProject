#include <iostream>
#include "HangMan.h"

using namespace std;

int main()
{
    string choice;
    HangMan floop;
    //cout<<"poop"<<endl;
    floop.initializeWordArray();
    //cout<<"WHAT"<<endl;
    while(choice != "3"){
        cout << "Welcome to hangman! Please choose an option and then we can begin." << endl;
        cout << "1. Play with random word" << endl;
        cout << "2. Choose word for friend, then play" << endl;
        cout << "3. Quit" << endl;
        cin>>choice;
            if(choice == "1"){
                int random;
                cout<<"Enter a number between 1 and 9"<<endl;
                cin>>random;
                string word = floop.randomWord(random);
                floop.initializeLinkedList(word);
                string letter;
                while(floop.wordSolved() == false && floop.strikesCheck() == false){
                    floop.showStrikes();
                    cout<<endl;
                    floop.showXMarks();
                    cout<<endl;
                    cout<<endl;
                    cout<<"Enter the letter you want to guess: ";
                    cin>>letter;
                    if(floop.guessLetter(letter) == true){
                        floop.addStrike();
                    }
                    cout<<endl;
                }
                floop.showEndingWord();
                cout<<endl;
                if(floop.strikesCheck() == false){
                cout<<"Congrats! You guessed the word!"<<endl;
                }
                else{
                    cout<<"You lose. Better luck next time!"<<endl;
                }
                cout<<endl;
            }
            else if(choice == "2"){
                string word;
                cout<<"Enter the word you want to use:"<<endl;
                cin>>word;
                floop.initializeLinkedList(word);
                string letter;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                while(floop.wordSolved() == false && floop.strikesCheck() == false){
                    floop.showStrikes();
                    cout<<endl;
                    floop.showXMarks();
                    cout<<endl;
                    cout<<endl;
                    cout<<"Enter the letter you want to guess: ";
                    cin>>letter;
                    if(floop.guessLetter(letter) == true){
                        floop.addStrike();
                    }
                    cout<<endl;
                }
                floop.showEndingWord();
                cout<<endl;
                if(floop.strikesCheck() == false){
                cout<<"Congrats! You guessed the word!"<<endl;
                }
                else{
                    cout<<"You lose. Better luck next time!"<<endl;
                }
                cout<<endl;
            }
            floop.resetStrikes();
    }
    cout<<"Goodbye!"<<endl;
    return 0;
}

#ifndef HANGMAN_H
#define HANGMAN_H
using namespace std;
#include <iostream>


struct Index{
    string letter;
    bool guessed;
    Index *next = NULL;
    Index *previous = NULL;
};

class HangMan
{
    public:
        HangMan();
        ~HangMan();
        bool guessLetter(string);
        string guessWord(string);
        string chooseWordForFirend(string);
        string randomWord(int);
        void printWord();
        void showXMarks();
        void showStrikes();
        void initializeLinkedList(string);
        void initializeWordArray();
        bool wordSolved();
        bool strikesCheck();
        void addStrike();
        void showEndingWord();
        void resetStrikes();
        void displayTextMan(int strikesCount);  // text depiction of hangman



    protected:
    private:
        Index *head;
        int strikes;
        string wordArray[9];
        int arraySize = 9;

};

#endif // HANGMAN_H

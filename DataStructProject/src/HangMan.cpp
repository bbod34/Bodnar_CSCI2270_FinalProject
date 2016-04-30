#include "HangMan.h"
#include <iostream>
using namespace std;

HangMan::HangMan()
{
    strikes = 0;
    head = NULL;
    //wordArray[arraySize];
}

HangMan::~HangMan()
{
    //dtor
}

void HangMan::initializeWordArray(){
    string tempArray[9];
    tempArray[0] = "colorado";
    tempArray[1] = "broncos";
    tempArray[2] = "curry";
    tempArray[3] = "america";
    tempArray[4] = "avalanche";
    tempArray[5] = "steamboat";
    tempArray[6] = "ralphie";
    tempArray[7] = "indonesia";
    tempArray[8] = "thailand";
    for(int i = 0; i < arraySize; i++){
        wordArray[i] = tempArray[i];
    }
}


string HangMan::randomWord(int number){  ///choose word in array of numbers
    int randNum = rand() % number; //get a random integer between 0 and the number entered
    string word = wordArray[randNum];
    return word;
}


void HangMan::initializeLinkedList(string gameWord){ ///building a linked list with the words BRUH
        int counter = 1;
        head = new Index;
        head->letter = gameWord[0];
        head->next = NULL;
        head->previous = NULL;
        head->guessed = false;
        Index *love = head; // pointer to head
        while(counter < gameWord.length()){
            Index *tmp = new Index;
            tmp->previous = love;
            tmp->next = NULL;
            tmp->guessed = false;
            tmp->letter = gameWord[counter];
            love->next = tmp;
            love = love->next;
            counter++;
        }
        love = head;
}


bool HangMan::wordSolved(){  /// did you get it right?
    int counter = 0;
    Index *tmp = head;
    while(tmp != NULL){
        counter++;
        tmp = tmp->next;
    }
    int counter2 = 0;
    Index *tmp2 = head;
    while(tmp2 != NULL){
        if(tmp2->guessed == true){
            counter2++;
        }
        tmp2 = tmp2->next;
    }
    if(counter == counter2){
        return true;
    }
    else{
        return false;
    }
}

void HangMan::showXMarks(){
    Index *temp = head;
    while(temp != NULL){
      if(temp->guessed == true){
        cout<<temp->letter<<" ";
      }
      else{
      cout<<"_ ";
      }
        temp = temp->next;
    }
}

bool HangMan::strikesCheck(){ ///did you lose?
    if(strikes == 7){
        return true;
    }
    else{
        return false;
    }
}

bool HangMan::guessLetter(string n){
    int check = 0;
    Index *tmp = head;
    while(tmp != NULL){
        //if(tmp->guessed == false){
            if(tmp->letter == n){
                tmp->guessed = true;
                check++;
            }
       // }
        tmp = tmp->next;
    }
    if(check == 0){
        return true;
    }
    else{
        return false;
    }
}


void HangMan::addStrike(){
    strikes = strikes +1;
}

void HangMan::showEndingWord(){
    Index *tmp = head;
    while(tmp != NULL){
        cout<<tmp->letter<<" ";
        tmp = tmp->next;
    }
}


void HangMan::showStrikes(){
    cout<<"Strikes: "<<strikes<<endl;
}

void HangMan::resetStrikes(){
    strikes = 0;
}

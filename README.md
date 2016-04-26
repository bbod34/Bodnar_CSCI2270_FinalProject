# Bodnar_CSCI2270_FinalProject
Project Summary:
  My project is a text based hangman game for an individual to play in the terminal in Linux, using words they choose or random words. It sets up a linked list with the letters and traverses them each time a letter is guessed to see if that letter is in the linked list. Each node is a struct with a "letter", "next", "previous", and "guessed" property. The game runs in a while loop with user inputs to play the game. 


How to Run:
  The user will start by being prompted to either choose a random word or provide a word for their friend to play with. If they choose a random word, they will pick a number and then a word will be picked for them based on their choice. If they pick the second option they will be prompted to provide the words in for the players. These different playing options are all lowecased and one word options, and only word like this should be entered. As you are playing the hangman game, you will be prompted for a letter, and then show the letter in the word if it is a correct guess. If it isn't a strike will be added to your strike count. You will then win or lose and be asked if you want to play again. When you would like to quit you would enter 3 and the program would exit. For example if you were to enter 1, then 2, you would get the random word attributed to 2 and guess letters from there.
  
  
Dependencies:
  
 This does not require any third party libraries or installations.
  
System Requirements:
  This program was meant for the VM we use for this class or similar.
  
Group Members:
None

Contributors:
None


Open bug/fixes:
  This project requires you to enter a number between 1 and 9 in the random word option or else it will seg fault. It also will not work for capital letters or phrases. Only single lowercase words will work.

  
  



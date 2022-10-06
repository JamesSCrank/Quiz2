//Tic tac toe game between 2 players or player vs computer 

int main(){
  
    //prompt user for game they should play 
    cout << "Would you like to play a game of Tic-tac-toe?(Y/N)?" << endl; 
    //ask the user if they would like to play, and check for Yes or No
    Char response; 
    cin>> response; 
    //If yes, "Excellent, which would you like to play?"
    if (response == (toupper)'Y'){
        cout<<"Excellent! Please choose from one of the following options!" << endl; 
        //give menu options, 1 - Player vs. Player, 2 - Player vs. computer 
        cout << "1 - Player Vs. Player, Test your might against your friends!" << endl; 
        cout << "2 - Player Vs. Computer, can you beat the mighty machine!?" << endl;
        cout << "Tell me friend, which do you choose?" << endl;  
        cin>> response; 
        switch(response){
            case '1': 
            //if "Player vs. player", the program needs to give prompts for each player to input their choice
            cout << "Weclome players! You must both take turns, first to get to three wins, but watch out for ties!" << endl; 
            
            break; 
            case '2':
            //Should the player choose "Player vs. Computer"
            //the program should give space for the player to choose a X or O
            //while generating a random for the computers turn 
            break; 
            default << "This is an invalid choice, how dare you." << endl; 
        }



    }
    //if no, give a "restarting program" message (changed mind)
    if (response == (toupper)'N'){
        cout << "What a shame. Oh well, it's not like you'd be any good at it anyway." << endl; 
        return 0; 
    }
    if (response != (toupper)'Y' || (toupper)'N'){
        cout << "Invalid selection. Goodbye." << endl; 
        return 0; 
    }
    
    
     
     
    //if a tie, system should say so and end the game. 
    //if a win occurs, system should stop and announce a winner 
    
    
    //while generating a random for the computers turn 
    //Need to create the visual representation of the grid and each time the player input a number/choice, the system 
    //needs to be able to find the space in the representation and update it to reflect the new choice  
    //needs to have a really nice "You win" or "tie" message and then prompt the player to play again
    //if player says yes, needs to redirect back to choosing Player Vs. Player or Player Vs. Computer 
    //If no, cancels out program 

    //




    return 0; 
}
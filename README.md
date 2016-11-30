#Names:
Garrett Swann
Dustin Jackson
Marshall Dyer
Kevin Lien
Daniel Swearingen
Jason Groven
Steven Bendick

#General Scoreboard Class!

This class is an implementation of the abstract class `IScoreBoard`. 

###Design Patterns:

This class was developed using the Template Pattern. We inhereted our abstract class `IScoreBoard` and created implementations of it's pure virtual functions to give it some general functionality. 

This design pattern was appropriate because that was literally a requirement for this assignment. 

###How to use this class:

This class is essentially a handler for a 2D array.

When creating an instance of our class, you give it a number of players and a number of rounds. 

Whenever a round is over, you can set a score for your players. (Or not! Scores are initialized to 0 on object creation.)

If you want to get a score, you use the getScore function! WOW! You just pass it a player's/team's number, and period. 

If want to get a player's total score, use the getTotalScore function! CRAZY.

When a game is over and you want to play again, you can call the clearScoreBoard function to set every score back to 0. Amazing. 

### Example: Rock-paper-scissors
If we were to design a rock-paper-scissors challenge app, we would use the Scoreboard class is a base, which would provide us all the functionality we would need to handle the game. Then we would provide a wrapper around the use of the Scoreboard class tailored specifically to a rock-paper-scissors game.

Using MVC architecture, we would provide the user views for entering scores and getting scores uing the setScore and getScore functions of the Scoreboard class. We could either let the user enter the number of the periods and players, and call the constructor for Scoreboard with these values, or assume only 1 period and call it that value and the number of competitors.

#####Note:
    This class doesn't have to be used for a game.

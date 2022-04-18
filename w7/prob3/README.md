# Game Playing
Evan is a student of class 10. He likes to play a game with a set of strings.

The rule of the game is very simple. Find the longest common subsequence among the given strings.

Now your task is very simple, create a program for Evan, which will help him to find out the longest common subsequence and win the game. There are rules in this game. At first, it will check the Longest common subsequence for the first two strings and then the result will be checked with the following string and so on. 

The first line of input will take an Integer N indicating the number of strings. 
Then the next N line of input will take N strings.
N.B: Maximum length of a string can be 100.

Display the length of the longest common subsequence in the first line.
then in the second line, display the sequence.
```
Sample input:
3
Woodapple
Pineapple
apple
Sample output:
5
apple

Sample input:
5
sharif
shohan
rabbi
shazzad
polash

Sample output:
1
a
```
[solution.c](solution.c)
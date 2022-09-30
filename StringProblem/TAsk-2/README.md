Write a python program that takes 2 inputs from the user, where the first input is a string with length greater than 1. The second input is the index of the first given string from where you have to start reversing. After reversing the first input string from that index, print the new string back to the user. See samples below for clarification.
=====================================================================
Sample Input 1:
72418
4
Sample Output 1:
81427

Explanation: Our second input, index '4' is the last index of our first input String '72418', hence the entire string is reversed giving us '81427'.

Sample Input 2:
12345
2
Sample Output 2:
32145
Explanation: The second input is '2' so we have to reverse from index 2 of our first input. The 2nd index of our first input String is '3', index 1 is '2' and index 0 is '1'. Hence, if we reverse indexes 0 to 2, we get '321'. Index 3 and 4 which is '4' and '5' respectively remains unchanged hence our final output is '32145'.

Sample Input 3:
aBcd1234defg 5
Sample Output 3:
21dcBa34defg
Explanation: From our first input String 'aBcd1234defg', index 0 = 'a'
index 1 = 'B' index 2 = 'c' index 3 = 'd' index 4 = '1'
index 5 = '2'
index 6 = '3'
Since our second input is 5, index 0 to index 5 is reversed and we have '21dcBa' and the rest is unchanged from indexes 6 to 11 ('34defg'). Therefore, we have '21dcBa34defg' finally.

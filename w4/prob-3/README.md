# Minimum cost of finding the right item
One day Lisa decided to take part in a competition.  
The rule of the competition is she will be given a tray.  The tray will contain some items. Every item will contain a tag and every tag will contain a specific number. Items are sorted in ascending order according to their tag numbers.
Lisa will be asked to find out an item with a specific tag number out of the available items. 

To find out the given item, she needs to search the available items from the tray. If she wants to win the competition, she needs to find out the item within a minimum amount of time.
 
Now, your task is to write a program that will help  Lisa to find the given item and display the corresponding complexity in forms of M. (M: the minimum number of rounds the program takes to find out the given item).

Input: The first line contains an integer N, the number of items.
Second-line contains N integer values denoting the tag numbers of the items. 
The last line contains a random integer, K only from within the available tag numbers.

Output: Display the value of M

```
Sample Input:
6 
1 2 3 4 5 6
6
Sample output:
3

Sample Input:
7
3 5 8 9 10 13 19
13
Sample Output:
2
```
[solution.c](solution.c)

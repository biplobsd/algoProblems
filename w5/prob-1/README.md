Rahim’s Shop

![preview](https://user-images.githubusercontent.com/43641536/155019251-06775fc0-10f9-4088-98f8-11f833d5be5d.png)

Mr. Rahim has a Shop in Bashundhara City. He sells many mobile phones and accessories every day.
Sometimes his customers do not have change of the actual price and give Mr Rahim more money. Then Rahim needs to return the additional money to the customers.
One day, he sold a phone to his customer. The price of the phone was 25300 BDT.  The customer gave him 26000 BDT.

To return the additional amount of money, Mr. Rahim opened his cash vault and saw that there were 500 BDT, 100 BDT, 1000 BDT, 50 BDT, 20 BDT notes available.
Then Mr. Rahim returned the customer a 500 BDT note and four 50 BDT notes. Do you think that Rahim used the optimal solution to give the change? If not, how can you help Rahim to give the optimal solution using a minimum number of notes.

You will be given an integer N (denote the number of available notes). The next line contains the values of N notes.
Now, your task is to find the minimum number of notes to make the change. 
If it is possible to change then your output will be in 2 lines. First line contains an integer K (denotes the number of minimum notes). Second line contains K integers (the values of the notes).

If it is not possible to make the change then the output will display only a string "Impossible".

```
Sample Input:
5
500 1000 100 50 20
700
Sample Output:
3
500 100 100


Sample Input:
6
1000 20 50 200 10 500
665
Sample Output:
Impossible
```
[solution.c](solution.c)

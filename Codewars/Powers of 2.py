/*
Powers of 2
https://www.codewars.com/kata/57a083a57cb1f31db7000028
*/

def powers_of_two(n):
    res = list()
    for i in range(0, n + 1):
        res.append(2**i)
    return res
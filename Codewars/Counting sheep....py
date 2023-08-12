/*
Counting sheep...
https://www.codewars.com/kata/54edbc7200b811e956000556
*/

def count_sheeps(sheep):
    cnt = 0
    for item in sheep:
        if item:
            cnt += 1
    return cnt
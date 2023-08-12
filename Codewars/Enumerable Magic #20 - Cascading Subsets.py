/*
Enumerable Magic #20 - Cascading Subsets
https://www.codewars.com/kata/545af3d185166a3dec001190
*/

def each_cons(lst, n):
    result = list()
    for i in range(0, len(lst) - n + 1):
        arr = list()
        for j in range(i, i + n):
            arr.append(lst[j])
        result.append(arr)
    return result
/*
The maximum sum value of ranges -- Challenge version
https://www.codewars.com/kata/583d171f28a0c04b7c00009c
*/

def max_sum(a, ranges):
    prefix_sums = []
    current_sum = 0
    max_sum = 0
    prefix_sums.append(current_sum)
    for i in range (0, len(a)):
        current_sum += a[i]
        prefix_sums.append(current_sum)
        if (a[i] < 0):
            max_sum += a[i]
    for f, s in ranges:
        if prefix_sums[s + 1] - prefix_sums[f] > max_sum:
            max_sum = prefix_sums[s + 1] - prefix_sums[f]
    return max_sum
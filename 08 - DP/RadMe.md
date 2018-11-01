# WEEK8-DP

# 433B: Kuriyama Mirai's Stones

Here we are given a list of stones, each with their own price. The questions possible is type one and two: type one will be sum of stone's cost from l to r and type two will be sum of stone's cost from l to r in an non-decreasing order.


If the cost of stones are:
6 4 7 5 3 2
Then we will use the exact array for type one.
While for type two, we will use:
2 3 4 5 6 7

The input will be number of stones followed by cost of each stones. 
Then it is followed with how many questions will their be. Each question consists of type, l, and r. 
The output we should give is the sum of numbers from l to r according its type. 
The solution given is to use cumulative array because if we count the sum in each question over and over the time limit will exceed. So, as what have been stated before, we store the cost in two cumulative array: for the normal one and sorted array. Then to get the sum from l to r, it will be array[r-1] - array[l-2]. Except if l=1, Then we just need to take array[r] cause it is the sum from 1 to r. 
Complexity Worst Case: O(nlogn)

## <[**Problem**](http://codeforces.com/problemset/problem/433/B)><[**Solution**](http://codeforces.com/contest/433/submission/45164880)>

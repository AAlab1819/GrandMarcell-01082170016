# Week 06

## Find The Running Median

## <[**Problem**](https://www.hackerrank.com/challenges/ctci-find-the-running-median/problem)>

In this problem we need to find the median of the inputed list. Before find the median we need to make the list sorted using heapsort.
Example:

inputed list {3,2,1}
1. First input is {3}, the output will be 3 because there is no other number in the list.
2. Second input is {2,3}, the output will be 2.5 because (3+2)/2= 2.5.
3. Third input is{1,2,3}, the output will be 2, because 2 is the media of the list 

Complexity : O(n log n)

## ROY and Treding Topics

## <[**Problem**](https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/roy-and-trending-topics-1/)>


In this problem Roy is trying to develop a widget with some topics ID in it, each id has z-score, z score  can increase accroding to this following rules:
1. When a topic is mentioned in a 'Post', its z-score is increased by 50.
2. A 'Like' on such a Post, increases the z-score by 5.
3. A 'Comment' increases z-score by 10.
4. A 'Share' causes an increment of 20.

In this problem we need to input the topic id, z for  score, p for post, l for likes, c for comments,and s for shares. We need to output the top 5 topics each in a new line, and each line should contain two space separated integeers, Topic ID and new  z score of the topic.

Complexity: O(n log n).

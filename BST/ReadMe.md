# Week 05

## 115A : Party 

The company will not have a managerial cycle. That is, there will not exist an employee who is the superior of his/her own immediate manager.

Today the company is going to arrange a party. This involves dividing all n employees into several groups: every employee must belong to exactly one group. Furthermore, within any single group, there must not be two employees A and B such that A is the superior of B.

What is the minimum number of groups that must be formed?

**Input**<br>
The first line contains integer n (1 ≤ n ≤ 2000) — the number of employees.

The next n lines contain the integers pi (1 ≤ pi ≤ n or pi = -1). Every pi denotes the immediate manager for the i-th employee. If pi is -1, that means that the i-th employee does not have an immediate manager.

It is guaranteed, that no employee will be the immediate manager of him/herself (pi ≠ i). Also, there will be no managerial cycles.

**Output**<br>
Print a single integer denoting the minimum number of groups that will be formed in the party.\
## <[**Problem**](http://codeforces.com/contest/115/problem/A)> <[**Solution**](http://codeforces.com/contest/115/submission/43776479)>


## 4C : Registration System

Each time a new user wants to register, he sends to the system a request with his name. If such a name does not exist in the system database, it is inserted into the database, and the user gets the response OK, confirming the successful registration. If the name already exists in the system database, the system makes up a new user name, sends it to the user as a prompt and also inserts the prompt into the database. The new name is formed by the following rule. Numbers, starting with 1, are appended one after another to name (name1, name2, ...), among these numbers the least i is found so that namei does not yet exist in the database.

**Input**<br>
The first line contains number n (1 ≤ n ≤ 105). The following n lines contain the requests to the system. Each request is a non-empty line, and consists of not more than 32 characters, which are all lowercase Latin letters.

**Output**<br>
Print n lines, which are system responses to the requests: OK in case of successful registration, or a prompt with a new name, if the requested name is already taken.
## <[**Problems**](http://codeforces.com/contest/4/problem/C)> <[**Solution**](http://codeforces.com/contest/4/submission/43790803)>


## 913B : Christmass Spurce

Let's call a rooted tree a spruce if its every non-leaf vertex has at least 3 leaf children. You are given a rooted tree, check whether it's a spruce.

The definition of a rooted tree can be found here.

**Input**<br>
The first line contains one integer n — the number of vertices in the tree (3 ≤ n ≤ 1 000). Each of the next n - 1 lines contains one integer pi (1 ≤ i ≤ n - 1) — the index of the parent of the i + 1-th vertex (1 ≤ pi ≤ i).

Vertex 1 is the root. It's guaranteed that the root has at least 2 children.

**Output**<br>
Print "Yes" if the tree is a spruce and "No" otherwise.
## <[**Problems**](http://codeforces.com/contest/913/problem/B)> <[**Solution**](http://codeforces.com/contest/913/submission/43791215)>

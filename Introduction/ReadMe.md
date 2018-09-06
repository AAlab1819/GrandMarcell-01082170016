## 912A: Tricky Alchemy
[**Problems**](https://codeforces.com/problemset/problem/912/A) 

We need to find out how many crystals we need to produce the required number of balls. So, we calculate the total of required crystals to the balls.

calculation:\
   YellowCrystal =  YellowCrystal - YellowBall x 2 -GreenBall;\
    BlueCrystal = BlueCrystal - BlueBall x 3 - GreenBall;\
   lack = YellowCrystal + BlueCrystal\
   if (lack <0) \
  lack = lack * -1\
  else \
  lack = 0\
  print lack\
  From that, we get the sum of the amount of those Crystals needed.\
  [**Solution**](https://codeforces.com/contest/912/submission/42430769)
  
  ## 854A: Fraction 
[**Problem**](https://codeforces.com/problemset/problem/854/A)\
This problem is asking us to find the highest possible fraction that cannot be simplified.
Also We need to find the numerator and denominator. The denominator must be smaller than the numerator but we need to find the largest denominator that can be resulted.\
That a fraction  is called proper iff its numerator is smaller than its denominator (a < b) and that the fraction is called irreducible if its numerator and its denominator are coprime (they do not have positive common divisors except 1).\
Like this process:\
if the input number is even\
	divider = number /2\
	a = divider+1\
	b = divider-1\
else if the number is odd\
	divider = number/2 ( var = int)\
	a = divider\
	b = divider +1 \
print a b\
[**Solution**](https://codeforces.com/contest/854/submission/42445632)

## 988A: Diverse Team
[**Problems**](https://codeforces.com/problemset/problem/988/A) \
This problems asking us to find that the student could be devided into team or not.
The student can be divided if in the input the students don't have any distinct ratings,
In the code we need to use vector to save the number of array.
In the first for statement we use scores.input to check make a checker that will used in the next statement.
It is written that if scores.size()<k it will output "NO", in this line the code will check whter the size of the score is less then the amount of the member in the team or not.
If it was less then k , it will ouput "NO". If the result is larger, it will push the data to the result vector and will be ouput.\
[**Solution**](https://codeforces.com/contest/988/submission/42560970)

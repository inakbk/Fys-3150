# Exercise 2.2 Fys3150


N = 10000
sum_up = 0
sum_down = 0

n=1
while n != (N+1):
	sum_up += 1./n
	n += 1

n = N
while n != 0:
	sum_down += 1./n
	n -= 1

print sum_up
print sum_down


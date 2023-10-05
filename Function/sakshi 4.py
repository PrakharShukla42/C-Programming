def sumsquare(l):
    odd = sum([num**2 for num in l if num % 2 != 0])
    even = sum([num**2 for num in l if num % 2 == 0])
    return [odd, even]
print(sumsquare([1, 3, 5]))
print(sumsquare([2, 4, 6]))
print(sumsquare([-1, -2, 3, 7])) 

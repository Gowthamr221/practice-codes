numbers = ["3","34","64"]

numbers= list(map(int,numbers))

print(numbers)

num = [2,3,5,6,2,3]
square = list(map(lambda x : x*x ,num ))
print(square)

def square(a):
    return a*a

def cube(a):
    return a*a*a

func = [square,cube]

for i in range(5):
    val = list(map(lambda x:x(i),func))
    print(val)

list1 = [1,2,3,4,5,6,7,8,9]
def is_greater_5(num):
    return num > 5
print("greater than 5")
ouput = list(filter(is_greater_5,list1))
print(ouput)

#--- reduce ---

from functools import reduce

list3 = [1,2,3,4]

prod = reduce(lambda x,y:x*y,list3)

print(prod)


    
product=lambda a,b,c:a*b*c
print(product(1,2,5))
l=eval(input("enter the list"))
s=lambda x:x*x
for i in l:
    print(s(i))
sum=lambda a,b,c:a+b+c
print(sum(5,6,7))
si=lambda P,R,T:P*R*T
print(si(400,6,2))
def f1(f2):
    return lambda x:f2(x)+5
def f2(x):
    return x+5
a=f1(f2)
print(a(5))
###......
def mul(a):
    print("a",a)
    def multiplier(b):
        print("b",b)
        return a*b
    return multiplier
mul20=mul(25)
print("Multiplication result",mul20(25))
b=[1,2,3]
a=map(str,b)
print(a)
#....
from functools import reduce
list1=[2,5,4]
sumtotal=reduce(lambda x,y:x+y,list1,20)
print(sumtotal)
x=['ab','cd']
print(len(list(map(list,x))))
#y=[12,34]
#print(len(list(map(len,y))))
pi=3.14
def addition(x,y):
    return x+y
def subtraction(x,y):
    return x-y
def multiplication(x,y):
    return x*y
def division(x,y):
    return x/y
def area(r):
    return pi*r*r
#def display(**kwargs)
def f1(arg1,arg2,arg3=4,arg4=8):
    print(arg1,arg2,arg3,arg4)
f1(3,2)
f1(25,50,arg4=100)
f1(arg4=2,arg1=3,arg2=4)
#f1() invalid
#f1(arg3=10,arg4=40,20,30) invalid
#f1(4,5,arg3=5,arg5=6) invalid
#TYPE OF VARIABLE IN FUNCTION 1)GLOBAL,2)LOCAL
#RECURSIVE FUNCTION a fun that call itself is called recursive fun
#Advantage 1)reduce length of Code 2)we can solve complex problem very easily
#FACTORIAL 
def fact(n):
    if n==0:
        result=1
    else:
        result=n*fact(n-1)
    return result
print(fact(3))
#lambda ->with out name ->instant use -> only one type use
def squre():
    return n*n
s=lambda n:n*n
print(s(4))
print(s(5))
g=lambda a,b: a if a>b else b
print(g(3,7))
#PREDEFINE 1)Filter ,2)map(),3)reduce
#filter syntax->filter(function list)
def iseven(x):
    if x%2==0:
        return True
    else:
        return False
l=[99,0,20,10,15,50,30,40,50]
l1=list(filter(iseven,l))
print(l1)    
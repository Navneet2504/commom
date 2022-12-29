set1={'abc','dc'}
set2={'a','c'}
print(set1|set2)
print(set1-set2)
set3={1,2,3,4,5}
set4={4,5,6,7,8}
print(set3^set4)
#dictionary
#Dictionary is a unique data collection of python which storea the key-value pair.
d={}
s=set()#empty set
print(type(d))
d[100]="Ravi"
d[200]="mohan"
d[400]="Ram"
d[300]="Ram"
print(d.get(100))
print(d.get(150,0))
print(d)
print(len(d))
#pop()
print(d.setdefault(106,"nav"))
print(d)
#WAP to take dictionary from the keyboard and print sum of values
d=eval(input("enter Dictionary: "))
s=sum(d.values())
print("The sum:",s)
#WAP to return no. of occurancies of each letter present in given string
word=input("Enter String")
print()
d={}
for x in word:
    d[x]=d.get(x,0)+1
print(d)
print(sorted(d))
for k,v in sorted(d.items()):
    print("{} occured {} items".format(k,v))
    #print(k,"Occured",v,"items")
#WAP to print no. of occurance of each vowel in given string
s=input("Enter string")
d={}
count=0
for i in s:
    if i=='a'or i=='e'or i=='i'or i=='o'or i=='u' :
        count = count+1
        d[i]=d.get(i,0)+1
print(d)
print(sorted(d))
for m,n in sorted(d.items()):
    print("{} occured {} items".format(m,n))  
#WAP to accept name and marks of the student freom keyboard
num=int(input("enter no. of student"))
d={}
for i in range(num):
    n=input("enter the name of student")
    m=int(input("marks of student")) 
    d[n]=m
print(d)
while True:
    n=input("enter the name of student to fetch mark")
    m=d.get(n,-1)
    if(m==-1):
        print("student not found")
    else:
        print("the marks of{} are:{}".format(n,m))
    option= input("do you wan to find student(yes/no)")
    if(option=="NO"or option=="no"):
        break
    

 
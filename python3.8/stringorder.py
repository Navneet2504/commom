s=input("enter some string")
s1=s2=output=''
for x in s:
    if x.isalpha():
        s1=s1+x
    else:
        s2=s2+x
#print(s1)
#print(s2)
for x in sorted(s1):
    output=output+x
for x in sorted(s2):
    output=output+x
    
print(output)
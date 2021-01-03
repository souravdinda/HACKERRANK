num=int(input())
st=input()
n=0
l=0
u=0
s=0
count=0
spec="!@#$%^&*()-+"
for c in st:
    if c.isupper():
        u=u+1
    elif c.islower():
        l=l+1
    elif c.isdigit():
        n=n+1
    elif c in spec:
        s=s+1
if ( u==0 ):
    count=count+1
if ( l==0 ):
    count=count+1
if ( n==0 ):
    count=count+1
if ( s==0 ):
    count=count+1
if( (u+l+s+n+count) < 6 ):
    count=count+(6-(u+l+s+n+count))
print(count)


n=int(input())
data=list(map(int,input().split()))
d,m=[int(x) for x in input().split()]
begin=0
end=m
result=0
while end<=len(data):
    if sum(data[begin:end])==d:
        result+=1
    begin+=1
    end+=1

print(result)






    


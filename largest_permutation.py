N, K = [int(item) for item in input().split()]
l = [int(item) for item in input().split()]
d = {l[k]:k for k in range(len(l))}
swaps = 0
for k in range(N, 0, -1):
    if d[k] == N-k:
        continue
    else:
        d[l[N-k]] = d[k]
        l[d[k]] = l[N-k]
        d[k] = N-k
        l[N-k] = k
        swaps += 1
    if swaps == K:
        break
print(*l)


sum_global=0

def series ( n, i=1):
    global sum_global

    if i>n:
        return
    if i %2 ==1:
        sum_global += 1/i
    else:
        sum_global +=-1/i

    series(n, i+1)

n =int(input())
series(n)
print(sum_global)
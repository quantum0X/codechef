T = int(input())


for _ in range(T):
    count = 0
    n = str(input())
    for i in range(len(n)):
        if n[i] == '4':
            count += 1
        else:
            continue
        
    print(count) 


n = int(input("Enter no.of terms: "))
a = []
print("Enter", n, "Numbers:-")
for i in range(n):
    a.append(int(input()))
print("List =", a)

m = n//2
a1 = a[0:m]
a2 = a[m:n]

def Add(x,y):
    s = 0
    print("Corresponding Position Sum:-")
    l1 = len(a1)
    l2 = len(a2)
    M = max(l1,l2)
    if l1 > l2:
        a2.append(0)
    else:
        a1.append(0)
    print(a1)
    print(a2)
    for i in range(M):
        s = x[i]+y[i]
        print(x[i],"+",y[i],"=",s)
        s = 0

Add(a1,a2)
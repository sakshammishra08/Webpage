import math

a = int(input("Enter Coefficient of Quadratic Term: "))
b = int(input("Enter Coefficient of Linear Term: "))
c = int(input("Enter Constant Term: "))

print("The Quadratic Eqn is = ", a, "x^2 + ", b, "x + ",c)
def find_root(a, b, c):
    dis = (b * b) - 4 * (a * c)
    root_d = math.sqrt(abs(dis))

    if dis > 0:
        print("Eqn Has Real and distinct roots")
        print("Roots are:- \n")

        print(f'x1 = {(-b + root_d) / (2 * a)}\n')
        print(f'x2 = {(-b - root_d) / (2 * a)}\n')

    elif dis == 0:
        print("Eqn Has Real and equal roots")
        print("Roots are:- \n")

        print(f'x1 = {(-b + root_d) / (2 * a)}\n')
        print(f'x2 = {(-b - root_d) / (2 * a)}\n')

    else:
        print("Eqn Has Real and equal roots")
        print("Roots are:- \n")

        print(- b / (2 * a), " + i", root_d)
        print(- b / (2 * a), " - i", root_d)


find_root(a,b,c)

#1906272
#Saksham Kumar Mihsra
#IT4
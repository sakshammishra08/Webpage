num1 = int(input("Enter first number: "))           
num2 = int(input("Enter second number: "))          
num3 = int(input("And Enter third number: "))  
 
if (num1 > num2) and (num1 > num3):
   max = num1
elif (num2 > num1) and (num2 > num3):
   max = num2
else:
   max = num3
print("The largest among these three numbers is",max)

#1906272
#Saksham Kumar Mihsra
#IT4
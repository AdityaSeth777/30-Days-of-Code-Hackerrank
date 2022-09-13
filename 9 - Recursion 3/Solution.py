def factorial(num):
    return 1 if num == 1 else factorial(num - 1) * num
#Aditya Seth
print(factorial(int(input())))

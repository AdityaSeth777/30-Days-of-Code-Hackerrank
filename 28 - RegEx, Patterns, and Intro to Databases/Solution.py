import re

arr = []

n = int(input())

for i in range(n):
    data = str(input()).split(" ")
    name = data[0]
    email = data[1]

    if re.search(".+@gmail\.com$", email):
        arr.append(name)

arr.sort()
#Aditya Seth
for name in arr:
    print(name)

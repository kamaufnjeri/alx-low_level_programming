#!/usr/bin/python3
listint = []
for num1 in range(100, 1000):
    for num2 in range(100, 1000):
        val = num1 * num2
        val1 = str(val)[::-1]
        if val == int(val1):
            listint.append(val)
print(max(listint))

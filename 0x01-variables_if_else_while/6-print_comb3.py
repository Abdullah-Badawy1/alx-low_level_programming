#!/usr/bin/python3
start = 1
for i in range(0, 9):
    for x in range(start, 10):
        if (i == 8) and (x == 9):
            print(f'{i}{x}', end=(""))
        else:
            print(f'{i}{x}', end=(", "))
    start += 1

import math

a, b, n = map(int, input().split())

print((int(a * pow(10, n)) // b) % 10)

# The provided code stub reads an integer, n, from STDIN. For all non-negative integers i < n, print i^2.

if __name__ == '__main__':
    n = int(input())
    
    for x in range(n):
        print(x * x)
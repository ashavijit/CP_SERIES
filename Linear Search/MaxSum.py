'''
# Sample code to perform I/O:
name = input()                  # Reading input from STDIN
print('Hi, %s.' % name)         # Writing output to STDOUT
# Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
'''

# Write your code here
n = int(input())
a = list(map(int,input().split()))
m = [i for i in a if i>=0] or [max(i for i in a if i<0)]
print(sum(m),len(m))
# a = int(input())
# b = 1
# while a!=-1 or b == 0:
#     for i in range(8):
#         b = a & 1
#         print(b)
#         a >>= 1



a=-1
b=1
while (b==1) or (b==0):
    a = (a<<1)|b
    b=int(input())
print(a)
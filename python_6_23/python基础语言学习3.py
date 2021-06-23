
'''a,b=eval(input('请输入两个数：'))
if  a>=b:
    print(a)
else:
    print(b)

a,b=eval(input('请输入两个数：'))
if a==b:
    print('=')
elif a>b:
    print('>')
else:
    print('<')
'''
'''
i=1
sum=0
while i<=10:
    sum+=i
    i=i+1
print(sum)
'''
'''
# 异常处理结构
from random import randint
sm=0
i=0
while i<10:
    try:
        sm=sm+1/randint(0,20)
        i+=1
    except Exception as e:
        print('错误e',e)
else:
    print(sm)
'''
'''
import math as m
x=eval(input('请输入自变量x的值：'))
f=5*m.pow(x,3)+10*m.pow(x,2)-27*x-31
print(f)

a,c=eval(input('请输入两个整数：'))
a1=a//10
a2=a%10
c1=c//10
c2=c%10
b=a1*1000+c1*100+a2*10+c2
print(b)

'''
'''
def fun(a,b):
    d=a*a-b*b
    return d

print(fun(3,2))

def sayBye():
    print('GoodBye!')

sayBye()

def keyPara(a,b,c):
    print("a={},b={}.c={}".format(a,b,c))

keyPara(b=2,a=1,c=3)

'''


a=5
def glob():
    global a
    a=10
    print(a)
glob()
print(a)




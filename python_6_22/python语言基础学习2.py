'''
a=[1,2,3]
print(type(a))

print(list('python'))
b=[4,5,6,7]
print(a+b)  #合并

c=a*3   # 重复
print(c)

#迭代
for x in a:
    print(x)

print(4 in a)

it=range(1,5)
print(it)   #只是产生了一个可迭代对象，并未立即产生这些数
list=list(it)
print(list)
'''

#list=[[1,2,3],[4,5,6],[7,8,9]]
'''
for x in list:
    for y in x:
        print(y,end=" ")
    print()
'''
'''
#print(list[0][2])

list=list(range(5))
print(list)
list2=[x**2 for x in list if(x%2==0)]
print(list2)
'''
'''
a=(1,2,3)
print(type(a))
print(a)

it=range(1,5)
tpl=tuple(it)
print(tpl)
'''
'''
di={'学号':'001','姓名':'xiaobo','年龄':19}
print(di)

print(di['学号'])
di['性别']='男'
print(di)
'''
'''
a={1,2,3}
print(a)
print(type(a))
'''
'''
list=[1,2,1,12,10,5,2,7,1,8]
a=set(list)
print(a)
print(len(a))

x=(1,3,2)
y=(5,9,4,7)
z=x+y
print(sorted(z))
'''

a={1,2,3,4,5}
b={2,4,6}
c=a-b
print(c)






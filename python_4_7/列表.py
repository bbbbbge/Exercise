#list:python当中的非常重要的数据结构，是一种有序的数据集合
#特点：
#1.支持增删改查
#2.列表中的数据是可以变化的【数据项可以变化，内存地址不会改变】
#3.用[]来表示列表类型，数据项之间用逗号来分割，注意：数据项可以是任何类型的数据
#支持索引和切片来进行操作

# list1=[1,2.7,'a',"bbbbge",True]
# print(len(list))#-----len函数可以获取到列表对象中的数据个数
# str='bbbbge'
# print(len(str))
# print(type(list))
#查找
# print(list[1:4])
# print(list[2:])
# print(list[::-1])
# print(list*2)#----输出多次列表中的数据【复制】
# list.append(1)#-------增加一个不用中括号------------追加操作
# list.append(['ggg',13])#-------增加多个，要加中括号
# print(list)
# list.insert(0,'哦豁')#----插入操作---指定位置
# # print(list)
# listA=list(range(10))
# list1.extend(listA)
# list1.extend([10,11,12])#----拓展==批量添加
# print(list1)
#修改
# print(list1)
# list1[0]='520'
# print(list1)

#删除
listA=list(range(1,31))
# print(listA)
# del listA[0]
# print(listA)
# del listA[1:3]-----批量删除
# print(listA)

# listA.remove(1)----移除指定元素
# print(listA)

# listA.pop(3)#----移除指定的项
# print(listA)
# listA.pop()#------默认移除最后一项
# print(listA)

# print(listA.index(3))-----返回该值的索引下标
# print(listA.index(19,10,25))#-----检查值为19从第10个下标开始查找到第25个结束
# print(listA.index(19,18,19))#------包括下标为18的，不包括19的


# row=1
# A=int(input('需要打印多少行'))
# while row<=A:
#     print(" "*(A-row),'*'*(2*row-1))
#     row+=1
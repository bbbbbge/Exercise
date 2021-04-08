'''
字典：python中的重要数据类型，字典是由 键值对 组成的集合，通常使用键来访问，效率非常高
         和list一样 支持对数据的添加，修改，删除
特点：
1.不是序列类型，没有下标的概念，是一个无序的 键值集合，市内制度高级数据类型
2.用{ }来表示字典对象，每个键值对用都逗号分割
3.键 必须是不可改变的类型，【元组，字符串】值可以是任意类型
4.每个键必须是唯一的，如果存在重复的键，后者会覆盖前者
'''
dictA={}#空字典
# print(type(dictA))
dictA['name']='peter'#'name'是键，=后面的是value
dictA['age']='30'
dictA['pos']='博士'
#结束添加
dictB={"name":'peter','age':30,'pos':'博士'}
# print(dictA)#输出完整的字典
# print(dictB)
# print(len(dictA))#数据项长度

# print(dictA['name'])#通过键获取对应的值
# dictA['name']='alle'
# print(dictA['name'])
dictA.update({'age':'39'})
dictA.update({'weight':'88'})
print(dictA)

#获取所有的键
# print(dictA.keys())
#获取所有的值
# print(dictA.values())
#获取所有的键值对
# print(dictA.items())
# for item in dictA.items():
#     print(item)
#     pass
# for key,value in dictA.items():
#     print('%s==%s'%(key,value))
#     pass
#删除
# del dictA['name']#通过指定键，删除查找
# dictA.pop("age")#通过指定键，删除查找
# print(dictA)

#对字典进行排序---按照key排序
print(sorted(dictA.items(),key=lambda d:d[0]))
#对字典进行排序---按照value排序
print(sorted(dictA.items(),key=lambda d:d[1]))#类型最好一样
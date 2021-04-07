#元组：是一种不可变的序列，在创建之后不能做任何的修改
#不可变
#用（）创建与元组类型，数据项用逗号分割
#可以是任何类型----任何
#当元组中只有一个元素时，要加上逗号，不然解释器会当作整型处理
#可以支持切片操作

tupleA=()#空元组
# print(id(tupleA))#------内存地址改变
# print(type(tupleA))
tupleA=('bbbbbge',3.14,520,'你好',[1,2,3])
# print(id(tupleA))
# tupleA[4][0]=3#-------可以对元组中的列表类型的数据进行修改
# print(tupleA)
#元组的查询
# for item in tupleA:
#     print(item,end=' ')
#     pass
# print(tupleA[:2])
# print(tupleA[::-1])#反转字符
# # print(tupleA[::-2])#----步长为2，隔两个取一个
# # print(tupleA[-4:-1:])

tupleB=(1,)#------当元组中只有一个的数据项时，必须要在第一个数据项后面加逗号
# print(type(tupleB))
tupleC=tuple(range(10))
print(tupleC)
print(tupleC.count(8))
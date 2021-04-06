#序列：在python中，序列就是一组按照顺序排列的值【数据集合】

#在python中，存在三种内置的序列类型：字符串，列表，元组

#切片：【高级特性】可以根据下标来获取序列对象的任意[部分]数据------下标会越界，切片不会
#语法结构：[start:ene:step] step默认为1

# test='python'
# print(test[1])
# test='你好 世界'
# # print('获取第4个字符：%c'%test[3])
# for item in test:
#     print(item,end=" ")
#     pass
#name='peter'
# print('首字母转换为大写：%s'%name.capitalize())#-----capitalize---首字母大写

# a='f     fslk    akl   ff'
# print('去除空格：%s'%a.strip(a[0]))#-----strip---移除字符串从头尾指定的字符(默认为空格或换行符)或字符序列
#                                    # 不能删除中间部分的字符-------lstrip--删除左边------rstrip--删除右边

#复制字符串
# a='bbbbbge'
# b=a#----------只是把a对象的内存地址赋值给了b
# print('a的内存地址：%d'%id(a))--------id函数----查看一个对象的内存地址
# # print('b的内存地址：%d'%id(b))

# dataStr='I love python'
#print(dataStr.find('I'))#----find--Python find() 方法检测字符串中是否包含子字符串str
#如果指定beg（开始）和end（结束）范围，则检查是否包含在指定范围内，如果包含子字符串返回开始的索引值，否则返回-1
# str.find(str, beg=0, end=len(string))
# str -- 指定检索的字符串
# beg -- 开始索引，默认为0。
# end -- 结束索引，默认为字符串的长度。
#自我尝试---rfind可以从右向左检测

#print(dataStr.index(" "))#----index()----该方法与find()方法一样，只不过如果str不在 string中会报一个异常,与find返回-1的区别

#print(dataStr.startswith('I '))#---startswith---判断字符串是不是以某个字符串开头--返回bool类型
                                #---endswith---。。。。。什么结尾

# print(dataStr.lower())#----转换成小写
# print(dataStr.upper())#----转换成大写

#切片
str='bbbbbge'
#slice [start:end:step]---左闭右开---start<=value<end
print(str[0])
print(str[::-1])#----倒叙输出
print(str[0:3])
print(str[:3])
print(str[4:])














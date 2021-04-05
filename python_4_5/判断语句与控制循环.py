#判断成绩
# score=int(input('请输入你的成绩:'))
# if score<60:
#     print('成绩不及格')
#     pass #空语句
# elif score<80:
#     print('成绩良好')
#     pass
# else:
#     print('成绩优秀')

#猜拳游戏
# import random
# print('------开始猜拳游戏------')
# print('拳头[0]--剪刀[1]--布[2]')
# index=1
# while index<=3:
#     people=int(input('请猜拳>:'))
#     computer=random.randint(0,2)
#     if people==0 and computer==1:
#         print('You win')
#         pass
#     elif people==1 and computer==2:
#         print('You win')
#         pass
#     elif people==2 and computer==0:
#         pirnt('You win')
#         pass
#     elif people==computer:
#         print('Draw')
#         pass
#     else:
#         print('You lose')
#         pass
#     if index<3:
#         print('------下一轮------')
#         pass
#     index+=1
#     pass
# print('-----游戏结束-----')

#猜数游戏
# import random
# print('------随机数游戏(1-100)-----')
# index,count=1,1
# computer=random.randint(0,100)
# while index!=0:
#     people=int(input('请输入你猜测的数字>:'))
#     if people==computer:
#         print('厉害了！你猜对了')
#         index=0
#         pass
#     else:
#         print('可惜，你猜错了')
#         count+=1
#         if people<computer:
#             print('你猜的数字小了')
#             pass
#         else:
#             print('你猜的数字大了')
#         print('-----下一轮-----')
#         pass
#     pass
# print('-----游戏结束-----')
# print('你一共用了{}次'.format(count))

#打印九九乘法口诀绝表
# row=9
# i=1
# while i<=row:
#     j=1
#     while j<=i:
#         print('{}*{}={}  '.format(j,i,j*i),end=" ")
#         j+=1
#         pass
#     print()
#     i+=1
#     pass
# print('打印结束')

#打印直角三角形
# row=10
# i=1
# while i<=row:
#     j=1;
#     while j<=i:
#         if j==1 or j==i or i==row:
#             print('*',end=" ")
#             pass
#         else:
#             print(' ',end=" ")
#             pass
#         j+=1
#         pass
#     print()
#     i+=1
#     pass
# print('打印结束')

#打印等腰三角形 条件打印
# bottom=9
# row=1
# while row<=bottom:
#     col=1
#     while col<=2*bottom-1:
#        # if bottom-row+1==col or bottom+row-1==col or row==bottom:#
#         if col>=bottom-row+1 and col<=bottom+row-1:
#             print("*",end=" ")
#             pass
#         else:
#             print(" ",end=" ")
#             pass
#         col+=1
#         pass
#     row+=1
#     print()
#     pass
# print("打印结束")

#打印等腰三角形 先后打印
# bottom=6
# row=1
# while row<=bottom:
#     col=1
#     #先打印空格
#     while col<=bottom-row:
#         print(' ',end=" ")
#         col+=1
#         pass
#     k=1
#     while k<=2*row-1:
#         print('*',end=" ")
#         k+=1
#         pass
#     print()
#     row+=1
#     pass
# print('打印结束')

#for循环
#语法特点：遍历操作，依次取集合中的每个值
#for 临时变量 in 容器：
#     执行代码块
# tags='博哥最帅'
# for item in tags:       #字符串类型本身就是一个字符类型的集合
#     print(item)
#     pass

# range 此函数可以生成一个数据集合列表
# range(起始：结束：步长)-----步长不能为0-----左包含，右不包含
# for data in range(0,51,2):
#     print(data,end=" ")
#     pass

#用for循环打印九九乘法口诀表
# for i in range(1,10):
#     for j in range(1,i+1):
#         print('{}*{}={}'.format(j,i,j*i),end=" ")
#         pass
#     print()
#     pass
# print('打印结束')

account='bbbbbge'
password='5201314'
for i in range(1,4):
    zh=input('请输入账号>:')
    pd=input('请输入密码>:')
    if zh==account and pd==password:
        print("登录成功")
        break;
        pass
    else:
        print('输入错误')
        pass
    pass
else:                       #如果上面break执行成功，则不再执行for。。。else的else语句
    print('账户已被冻结')












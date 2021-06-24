'''
import jieba
obj=jieba.cut("我在家里蹲大学读书",cut_all=False,HMM=True)
a=list(obj)
print(a)
'''
'''
import jieba
from wordcloud import WordCloud
#string='I Love You GuoYiyun'
string='你爱我，我爱你，蜜雪冰城甜蜜蜜。'
jbstr=' '.join(jieba.lcut(string))
wc=WordCloud(font_path='simkai.ttf',background_color='red',width=1000,height=800).generate(jbstr)
wc.to_file('wc.png')
'''
#import turtle
'''
for _ in range(4):
    turtle.fd(200)
    turtle.rt(90)
turtle.goto(60,30)
for _ in range(4):
    turtle.fd(200)
    turtle.rt(90)
turtle.rt(90)
turtle.fd(200)
turtle.goto(0,-200)
turtle.lt(90)
turtle.fd(200)
turtle.goto(260,-170)
turtle.done()
'''
#turtle.circle(100)
'''
turtle.dot(200,'blue')
turtle.done()
'''
import turtle as t
'''
for i in range(6):
    t.fd(100)
    t.seth(60+60*i)
t.done()
'''
'''
t.color("yellow","black")
t.begin_fill()
for _ in range(50):
    t.fd(200)
    t.lt(170)
t.end_fill()
t.done()
'''

import numpy as np





# BZPRO

## What's this

**BZOJ离线题库**

包含了**所有题面**，以及**权限题**。~~甚至还包含了爬虫~~

因为RuanXZ大佬把他的爬虫搞丢了所以我就重新写了一个

因为没有CSS/HTML基础所以很垃圾的还请大家见谅。

## How to use it

### 离线题库

下载本仓库后浏览器打开`index.html`

或者直接通过GitPage访问：[https://konnyakuxzy.github.io/BZPRO](https://konnyakuxzy.github.io/BZPRO)

### 爬虫

打开`Clawer`文件夹。

首先chmod一波：

`chmod +x ./Get_Cookies.sh`

`chmod +x ./Get_Bzoj.sh`

`chmod +x ./Render.sh`

然后获取Cookie：

`./Get_Cookies.sh`

会要求输入BZOJ账号密码，如果需要爬取权限题的话请输入权限号。

会生成一个`cookies.txt`，内容就是cookie内容~~，是有有效期的，有多久我不知道。~~

接着设置一下爬取的题目范围：

编辑`Get_Bzoj.sh`，`bgn=`后面的数字表示的是开始爬取的题号，`top=`后面的数字表示的是最后一道题的题号，爬虫将会爬取`[bgn,top]`内的题目。

再按照同样方法修改`Render.sh`

然后下载原始题目文件：

`./Get_Bzoj.sh`

大概等个10几20分钟的样子。。。爬虫会把题目下载到`www.lydsy.com`文件夹内。

最后生成题库首页和题目页面：

`./Render.sh`

脚本会把原始题目备份到`www.lydsy.com_bak`文件夹中，然后生成好的BZPRO会放在`www.lydsy.com`中。

如果爬虫在运行过程中出现问题，请检查：

- 网络是否通畅
- Cookie是否获取正确以及是否过期
- 是否存在有题目未被下载的情况

如果还有问题可以提交issue。

##  最后

至于为什么爬虫要延迟0.1秒再爬下一道题，是因为BZOJ添加了检查机制，访问速度太快会导致被拒绝访问导致很多题目下载不下来。

还有代码很可能有问题，因为作者是个制杖。

Powered by [XZYQvQ](http://www.k-xzy.xyz).

The UI is powered by [Semantic UI](https://semantic-ui.com/).

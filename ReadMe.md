# BZPRO

## What's this

**BZOJ离线题库**

包含了**所有题面**，以及**权限题**。~~甚至还包含了爬虫~~

还有**所有的题目图片**，以及**几乎所有的pdf/rar/doc/txt**都包含在内并且转换成了相对连接。（也就是说你能到处复制它而不会出现题目显示不出来的问题）

（为什么说是几乎所有的呢？因为有的pdf是放在[https://begin.lydsy.com/JudgeOnline/](https://begin.lydsy.com/JudgeOnline/)上的，而我暂时还不知道怎么爬，所以并未爬取。如果有大佬知道欢迎在issue里告诉我这个辣鸡或者直接提交pr也行）

因为RuanXZ大佬把他的爬虫搞丢了所以我就重新写了一个

因为没有CSS/HTML基础所以很垃圾的还请大家见谅。

（而且我真的不会用github）

## How to use it

### 离线题库

下载本仓库后浏览器打开`index.html`

或者直接通过GitPage访问：[https://konnyakuxzy.github.io/BZPRO](https://konnyakuxzy.github.io/BZPRO)

如果Github速度太慢您可以通过XZY的服务器访问：[https://www.k-xzy.xyz/BZPRO](https://www.k-xzy.xyz/BZPRO)

### 爬虫

打开`Clawer`文件夹。

首先chmod一波：

`chmod +x ./Get_Cookies.sh`

`chmod +x ./Get_Bzoj.sh`

`chmod +x ./Render.sh`

然后获取Cookie：

`./Get_Cookies.sh`

会要求输入BZOJ账号密码，如果需要爬取权限题的话请输入权限号。

会生成一个`cookies.txt`，内容就是cookie内容，是有有效期的，有多久我不知道。

接着设置一下爬取的题目范围：

编辑`bgn.txt`，将里面的数字设置为“需要爬取的最小题目编号”，再编辑`top.txt`，将里面的数字设置为“需要爬取的最大题目编号”，爬虫将会爬取编号在区间`[bgn, top]`内的题目。

然后下载原始题目文件：

`./Get_Bzoj.sh`

大概等个四十分钟的样子（网速不同可能有所差异）。。。爬虫会把题目下载到`www.lydsy.com`文件夹内。

最后生成题库首页和题目页面：

`./Render.sh`

脚本会把原始题目备份到`www.lydsy.com_bak`文件夹中，然后生成好的BZPRO会放在`www.lydsy.com`中。

如果爬虫在运行过程中出现问题，请检查：

- 网络是否通畅
- Cookie是否获取正确以及是否过期
- 是否存在有题目未被下载的情况

如果还有问题可以提交issue。

## Thx

感谢对此项目提供了很大帮助的大佬：

[Xeonacid](https://github.com/Xeonacid)

（本来在contributor里可以看到这位大佬的，结果因为XZY不会用Github导致好像。。。覆盖了。。。就。。。没了QwQ）

##  At Last

至于为什么爬虫要延迟0.3秒再爬下一道题，是因为BZOJ添加了检查机制，访问速度太快会导致被拒绝访问导致很多题目下载不下来。

还有代码很可能有问题，因为作者是个制杖。

Powered by [XZYQvQ](http://www.k-xzy.xyz).

The UI is based on [syzoj](https://github.com/syzoj/syzoj/blob/master/LICENSE), using AGPL License.

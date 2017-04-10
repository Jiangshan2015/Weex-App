

## WeexGame

关注weex很久了，weex刚开始内测时也就是我开始学习前端时。我原本是做ios的，只懂得一点html的标签，所以weex还是很好上手的。就利用业余时间用weex仿写了这款关于皇室战争游戏的小型App。

1,开始进入项目，首页分为3部分，头部是个轮播图，每隔1秒出现另一张图片；中间是功能选择部分，点击可以跳转到每个部分，里面有其相关内容；最下面的部分是个游戏列表，往上滑动可以加载更多，这些cell也可以点击，充分体现weex的流畅性

<img src="http://7xw81v.com1.z0.glb.clouddn.com/home.png" width = "340" height = "520" alt="图片名称"/>


2,点击首页列表中的任何一个cell,可以加载出相应的更详细的介绍，如下图所示

<img src="http://7xw81v.com1.z0.glb.clouddn.com/newsCell.png" width = "340" height = "520" alt="图片名称"/>


3,点击首页中间部分的第一个图标-前沿攻略，可以通过请求数据，加载出一些列表攻略，这些cell也是可以被点击的，如下图所示

<img src="http://7xw81v.com1.z0.glb.clouddn.com/strategy.png" width = "340" height = "520" alt="图片名称"/>


4,点击策略列表中的任何一个cell,得到相应的更全面的攻略信息，如下图所示

<img src="http://7xw81v.com1.z0.glb.clouddn.com/strategyCell.png" width = "340" height = "520" alt="图片名称"/>


5,点击首页中间部分的家族成员列表，登录后可以看到已经添加的朋友的列表，并可以选择与其聊天(但这部分还未完成，后面会做)。

<img src="http://7xw81v.com1.z0.glb.clouddn.com/member.png" width = "340" height = "520" alt="图片名称"/>

6,点击首页中间部分的牌库图标，可以加载出三部分列表，并且每个列表可以切换，每个列表里的cell也可以被点击，点击后先看到的是兵种界面，如下图所示

<img src="http://7xw81v.com1.z0.glb.clouddn.com/bingzhong.png" width = "340" height = "520" alt="图片名称"/>

7,点击法术可以看到法术界面，如下图所示

<img src="http://7xw81v.com1.z0.glb.clouddn.com/fashu.png" width = "340" height = "520" alt="图片名称"/>


8,点击建筑可以看到建筑界面，如下图所示

<img src="http://7xw81v.com1.z0.glb.clouddn.com/jianzhu.png" width = "340" height = "520" alt="图片名称"/>


9,点击首页中间部分卡组图标，可以得到关于卡组的一些列表，如下图所示

<img src="http://7xw81v.com1.z0.glb.clouddn.com/card.png" width = "340" height = "520" alt="图片名称"/>

10,点击首页中间部分视频图标，可以得到关于视频的一些列表，如下图所示

<img src="http://7xw81v.com1.z0.glb.clouddn.com/shipin.png" width = "340" height = "520" alt="图片名称"/>

11,点击最下面的翻船视频，可以看到一个关于皇室战争的视频，点击暂停会停止播放，点击播放会继续播放(这里后期打算改成聊天的界面)

<img src="http://7xw81v.com1.z0.glb.clouddn.com/video.png" width = "340" height = "520" alt="图片名称"/>

12,当视频播放完成后会得到下图界面

<img src="http://7xw81v.com1.z0.glb.clouddn.com/finish.png" width = "340" height = "520" alt="图片名称"/>

13,点击最下面的翻船设置，可以看到关于此App的一些信息，但大部分都未完成，后期会将更新

<img src="http://7xw81v.com1.z0.glb.clouddn.com/setting.png" width = "340" height = "520" alt="图片名称"/>

14,点击翻船设置里面的版权声明，可以看到如下图的界面

<img src="http://7xw81v.com1.z0.glb.clouddn.com/statement.png" width = "340" height = "520" alt="图片名称"/>

## 关于此项目运用

由于对安卓的东西不太熟悉，前期一直是利用终端扫码来构建页面，现在成功运用到了ios项目中,如果想运行此项目，直接克隆下来，把DemoDefine.h文件里的CURRENT_IP改成自己电脑的ip，运行即可。

## 关于Weex

本人感觉特别喜欢利用weex开发，可以实时、方便的看到自己做出来的页面在手机上运行出来的效果，加载数据极为流畅，同时也解决了在iOS中烦人的适配问题，在4s中都能正常显示。对于weex的一些评论我没有必要说太多，毕竟是前端的小白，但是我会一直不断努力、不断学习，与weex共成长。希望更多的开发者加入到weex中来，一起来支持weex！

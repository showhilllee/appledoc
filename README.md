#appledoc
***
* 使用appledoc工具，将Xcode项目快速生成文档


###安装appledoc
***
* 首先需要安装官方appledoc工具

#### 下载并安装appledoc
* 在终端中使用以下命令

```
 git clone git://github.com/tomaz/appledoc.git
 cd appledoc
 sudo sh install-appledoc.sh
```

执行完成之后就可以使用appledoc了，你也可以用appledoc –help查看所有可用的参数。

#### 执行appledoc2html.sh
***

* 参数说明：
* -p($projectPath),-t($target)为必填
* -n:companyName,公司名称
* -p:projectPath,项目路径
* -d:companyID,项目id
* -u:companyURL,公司URL地址
* -t:target,项目target name	
* -o:outputPath,文档的输出路径

使用方法

```
sh appledoc2html.sh -p /path/to/project -t targetName
```



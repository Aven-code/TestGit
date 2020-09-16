### 简单的一个实例
解决不能推送上远程仓库办法：
###### 进行push前先将远程仓库pull到本地仓库
+ 更新到本地: 
	+ git pull origin master   
+ 更新远程: 
	+ git push -u origin master 

 + 强制push本地仓库到远程 (这种情况不会进行merge, 强制push后远程文件可能会丢失 不建议使用此方法)
	+ git push -u origin master -f
+ 避开解决冲突, 将本地文件暂时提交到远程新建的分支中
	+ git branch [name]
+ 创建完branch后, 再进行push
	+ git push -u origin [name] 
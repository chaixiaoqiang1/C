//中文命名文件可以使用
#include<stdlib.h>
#include<stdio.h>

void main(){
	//system("explorer.exe");//文件管理器
	//system("explorer.exe C:"); //打开C盘目录
	//system("explorer.exe C:\\Users\\chai\\Desktop\\ThinkPHP"); //打开目录 反斜杠需转义
	//system("\"D:\\Ruanjian_2017\\WeChat\\WeChat.exe\""); //打开应用程序的方式
	//system("D:\\Ruanjian_2017\\WeChat\\WeChat.exe"); // 这样也是可以打开的，如果打不开使用加引号转义方式
	//system("C:\\Users\\chai\\Desktop\\广告业务需求.txt");//打开一个文件
	system("\"C:\\Program Files (x86)\\Google\\Chrome\\Application\\chrome.exe\"  www.qq.com");//浏览器打开一个网站
	system("pause");
	system("taskkill /f /im chrome.exe");  //结束应用的进程
}







//���������ļ�����ʹ��
#include<stdlib.h>
#include<stdio.h>

void main(){
	//system("explorer.exe");//�ļ�������
	//system("explorer.exe C:"); //��C��Ŀ¼
	//system("explorer.exe C:\\Users\\chai\\Desktop\\ThinkPHP"); //��Ŀ¼ ��б����ת��
	//system("\"D:\\Ruanjian_2017\\WeChat\\WeChat.exe\""); //��Ӧ�ó���ķ�ʽ
	//system("D:\\Ruanjian_2017\\WeChat\\WeChat.exe"); // ����Ҳ�ǿ��Դ򿪵ģ�����򲻿�ʹ�ü�����ת�巽ʽ
	//system("C:\\Users\\chai\\Desktop\\���ҵ������.txt");//��һ���ļ�
	system("\"C:\\Program Files (x86)\\Google\\Chrome\\Application\\chrome.exe\"  www.qq.com");//�������һ����վ
	system("pause");
	system("taskkill /f /im chrome.exe");  //����Ӧ�õĽ���
}







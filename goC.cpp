#include <bits/stdc++.h>
#include <windows.h>
#define NOTEPAD 0
#define EXEING 1
using namespace std;
HWND hwindow;
RECT* rwindow;
int climit[100],rlimit[100];
fstream bmpstd;
fstream bmp[100];
fstream output;
fstream moutput;
void getHwnd(const bool mode,const char* path,const char* name)
{
	char* wname = (char*)path;
	strcat(wname,name);
	strcat(wname," - Notepad++");
	if(mode == NOTEPAD)
		hwindow = FindWindow(NULL,wname);
	else
		hwindow = FindWindow(NULL,name);
}
int main()
{
	moutput.open("test.txt", ios::app|ios::in|ios::out);
	int tnumber,stuc;
	char* testpath = new char[100]; 
	system("mode con cols=80 lines=50");
	system("title goC�����Զ�����ϵͳ");
	cout<<"+------------------------------------------------------------------------------+"<<endl;
	cout<<"|                               goC�����Զ�����ϵͳ                            |"<<endl;
	cout<<"+------------------------------------------------------------------------------+"<<endl;
	cout<<"��������Ŀ������";
	scanf("%d",&tnumber);
	cout<<"������ѡ��������";
	scanf("%d",&stuc);
	cout<<"���������·�������ܴ��пո�";
	scanf("%s",testpath);
	cin.get();
	cin.get();
	cout<<"--------------------------------------------------------------------------------"<<endl;
	cout<<"�뽫�ļ��������¸�ʽ������                                                      "<<endl;
	cout<<"��׼���룺��Ŀ(01~99)+�ո�+std                                                  "<<endl;
	cout<<"�������룺��Ŀ(01~99)+�ո�+ѡ�ֺ�(01~99)                                        "<<endl;
	cout<<"--------------------------------------------------------------------------------"<<endl;
	cout<<"���Ķ���"; 
	system("pause");
	system("cls");
	cout<<"+------------------------------------------------------------------------------+"<<endl;
	cout<<"|                               goC�����Զ�����ϵͳ                            |"<<endl;
	cout<<"+------------------------------------------------------------------------------+"<<endl;
	for(int i = 1,irlimit,iclimit;i <= tnumber;i++)
	{
		cout<<"�������"<<i<<"��ı���ʱ��(ms)��";
		scanf("%d",&iclimit);
		cout<<"�������"<<i<<"�������ʱ��(ms)��";
		scanf("%d",&rlimit);
		climit[i] = iclimit;
		rlimit[i] = irlimit;
	}
	cout<<"--------------------------------------------------------------------------------"<<endl;
	cout<<"��ȷ�Ϻ�"; 
	system("pause");
	system("cls");
	for(int i = 1;i <= tnumber;i++)
	{ 
		cout<<"+------------------------------------------------------------------------------+"<<endl;
		cout<<"|                               goC�����Զ�����ϵͳ                            |"<<endl;
		cout<<"+------------------------------------------------------------------------------+"<<endl;
		cout<<"׼����ʼ�����"<<i<<"�⣬�밴��Ҫ���Ҫ������ļ���"<<endl;
		cout<<"��goC Notepad++������"<<"std.cpp�����ױ�ǩҳ��"<<endl;
		cout<<"Ȼ�������ֱ��˳�����δ򿪴�������ļ���"<<endl;
		cout<<"--------------------------------------------------------------------------------"<<endl;
		cout<<"����ɺ�"; 
		system("pause");
		system("cls");
		cout<<"---------------------------------��ʼ�����"<<setw(2)<<i<<"��---------------------------------"
		<<endl;
		int x,y;
		//std
		char *csnumber = "",*nwname = "",*spa = " ";
		char *csnc = new char[2],*tmp = new char[2];
		//for(int ii = 0;ii < tnumber/10?2:1;ii++)
		//	*(csnc+ii) = (i/(ii==0?1:10)%10-1)+'0';
		strcat(csnumber,"std");
		strcat(nwname,csnc);
		strcat(nwname,spa);
		strcat(nwname,csnumber);//,"std";
		getHwnd(NOTEPAD,testpath,nwname);
		SetFocus(hwindow);
		keybd_event(122,0,0,0);
		Sleep(50);
		keybd_event(122,0,KEYEVENTF_KEYUP,0);
		Sleep(climit[i]);
		getHwnd(EXEING,testpath,nwname);
		GetWindowRect(hwindow,rwindow);
		x = rwindow->left;
		y = rwindow->top;
		x += 60;
		y += 40;
		Sleep(rlimit[i]);
		SetCursorPos(x,y);
		mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
		Sleep(50);
		mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
		Sleep(50);
		y += 45;
		SetCursorPos(x,y);
		mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
		Sleep(50);
		mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
		Sleep(50);
		hwindow = FindWindow(NULL,"����OK");
		GetWindowRect(hwindow,rwindow);
		x = rwindow->left;
		y = rwindow->top;
		x += 175;
		y += 135;
		SetCursorPos(x,y);
		mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
		Sleep(50);
		mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
		Sleep(50);
		getHwnd(EXEING,testpath,nwname);
		GetWindowRect(hwindow,rwindow);
		x = rwindow->left;
		y = rwindow->top;
		x += 855;
		y += 15;
		Sleep(50);
		getHwnd(NOTEPAD,testpath,nwname);
		GetWindowRect(hwindow,rwindow);
		x = rwindow->left;
		y = rwindow->top;
		x += 90;
		y += 45;
		mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
		Sleep(50);
		mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
		Sleep(50);
		char *b = ".bmp",*bd;
		strcat(bd,nwname);
		strcat(bd,b);
		//stu
		for(int j = 0;j < stuc;i++)
		{
			char *csnumber = "",*nwname = "",*spa = " ",*zer = "0";
			char *csnc = new char[2],*tmp = new char[2];
			for(int ii = 0;ii < tnumber/10?2:1;ii++)
				*(csnc+ii) = (i/(ii==0?1:10)%10-1)+'0';
			for(int ii = 0;ii < 2;ii++)
				*(tmp+ii) = j%10?(char)j + '0':'0';
			strcat(csnumber,tmp);
			strcat(nwname,csnc);
			strcat(nwname,spa);
			strcat(nwname,csnumber);//,"std";
			getHwnd(NOTEPAD,testpath,nwname);
			SetFocus(hwindow);
			keybd_event(122,0,0,0);
			Sleep(50);
			keybd_event(122,0,KEYEVENTF_KEYUP,0);
			Sleep(climit[i]);
			getHwnd(EXEING,testpath,nwname);
			GetWindowRect(hwindow,rwindow);
			x = rwindow->left;
			y = rwindow->top;
			x += 60;
			y += 40;
			Sleep(rlimit[i]);
			SetCursorPos(x,y);
			mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
			Sleep(50);
			mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
			Sleep(50);
			y += 45;
			SetCursorPos(x,y);
			mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
			Sleep(50);
			mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
			Sleep(50);
			hwindow = FindWindow(NULL,"����OK");
			GetWindowRect(hwindow,rwindow);
			x = rwindow->left;
			y = rwindow->top;
			x += 175;
			y += 135;
			SetCursorPos(x,y);
			mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
			Sleep(50);
			mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
			Sleep(50);
			getHwnd(EXEING,testpath,nwname);
			GetWindowRect(hwindow,rwindow);
			x = rwindow->left;
			y = rwindow->top;
			x += 855;
			y += 15;
			Sleep(50);
			getHwnd(NOTEPAD,testpath,nwname);
			GetWindowRect(hwindow,rwindow);
			x = rwindow->left;
			y = rwindow->top;
			x += 90;
			y += 45;
			mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
			Sleep(50);
			mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
			Sleep(50);
			char *b = ".bmp";
			strcat(nwname,b);
			bmp[j].open(nwname, ios::app|ios::out|ios::in);
		}
		char *tx = ".txt";
		strcat(nwname,tx);
		output.open(nwname, ios::app|ios::in|ios::out);
		for(int j = 0;j < stuc;i++)
		{
			freopen(bd,"w+",stderr);
			cerr<<"������";
			fclose(stderr);
			bmpstd.open(bd, ios::app|ios::out|ios::in);
			char a[3] = {};
			char b[3] = {};
			for(int ii = 0;;i++)
			{
				a[0] = a[1],a[1] = a[2];
				b[0] = b[1],b[1] = b[2];
				bmp[j]>>a[2];
				bmpstd>>b[2];
				if(a == "������")
					break;
				else if(a[2] != b[2])
					goto err;
			}
			output<<setw(3)<<j<<"        ["<<"AC"<<"]"<<endl;
			moutput<<setw(3)<<j<<"        ["<<"AC"<<"]"<<endl;
			cout<<setw(3)<<j<<"        ["<<"AC"<<"]"<<endl;
			goto end;
			err:
			output<<setw(3)<<j<<"        ["<<"WA"<<"]"<<endl;
			moutput<<setw(3)<<j<<"        ["<<"WA"<<"]"<<endl;
			cout<<setw(3)<<j<<"        ["<<"WA"<<"]"<<endl;
			end:
			bmpstd.close();
		}
		cout<<"--------------------------------------------------------------------------------"<<endl;
		cout<<"�ѱ������ļ�����";
		system("pause");
		system("cls");
	}
}

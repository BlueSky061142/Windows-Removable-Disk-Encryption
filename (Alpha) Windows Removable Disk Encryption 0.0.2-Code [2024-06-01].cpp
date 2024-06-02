/*
(Alpha) Windows Removable Disk Encryption 0.0.2-Code [2024-06-01]
*/
#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
using namespace std;
int Column,Row;
int First=1005,Second=1005,Third=1005,Forth=1005,Fifth=1005,Sixth=1005;
char Commands[1005];
bool Judge;
int main()
{
	system("attrib /*Enter Removable Disk Directory Here*/ +s +h");
	Column=54;
	Row=5;
	sprintf(Commands,"mode con cols=%d lines=%d",Column,Row);
	system(Commands);
	SetWindowLongPtrA(GetConsoleWindow(),GWL_STYLE,GetWindowLongPtrA(GetConsoleWindow(),GWL_STYLE)&~WS_SIZEBOX&~WS_MAXIMIZEBOX&~WS_MINIMIZEBOX);
	system("color F0");
	SetConsoleTitle("(Alpha) Windows Removable Disk Encryption 0.0.2 [2024-06-01]");
	CONSOLE_CURSOR_INFO CursorInfo={1,0};
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&CursorInfo);
	while(true)
	{
		system("cls");
		cout<<endl<<"                ||| Enter Password |||"<<endl<<endl<<endl;
		while(true)
		{
			switch(_getch())
			{
    			case '0':
    				Judge=true;
    				First=0;
            		break;
        		case '1':
        			Judge=true;
    				First=1;
            		break;
        		case '2':
        			Judge=true;
        			First=2;
            		break;
            	case '3':
        			Judge=true;
        			First=3;
            		break;
    	        case '4':
    	    		Judge=true;
        			First=4;
            		break;
            	case '5':
        			Judge=true;
        			First=5;
            		break;
            	case '6':
        			Judge=true;
        			First=6;
            		break;
            	case '7':
        			Judge=true;
        			First=7;
            		break;
            	case '8':
        			Judge=true;
        			First=8;
            		break;
            	case '9':
        			Judge=true;
        			First=9;
            		break;
            	case 75:
            		system("color F0");
            		break;
            	case 77:
            		system("color F");
            		break;
    		}
    		if(Judge)
    		{
    			Judge=false;
    			break;
			}
		}
		system("cls");
		cout<<endl<<"                ||| Enter Password |||"<<endl<<endl;
		cout<<"                          *"<<endl;
		while(true)
		{
			switch(_getch())
			{
    			case '0':
    				Judge=true;
    				Second=0;
            		break;
        		case '1':
        			Judge=true;
    				Second=1;
            		break;
        		case '2':
        			Judge=true;
        			Second=2;
            		break;
            	case '3':
        			Judge=true;
        			Second=3;
            		break;
            	case '4':
        			Judge=true;
        			Second=4;
            		break;
            	case '5':
        			Judge=true;
        			Second=5;
            		break;
            	case '6':
        			Judge=true;
        			Second=6;
            		break;
            	case '7':
        			Judge=true;
        			Second=7;
            		break;
            	case '8':
        			Judge=true;
        			Second=8;
            		break;
            	case '9':
        			Judge=true;
        			Second=9;
            		break;
            	case 75:
            		system("color F0");
            		break;
            	case 77:
            		system("color F");
            		break;
    		}
    		if(Judge)
    		{
    			Judge=false;
    			break;
			}
		}
		system("cls");
		cout<<endl<<"                ||| Enter Password |||"<<endl<<endl;
		cout<<"                         * *"<<endl;
		while(true)
		{
			switch(_getch())
			{
    			case '0':
    				Judge=true;
    				Third=0;
            		break;
        		case '1':
        			Judge=true;
    				Third=1;
            		break;
        		case '2':
        			Judge=true;
        			Third=2;
            		break;
            	case '3':
        			Judge=true;
        			Third=3;
            		break;
            	case '4':
        			Judge=true;
        			Third=4;
            		break;
            	case '5':
        			Judge=true;
        			Third=5;
            		break;
            	case '6':
        			Judge=true;
        			Third=6;
            		break;
            	case '7':
        			Judge=true;
        			Third=7;
            		break;
            	case '8':
        			Judge=true;
        			Third=8;
            		break;
            	case '9':
        			Judge=true;
        			Third=9;
            		break;
            	case 75:
            		system("color F0");
            		break;
            	case 77:
            		system("color F");
            		break;
    		}
    		if(Judge)
    		{
    			Judge=false;
    			break;
			}
		}
		system("cls");
		cout<<endl<<"                ||| Enter Password |||"<<endl<<endl;
		cout<<"                        * * *"<<endl;
		while(true)
		{
			switch(_getch())
			{
    			case '0':
    				Judge=true;
    				Forth=0;
            		break;
        		case '1':
        			Judge=true;
    				Forth=1;
            		break;
        		case '2':
        			Judge=true;
        			Forth=2;
            		break;
            	case '3':
        			Judge=true;
        			Forth=3;
            		break;
            	case '4':
        			Judge=true;
        			Forth=4;
            		break;
            	case '5':
        			Judge=true;
        			Forth=5;
            		break;
            	case '6':
        			Judge=true;
        			Forth=6;
            		break;
            	case '7':
        			Judge=true;
        			Forth=7;
            		break;
            	case '8':
        			Judge=true;
        			Forth=8;
            		break;
            	case '9':
        			Judge=true;
        			Forth=9;
            		break;
            	case 75:
            		system("color F0");
            		break;
            	case 77:
            		system("color F");
            		break;
    		}
    		if(Judge)
    		{
    			Judge=false;
    			break;
			}
		}
		system("cls");
		cout<<endl<<"                ||| Enter Password |||"<<endl<<endl;
		cout<<"                       * * * *"<<endl;
		while(true)
		{
			switch(_getch())
			{
    			case '0':
    				Judge=true;
    				Fifth=0;
            		break;
        		case '1':
        			Judge=true;
    				Fifth=1;
            		break;
        		case '2':
        			Judge=true;
        			Fifth=2;
            		break;
            	case '3':
        			Judge=true;
        			Fifth=3;
            		break;
            	case '4':
        			Judge=true;
        			Fifth=4;
            		break;
            	case '5':
        			Judge=true;
        			Fifth=5;
            		break;
            	case '6':
        			Judge=true;
        			Fifth=6;
            		break;
            	case '7':
        			Judge=true;
        			Fifth=7;
            		break;
            	case '8':
        			Judge=true;
        			Fifth=8;
            		break;
            	case '9':
        			Judge=true;
        			Fifth=9;
            		break;
            	case 75:
            		system("color F0");
            		break;
            	case 77:
            		system("color F");
            		break;
    		}
    		if(Judge)
    		{
    			Judge=false;
    			break;
			}
		}
		system("cls");
		cout<<endl<<"                ||| Enter Password |||"<<endl<<endl;
		cout<<"                      * * * * *"<<endl;
		while(true)
		{
			switch(_getch())
			{
    			case '0':
    				Judge=true;
    				Sixth=0;
            		break;
        		case '1':
        			Judge=true;
    				Sixth=1;
            		break;
        		case '2':
        			Judge=true;
        			Sixth=2;
            		break;
            	case '3':
        			Judge=true;
        			Sixth=3;
            		break;
            	case '4':
        			Judge=true;
        			Sixth=4;
            		break;
            	case '5':
        			Judge=true;
        			Sixth=5;
            		break;
            	case '6':
        			Judge=true;
        			Sixth=6;
            		break;
            	case '7':
        			Judge=true;
        			Sixth=7;
            		break;
            	case '8':
        			Judge=true;
        			Sixth=8;
            		break;
            	case '9':
        			Judge=true;
        			Sixth=9;
            		break;
            	case 75:
            		system("color F0");
            		break;
            	case 77:
            		system("color F");
            		break;
    		}
    		if(Judge)
    		{
    			Judge=false;
    			break;
			}
		}
		system("cls");
		cout<<endl<<"                ||| Enter Password |||"<<endl<<endl;
		cout<<"                     * * * * * *"<<endl;
		Sleep(1000);
		if(First==/*Enter The First Digit Of The Password Here*/&&Second==/*Enter The Second Digit Of The Password Here*/&&Third==/*Enter The Third Digit Of The Password Here*/&&Forth==/*Enter The Fourth Digit Of The Password Here*/&&Fifth==/*Enter The Fifth Digit Of The Password Here*/&&Sixth==/*Enter The Sixth Digit Of The Password Here*/)
		{
			system("cls");
			cout<<endl<<"                     ||| Tip |||"<<endl<<endl;
			cout<<"                  Password correct."<<endl;
			Sleep(1000);
			system("start /*Enter Removable Disk Directory Here*/");
			return 0;
		}
		else
		{
			system("cls");
			cout<<endl<<"                     ||| Tip |||"<<endl<<endl;
			cout<<"                   Password wrong."<<endl;
			Sleep(1000);
		}
	}
	return 0;
}

//
//  main.cpp
//  屏蔽苹果系统内设不安全检测软件
//
//  Created by James Raynor on 2019/11/29.
//  Copyright © 2019 焕天_Jax Studio. All rights reserved.
//

#include "mainfunc.h"
void EN_Soft(int n);
using namespace std;

int main() {
    cout << "您用的系统是10.15.1之前的还是之后的？" << endl;
    cout << "A. 之前的    B. 之后的    C. 语言设置（language Setting）   D. 关闭" << endl;
    cout << "输入: ";
    cin >> A;
    switch (A) {
        case 'A':
            cout << "您的密码不会出现，只需要输入即可。" << endl;
            cout << "请输入您的电脑密码。" << endl;
            system("sudo spctl --master-disable");
            cout << "OK, 您的电脑现在已经可以使用当前已损坏文件啦！(密码正确的话，以这条消息为准)" << endl;
            cout << endl;
            main();
            break;
        case 'B':
            cout << "请将您想修复的程序拖入此程序内。" << endl;
            cout << "拖完过后请按回车，并输入您的电脑密码。" << endl;
            systemfunc(1);
            cout << endl;
            main();
            break;
        case 'a':
            cout << "您的密码不会出现，只需要输入即可。" << endl;
            cout << "请输入您的电脑密码。" << endl;
            system("sudo spctl --master-disable");
            cout << "OK, 您的电脑现在已经可以使用当前已损坏文件啦！(密码正确的话，以这条消息为准)" << endl;
            cout << endl;
            main();
            break;
        case 'b':
            cout << "请将您想修复的程序拖入此程序内。" << endl;
            cout << "拖完过后请按回车，并输入您的电脑密码。" << endl;
            systemfunc(1);
            cout << endl;
            main();
            break;
        case 'C':
            cout << "正在转换" << endl;
            sleep(1);
            cout << "." << endl;
            sleep(1);
            cout << "." << endl;
            sleep(1);
            cout << "." << endl;
            sleep(1);
            EN_Soft(1);
            break;
        case 'c':
            cout << "正在转换" << endl;
            sleep(1);
            cout << "." << endl;
            sleep(1);
            cout << "." << endl;
            sleep(1);
            cout << "." << endl;
            sleep(1);
            EN_Soft(1);
            break;
        case 'D':
            cout << "[已为您关闭此程序]" << endl;
            cout << "版本: 1.1.1.1" << endl;
            break;
        case 'd':
            cout << "[已为您关闭此程序]" << endl;
            cout << "版本: 1.1.1.1" << endl;
            break;
        default:
            cout << "输入错误，再试一次？" << endl;
            cout << "A. OK      B. 关闭此程序" << endl;
            cout << "输入: ";
            cin >> B;
            switch (B) {
                case 'A':
                    main();
                    break;
                case 'a':
                    main();
                    break;
                case 'B':
                    cout << "👌，下次再见吧！" << endl;
                case 'b':
                    cout << "👌，下次再见吧！" << endl;
                    break;
                default:
                    cout << "返回" << endl << endl << endl << endl;
                    main();
                    break;
            }
            break;
    }
    return 0;
}

void EN_Soft(int n) {
    cout << "Is your system before or after 10.15.1?" << endl;
    cout << "A. Before  B. After  C. Language setting  D. Shut Down" << endl;
    cout << "Input: ";
    cin >> A;
    switch (A) {
        case 'A':
            cout << "Your password will not appear, just enter it." << endl;
            cout << "Please enter your computer password." << endl;
            system("sudo spctl --master-disable");
            cout << "OK, your computer can use the damaged file now!(if the password is correct, this message will prevail)" << endl;
            cout << endl;
            EN_Soft(1);
            break;
        case 'B':
            cout << "Please drag the program you want to repair into this program." << endl;
            cout << "Press enter after dragging and enter your computer password." << endl;
            systemfunc(1);
            cout << endl;
            EN_Soft(1);
            break;
        case 'a':
            cout << "Your password will not appear, just enter it." << endl;
            cout << "Please enter your computer password." << endl;
            system("sudo spctl --master-disable");
            cout << "OK, your computer can use the damaged file now!(if the password is correct, this message will prevail)" << endl;
            cout << endl;
            EN_Soft(1);
            break;
        case 'b':
            cout << "Please drag the program you want to repair into this program." << endl;
            cout << "Press enter after dragging and enter your computer password." << endl;
            systemfunc(1);
            cout << endl;
            EN_Soft(1);
            break;
        case 'C':
            cout << "Converting" << endl;
            sleep(1);
            cout << "." << endl;
            sleep(1);
            cout << "." << endl;
            sleep(1);
            cout << "." << endl;
            sleep(1);
            main();
            break;
        case 'c':
            cout << "Converting" << endl;
            sleep(1);
            cout << "." << endl;
            sleep(1);
            cout << "." << endl;
            sleep(1);
            cout << "." << endl;
            sleep(1);
            main();
            break;
        case 'D':
            cout << "[This program has been closed for you]" << endl;
            cout << "Version: 1.1.1.1" << endl;
            break;
        case 'd':
            cout << "[This program has been closed for you]" << endl;
            cout << "Version: 1.1.1.1" << endl;
            break;
        default:
            cout << "Input error, try again?" << endl;
            cout << "A. OK      B. Shut down this program" << endl;
            cout << "Input: ";
            cin >> B;
            switch (B) {
                case 'A':
                    EN_Soft(1);
                    break;
                case 'a':
                    EN_Soft(1);
                    break;
                case 'B':
                    cout << "👌, see you next time!" << endl;
                case 'b':
                    cout << "👌, see you next time!" << endl;
                    break;
                default:
                    cout << "Back" << endl << endl << endl << endl;
                    EN_Soft(1);
                    break;
            }
            break;
    }
}


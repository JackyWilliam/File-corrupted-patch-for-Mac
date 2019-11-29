//
//  mainfunc.h
//  屏蔽苹果系统内设不安全检测软件
//
//  Created by James Raynor on 2019/11/29.
//  Copyright © 2019 焕天_Jax Studio. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <unistd.h>
void systemfunc(int n);
using namespace std;
char A, B, C;
char d[20];
char a, b, c;

void systemfunc(int n) {
    char buffer[300] = {0};
    char filename[256] = {0};
    cin >> filename;
    sprintf (buffer, "sudo xattr -r -d com.apple.quarantine", filename);
    system (buffer);
}

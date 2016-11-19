//
//  main.cpp
//  SpaceToOtherString
//
//  Created by 이창기 on 2016. 11. 19..
//  Copyright © 2016년 이창기. All rights reserved.
//

#include <iostream>
#include <string.h>
#define MAX 256

void spaceBarToString(char *str, int length);

int main(int argc, const char * argv[])
{
    char str[MAX];
    
    std::cin.getline(str,MAX);
    
    std::cout << str << std::endl;
    
    spaceBarToString(str, (int)strlen(str));
    
    return 0;
}

void spaceBarToString(char *str, int length)
{
    char *ret_String;
    int count = 0;
    int ret_Count = 0;
    
    for(int i=0; i<length; i++)
    {
        if(str[i] == ' ')
            count++;
    }
    
    ret_String = new char[length+(count*3)];
    
    for(int i=0; i<length; i++)
    {
        if(str[i] == ' ')
        {
            ret_String[ret_Count++] = '%';
            ret_String[ret_Count++] = '2';
            ret_String[ret_Count] = '0';
        }
        else
        {
            ret_String[ret_Count] = str[i];
        }
        ret_Count++;
    }
    ret_String[ret_Count] = '\0';
    
    std::cout << ret_String << std::endl;
}

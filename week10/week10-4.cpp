///week10-4.cpp交換兩瓶水
#include <stdio.h>
int main()
{
    ///黑色的酒VS100%白色的水
    int a=9,b=100;///一開始
    printf("a:%db:%d\n",a,b);///印出來

    ///交換一下
    int temp=a;///臨時拿個瓶子
    a=b;///有點押韻
    b=temp;

    printf("a:%d b:%d\n",a,b);///印出來
}

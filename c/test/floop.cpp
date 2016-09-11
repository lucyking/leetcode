#include <iostream>
#include <cstring>

using namespace std;
/*
 1、第一次抛棋子的楼层：最优的选择必然是间隔最大的楼层。比如，第一次如果在m层抛下棋子，以后再抛棋子时两次楼层的间隔必然不大于m层（大家可以自己用反证法简单证明） 
2、从第二次抛棋子的间隔楼层最优的选择必然比第一次间隔少一层，第三次的楼层间隔比第二次间隔少一层，如此，以后每次抛棋子楼层间隔比上一次间隔少一层。（大家不妨自己证明一下） 
3、所以，设n是第一次抛棋子的最佳楼层，则n即为满足下列不等式的最小自然数： 
  不等式如下：  1+2+3+...+(n-1)+n  >=   100 
*/
int x=4;

int F[40]={0};

void Test()
{
     int temp;
     for (int test1=2; test1<40; ++test1)
     {
         F[test1]=test1;
         for (int test2=1; test2<40;++test2)
         {
             temp= (test2>=(1+F[test1-test2]))?test2:(1+F[test1-test2]);
             if (F[test1]>temp)
                 F[test1]=temp;
         }
     }
}

int main()
{
     F[0]=0;
     F[1]=1;
     Test();
     cout<<F[39]<<endl;
     return 0;
}

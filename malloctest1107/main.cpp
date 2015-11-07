//
//  main.cpp
//  malloctest1107
//
//  Created by 朝力萌 on 15/11/7.
//  Copyright © 2015年 朝力萌. All rights reserved.
//

#include <iostream>
//#define N 100
struct student
{
    char name[100];
    int age;
    char sex[3];
    char PN[12];
};
int main(int argc, const char * argv[]) {
    // insert code here...
    student *a;
    student temp;
    int i,j;
    int N;
    scanf("%d",&N);
    //a=(int *)malloc(N*4);
    a=new student[N];
    if(a==0)
        exit(0);
    for (i=0;i<N;i++)
        scanf("%s %s %d %s",a[i].name,a[i].sex,&a[i].age,a[i].PN);
    for(i=0;i<N-1;i++)
    {
        for(j=0;j<N-1-i;j++)
        {
            if(a[j].age>a[j+1].age)
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for (i=0;i<N;i++)
        printf("姓名：%s 性别：%s 年龄：%d 移动电话：%s\n",a[i].name,a[i].sex,a[i].age,a[i].PN);
    delete a;
    return 0;
}

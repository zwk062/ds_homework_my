#include<stdio.h>
#include <stdlib.h>
//经停站
typedef struct Tran_palce {
//	地点名
	char place_name[15];
	//到达时间
	char arrive_time[10];
    //离开时间
    char leave_time[10];
    //距离始发站距离
    int distance;
}tran_palce;
typedef struct train{
    char train_num[10];
    char departure_sta[10];
    char destinaton_sta[10];
    int  tatal_distance;
    char is_normal[10];
    char departure_time[10];
    char destinaton_time[10];
    tran_palce station[10];
}station;

station a;
int main()
{
    char ch;
    char place[20];
	FILE *file;
	file = fopen("./train.txt","r");
	if(file==NULL)//如果未打开就提示读取错误
	{
	printf("read error");
	} 
	else
	{
        for(int i=0;i<10;i++)
        {
            fscanf(file,"%s %s %s %d",a.station[i].place_name,a.station[i].arrive_time,a.station[i].leave_time,&a.station[i].distance); 
         printf("%s %s %s %d",a.station[i].place_name,a.station[i].arrive_time,a.station[i].leave_time,a.station[i].distance);
        }
     
	}
	 fclose(file);//文件关闭函数
 } 


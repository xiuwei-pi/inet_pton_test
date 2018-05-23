#include<stdio.h>
#include<string.h>
#include<arpa/inet.h>
int main(void)
{
  char IPdotdec[20];
  struct in_addr s;
  //输入IP地址
  printf("Please input IP Address\n" );
  scanf("%s",IPdotdec );
  //转换
  inet_pton(AF_INET,IPdotdec,(void *)&s);
  printf("inet_pton: 0X%x\n",s.s_addr);//注意得到的字节顺序
  // INVERSE
  inet_ntop(AF_INET,(void*)&s,IPdotdec,16);
  printf("inet_ntop:%s\n",IPdotdec );
  return 0;

}

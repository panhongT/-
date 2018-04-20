#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include"stack.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=0;

	while(1){
	printf("-------------操作选项-----------\n");//菜单函数让用户选择顺序栈或者链栈 
    printf("1:选择顺序栈 \n");
    printf("2:选择链栈 \n");
    printf("3：退出程序\n");
    printf("--------------------------------\n");
    fflush(stdin);//清除非数字的缓冲区 
	scanf("%d",&a);
    printf("\n");
    while(scanf("%d",&a)==0){
    	fflush(stdin);
    	printf("请确认输入正确\n"); 
	} 
	if(a==3)
	break;
	
	switch(a){
    
	case 1:{                     /************************若选择顺序栈	***************************/ 
	int b;                       //第二层菜单switch的判断值 
	int sizes;                   // initStack函数的参数 
	int n;                       //n用于设置数组大小 
	int x;                       //用于存放函数返回值 
	ElemType *e;
	int *length;
	ElemType *data;
	ElemType datas;
	SqStack *s;
	printf("请先设置顺序栈\n");
	printf("请输入栈空间大小\n");
	while(!scanf("%d",&sizes)||sizes<=0){
		fflush(stdin);
		printf("请确认输入的是正数\n");
	}
	s->elem=(ElemType*)malloc(sizes*sizeof(ElemType));//为栈分配内存 
	printf("请确定你要初始化的数组大小（可以小于栈但不能大于栈）\n");
	while(scanf("%d",&n)==0){
		fflush(stdin);
		printf("请确认输入的是数字\n");
	}
	while(n>sizes){
		printf("数组不能大于栈，请重新输入\n");
		while(scanf("%d",&n)==0){
		fflush(stdin);
		printf("请确认输入的是数字\n");
		} 
	}
	initStack(s,sizes);
	printf("请输入%d个元素的值\n",n);
	int i;
	int j;
	for(i=0;i<n;i++){
		while(scanf("%d",&s->elem[i])==0){
		fflush(stdin);
		printf("请确认输入的是数字\n");
		}
		s->top ++; 
	}
	while(1){
    printf("-------------操作选项-----------\n");
    printf("1：判断顺序栈是否为空（是的话获取值为1，否则为0！） \n");
    printf("2:得到顺序栈头元素 \n");
    printf("3:清空顺序栈（若成功的话获取值为1，否则为0！）\n");
    printf("4：销毁顺序栈（若成功的话获取值为1，否则为0！） \n");
    printf("5:检查顺序栈长度 \n");
    printf("6：入栈 （若满足条件并成功入栈获取值为1，否则为0！）\n");
    printf("7：出栈（若满足条件并成功出栈获取出栈的值，否则为0！）\n");
    printf("8：返回上一层 \n");
    printf("--------------------------------\n");
    fflush(stdin);//清除非数字的缓冲区 
    scanf("%d",&b);
	if(b==8)
    break;
    switch(b){
    	
     	case 1:{
     		x=isEmptyStack(s);
     	printf("你的操作状态为%d\n",x);
     	printf("\n");
			break;
		 }
     	case 2:{
     		x=getTopStack(s,e);
     		printf("头元素的值为%d\n",x);
     		printf("\n");
			break;
		 }
     	case 3:{
     		x=clearStack(s);
     		printf("你的操作状态为%d\n",x);
     		printf("\n");
			break;
		 }
     	case 4:{
     		x=destoryStack(s);
     		printf("你的操作状态为%d\n",x);
     		printf("\n");
			break;
		 }
     	case 5:{
     		x=stackLength(s,length);
     		printf("顺序链的长度是%d\n",x);
     		printf("\n");
			break;
		 }
     	case 6: {
		 printf("请输入你想入栈的值\n");
     	        scanf("%d",&datas);
     	        x=pushStack(s,datas);
     	        printf("你的操作状态为%d\n即入栈失败\n",x);
     	        printf("\n");
     	        break;
       }
		case 7:{
			x=popStack(s,data);
			printf("你的出栈状态为%d\n",x) ;
			printf("出栈的元素为%d\n",*data);
			printf("\n");
			break;
		}
     	default:printf("请确认输入的是数字1-8！\n");
     	printf("\n");
     	break; 
       }
       }
       break; 
      }
      
      case 2: {                           /************************若选择链栈*****************/ 
      	LinkStack *s;
      	s=(LinkStack*)malloc(sizeof(LinkStack));
      	initLStack(s);
      	ElemType *e;
      	int *length;
      	int g=0;
      	while(1){
      		printf("-------------操作选项-----------\n");
            printf("1：入栈 （若满足条件并成功入栈获取值为1，否则为0！）\n");
            printf("2:得到链栈头元素 \n");
            printf("3:清空链栈（若成功的话获取值为1，否则为0！）\n");
            printf("4：销毁链栈（若成功的话获取值为1，否则为0！） \n");
            printf("5:检查栈链长度 \n");
            printf("6：判断链栈是否为空（是的话获取值为1，否则为0！） \n");
            printf("7：出栈（若满足条件并成功出栈获取出栈的值，否则为0！）\n");
            printf("8：返回上一层 \n");
            printf("--------------------------------\n");
            fflush(stdin);
			scanf("%d",&g);
			if(g==8)
			break;
			switch(g){
					case 1:{
				printf("请输入要如栈的值\n");
				ElemType datas;
				while(scanf("%d",&datas)==0){
				fflush(stdin);
		        printf("请确认输入的是数字\n");
		        printf("请输入要如栈的值\n");
				}	
				pushLStack(s,datas);
				break;
				}
				case 2:{ 
					printf("若链表存在头元素返回1并打印头元素，反之返回0\n");
					if(getTopLStack(s,e)==0)
					printf("%d，还没有头元素，请先入栈\n",getTopLStack(s,e));
					if(getTopLStack(s,e))
					printf("%d\n",getTopLStack(s,e)); 
					break;
				}
				case 3:printf("你的操作状态为%d\n\n",clearLStack(s));break;
				case 4:printf("你的操作状态为%d\n\n",destoryLStack(s));break;
				case 5:printf("栈链的长度是%d\n\n",LStackLength(s,length));break;
				case 6:printf("你的操作状态为%d\n",isEmptyLStack(s));break;
				case 7:{
				ElemType *datas;
				printf("你的操作状态为%d\n",popLStack(s,datas));
				printf("出栈的元素为%d\n",*datas);
					break;
				}
				default:printf("请确认输入的是数字1-8！\n");
			} 
		  }
		break;
	  }                
	default:printf("请确认输入的是数字1-3！\n");
	}
 

}
	return 0;
}

#include<stdio.h> 
#ifndef _STACK_H_
#define _STACK_H_
#define  SUCCESS  1  
#define  ERROR 0 
typedef int Status; 
typedef int ElemType;

typedef struct {
       ElemType	*elem;
       int	top;      //用于栈顶指针
       int	size;     
}SqStack;
typedef struct StackNode{
	struct StackNode* next;//next是指针域 
	ElemType data;//data是数据域 
}StackNode,*LinkStackPtr;

typedef struct LinkStack{
	LinkStackPtr top;
	int count;
}LinkStack;

//顺序栈(基于数组的)
Status initStack(SqStack *s,int sizes);  //初始化链表


Status isEmptyStack(SqStack *s);   //判断链表是否为空


Status getTopStack(SqStack *s,ElemType *e) ;  //得到链表头元素



Status clearStack(SqStack *s)  ; //清空链表


Status destoryStack(SqStack *s) ; //销毁链表



Status stackLength(SqStack *s,int *length)  ; //检测链表长度

Status pushStack(SqStack *s,ElemType datas) ; //入栈


Status popStack(SqStack *s,ElemType *datas)  ; //出栈


//链栈(基于链表的)
Status initLStack(LinkStack *s) ;  //初始化

Status isEmptyLStack(LinkStack *s) ; //判断链表是否为空


Status getTopLStack(LinkStack *s,ElemType *e) ; //得到链表头元素


Status clearLStack(LinkStack *s)  ; //清空链表


Status destoryLStack(LinkStack *s) ;  //销毁链表


Status LStackLength(LinkStack *s,int *length);    //检测链表长度


Status pushLStack(LinkStack *s,ElemType datas);   //入栈


Status popLStack(LinkStack *s,ElemType *datas) ;  //出栈
#endif


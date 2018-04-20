#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include"stack.h"
//顺序栈(基于数组的)
Status initStack(SqStack *s,int sizes)  //初始化顺序栈 
{

	if(s->elem==NULL)//判断是否成功申请空间 
	return ERROR;
	s->top=-1;    //栈的头指针指向-1 
	s->size=sizes;
	return SUCCESS;

}


Status isEmptyStack(SqStack *s)   //判断顺序栈是否为空
{
	return(s->top ==-1?SUCCESS:ERROR); //若栈为空返回SUCCESS 

}


Status getTopStack(SqStack *s,ElemType *e)   //得到顺序栈头元素
{
	if(s->top ==-1||s==NULL)
	return ERROR;
	int i;
	
	i= s->elem [s->top ];
	e=&i;
	return *e;
}


Status clearStack(SqStack *s)   //清空顺序栈
{
	s->top =-1;
	return SUCCESS;
}


Status destoryStack(SqStack *s)  //销毁顺序栈
{
	if(s==NULL)
	return ERROR;
	free(s->elem );
	return SUCCESS;
}


Status stackLength(SqStack *s,int *length)   //检测链顺序栈长度
{
	if(s==NULL)
	return ERROR;   
 //顺序栈(基于数组的)
    int i;
	i=s->size ;
	length=&i;
	return *length;
}

Status pushStack(SqStack *s,ElemType datas)  //入栈
{
	if(s==NULL||s->top+1==s->size  )
	return ERROR;
	s->top++;
	s->elem [s->top]=datas;
	return SUCCESS;
}

Status popStack(SqStack *s,ElemType *datas)   //出栈
{
	if(s->top ==-1||s==NULL)
	return ERROR;
	*datas=s->elem [s->top ];
	s->top --;
	return SUCCESS;
}

//链栈(基于链表的)
Status initLStack(LinkStack *s)   //初始化
{
	StackNode* S=(StackNode*)malloc(sizeof(StackNode));
	if(S==NULL)
	return ERROR;
	S=NULL;
	s->top=S;
	return SUCCESS;
}

Status isEmptyLStack(LinkStack *s)  //判断链表是否为空
{
	if(s->top ==NULL)
	return SUCCESS;
	return ERROR;
}

Status getTopLStack(LinkStack *s,ElemType *e)  //得到链表头元素
{
	if(s->top==NULL)
	return ERROR;
	int y;
	y=s->top ->data;
	e=&y;
	return *e;
}

Status clearLStack(LinkStack *s)   //清空链表
{
	if(s->top ==NULL)
	return ERROR;
	while(s->top ){
	
	LinkStackPtr p;
	p=s->top ;
	s->top =s->top ->next;
	free(p);
    s->count --;
	}
	return SUCCESS;
}

Status destoryLStack(LinkStack *s)   //销毁链表
{
	if(s==NULL)
	return ERROR; 
	clearLStack(s);
	free(s);
	return SUCCESS;
}

Status LStackLength(LinkStack *s,int *length)    //检测链表长度
{
	if(s->top ==NULL)
	return ERROR;
	s->count =0;
	while(s->top ){
		s->top =s->top ->next;
		s->count ++;
	}
	length=&(s->count );
	return *length;

}

Status pushLStack(LinkStack *s,ElemType datas)   //入栈
{
	StackNode* p=(StackNode*)malloc(sizeof(StackNode));
	if(p==NULL)
	return ERROR;
	if(s->top ==NULL){
		s->top =p;
		p->data =datas;
		s->top->next=NULL;
	}else{
		p->data =datas;
		p->next =s->top ;
		s->top =p;
	}
	return SUCCESS;
}

Status popLStack(LinkStack *s,ElemType *datas)   //出栈
{
	if(s->top ==NULL)
	return ERROR;
	LinkStackPtr p=s->top ;
	int x;
	x=s->top ->data;
	datas=&x;
	s->top =s->top ->next;
	free(p);
	return SUCCESS;
	
}


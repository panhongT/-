#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include"stack.h"
//˳��ջ(���������)
Status initStack(SqStack *s,int sizes)  //��ʼ��˳��ջ 
{

	if(s->elem==NULL)//�ж��Ƿ�ɹ�����ռ� 
	return ERROR;
	s->top=-1;    //ջ��ͷָ��ָ��-1 
	s->size=sizes;
	return SUCCESS;

}


Status isEmptyStack(SqStack *s)   //�ж�˳��ջ�Ƿ�Ϊ��
{
	return(s->top ==-1?SUCCESS:ERROR); //��ջΪ�շ���SUCCESS 

}


Status getTopStack(SqStack *s,ElemType *e)   //�õ�˳��ջͷԪ��
{
	if(s->top ==-1||s==NULL)
	return ERROR;
	int i;
	
	i= s->elem [s->top ];
	e=&i;
	return *e;
}


Status clearStack(SqStack *s)   //���˳��ջ
{
	s->top =-1;
	return SUCCESS;
}


Status destoryStack(SqStack *s)  //����˳��ջ
{
	if(s==NULL)
	return ERROR;
	free(s->elem );
	return SUCCESS;
}


Status stackLength(SqStack *s,int *length)   //�����˳��ջ����
{
	if(s==NULL)
	return ERROR;   
 //˳��ջ(���������)
    int i;
	i=s->size ;
	length=&i;
	return *length;
}

Status pushStack(SqStack *s,ElemType datas)  //��ջ
{
	if(s==NULL||s->top+1==s->size  )
	return ERROR;
	s->top++;
	s->elem [s->top]=datas;
	return SUCCESS;
}

Status popStack(SqStack *s,ElemType *datas)   //��ջ
{
	if(s->top ==-1||s==NULL)
	return ERROR;
	*datas=s->elem [s->top ];
	s->top --;
	return SUCCESS;
}

//��ջ(���������)
Status initLStack(LinkStack *s)   //��ʼ��
{
	StackNode* S=(StackNode*)malloc(sizeof(StackNode));
	if(S==NULL)
	return ERROR;
	S=NULL;
	s->top=S;
	return SUCCESS;
}

Status isEmptyLStack(LinkStack *s)  //�ж������Ƿ�Ϊ��
{
	if(s->top ==NULL)
	return SUCCESS;
	return ERROR;
}

Status getTopLStack(LinkStack *s,ElemType *e)  //�õ�����ͷԪ��
{
	if(s->top==NULL)
	return ERROR;
	int y;
	y=s->top ->data;
	e=&y;
	return *e;
}

Status clearLStack(LinkStack *s)   //�������
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

Status destoryLStack(LinkStack *s)   //��������
{
	if(s==NULL)
	return ERROR; 
	clearLStack(s);
	free(s);
	return SUCCESS;
}

Status LStackLength(LinkStack *s,int *length)    //���������
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

Status pushLStack(LinkStack *s,ElemType datas)   //��ջ
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

Status popLStack(LinkStack *s,ElemType *datas)   //��ջ
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


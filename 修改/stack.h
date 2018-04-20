#include<stdio.h> 
#ifndef _STACK_H_
#define _STACK_H_
#define  SUCCESS  1  
#define  ERROR 0 
typedef int Status; 
typedef int ElemType;

typedef struct {
       ElemType	*elem;
       int	top;      //����ջ��ָ��
       int	size;     
}SqStack;
typedef struct StackNode{
	struct StackNode* next;//next��ָ���� 
	ElemType data;//data�������� 
}StackNode,*LinkStackPtr;

typedef struct LinkStack{
	LinkStackPtr top;
	int count;
}LinkStack;

//˳��ջ(���������)
Status initStack(SqStack *s,int sizes);  //��ʼ������


Status isEmptyStack(SqStack *s);   //�ж������Ƿ�Ϊ��


Status getTopStack(SqStack *s,ElemType *e) ;  //�õ�����ͷԪ��



Status clearStack(SqStack *s)  ; //�������


Status destoryStack(SqStack *s) ; //��������



Status stackLength(SqStack *s,int *length)  ; //���������

Status pushStack(SqStack *s,ElemType datas) ; //��ջ


Status popStack(SqStack *s,ElemType *datas)  ; //��ջ


//��ջ(���������)
Status initLStack(LinkStack *s) ;  //��ʼ��

Status isEmptyLStack(LinkStack *s) ; //�ж������Ƿ�Ϊ��


Status getTopLStack(LinkStack *s,ElemType *e) ; //�õ�����ͷԪ��


Status clearLStack(LinkStack *s)  ; //�������


Status destoryLStack(LinkStack *s) ;  //��������


Status LStackLength(LinkStack *s,int *length);    //���������


Status pushLStack(LinkStack *s,ElemType datas);   //��ջ


Status popLStack(LinkStack *s,ElemType *datas) ;  //��ջ
#endif


#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include"stack.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=0;

	while(1){
	printf("-------------����ѡ��-----------\n");//�˵��������û�ѡ��˳��ջ������ջ 
    printf("1:ѡ��˳��ջ \n");
    printf("2:ѡ����ջ \n");
    printf("3���˳�����\n");
    printf("--------------------------------\n");
    fflush(stdin);//��������ֵĻ����� 
	scanf("%d",&a);
    printf("\n");
    while(scanf("%d",&a)==0){
    	fflush(stdin);
    	printf("��ȷ��������ȷ\n"); 
	} 
	if(a==3)
	break;
	
	switch(a){
    
	case 1:{                     /************************��ѡ��˳��ջ	***************************/ 
	int b;                       //�ڶ���˵�switch���ж�ֵ 
	int sizes;                   // initStack�����Ĳ��� 
	int n;                       //n�������������С 
	int x;                       //���ڴ�ź�������ֵ 
	ElemType *e;
	int *length;
	ElemType *data;
	ElemType datas;
	SqStack *s;
	printf("��������˳��ջ\n");
	printf("������ջ�ռ��С\n");
	while(!scanf("%d",&sizes)||sizes<=0){
		fflush(stdin);
		printf("��ȷ�������������\n");
	}
	s->elem=(ElemType*)malloc(sizes*sizeof(ElemType));//Ϊջ�����ڴ� 
	printf("��ȷ����Ҫ��ʼ���������С������С��ջ�����ܴ���ջ��\n");
	while(scanf("%d",&n)==0){
		fflush(stdin);
		printf("��ȷ�������������\n");
	}
	while(n>sizes){
		printf("���鲻�ܴ���ջ������������\n");
		while(scanf("%d",&n)==0){
		fflush(stdin);
		printf("��ȷ�������������\n");
		} 
	}
	initStack(s,sizes);
	printf("������%d��Ԫ�ص�ֵ\n",n);
	int i;
	int j;
	for(i=0;i<n;i++){
		while(scanf("%d",&s->elem[i])==0){
		fflush(stdin);
		printf("��ȷ�������������\n");
		}
		s->top ++; 
	}
	while(1){
    printf("-------------����ѡ��-----------\n");
    printf("1���ж�˳��ջ�Ƿ�Ϊ�գ��ǵĻ���ȡֵΪ1������Ϊ0���� \n");
    printf("2:�õ�˳��ջͷԪ�� \n");
    printf("3:���˳��ջ�����ɹ��Ļ���ȡֵΪ1������Ϊ0����\n");
    printf("4������˳��ջ�����ɹ��Ļ���ȡֵΪ1������Ϊ0���� \n");
    printf("5:���˳��ջ���� \n");
    printf("6����ջ ���������������ɹ���ջ��ȡֵΪ1������Ϊ0����\n");
    printf("7����ջ���������������ɹ���ջ��ȡ��ջ��ֵ������Ϊ0����\n");
    printf("8��������һ�� \n");
    printf("--------------------------------\n");
    fflush(stdin);//��������ֵĻ����� 
    scanf("%d",&b);
	if(b==8)
    break;
    switch(b){
    	
     	case 1:{
     		x=isEmptyStack(s);
     	printf("��Ĳ���״̬Ϊ%d\n",x);
     	printf("\n");
			break;
		 }
     	case 2:{
     		x=getTopStack(s,e);
     		printf("ͷԪ�ص�ֵΪ%d\n",x);
     		printf("\n");
			break;
		 }
     	case 3:{
     		x=clearStack(s);
     		printf("��Ĳ���״̬Ϊ%d\n",x);
     		printf("\n");
			break;
		 }
     	case 4:{
     		x=destoryStack(s);
     		printf("��Ĳ���״̬Ϊ%d\n",x);
     		printf("\n");
			break;
		 }
     	case 5:{
     		x=stackLength(s,length);
     		printf("˳�����ĳ�����%d\n",x);
     		printf("\n");
			break;
		 }
     	case 6: {
		 printf("������������ջ��ֵ\n");
     	        scanf("%d",&datas);
     	        x=pushStack(s,datas);
     	        printf("��Ĳ���״̬Ϊ%d\n����ջʧ��\n",x);
     	        printf("\n");
     	        break;
       }
		case 7:{
			x=popStack(s,data);
			printf("��ĳ�ջ״̬Ϊ%d\n",x) ;
			printf("��ջ��Ԫ��Ϊ%d\n",*data);
			printf("\n");
			break;
		}
     	default:printf("��ȷ�������������1-8��\n");
     	printf("\n");
     	break; 
       }
       }
       break; 
      }
      
      case 2: {                           /************************��ѡ����ջ*****************/ 
      	LinkStack *s;
      	s=(LinkStack*)malloc(sizeof(LinkStack));
      	initLStack(s);
      	ElemType *e;
      	int *length;
      	int g=0;
      	while(1){
      		printf("-------------����ѡ��-----------\n");
            printf("1����ջ ���������������ɹ���ջ��ȡֵΪ1������Ϊ0����\n");
            printf("2:�õ���ջͷԪ�� \n");
            printf("3:�����ջ�����ɹ��Ļ���ȡֵΪ1������Ϊ0����\n");
            printf("4��������ջ�����ɹ��Ļ���ȡֵΪ1������Ϊ0���� \n");
            printf("5:���ջ������ \n");
            printf("6���ж���ջ�Ƿ�Ϊ�գ��ǵĻ���ȡֵΪ1������Ϊ0���� \n");
            printf("7����ջ���������������ɹ���ջ��ȡ��ջ��ֵ������Ϊ0����\n");
            printf("8��������һ�� \n");
            printf("--------------------------------\n");
            fflush(stdin);
			scanf("%d",&g);
			if(g==8)
			break;
			switch(g){
					case 1:{
				printf("������Ҫ��ջ��ֵ\n");
				ElemType datas;
				while(scanf("%d",&datas)==0){
				fflush(stdin);
		        printf("��ȷ�������������\n");
		        printf("������Ҫ��ջ��ֵ\n");
				}	
				pushLStack(s,datas);
				break;
				}
				case 2:{ 
					printf("���������ͷԪ�ط���1����ӡͷԪ�أ���֮����0\n");
					if(getTopLStack(s,e)==0)
					printf("%d����û��ͷԪ�أ�������ջ\n",getTopLStack(s,e));
					if(getTopLStack(s,e))
					printf("%d\n",getTopLStack(s,e)); 
					break;
				}
				case 3:printf("��Ĳ���״̬Ϊ%d\n\n",clearLStack(s));break;
				case 4:printf("��Ĳ���״̬Ϊ%d\n\n",destoryLStack(s));break;
				case 5:printf("ջ���ĳ�����%d\n\n",LStackLength(s,length));break;
				case 6:printf("��Ĳ���״̬Ϊ%d\n",isEmptyLStack(s));break;
				case 7:{
				ElemType *datas;
				printf("��Ĳ���״̬Ϊ%d\n",popLStack(s,datas));
				printf("��ջ��Ԫ��Ϊ%d\n",*datas);
					break;
				}
				default:printf("��ȷ�������������1-8��\n");
			} 
		  }
		break;
	  }                
	default:printf("��ȷ�������������1-3��\n");
	}
 

}
	return 0;
}

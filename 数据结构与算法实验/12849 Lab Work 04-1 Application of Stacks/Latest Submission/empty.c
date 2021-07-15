#include<stdio.h>
#include<stdlib.h>
#include<ctype.h> 
#include <string.h>

#define INITSIZE  20
#define INCREMENT 10
#define MAXBUFFER 20
#define LEN_C  sizeof(char)
#define LEN_D  sizeof(double)

//栈存储结构动态分配存储结构
typedef struct{
	char *base;
	char *top;
	int StackSize;
}stack;
typedef struct{
	double* base;
	double* top;
	int StackSize;
}stackDouble;
//初始化
void InitStack(stack *S)
{
	S->base=(char*)malloc(LEN_C*INITSIZE);
	S->top=S->base;
	S->StackSize=INITSIZE;
}
void InitStackDouble(stackDouble *S)
{
	S->base=(double*)malloc(LEN_D*INITSIZE);
	S->top=S->base;
	S->StackSize=INITSIZE;
}
/*压栈操作*/ 
void PushStack(stack *S,char c)
{
	if(S->top - S->base >= S->StackSize)
	{
		S->base=(char*)realloc(S->base,LEN_C*(S->StackSize+INCREMENT));
		S->top =S->base+S->StackSize;
		S->StackSize+=INCREMENT;
	}
	*S->top++ = c;
}
void PushStackDouble(stackDouble *S,double c)
{
	if(S->top - S->base >= S->StackSize)
	{
		S->base=(double*)realloc(S->base,LEN_D*(S->StackSize+INCREMENT));
		S->top =S->base+S->StackSize;
		S->StackSize+=INCREMENT;
	}
	*S->top++ = c;
}
/*求栈长*/
int StackLength(stack *S)
{
	return (S->top - S->base);
}
int StackDoubleLength(stackDouble *S)
{
	return (S->top - S->base);
}
/*弹栈操作*/
int PopStack(stack *S,char *c)
{
	if(!StackLength(S))
	{
		return 0;
	}
	*c=*--S->top;
	return 1;
}
int PopStackDouble(stackDouble *S,double *c)
{
	if(!StackDoubleLength(S))
	{
		return 0;
	}
	*c=*--S->top;
	return 1;
}
//中缀转后缀函数
void fromInFixToPostFix(stack *S,char str[])
{
	int i=0;
	char e;
	InitStack(S);
	while(str[i]!='\0')
	{
		while(isdigit(str[i])) 
		{/*过滤数字字符，直接输出，直到下一位不是数字字符打印空格跳出循环 */
			printf("%c",str[i++]);
			if(!isdigit(str[i]))
			{
				printf(" ");
			}
		}
		/*加减运算符优先级最低，如果栈顶元素为空则直接入栈，否则将栈中存储
		的运算符全部弹栈，如果遇到左括号则停止，将弹出的左括号从新压栈，因为左
		括号要和又括号匹配时弹出，这个后面单独讨论。弹出后将优先级低的运算符压入栈中*/
		if(str[i]=='+'||str[i]=='-')
		{
			if(StackLength(S)==0)
			{
				PushStack(S,str[i]);
			}
			else
			{
				do
				{
					PopStack(S,&e);
					if(e=='(')
					{
						PushStack(S,e);
					}
					else
					{
						printf("%c ",e);
					}
				}while( StackLength(S) && e != '(' );
				
				PushStack(S,str[i]);
			}
		}
		/*当遇到右括号时，把括号里剩余的运算符弹出，直到出现左括号，左右括号不打印*/
		else if(str[i]==')')
		{
			PopStack(S,&e);
			while(e!='(')
			{
				printf("%c ",e);
				PopStack(S,&e);
			}
		}
		/*优先级高压栈（乘、除、左括号）*/
		else if(str[i]=='*'||str[i]=='/'||str[i]=='(')
		{
			PushStack(S,str[i]);
		}
		
		else if(str[i]=='\0')
		{
			break;
		}
		
		else
		{
			printf("\n输入格式错误！\n");
			return ;
		}
		i++;
	}
	/*弹出栈中剩余的运算符*/
	while(StackLength(S))
	{
		PopStack(S,&e);
		printf("%c ",e);
	}
}
double operate(char c,double a,double b){
	if(c=='*')
		return a*b;
	if(c=='/')
		return b/a;
	if(c=='+')
		return a+b;
	if(c=='-')
		return b-a;

}
double EvaluationOfPostFix(stack*S){
	stackDouble temp;//以栈的形式放置运算数
	InitStackDouble(&temp);
	int len=StackLength(S);
	for(int i=0;i<len;i++){
		if(isdigit(S->base[i])){
			double operand=0;
			while(i<len&&isdigit(S->base[i])){
				operand=operand*10+(S->base[i]-'0');
				i++;
			}
			PushStackDouble(&temp,operand);
		}
		if(i<len&&(!isdigit(S->base[i]))&&S->base[i]!=' '){
			double last_operand;
			PopStackDouble(&temp,&last_operand);//运算过程的后一个运算数
			double previous_operand;
			PopStackDouble(&temp,&previous_operand);//运算过程的前一个运算数
			int result=operate(S->base[i],last_operand,previous_operand);
			PushStackDouble(&temp,result);
		}
	}
	return temp.base[0];
}
int main(){
	char InFix[MAXBUFFER];
	stack PostFix1;
	printf("请输入正确的中缀表达式：\n");
	gets(InFix);
	printf("转化为后缀表达式是：\n");
	fromInFixToPostFix(&PostFix1,InFix);
	stack PostFix2;
	InitStack(&PostFix2);
	printf("\n请输入正确的后缀表达式(需要用空格隔开输入的数和运算符）：\n");
	char temp[MAXBUFFER];
	gets(temp);
	for( int i=0;i<strlen(temp);i++){
		PushStack(&PostFix2,temp[i]);
	}
	printf("该后缀表达式计算的结果为：\n");
	printf("%lf\n",EvaluationOfPostFix(&PostFix2));
	return 0;
}
#define pointer (volatile unsigned int *)0x40028000
//宏定义不占内存 变量内存会开辟在栈取

int main(void)
{
	*pointer =1;
	
}
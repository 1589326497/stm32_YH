#define GPIOB_CLK (*(volatile unsigned int*)(0x40021000+0x18))
#define GPIOB_CRL (*(volatile unsigned int*)(0X40010C00+0x00))
#define GPIOB_ODR (*(volatile unsigned int*)(0X40010C00+0x0c))
int main(void)
{
	//ʹ��GPIO����ʱ��
	GPIOB_CLK|=(1<<3);
	//�����������ģʽ
	GPIOB_CRL &=~(0xf<<(4*0));
	GPIOB_CRL|=(2<<0);
	
	GPIOB_ODR &=~(0x1<<(1*0));
	GPIOB_ODR |=(1<<0);
}
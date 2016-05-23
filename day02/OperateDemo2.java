class OperateDemo2
{
	public static void main(String []strings)
	{
		//赋值运算符.   =	     +=	-=   *=     /=       %=
		//同时定义三个变量;
		//int a,b,c;
		//并同时给三个变量初始化;
		//a = b = c = 4;

		//int a = 4;
		//+=就是将左右两边的和赋予左边;
		//a+=2;//最底层的运算就是a = a + 2

		short  s = 3;
		s +=4;
		s = (short) (s + 4);

		System.out.println("s="+s );
	}
}
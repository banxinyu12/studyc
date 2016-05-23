class VarDemo2
{
	public static void main (String[] args)
	{
	         //自动类型提升
		//int x = 3;
		//byte b = 5;
		//x = x + b;

		//byte b = 3;
		//b = (byte) (b + 4);//强制类型转换.



		//System.out.println((char) ('b'+1));
		//System.out.println('A'+0);
		//System.out.println('0'+0);
		//System.out.println('你'+0);//unicode国际标准码表
		
		byte b = 4;
		//b = 3 + 7;
		byte b1 = 3;
		byte b2 = 7;

		//b2 = 127;
		//b = b1 + b2;//右边不确定是无法赋值的可能丢失精度

		int x;
		//x = b1 + b2;
		int x1= Integer.MAX_VALUE;
		int x2 = 2;
		x = x1 + x2;
		
		

		System.out.println(x);
	}


}

class TypeCast
	{
		public static void main(String arr[])
		{
			byte b;
			int i = 259;
			double d = 350.55;	
			b = (byte) i;
			System.out.println("Value of int to byte conversion " + b);
b = (byte) d;
		System.out.println("Value of double to byte conversion " + b);
		
		i = (int) d;
		System.out.println("Value of double to int conversion " + i);
		
	}
} 

package com.xiaolong.java;

public class Flag
{
	public static void main(String[] args)
	{
		for(int i = 0; i < 6; i++)
		{
			for(int j = 0; j < 14; j++)
			{
				if( i <= 5)
				{
					System.out.print("*");
				}	
			}
			for(int j = 0; j < 25; j++)
			{
				System.out.print(".");
			}
			System.out.println();
		}
		for(int i = 0; i < 6; i++)
		{
			for(int j = 0; j < 39; j++)
			{
				System.out.print(".");
			}
			System.out.println();
		}
	}

}

package com.xiaolong.java;

public class TimeClock
{
	public static void main(String[] agrs)
	{
		for(int i = 5; i > 0; i--)
		{
			for(int j = 5; j > i; j--)
			{
				System.out.print(" ");
			}
			for(int j = 0; j < 2 * i + 1 ; j++)
			{
				System.out.print("*");
			}
			System.out.println();
		}
		for(int i = 0; i <= 5; i++)
		{
			for(int j = 5; j > i; j--)
			{
				System.out.print(" ");
			}
			for(int j = 0; j < 2 * i + 1 ; j++)
			{
				System.out.print("*");
			}
			System.out.println();
		}		
	}
}

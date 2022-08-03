class Bitwise
{
	public int OnBit(int iNo)
	{
		int iMask=0X0000000F;
		int iResult=0;
		
		iResult = iNo | iMask;
		
		return iResult;
	}
}	
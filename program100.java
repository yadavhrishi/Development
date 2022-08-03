class Bitwise
{
	public int OffBit(int iNo)
	{
		int iMask=0X00000240;
		int iResult=0;
		
		iResult = iNo ^ iMask;
		
		return iResult;
	}
}
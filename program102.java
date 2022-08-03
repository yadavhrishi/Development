class Bitwise
{
	public int ToggleBit(int iNo)
	{
		int iMask=0X00000001;
		int iResult=0;
		
		iMask = iMask<<(6);
		iResult = iNo^iMask;
		
		iMask = iMask<<(3);
		iResult = iNo^iMask;
		
		return iResult;
	}	
}
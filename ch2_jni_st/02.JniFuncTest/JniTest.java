class JniTest
{
	private int intField;
	
	public JniTest(int num)
	{
		intField = num;
		System.out.println("[Java] JniTest_Object_Constructor() : " + intField);
	}
	
	public int callByNative(int num)
	{
		System.out.println("[Java] JniTest_Object_callByNative() : " + num);
		return num;
	}
	
	public void callTest()
	{
		System.out.println("[Java] JniTest_Object_callTest() : intField=" + intField);
	}
}
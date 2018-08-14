package com.soo.jnifunc;

import android.util.Log;

class JniTest
{
	private int intField;
	
	public JniTest(int num)
	{
		intField = num;
		Log.d("SOO", "[Java] JniTest_Object_Constructor() : " + intField);
	}
	
	public int callByNative(int num)
	{
		Log.d("SOO", "[Java] JniTest_Object_callByNative() : " + num);
		return num;
	}
	
	public void callTest()
	{
		Log.d("SOO", "[Java] JniTest_Object_callTest() : intField=" + intField);
	}
}
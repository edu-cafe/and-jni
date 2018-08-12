class JniFuncMain 
{
	private static int staticIntField = 300;
	
	static { 
		//System.loadLibraray("jnifunc");
		System.load("/work/JniTest/02.JniFuncTest/jnifunc.so");
	}
	
	..................
	
	public static void main(String[] args)
	{
		System.out.println("[Java] createJniObject() native method call..");
		JniTest jniObj = createJniObject();
		
		jniObj.callTest();
	}
}

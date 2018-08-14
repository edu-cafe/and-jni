package com.soo.addjni;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity implements View.OnClickListener {

    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("native-lib");
    }
    TextView tv;
    EditText et1;
    EditText et2;

    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        tv=(TextView)findViewById(R.id.result);
        et1 = (EditText)findViewById(R.id.firstfield);
        et2 = (EditText)findViewById(R.id.secondfield);

        Button btn = (Button) findViewById(R.id.add);
        btn.setOnClickListener(this);
    }

    @Override
    public void onClick(View v) {
        // TODO Auto-generated method stub
        String first = et1.getText().toString();
        String second = et2.getText().toString();
        int num1 = Integer.decode(first);
        int num2 = Integer.decode(second);

        tv.setText("" + add(num1, num2));
    }

    public int add(int a, int b)
    {
        return addJNI(a,b);
    }
    private native int addJNI(int first, int second);

}

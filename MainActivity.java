#MainActivity.java

package com.example.shubham.osnameversion;

import android.os.Build;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.widget.TextView;
import android.system.Os;

public class MainActivity extends AppCompatActivity {
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        TextView t =(TextView)findViewById(R.id.osdetails);
        t.setText("All System Information:");
        t.append("\n\t\t\tOperating System Version: " + System.getenv("os.version"));
        t.append("\n\t\t\tOperating System Name: " + System.getProperty("os.name"));
        t.append("\n\t\t\tSystem Architecture: " + System.getProperty("os.arch"));
        t.append("\n\t\t\tManufacturer: "+Build.MANUFACTURER);
        t.append("\n\t\t\tDevice: "+Build.DEVICE);
        t.append("\n\t\t\tModel: "+Build.MODEL);
        t.append("\n\t\t\tSerial No: "+Build.SERIAL);
        t.append("\n\t\t\tMother Board: "+Build.BOARD);
        t.append("\n\t\t\tHost: "+Build.HOST);
    }
}

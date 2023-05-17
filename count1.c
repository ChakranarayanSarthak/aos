/*Program for  count lines, words, chars simulation
  count w filename
  count c filename
  count l filename
*/
#include <stdio.h>
#include <string.h>

int count( char fname[], char option);

int main(int argc, char *argv[])

{
	char fname[20];
	char option;
      	if( argc != 4 )
	{
		printf("Invalid no of arguments");
		
	}
	option = *argv[2];

	strcpy(fname,argv[3]);

	count(fname, option);
       
} 
int count( char fname[], char option)
{
	long ccnt, wcnt,lcnt;
	FILE  *fp;

	long lflag,wflag;
	int ch;

	fp = fopen(fname,"r");
	if( fp == NULL )
	{
		printf("\nFile does not exist ");
		
		
	}
	ccnt = wcnt = lcnt = 0;
	lflag = wflag = 1;
	ch = fgetc(fp);
	while( ch != EOF )
	{
		ccnt++;
		if( ch == ' ' || ch == '\t')
		{
			lflag = 0;
			if( wflag == 0 )
			{
				wcnt++;
				wflag = 1;
			}
		}
		else
		if( ch == 10 )//enter
		{
			ccnt++;
			lcnt++;
			lflag = 1;
			if( wflag == 0 )
			{
				wcnt++;
				wflag = 1;
			}
		}
		else  
		{
			wflag = 0;
			lflag = 0;
		}
		ch = fgetc(fp);
	} 
	if( wflag == 0 )
		wcnt++;
	if( lflag == 0 )
		lcnt++;
	switch(option)
	{
		case 'c' :printf("\n char count  = %ld\n",ccnt);
				  break;
		case 'w' :printf("\n word count  = %ld\n",wcnt);
					break;
		case 'l' :printf("\n line count  = %ld\n",lcnt);
	} 
} 

/*

output-

 gcc count.c gcc count.c

rbnb@rbnb-OptiPlex-3010:~$ ./a.out count l temp.c
 line count  = 10
 
rbnb@rbnb-OptiPlex-3010:~$ ./a.out count w temp.c
 word count  = 11
 
rbnb@rbnb-OptiPlex-3010:~$ ./a.out count c temp.c
 char count  = 133
*/




************************************************************************************





//write a c prog to create variable lenghth arrays using alloca() system call



#include <stdio.h>
#include <stdlib.h>
#include <alloca.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int *arr = alloca(n * sizeof(int));

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


/*output-

rbnb@rbnb-OptiPlex-3010:~$ gedit slip11.c
rbnb@rbnb-OptiPlex-3010:~$ ./a.out

rbnb@rbnb-OptiPlex-3010:~$ gcc slip11.c
rbnb@rbnb-OptiPlex-3010:~$ ./a.out

Enter the size of the array: 3
Enter 3 elements:
333
11
555
The array is:
333 11 555 
*/


**************************************************************
/*

package com.example.login;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity
{
   Button b1;
   EditText t1,t2;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        b1=(Button)findViewById(R.id.button);
        t1=(EditText)findViewById(R.id.t1);
        t2=(EditText)findViewById(R.id.t2);
        b1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if (t1.getText().toString().equals("kalyani") && t2.getText().toString().equals("zine"))
                {
                    Toast.makeText(getApplicationContext(),"Login successfully",Toast.LENGTH_SHORT).show();
                }
                else
                {
                    Toast.makeText(getApplicationContext(),"login Invalid",Toast.LENGTH_SHORT).show();
                }
            }
        });
    }
}




*/


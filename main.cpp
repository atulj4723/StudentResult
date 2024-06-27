

#include<iostream>

#include"student.h"



int main()

{

	student s1;

	int ch=0;

	do

	{

		cout<<"\n\n***************STUDENT*RECORD*MANAGEMENT*SYSTEM***************";

		cout<<"\n\n1. INPUT";

		cout<<"\n\n2. DISPLAY";

		cout<<"\n\n3. EXIT FROM SYSTEM";

		cout<<"\n\nENTER YOUR CHOICE : - ";

		cin>>ch;

		

		switch(ch)

		{

			case 1:

				s1.input();

				s1.evaluation();

				s1.sgpa_calculating();

				s1.grade_finalizing();

				break;

			

			case 2:

				s1.display();

				break;

			

			case 3:

				cout<<"\n\n******************THANK*YOU!!!!*******************";	

				break;

				

			default:

				cout<<"\n\nEnter Correct Choice!!!";

			

		}

		

		

	}while(ch!=3);

	

	return 0;

}


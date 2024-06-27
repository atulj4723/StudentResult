// Developer Name: Atul mohan Jadhav

// Roll No: 64

// Problem Statement:

// Version: V2.0

// Batch: S3



#include<iostream>

using namespace std;



class student

{

	private:

		long long int student_prn_number;

		string student_name[3];

		// add record as per SY sem III marksheet

		string student_mother_name;

		int student_exam_seat_number;

		int applied_mathematics_total_marks;

		int discrete_mathematics_structures_total_marks;

		int data_structures_total_marks;

		int computer_networks_i_total_marks;

		int micrprocessors_total_marks;

		int c_programming_total_marks;

		int soft_skills_total_marks;

		string result;

		float student_percentage;

		string grade;

		float sgpa_score;

		

		//data member for grade & CGPA

		//1. Grade								(grade)			{string}

		//2. Semester Grade Point Average Score (sgpa_score) 	{float}

		

	public:

		

		student() // <- Default constructor

		{

			// All Data member should declare their initial value one example define below

			student_prn_number=0;

			student_mother_name="";

			student_exam_seat_number=0;

			applied_mathematics_total_marks=0;

			discrete_mathematics_structures_total_marks=0;

			data_structures_total_marks=0;

		 	computer_networks_i_total_marks=0;

			micrprocessors_total_marks=0;

			c_programming_total_marks=0;

			soft_skills_total_marks=0;

			result="";

			student_percentage=0;

		//	grade="";

			//sgpa_score=0;

		}

		

		void input()

		{

			cout<<"\n\n--------------------STUDENT-RECORD--------------------";

			cout<<"\nEnter Student PRN Number [10 Digit] : - ";

			cin>>student_prn_number;

			student_prn_number=long_long_int_validate(student_prn_number,999999999,10000000000);

			cout<<"\nEnter Student Name [SURNAME: UPPER CASE]: - ";

			cin>>student_name[0];

			student_name[0]=string_validate(student_name[0]);

			cout<<"\nEnter Student Name [FIRSTNAME: CAPITAL LETTER]: - ";

			cin>>student_name[1];

			student_name[1]=string_validate(student_name[1]);

			cout<<"\nEnter Student Name [LASTNAME: CAPITAL LETTER]: - ";

			cin>>student_name[2];

			student_name[2]=string_validate(student_name[2]);

			// Input record as per as per SY sem III marksheet

			cout<<"\nEnter Student Mother Name [Only NAME: CAPITAL LETTER] : - ";

			cin>>student_mother_name;

			student_mother_name=string_validate(student_mother_name);

			cout<<"\nEnter Student Exam Seat Number [4 Digit] : - ";

			cin>>student_exam_seat_number;

			student_exam_seat_number=int_validate(student_exam_seat_number,999,10000);

			cout<<"\nEnter Applied Mathematics Total Marks [ Range: 0-125 | Pass:50 ] : - ";

			cin>>applied_mathematics_total_marks;

			applied_mathematics_total_marks=int_validate(applied_mathematics_total_marks,0,125);

			cout<<"\nEnter Discrete Mathematics Structures Total Marks [ Range: 0-125 | Pass:50 ] : - ";

			cin>>discrete_mathematics_structures_total_marks;

			discrete_mathematics_structures_total_marks=int_validate(discrete_mathematics_structures_total_marks,0,125);

			cout<<"\nEnter Data Structures Total Marks [ Range: 0-100 | Pass:40 ] : - ";

			cin>>data_structures_total_marks;

			data_structures_total_marks=int_validate(data_structures_total_marks,0,100);

			cout<<"\nEnter Computer Networks I Total Marks [ Range: 0-175 | Pass:70 ] : - ";

			cin>>computer_networks_i_total_marks;

			computer_networks_i_total_marks=int_validate(computer_networks_i_total_marks,0,175);

			cout<<"\nEnter Micrprocessors Total Marks [ Range: 0-125 | Pass:50 ] : - ";

			cin>>micrprocessors_total_marks;

			micrprocessors_total_marks=int_validate(micrprocessors_total_marks,0,125);

			cout<<"\nEnter C Programming Total Marks [ Range: 0-100 | Pass:40 ] : - ";

			cin>>c_programming_total_marks;

			c_programming_total_marks=int_validate(c_programming_total_marks,0,100);

			cout<<"\nEnter Soft Skills Total Marks [ Range: 0-50 | Pass:20 ] : - ";

			cin>>soft_skills_total_marks;

			soft_skills_total_marks=int_validate(soft_skills_total_marks,0,50);

			cout<<"\n\n-----------------------------------------------------";

			

		}

		

		

		void display()

		{

			cout<<"\n\n-------------------STUDENT-RECORD--------------------";

			cout<<"\n\n-------------------------------------------------------------------------------------";

			cout<<"\n\n | \tOnline Marks Statement of B. Tech. (CBCS) Part-II Sem 3 NOV/DEC 2023";

			cout<<"\n\n | Student PRN Number : - \t\t\t\t|"<<student_prn_number;

			cout<<"\n\n | Student Name : - \t\t\t\t\t|"<<student_name[0]<<" "<<student_name[1]<<" "<<" "<<student_name[2];

			// display record as per as per SY sem III marksheet

			cout<<"\n\n | Student Mother Name : - \t\t\t\t|"<<student_mother_name;

			cout<<"\n\n | Seat Number : - \t\t\t\t\t|"<<student_exam_seat_number;

			cout<<"\n\n | \tCollege Name : - D. Y. Patil Technical Campus, Faculty of Engineering & Faculty of Management, Talsande";

			cout<<"\n\n | \tExam Center : - DTC";

			cout<<"\n\n | Applied Mathematics Total Marks : - \t\t\t|"<<applied_mathematics_total_marks;

			cout<<"\n\n | Discrete Mathematics Structures Total Marks : - \t|"<<discrete_mathematics_structures_total_marks;

			cout<<"\n\n | Data Structures Total Marks : - \t\t\t|"<<data_structures_total_marks;

			cout<<"\n\n | Computer Networks I Total Marks : - \t\t\t|"<<computer_networks_i_total_marks;

			cout<<"\n\n | Micrprocessors Total Marks : - \t\t\t|"<<micrprocessors_total_marks;

			cout<<"\n\n | C Programming Total Marks : - \t\t\t|"<<c_programming_total_marks;

			cout<<"\n\n | Soft Skills Total Marks : - \t\t\t\t|"<<soft_skills_total_marks;

			cout<<"\n\n | Percentage : - \t\t\t\t\t|"<<student_percentage<<"   <------";

			cout<<"\n\n | Result : - \t\t\t\t\t\t|"<<result<<"   <------";

			cout<<"\n\n | Grade : - \t\t\t\t\t\t|"<<grade<<"   <------";

			cout<<"\n\n | SGPA score : - \t\t\t\t\t\t|"<<sgpa_score<<"   <------";

			// display grade & sgpa score

			

			cout<<"\n\n------------------------------------------------------------------------------------";

			cout<<"\n\n-----------------------------------------------------";

		}

		

		void evaluation()

		{

			// write process to calculation of percentage

			

			float total_marks=applied_mathematics_total_marks+discrete_mathematics_structures_total_marks+data_structures_total_marks+computer_networks_i_total_marks+micrprocessors_total_marks+c_programming_total_marks+soft_skills_total_marks;

			

			student_percentage=(total_marks*100)/800;

			

			int pass_subject_count=0;

			

			if(applied_mathematics_total_marks >= ((125*40)/100))

				pass_subject_count=pass_subject_count+1;

			

			if(discrete_mathematics_structures_total_marks >= ((125*40)/100))

				pass_subject_count=pass_subject_count+1;

			

			if(data_structures_total_marks >= ((100*40)/100))

				pass_subject_count=pass_subject_count+1;

			

			if(computer_networks_i_total_marks >= ((175*40)/100))

				pass_subject_count=pass_subject_count+1;

			

			if(micrprocessors_total_marks >= ((125*40)/100))

				pass_subject_count=pass_subject_count+1;

			

			if(c_programming_total_marks >= ((100*40)/100))

				pass_subject_count=pass_subject_count+1;

			

			if(soft_skills_total_marks >= ((50*40)/100))

				pass_subject_count=pass_subject_count+1;

				

			if(pass_subject_count==7)

			{

				result="PASS";

			}

			else if(pass_subject_count<7 && pass_subject_count>3)

			{

				result="ATKT";

			}

			else

			{

				result="FAIL";

			}

			

						

			

		}

		

		void sgpa_calculating()

		{

			float applied_mathematics_percentage=0.0;

			float discrete_mathematics_structures_percentage=0.0;

			float data_structures_percentage=0.0;

			float c_programming_percentage=0.0;

			float soft_skills_percentage=0.0;

			float microprocessor_percentage=0.0;

			float computer_network_i_percentage=0.0;

			float applied_mathematics_grade_point=0.0;

			float discrete_mathematics_structures_grade_point=0.0;

			float data_structures_grade_point=0.0;

			float c_programming_grade_point=0.0;

			float soft_skills_grade_point=0.0;

			float microprocessor_grade_point=0.0;

			float computer_network_i_grade_point=0.0;

			// Subject Credit

			//1. Applied Mathematics 					(4)

			//2. Discrete Mathematics & Structures 		(4)

			//3. Data Structures 						(3)

			//4. Computer Networks - I 					(4)

			//5. Microprocessors 						(4)

			//6. C programming 							(5)

			//7. Soft Skills 							(1)

			

			// Grade Point

			//1. 80% - 100% 			{10}

			//2. 70% - 79% 				{9}

			//3. 60% - 69% 				{8}

			//4. 55% - 59% 				{7}

			//5. 50% - 54% 				{6}

			//6. 45% - 49% 				{5}

			//7. 40% - 44% 				{4}

			//8. less than 40% 			{0}

			

			// write a code for calculating SGPA score

			

			// Subject passing percentage = (subject obtained mark / subject total mark) * 100

			applied_mathematics_percentage=(applied_mathematics_total_marks*100)/125;

			discrete_mathematics_structures_percentage=(discrete_mathematics_structures_total_marks*100)/125;

			data_structures_percentage=(data_structures_total_marks*100)/100;

			computer_network_i_percentage=(computer_networks_i_total_marks*100)/175;

			microprocessor_percentage=(micrprocessors_total_marks*100)/125;

			soft_skills_percentage=(soft_skills_total_marks*100)/50;

			c_programming_percentage=(c_programming_total_marks*100)/100;

			

			// subject grade point = Applicable grade point for subject with respect subject passing percentage (0 to 10) * subject credit

			if(applied_mathematics_percentage>=80 && applied_mathematics_percentage<=100 )

			{

			applied_mathematics_grade_point=10;

			}

			else if(applied_mathematics_percentage>=70 && applied_mathematics_percentage<=79 )

			{

			applied_mathematics_grade_point=9;

			}

			else if(applied_mathematics_percentage>=60 && applied_mathematics_percentage<=69)

			{

			applied_mathematics_grade_point=8;

			}

			else if(applied_mathematics_percentage>=55 && applied_mathematics_percentage<=59 )

			{

			applied_mathematics_grade_point=7;

			}

			else if(applied_mathematics_percentage>=50 && applied_mathematics_percentage<=54 )

			{

			applied_mathematics_grade_point=6;

			}

			else if(applied_mathematics_percentage>=45 && applied_mathematics_percentage<=49)

			{

			applied_mathematics_grade_point=5;

			}

			else if(applied_mathematics_percentage>=40 && applied_mathematics_percentage<=44)

			{

			applied_mathematics_grade_point=4;

			}

			else if(applied_mathematics_percentage<40)

			{

			applied_mathematics_grade_point=0;

			}

		    if(discrete_mathematics_structures_percentage>=80 && discrete_mathematics_structures_percentage<=100)

			{

			discrete_mathematics_structures_grade_point=10;

			}

			else if(discrete_mathematics_structures_percentage>=70 && discrete_mathematics_structures_percentage<=79 )

			{

			discrete_mathematics_structures_grade_point=9;

			}

			else if(discrete_mathematics_structures_percentage>=60 && discrete_mathematics_structures_percentage<=69)

			{

			discrete_mathematics_structures_grade_point=8;

			}

			else if(discrete_mathematics_structures_percentage>=55 && discrete_mathematics_structures_percentage<=59)

			{

			discrete_mathematics_structures_grade_point=7;

			}

			else if(discrete_mathematics_structures_percentage>=50 && discrete_mathematics_structures_percentage<=54)

			{

			discrete_mathematics_structures_grade_point=6;

			}

			else if(discrete_mathematics_structures_percentage>=45 && discrete_mathematics_structures_percentage<=49)

			{

			discrete_mathematics_structures_grade_point=5;

			}

			else if(discrete_mathematics_structures_percentage>=40 && discrete_mathematics_structures_percentage<=44)

			{

			discrete_mathematics_structures_grade_point=4;

			}

			else if(discrete_mathematics_structures_percentage<40 )

			{

			discrete_mathematics_structures_grade_point=0;

			}

			 if(data_structures_percentage>=80 && data_structures_percentage<=100 )

			{

			data_structures_grade_point=10;

			}

			else if(data_structures_percentage>=70 && data_structures_percentage<=79 )

			{

			data_structures_grade_point=9;

			}

			else if(data_structures_percentage>=60 && data_structures_percentage<=69)

			{

			data_structures_grade_point=8;

			}

			else if(data_structures_percentage>=55 && data_structures_percentage<=59 )

			{

			data_structures_grade_point=7;

			}

			else if(data_structures_percentage>=50 && data_structures_percentage<=54)

			{

			data_structures_grade_point=6;

			}

			else if(data_structures_percentage>=45 && data_structures_percentage<=49)

			{

			data_structures_grade_point=5;

			}

			else if(data_structures_percentage>=40 && data_structures_percentage<=44)

			{

			data_structures_grade_point=4;

			}

			else if(data_structures_percentage<40 )

			{

			data_structures_grade_point=0;

			}

			if(c_programming_percentage>=80 && c_programming_percentage<=100  )

			{

			c_programming_grade_point=10;

			}

			else if(c_programming_percentage>=70 && c_programming_percentage<=79 )

			{

			c_programming_grade_point=9;

			}

			else if(c_programming_percentage>=60 && c_programming_percentage<=69)

			{

			c_programming_grade_point=8;

			}

			else if(c_programming_percentage>=55 && c_programming_percentage<=59)

			{

			c_programming_grade_point=7;

			}

			else if(c_programming_percentage>=50 && c_programming_percentage<=54)

			{

			c_programming_grade_point=6;

			}

			else if(c_programming_percentage>=45 && c_programming_percentage<=49)

			{

			c_programming_grade_point=5;

			}

			else if(c_programming_percentage>=40 && c_programming_percentage<=44)

			{

			c_programming_grade_point=4;

			}

			else if(c_programming_percentage<40 )

			{

			c_programming_grade_point=0;

			}

			if(soft_skills_percentage>=80 && soft_skills_percentage<=100 )

			{

			soft_skills_grade_point=10;

			}

			else if(soft_skills_percentage>=70 && soft_skills_percentage<=79)

			{

			soft_skills_grade_point=9;

			}

			else if(soft_skills_percentage>=60 && soft_skills_percentage<=69)

			{

			soft_skills_grade_point=8;

			}

			else if(soft_skills_percentage>=55 && soft_skills_percentage<=59)

			{

			soft_skills_grade_point=7;

			}

			else if(soft_skills_percentage>=50 && soft_skills_percentage<=54)

			{

			soft_skills_grade_point=6;

			}

			else if(soft_skills_percentage>=45 && soft_skills_percentage<=49)

			{

			soft_skills_grade_point=5;

			}

			else if(soft_skills_percentage>=40 && soft_skills_percentage<=44)

			{

			soft_skills_grade_point=4;

			}

			else if(soft_skills_percentage<40 )

			{

			soft_skills_grade_point=0;

			}

			if(microprocessor_percentage>=80 && microprocessor_percentage<=100)

			{

			microprocessor_grade_point=10;

			}

			else if(microprocessor_percentage>=70 && microprocessor_percentage<=79)

			{

			microprocessor_grade_point=9;

			}

			else if(microprocessor_percentage>=60 && microprocessor_percentage<=69)

			{

			microprocessor_grade_point=8;

			}

			else if(microprocessor_percentage>=55 && microprocessor_percentage<=59)

			{

			microprocessor_grade_point=7;

			}

			else if(microprocessor_percentage>=50 && microprocessor_percentage<=54)

			{

			microprocessor_grade_point=6;

			}

			else if(microprocessor_percentage>=45 && microprocessor_percentage<=49)

			{

			microprocessor_grade_point=5;

			}

			else if(microprocessor_percentage>=40 && microprocessor_percentage<=44)

			{

			microprocessor_grade_point=4;

			}

			else if(microprocessor_percentage<40 )

			{

			microprocessor_grade_point=0;

			}

			if(computer_network_i_percentage>=80 && computer_network_i_percentage<=100 )

			{

			computer_network_i_grade_point=10;

			}

			else if(computer_network_i_percentage>=70 && computer_network_i_percentage<=79)

			{

			computer_network_i_grade_point=9;

			}

			else if(computer_network_i_percentage>=60 && computer_network_i_percentage<=69)

			{

			computer_network_i_grade_point=8;

			}

			else if(computer_network_i_percentage>=55 && computer_network_i_percentage<=59)

			{

			computer_network_i_grade_point=7;

			}

			else if(computer_network_i_percentage>=50 && computer_network_i_percentage<=54)

			{

			computer_network_i_grade_point=6;

			}

			else if(computer_network_i_percentage>=45 && computer_network_i_percentage<=49)

			{

			computer_network_i_grade_point=5;

			}else if(computer_network_i_percentage>=40 && computer_network_i_percentage<=44)

			{

			computer_network_i_grade_point=4;

			}

			else if(computer_network_i_percentage<40 )

			{

			computer_network_i_grade_point=0;

			}

			// SGPA score = (Sum of all subject grade Points) / total subject credit

			sgpa_score=(applied_mathematics_grade_point*4+discrete_mathematics_structures_grade_point*4+data_structures_grade_point*3+c_programming_grade_point*5+soft_skills_grade_point*1+microprocessor_grade_point*4+computer_network_i_grade_point*4)/25;

		}		

		

		void grade_finalizing()

		{

			// write a code for finalizing grade with respective sgpa_score

			// 1. Outstanding 	{O} 	[9.50-10.00]

			// 2. Excellent 	{A+} 	[8.86-9.49]

			// 3. Very Good 	{A} 	[7.86-8.85]

			// 4. Good 			{B+} 	[6.86-7.85]

			// 5. Above average {B} 	[5.86-6.85]

			// 6. Average 		{C} 	[4.86-5.85]

			// 7. Pass 			{P} 	[4.00-4.85]

			// 8. Fail 			{F} 	[0.00-3.99]

			

			if (sgpa_score>=9.5)

			{	

			grade="O";	

			}

			else if (sgpa_score>=8.86)

			{	

			grade="A+";	

			}

			else if (sgpa_score>=7.86)

			{	

			grade="A";	

			}

			else if (sgpa_score>=6.86)

			{	

			grade="B+";	

			}

			else if (sgpa_score>=5.86)

			{	

			grade="B";	

			}

			else if (sgpa_score>=4.86)

			{	

			grade="C";	

			}

			else if (sgpa_score>=4.00)

			{	

			grade="P";	

			}

			else 

			{	

			grade="F";	

			}

		}

			

		int int_validate(int input,int lower,int upper)

		{

			int flag=0;

			do{

				

				if( (input>=lower) && (input<=upper) )

				{

					flag=1;

					return input;

				}

				else{

					cout<<"\n\n Wrong Input !!! \n\nEnter Correct Value : - ";

					cin.clear();

					fflush(stdin);

					cin>>input;

				}

			}while(flag!=1);
return input;
		}

		

		long long int long_long_int_validate(long long int input,long long int lower, long long int upper)

		{

			int flag=0;

			do{

				

				if( (input>=lower) && (input<=upper) )

				{

					flag=1;

					return input;

				}

				else{

					cout<<"\n\n Wrong Input !!! \n\nEnter Correct Value : - ";

					cin.clear();

					fflush(stdin);

					cin>>input;

				}

			}while(flag!=1);
return input;
		}

		

		string string_validate(string input)

		{

					

			do{

				int flag=0;

				for(int i=0;i<input.length();i++)

				{

					if((int)input[i]<65 || (int)input[i]>90)

					{

						flag=flag+1;

						break;

					}

				}

				if(flag>0)

				{

					cout<<"\n\n Wrong Input !!! \n\nEnter Correct Value : - ";

					cin.clear();

					fflush(stdin);

					cin>>input;

				}

				else

				{

					return input;

					break;

				}

				

				

			}while(1);

			

		}

};

    
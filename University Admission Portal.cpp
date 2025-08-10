#include<iostream>
using namespace std;
class University
{
      private: 
	  int candidate,select;
	  public:
	  	void intro()
	  	{
	  		cout<<"\t\t\tWelcome to Minhaj Univeristy\n Minhaj University Lahore is a private university located in Lahore, Pakistan. It was established in 1986 and chartered by the Government of Punjab. The university offers a wide range of undergraduate, graduate, and doctoral programs in fields such as Computer Science, Management Sciences, Social Sciences, Islamic Studies, and more. With a focus on quality education, research, and character building, Minhaj University aims to prepare students for both academic and professional success.\n\n ";
	  	    cout<<"Admission Open Fall 2025\nLast Date to Apply 30 September,2025\n";
		  	cout<<"We are offer\n 1-Post Graduate Programs\n 2- Graduate Programs\n 3- Law Program\n 4- Doctoral Programs\n 5- Masters Programs\n 6- Phd Programs\n ";
	  		cin>>candidate;
	  		if(candidate == 1)
	  		{
	  			cout<<" 1- ADP AI\n 2- ADP ARTs\n 3- ADP Computer Science\n 4- ADP Cyber Security\n 5- ADP Business Administration\n 6- ADP Digital Marketing\n 7- ADP Education\n 8- ADP English\n 9- ADP Information & Technology\n 10- ADP Mathematics\n 11- ADP Islamiyat\n 12- ADP Software Engineering\n\n";
	  			cin>>select;
				  if(select == 1)
	  				{
	  			cout<<"1- ADP AI\n Eligibility  Intermediate (12 years of Education).  F.Sc / ICS/ICOM, A- Levels, DAE or equivalent.  Minimum 50% marks.  Interview  Students with FSC (Pre-Medical) are required to pass deficiency course of mathematics (6 credit hours) within one year.\n\nTotal Semesters: 4(2-years)\nPer Semester Fee: 168750 ";
	        		}
	        		else if(select == 2)
	  				{
	  			cout<<"2- ADP Arts\n Eligibility  Intermediate (12 years of Education).  F.Sc / ICS/ICOM, A- Levels, DAE or equivalent.  Minimum 50% marks.  Interview  Students with FSC (Pre-Medical) are required to pass deficiency course of mathematics (6 credit hours) within one year.\n\nTotal Semesters: 4(2-Years)\nPer Semester Fee: 63650 ";
	        		}
	        			else if(select == 3)
	  				{
	  			cout<<"3- ADP Computer  Science\n Eligibility  Intermediate (12 years of Education).  F.Sc / ICS/ICOM, A- Levels, DAE or equivalent.  Minimum 50% marks.  Interview  Students with FSC (Pre-Medical) are required to pass deficiency course of mathematics (6 credit hours) within one year.\n\nTotal Semesters: 4(2-Years)\nPer Semester Fee: 168750 ";
	        		}
	            	else if(select == 4)
	  				{
	  			cout<<"4- ADP Cyber Security\n Eligibility  Intermediate (12 years of Education).  F.Sc / ICS/ICOM, A- Levels, DAE or equivalent.  Minimum 50% marks.  Interview  Students with FSC (Pre-Medical) are required to pass deficiency course of mathematics (6 credit hours) within one year.\n\nTotal Semesters: 4(2-Years)\nPer Semester Fee: 145750 ";
	        		}
	        			else if(select == 5)
	  				{
	  			cout<<"5- ADP Business Administration\n Eligibility  Intermediate (12 years of Education).  F.Sc / ICS/ICOM, A- Levels, DAE or equivalent.  Minimum 50% marks.  Interview  Students with FSC (Pre-Medical) are required to pass deficiency course of mathematics (6 credit hours) within one year.\n\nTotal Semesters: 4(2-Years)\nPer Semester Fee: 168750 ";
	        		}
	        			else if(select == 6)
	  				{
	  			cout<<"6- ADP Digital Marketing\n Eligibility  Intermediate (12 years of Education).  F.Sc / ICS/ICOM, A- Levels, DAE or equivalent.  Minimum 50% marks.  Interview  Students with FSC (Pre-Medical) are required to pass deficiency course of mathematics (6 credit hours) within one year.\n\nTotal Semesters: 4(2-Years)\nPer Semester Fee: 130000 ";
	        		}
	        			else if(select == 7)
	  				{
	  			cout<<"7- ADP Education\n Eligibility  Intermediate (12 years of Education).  F.Sc / ICS/ICOM, A- Levels, DAE or equivalent.  Minimum 50% marks.  Interview  Students with FSC (Pre-Medical) are required to pass deficiency course of mathematics (6 credit hours) within one year.\n\nTotal Semesters: 4(2-Years)\nPer Semester Fee: 70000 ";
	        		}
	        			else if(select == 8)
	  				{
	  			cout<<"8- ADP English\n Eligibility  Intermediate (12 years of Education).  F.Sc / ICS/ICOM, A- Levels, DAE or equivalent.  Minimum 50% marks.  Interview  Students with FSC (Pre-Medical) are required to pass deficiency course of mathematics (6 credit hours) within one year.\n\nTotal Semesters: 4(2-Years)\nPer Semester Fee: 90000 ";
	        		}
	        			else if(select == 9)
	  				{
	  			cout<<"9- ADP Information & Technology \n Eligibility  Intermediate (12 years of Education).  F.Sc / ICS/ICOM, A- Levels, DAE or equivalent.  Minimum 50% marks.  Interview  Students with FSC (Pre-Medical) are required to pass deficiency course of mathematics (6 credit hours) within one year.\n\nTotal Semesters: 4(2-Years)\nPer Semester Fee: 168750 ";
	        		}
	        			else if(select == 10)
	  				{
	  			cout<<"10- ADP Mathematics\n Eligibility  Intermediate (12 years of Education).  F.Sc / ICS/ICOM, A- Levels, DAE or equivalent.  Minimum 50% marks.  Interview  Students with FSC (Pre-Medical) are required to pass deficiency course of mathematics (6 credit hours) within one year.\n\nTotal Semesters: 4(2-Years)\nPer Semester Fee: 85000 ";
	        		}
	        			else if(select == 11)
	  				{
	  			cout<<"11- ADP Islamiyats\n Eligibility  Intermediate (12 years of Education).  F.Sc / ICS/ICOM, A- Levels, DAE or equivalent.  Minimum 50% marks.  Interview  Students with FSC (Pre-Medical) are required to pass deficiency course of mathematics (6 credit hours) within one year.\n\nTotal Semesters: 4(2-Years)\nPer Semester Fee: 65000 ";
				  	}
				  		else if(select == 12)
	  				{
	  			cout<<"12- ADP Software Engineering\n Eligibility  Intermediate (12 years of Education).  F.Sc / ICS/ICOM, A- Levels, DAE or equivalent.  Minimum 50% marks.  Interview  Students with FSC (Pre-Medical) are required to pass deficiency course of mathematics (6 credit hours) within one year.\n\nTotal Semesters: 4(2-Years)\nPer Semester Fee: 168750 ";
	        		}
			}
			 if(candidate == 2)
			{
				cout<<"1- BS-Arificial Intelligence\n 2- BS Computer Science\n 3- BS Information & Technology\n 4- BS Cyber Security\n 5- BS English\n 6- BS Islamiyat\n 7- BS Mathematics\n 8- B.COM\n 9- BS Accounting & Finance\n 10- BS Data Science\n 11- BS Mass Communication\n 12- BS Multi-Arts & Animation\n 13- BBA\n 14- BS Chemical Engineering\n 15- BS Electrical Engineering\n 16- BS Mechanical Engineering\n 17- BS Software Engineering\n\n";
				cin>>select;
					 if(select == 1)
	  				{
	  			cout<<"1- BS Artificial Intelligence\n Eligibility  Intermediate (12 years of Education).  F.Sc / ICS/ICOM, A- Levels, DAE or equivalent.  Minimum 50% marks.  Interview  Students with FSC (Pre-Medical) are required to pass deficiency course of mathematics (6 credit hours) within one year.\n\nTotal Semesters:8(4-Years)\nPer Semester Fee: 170000 ";
				  	}
				  	else if(select == 2)
	  				{
	  			cout<<"2- BS Computer Science\n Eligibility  Intermediate (12 years of Education).  F.Sc / ICS/ICOM, A- Levels, DAE or equivalent.  Minimum 50% marks.  Interview  Students with FSC (Pre-Medical) are required to pass deficiency course of mathematics (6 credit hours) within one year.\n\nTotal Semesters:8(4-Years)\nPer Semester Fee: 170000 ";
				  	}
				  	else if(select == 3)
	  				{
	  			cout<<"3- BS Information & Technology \n Eligibility  Intermediate (12 years of Education).  F.Sc / ICS/ICOM, A- Levels, DAE or equivalent.  Minimum 50% marks.  Interview  Students with FSC (Pre-Medical) are required to pass deficiency course of mathematics (6 credit hours) within one year.\n\nTotal Semesters:8(4-Years)\nPer Semester Fee: 170000 ";
				  	}
				  	else if(select == 4)
	  				{
	  			cout<<"4- BS Cyber Security\n Eligibility  Intermediate (12 years of Education).  F.Sc / ICS/ICOM, A- Levels, DAE or equivalent.  Minimum 50% marks.  Interview  Students with FSC (Pre-Medical) are required to pass deficiency course of mathematics (6 credit hours) within one year.\n\nTotal Semesters:8(4-Years)\nPer Semester Fee: 170000 ";
				  	}
				  	else if(select == 5)
	  				{
	  			cout<<"5- BS English\n Eligibility  Intermediate (12 years of Education).  F.Sc / ICS/ICOM, A- Levels, DAE or equivalent.  Minimum 50% marks.  Interview  Students with FSC (Pre-Medical) are required to pass deficiency course of mathematics (6 credit hours) within one year.\n\nTotal Semesters:8(4-Years)\nPer Semester Fee: 145000 ";
				  	}
				  	else if(select == 6)
	  				{
	  			cout<<"6- BS Islamiyat\n Eligibility  Intermediate (12 years of Education).  F.Sc / ICS/ICOM, A- Levels, DAE or equivalent.  Minimum 50% marks.  Interview  Students with FSC (Pre-Medical) are required to pass deficiency course of mathematics (6 credit hours) within one year.\n\nTotal Semesters:8(4-Years)\nPer Semester Fee: 115000";
				  	}
				  	else if(select == 7)
	  				{
	  			cout<<"7- BS Matehmatics\n Eligibility  Intermediate (12 years of Education).  F.Sc / ICS/ICOM, A- Levels, DAE or equivalent.  Minimum 50% marks.  Interview  Students with FSC (Pre-Medical) are required to pass deficiency course of mathematics (6 credit hours) within one year.\n\nTotal Semesters:8(4-Years)\nPer Semester Fee: 135000 ";
				  	}
				  	else if(select == 8)
	  				{
	  			cout<<"8- B.COM\n Eligibility  Intermediate (12 years of Education).  F.Sc / ICS/ICOM, A- Levels, DAE or equivalent.  Minimum 50% marks.  Interview  Students with FSC (Pre-Medical) are required to pass deficiency course of mathematics (6 credit hours) within one year.\n\nTotal Semesters:8(4-Years)\nPer Semester Fee: 126000 ";
				  	}
				  	else if(select == 9)
	  				{
	  			cout<<"9- BS Accounting & Finance \n Eligibility  Intermediate (12 years of Education).  F.Sc / ICS/ICOM, A- Levels, DAE or equivalent.  Minimum 50% marks.  Interview  Students with FSC (Pre-Medical) are required to pass deficiency course of mathematics (6 credit hours) within one year.\n\nTotal Semesters:8(4-Years)\nPer Semester Fee: 155000 ";
				  	}
				  	else if(select == 10)
	  				{
	  			cout<<"10- BS Data Science\n Eligibility  Intermediate (12 years of Education).  F.Sc / ICS/ICOM, A- Levels, DAE or equivalent.  Minimum 50% marks.  Interview  Students with FSC (Pre-Medical) are required to pass deficiency course of mathematics (6 credit hours) within one year.\n\nTotal Semesters:8(4-Years)\nPer Semester Fee: 170000 ";
				  	}
				  	else if(select == 11)
	  				{
	  			cout<<"11- BS Mass Communication\n Eligibility  Intermediate (12 years of Education).  F.Sc / ICS/ICOM, A- Levels, DAE or equivalent.  Minimum 50% marks.  Interview  Students with FSC (Pre-Medical) are required to pass deficiency course of mathematics (6 credit hours) within one year.\n\nTotal Semesters:8(4-Years)\nPer Semester Fee: 167000 ";
				  	}
				  	else if(select == 12)
	  				{
	  			cout<<"12- BS Multi-Arts & Animations\n Eligibility  Intermediate (12 years of Education).  F.Sc / ICS/ICOM, A- Levels, DAE or equivalent.  Minimum 50% marks.  Interview  Students with FSC (Pre-Medical) are required to pass deficiency course of mathematics (6 credit hours) within one year.\n\nTotal Semesters:8(4-Years)\nPer Semester Fee: 170000 ";
				    }
				    else if(select == 13)
	  				{
	  			cout<<"13- BBA\n Eligibility  Intermediate (12 years of Education).  F.Sc / ICS/ICOM, A- Levels, DAE or equivalent.  Minimum 50% marks.  Interview  Students with FSC (Pre-Medical) are required to pass deficiency course of mathematics (6 credit hours) within one year.\n\nTotal Semesters:8(4-Years)\nPer Semester Fee: 145000 ";
				  	}
				  	else if(select == 14)
	  				{
	  			cout<<"14- BS Chemical Engineering\n Eligibility  Intermediate (12 years of Education).  F.Sc / ICS/ICOM, A- Levels, DAE or equivalent.  Minimum 50% marks.  Interview  Students with FSC (Pre-Medical) are required to pass deficiency course of mathematics (6 credit hours) within one year.\n\nTotal Semesters:8(4-Years)\nPer Semester Fee: 170000 ";
				  	}
				  	else if(select == 15)
	  				{
	  			cout<<"15- BS Electrical Engineering \n Eligibility  Intermediate (12 years of Education).  F.Sc / ICS/ICOM, A- Levels, DAE or equivalent.  Minimum 50% marks.  Interview  Students with FSC (Pre-Medical) are required to pass deficiency course of mathematics (6 credit hours) within one year.\n\nTotal Semesters:8(4-Years)\nPer Semester Fee: 170000 ";
				  	}
				  	else if(select == 16)
	  				{
	  			cout<<"16- BS Mechanical Engineering \n Eligibility  Intermediate (12 years of Education).  F.Sc / ICS/ICOM, A- Levels, DAE or equivalent.  Minimum 50% marks.  Interview  Students with FSC (Pre-Medical) are required to pass deficiency course of mathematics (6 credit hours) within one year.\n\nTotal Semesters:8(4-Years)\nPer Semester Fee: 170000 ";
				  	}
				  	else if(select == 17)
	  				{
	  			cout<<"17- BS Software Engineering\n Eligibility  Intermediate (12 years of Education).  F.Sc / ICS/ICOM, A- Levels, DAE or equivalent.  Minimum 50% marks.  Interview  Students with FSC (Pre-Medical) are required to pass deficiency course of mathematics (6 credit hours) within one year.\n\nTotal Semesters:8(4-Years)\nPer Semester Fee: 170000 ";
				  	}
	        }
		            if(candidate == 3)
	  				{
	  			cout<<"LLB \n Eligibility  Intermediate (12 years of Education).  F.Sc / ICS/ICOM, A- Levels, DAE or equivalent.  Minimum 50% marks.  Interview  Students with FSC (Pre-Medical) are required to pass deficiency course of mathematics (6 credit hours) within one year.\n\nTotal Semesters:8(4-Years)\nPer Semester Fee: 175000 ";
				  	}
				if(candidate == 4)
				  	{
				  		cout<<"1- BS Nutritions\n 2- BS Biochemistry\n 3- BS Biology\n 4- BS Food Sciences\n 5- BS Physiology\n 6- D-Pharmacy \n7- BS Zoology\n 8- BS Botany\n ";
				  		cin>>select;
				  
				   if(select == 1)
	  				{
	  			cout<<"1- BS Nutritions\n Eligibility  Intermediate (12 years of Education).  F.Sc/A- Levels.  Minimum 70% marks.  Interview  Students with FSC (Pre-Medical) are required.\n\nTotal Semesters:8(4-Years)\nPer Semester Fee: 210000 ";
				  	}
				  		else if(select == 2)
	  				{
	  			cout<<"2- BS Biochemistry\n Eligibility  Intermediate (12 years of Education).  F.Sc/A- Level.  Minimum 70% marks.  Interview  Students with FSC (Pre-Medical) are required.\n\nTotal Semesters:8(4-Years)\nPer Semester Fee: 210000 ";
				  	}
				  		else if(select == 3)
	  				{
	  			cout<<"3- BS Biology\n Eligibility  Intermediate (12 years of Education).  F.Sc/A- Levels.  Minimum 70% marks.  Interview  Students with FSC (Pre-Medical) are required.\n\nTotal Semesters:8(4-Years)\nPer Semester Fee: 210000 ";
				  	}
				  		else if(select == 4)
	  				{
	  			cout<<"4- BS Food Sciences\n Eligibility  Intermediate (12 years of Education).  F.Sc/A- Levels.  Minimum 70% marks.  Interview  Students with FSC (Pre-Medical) are required.\n\nTotal Semesters:8(4-Years)\nPer Semester Fee: 210000 ";
				  	}
				  		else if(select == 5)
	  				{
	  			cout<<"5- BS Physiology\n Eligibility  Intermediate (12 years of Education).  F.Sc/A- Levels.  Minimum 70% marks.  Interview  Students with FSC (Pre-Medical) are required.\n\nTotal Semesters:8(4-Years)\nPer Semester Fee: 210000 ";
				  	}
				  		else if(select == 6)
	  				{
	  			cout<<"6- D-Pharmacy \n Eligibility  Intermediate (12 years of Education).  F.Sc/A- Levels.  Minimum 70% marks.  Interview  Students with FSC (Pre-Medical) are required.\n\nTotal Semesters:10(5-Years)\nPer Semester Fee: 225000 ";
				  	}
				  		else if(select == 7)
	  				{
	  			cout<<"7- BS Zoology\n Eligibility  Intermediate (12 years of Education).  F.Sc/A- Levels.  Minimum 70% marks.  Interview  Students with FSC (Pre-Medical) are required.\n\nTotal Semesters:8(4-Years)\nPer Semester Fee: 210000 ";
				  	}
				  		else if(select == 8)
	  				{
	  			cout<<"8- BS Botany\n Eligibility  Intermediate (12 years of Education).  F.Sc/A- Levels.  Minimum 70% marks.  Interview  Students with FSC (Pre-Medical) are required.\n\nTotal Semesters:8(4-Years)\nPer Semester Fee: 210000 ";
				  	}
		            }
		        if(candidate == 5)
		        {
		        	cout<<"1- M.Phil Accounting & Finance\n 2- M.Phil Botany\n 3- M.Phil Chemistry\n 4- M.Phil Physics\n 5- M.Phil Criminology\n 6- M.Phil Islamiyat\n 7- M.Phil Urdu\n 8- M.phil English\n 9- M.Phil Mathematics\n 10- MS Data science\ 11- MS Computer Science\n 12- MS Data Analytics\n 13- MS Software Engineering";
		        	cin>>select;
		        	if(select == 1)
		        	{
		        		cout<<"1- M.Phil Accounting & Finance \nEligibility 16 Years of Education or Equivalent from HEC recognized University/Institute. • BS/MA/MSC in (Acct & finance/Commerce, Economics & BBA) or equivalent. • Minimum 50% Marks or 2.50/4.00 CGPA. • Interview • Minimum 50% Marks in GAT / NTS (General) or 60% marks in MAT (Minhaj Aptitude test).Total semesters 4(2-Years)\n Per Semester Fee: 126000";
					}
					else if(select == 2)
		        	{
		        		cout<<"2- M.Phil Botany \nEligibility 16 Years of Education or Equivalent from HEC recognized University/Institute. • BS/MA/MSC in (Botany) or equivalent. • Minimum 50% Marks or 2.50/4.00 CGPA. • Interview • Minimum 50% Marks in GAT / NTS (General) or 60% marks in MAT (Minhaj Aptitude test).Total semesters 4(2-Years)\n Per Semester Fee: 145000";
					}
						else if(select == 3)
		        	{
		        		cout<<"3- M.Phil Chemistry \nEligibility 16 Years of Education or Equivalent from HEC recognized University/Institute. • BS/MA/MSC in (Chemistry) or equivalent. • Minimum 50% Marks or 2.50/4.00 CGPA. • Interview • Minimum 50% Marks in GAT / NTS (General) or 60% marks in MAT (Minhaj Aptitude test).Total semesters 4(2-Years)\n Per Semester Fee: 145000";
					}
						else if(select == 4)
		        	{
		        		cout<<"4- M.Phil Physics \nEligibility 16 Years of Education or Equivalent from HEC recognized University/Institute. • BS/MA/MSC in (Applied Physics) or equivalent. • Minimum 50% Marks or 2.50/4.00 CGPA. • Interview • Minimum 50% Marks in GAT / NTS (General) or 60% marks in MAT (Minhaj Aptitude test).Total semesters 4(2-Years)\n Per Semester Fee: 145000";
					}
						else if(select == 5)
		        	{
		        		cout<<"5- M.Phil Criminology \nEligibility 16 Years of Education or Equivalent from HEC recognized University/Institute. • BS/MA/MSC in (pol science, Sociology, IR, Pak studies, Mass Com, History & Law) or equivalent. • Minimum 50% Marks or 2.50/4.00 CGPA. • Interview • Minimum 50% Marks in GAT / NTS (General) or 60% marks in MAT (Minhaj Aptitude test).Total semesters 4(2-Years)\n Per Semester Fee: 145000";
					}
						else if(select == 6)
		        	{
		        		cout<<"6- M.Phil Islamiyat \nEligibility 16 Years of Education or Equivalent from HEC recognized University/Institute. • BS/MA/MSC in (Islamiyat) or equivalent. • Minimum 50% Marks or 2.50/4.00 CGPA. • Interview • Minimum 50% Marks in GAT / NTS (General) or 60% marks in MAT (Minhaj Aptitude test).Total semesters 4(2-Years)\n Per Semester Fee: 145000";
					}
						else if(select == 7)
		        	{
		        		cout<<"7- M.Phil Urdu \nEligibility 16 Years of Education or Equivalent from HEC recognized University/Institute. • BS/MA/MSC in (Urdu) or equivalent. • Minimum 50% Marks or 2.50/4.00 CGPA. • Interview • Minimum 50% Marks in GAT / NTS (General) or 60% marks in MAT (Minhaj Aptitude test).Total semesters 4(2-Years)\n Per Semester Fee: 145000";
					}
						else if(select == 8)
		        	{
		        		cout<<"8- M.Phil English \nEligibility 16 Years of Education or Equivalent from HEC recognized University/Institute. • BS/MA/MSC in (English) or equivalent. • Minimum 50% Marks or 2.50/4.00 CGPA. • Interview • Minimum 50% Marks in GAT / NTS (General) or 60% marks in MAT (Minhaj Aptitude test).Total semesters 4(2-Years)\n Per Semester Fee: 145000";
					}
						else if(select == 9)
		        	{
		        		cout<<"9- M.Phil Mathematics \nEligibility 16 Years of Education or Equivalent from HEC recognized University/Institute. • BS/MA/MSC in (Mathematics) or equivalent. • Minimum 50% Marks or 2.50/4.00 CGPA. • Interview • Minimum 50% Marks in GAT / NTS (General) or 60% marks in MAT (Minhaj Aptitude test).Total semesters 4(2-Years)\n Per Semester Fee: 145000";
					}
						else if(select == 10)
		        	{
		        		cout<<"10- MS Data Science \nEligibility 16 Years of Education or Equivalent from HEC recognized University/Institute. • BS/MA/MSC in (Data Science / Computer Science) or equivalent. • Minimum 50% Marks or 2.50/4.00 CGPA. • Interview • Minimum 50% Marks in GAT / NTS (General) or 60% marks in MAT (Minhaj Aptitude test).Total semesters 4(2-Years)\n Per Semester Fee: 145000";
					}
						else if(select == 11)
		        	{
		        		cout<<"11- MS Computer Science \nEligibility 16 Years of Education or Equivalent from HEC recognized University/Institute. • BS/MA/MSC in (Computer Science) or equivalent. • Minimum 50% Marks or 2.50/4.00 CGPA. • Interview • Minimum 50% Marks in GAT / NTS (General) or 60% marks in MAT (Minhaj Aptitude test).Total semesters 4(2-Years)\n Per Semester Fee: 145000";
					}
						else if(select == 12)
		        	{
		        		cout<<"12- MS Data Analytics \nEligibility 16 Years of Education or Equivalent from HEC recognized University/Institute. • BS/MA/MSC in (Data Science/ Computer Science / Data Analytics) or equivalent. • Minimum 50% Marks or 2.50/4.00 CGPA. • Interview • Minimum 50% Marks in GAT / NTS (General) or 60% marks in MAT (Minhaj Aptitude test).Total semesters 4(2-Years)\n Per Semester Fee: 145000";
					}
						else if(select == 13)
		        	{
		        		cout<<"13- MS Software Engineering \nEligibility 16 Years of Education or Equivalent from HEC recognized University/Institute. • BS/MA/MSC in (Computer Science / Software Engineering) or equivalent. • Minimum 50% Marks or 2.50/4.00 CGPA. • Interview • Minimum 50% Marks in GAT / NTS (General) or 60% marks in MAT (Minhaj Aptitude test).Total semesters 4(2-Years)\n Per Semester Fee: 145000";
					}
				}
				if(candidate == 6)
		        {
		        	cout<<"1- Phd Accounting & Finance\n 2- Phd Botany\n 3- Phd Chemistry\n 4- Phd Physics\n 5- Phd Criminology\n 6- Phd Islamiyat\n 7- Phd Urdu\n 8- Phd English\n 9- Phd Mathematics\n 10- Phd Data science\n 11- Phd Computer Science\n 12- Phd Data Analytics\n 13- Phd Software Engineering\n\n";
		        	cin>>select;
		        	if(select == 1)
		        	{
		        		cout<<"1- Phd Accounting & Finance \nEligibility 16 Years of Education or Equivalent from HEC recognized University/Institute. • BS/MA/MSC in (Acct & finance/Commerce, Economics & BBA) or equivalent. • Minimum 50% Marks or 2.50/4.00 CGPA. • Interview • Minimum 50% Marks in GAT / NTS (General) or 60% marks in MAT (Minhaj Aptitude test).Total semesters 4(2-Years)\n Per Semester Fee: 126000";
					}
					else if(select == 2)
		        	{
		        		cout<<"2- Phd Botany \nEligibility 16 Years of Education or Equivalent from HEC recognized University/Institute. • BS/MA/MSC in (Botany) or equivalent. • Minimum 50% Marks or 2.50/4.00 CGPA. • Interview • Minimum 50% Marks in GAT / NTS (General) or 60% marks in MAT (Minhaj Aptitude test).Total semesters 4(2-Years)\n Per Semester Fee: 145000";
					}
						else if(select == 3)
		        	{
		        		cout<<"3- Phd Chemistry \nEligibility 16 Years of Education or Equivalent from HEC recognized University/Institute. • BS/MA/MSC in (Chemistry) or equivalent. • Minimum 50% Marks or 2.50/4.00 CGPA. • Interview • Minimum 50% Marks in GAT / NTS (General) or 60% marks in MAT (Minhaj Aptitude test).Total semesters 4(2-Years)\n Per Semester Fee: 145000";
					}
						else if(select == 4)
		        	{
		        		cout<<"4- Phd Physics \nEligibility 16 Years of Education or Equivalent from HEC recognized University/Institute. • BS/MA/MSC in (Applied Physics) or equivalent. • Minimum 50% Marks or 2.50/4.00 CGPA. • Interview • Minimum 50% Marks in GAT / NTS (General) or 60% marks in MAT (Minhaj Aptitude test).Total semesters 4(2-Years)\n Per Semester Fee: 145000";
					}
						else if(select == 5)
		        	{
		        		cout<<"5- Phd Criminology \nEligibility 16 Years of Education or Equivalent from HEC recognized University/Institute. • BS/MA/MSC in (pol science, Sociology, IR, Pak studies, Mass Com, History & Law) or equivalent. • Minimum 50% Marks or 2.50/4.00 CGPA. • Interview • Minimum 50% Marks in GAT / NTS (General) or 60% marks in MAT (Minhaj Aptitude test).Total semesters 4(2-Years)\n Per Semester Fee: 145000";
					}
						else if(select == 6)
		        	{
		        		cout<<"6- Phd Islamiyat \nEligibility 16 Years of Education or Equivalent from HEC recognized University/Institute. • BS/MA/MSC in (Islamiyat) or equivalent. • Minimum 50% Marks or 2.50/4.00 CGPA. • Interview • Minimum 50% Marks in GAT / NTS (General) or 60% marks in MAT (Minhaj Aptitude test).Total semesters 4(2-Years)\n Per Semester Fee: 145000";
					}
						else if(select == 7)
		        	{
		        		cout<<"7- Phd Urdu \nEligibility 16 Years of Education or Equivalent from HEC recognized University/Institute. • BS/MA/MSC in (Urdu) or equivalent. • Minimum 50% Marks or 2.50/4.00 CGPA. • Interview • Minimum 50% Marks in GAT / NTS (General) or 60% marks in MAT (Minhaj Aptitude test).Total semesters 4(2-Years)\n Per Semester Fee: 145000";
					}
						else if(select == 8)
		        	{
		        		cout<<"8- Phd English \nEligibility 16 Years of Education or Equivalent from HEC recognized University/Institute. • BS/MA/MSC in (English) or equivalent. • Minimum 50% Marks or 2.50/4.00 CGPA. • Interview • Minimum 50% Marks in GAT / NTS (General) or 60% marks in MAT (Minhaj Aptitude test).Total semesters 4(2-Years)\n Per Semester Fee: 145000";
					}
						else if(select == 9)
		        	{
		        		cout<<"9- Phd Mathematics \nEligibility 16 Years of Education or Equivalent from HEC recognized University/Institute. • BS/MA/MSC in (Mathematics) or equivalent. • Minimum 50% Marks or 2.50/4.00 CGPA. • Interview • Minimum 50% Marks in GAT / NTS (General) or 60% marks in MAT (Minhaj Aptitude test).Total semesters 4(2-Years)\n Per Semester Fee: 145000";
					}
						else if(select == 10)
		        	{
		        		cout<<"10- Phd Data Science \nEligibility 16 Years of Education or Equivalent from HEC recognized University/Institute. • BS/MA/MSC in (Data Science / Computer Science) or equivalent. • Minimum 50% Marks or 2.50/4.00 CGPA. • Interview • Minimum 50% Marks in GAT / NTS (General) or 60% marks in MAT (Minhaj Aptitude test).Total semesters 4(2-Years)\n Per Semester Fee: 145000";
					}
						else if(select == 11)
		        	{
		        		cout<<"11- Phd Computer Science \nEligibility 16 Years of Education or Equivalent from HEC recognized University/Institute. • BS/MA/MSC in (Computer Science) or equivalent. • Minimum 50% Marks or 2.50/4.00 CGPA. • Interview • Minimum 50% Marks in GAT / NTS (General) or 60% marks in MAT (Minhaj Aptitude test).Total semesters 4(2-Years)\n Per Semester Fee: 145000";
					}
						else if(select == 12)
		        	{
		        		cout<<"12- Phd Data Analytics \nEligibility 16 Years of Education or Equivalent from HEC recognized University/Institute. • BS/MA/MSC in (Data Science/ Computer Science / Data Analytics) or equivalent. • Minimum 50% Marks or 2.50/4.00 CGPA. • Interview • Minimum 50% Marks in GAT / NTS (General) or 60% marks in MAT (Minhaj Aptitude test).Total semesters 4(2-Years)\n Per Semester Fee: 145000";
					}
						else if(select == 13)
		        	{
		        		cout<<"13- Phd Software Engineering \nEligibility 16 Years of Education or Equivalent from HEC recognized University/Institute. • BS/MA/MSC in (Computer Science / Software Engineering) or equivalent. • Minimum 50% Marks or 2.50/4.00 CGPA. • Interview • Minimum 50% Marks in GAT / NTS (General) or 60% marks in MAT (Minhaj Aptitude test).Total semesters 4(2-Years)\n Per Semester Fee: 145000";
					}
		        }
		        cout<<"\n\n1- Apply Now\n 2- Exit";
	}
};
class university: public University
{
	private:
		int Select,marks,Marks,set;
		string cnic,F_cnic,contact;
		string Name,F_Name;
		string subject[4];
		string Subject[3];
		string program,DOB;
		string email;
		string Program;
		string field;
		string check,Address;
 public:
     void Info()
	 {
	 	cout<<"\n\n 1- Apply Now\n 2- Exit\n";
	 	cin>>Select;
	 	if (Select == 1)
	 	{
	 	       cout<<"Enter Your Name: ";
			   cin>>Name;	
			   cout<<"Enter your B-Form / CNIC no: ";
			   cin>>cnic;
			   cout<<"Enter Date of Birth: ";
			   cin>>DOB;
			   cout<<"Enter Father / Gurdian Name: ";
			   cin>>F_Name;
			   cout<<"Enter Father / Guardian CNIC: ";
			   cin>>F_cnic;
			   cout<<"Enter Contact Number: ";
			   cin>>contact;
			   cout<<"Enter Home Address: ";
			   cin>>Address;
			   cout<<"Enter Email: ";
			   cin>>email;
			    cout<<"Enter Matriculation / O-Level Marks: ";
			   cin>>Marks;
			   cout<<"Enter 4 Major Subject Of Matriculation / O-Level:\n ";
			   for(int i=1;i<=4;i++)
			   {
			   	cin>>subject[i];
			   }
			   cout<<"Enter Intermediate / A-Level Program:\n 1- ICS\n 2- FSC(Pre Medical)\n 3- FSC(Pre Eng)\n 4- FA(IT)\n 5- FA\n 6- BCOM\n 7- FA\n";
			   cin>>program;
			     cout<<"Enter 3 Major Subject Of Intermediate / A-Level:\n ";
			   for(int j=1;j<=3;j++)
			   {
			   	cin>>Subject[j];
			   }
			   cout<<"Enter Intermediate / A-Level Marks: ";
			   cin>>marks;
			   cout<<"Enter Program: \n 1- ADP Progarm\n 2- BS Program\n 3- Doctoral Program\n 4- Law\n 5- MS / Mphil Program\n 6- Phd Program\n";
			   cin>>Program;
			   cout<<"Enter Field:  ";
			   cin>>field;
			   cout<<"Submit\n";
			   cin>>check;
			   if (check == "Submit" || check == "submit" || check == "1")
			   {
			   	cout<<"\t\t\t\tThanks for your interest in Minahj University!\n After Confirmation of your documents, we will send you an admission letter via Email ";
			   }
                 	cout<<" 1- Print\n 2- Back";
                 	cin>>set;
					 if(set == 1)
					 {
					     cout<<" Name: "<<Name<<"\t\t Father / Guardian Name:"<<F_Name<<"\t\t Date of Birth: "<<DOB<<" \n Cnic: "<<cnic<<"\t\t Father / Guardian Cnic: "<<F_cnic<<"\n Contact: "<<contact<<"\t\t Email: "<<email<<"\n Address: "<<Address<<"\t\t Matriculation / O-level Marks"<<Marks<<"\n Intermediate / A-level Marks: "<<marks;
						 cout<<" \nMatriculation / O-level Major Subjects:";
						 for(int i=1;i<=4;i++)
						 {
						 	cout<<subject[i]<<endl;
						 } 	
						 cout<<" Intermediate / A-level Program: "<<program;
						  cout<<"\n Intermediate / A-level Major Subjects:";
						 for(int j=1;j<=3;j++)
						 {
						 	cout<<subject[j]<<endl;
						 } 
						 cout<<" Program: "<<Program<<"\t\t Field: "<<field;
					 }			   
					 else
					 {
					 	cout<<"\t\t\t\tThanks for your interest in Minahj University!";
					 }
		}
		else
		{
			cout<<"Thanks for Visiting Minhaj University!";
		}
	 }      	
};
int main()
{
	university uni;
	uni.intro();
	uni.Info();
	return 0;
}

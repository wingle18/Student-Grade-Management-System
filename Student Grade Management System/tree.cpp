#include<iostream>
#include<string>
#include"course.h"
#include"student.h"
#include"performance.h"
#include"window.h"
#include"template.h"
#include"tree.h"
using namespace std;

inline void returnMenu(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose)
{
	std::string temp;
	std::cout << "Press 'R' to return to menu. ";
	std::cin >> temp;
	while (std::cin.fail() || (temp != "r"&&temp != "R"))
	{
		std::cout << "Try again! " << endl;
		std::cin.clear();
		std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
		std::cin >> temp;
	}
	choose = "0";
	f_0(cour, stu, per, choose);
}
void f_0(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose)
{
	window win(choose);
	win.Display();
	std::string temp;
	cin >> temp;
	while (cin.fail() || (temp != "1"&&temp != "2"&&temp != "3"&&temp != "4"&&temp != "5"))
	{
		std::cout << "Try again! " << endl;
		std::cin.clear();
		std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin >> temp;
	}
	choose = choose + temp;
	if (temp == "1")
		f_01(cour, stu, per, choose);
	else if (temp == "2")
		f_02(cour, stu, per, choose);
	else if (temp == "3")
		f_03(cour, stu, per, choose);
	else if (temp == "4")
		f_04(cour, stu, per, choose);
	else
		exit(0);
}
void f_01(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose)
{
	window win(choose);
	win.Display();
	std::string temp;
	cin >> temp;
	while (cin.fail() || (temp != "1"&&temp != "2"&&temp != "3"&&temp != "4"&&temp != "5"))
	{
		std::cout << "Try again! " << endl;
		std::cin.clear();
		std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin >> temp;
	}
	choose = choose + temp;
	if (temp == "1")
		f_011(cour, stu, per, choose);
	else if (temp == "2")
		f_012(cour, stu, per, choose);
	else if (temp == "3")
		f_013(cour, stu, per, choose);
	else if (temp == "4")
	{
		f_0(cour, stu, per, choose);
		choose = "0";
	}
}
void f_02(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose)
{
	window win(choose);
	win.Display();
	std::string temp;
	cin >> temp;
	while (cin.fail() || (temp != "1"&&temp != "2"&&temp != "3"&&temp != "4"&&temp != "5"))
	{
		std::cout << "Try again! " << endl;
		std::cin.clear();
		std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin >> temp;
	}
	choose = choose + temp;
	if (temp == "1")
		f_021(cour, stu, per, choose);
	else if (temp == "2")
		f_022(cour, stu, per, choose);
	else if (temp == "3")
		f_023(cour, stu, per, choose);
	else if (temp == "4")
	{
		choose = "0";
		f_0(cour, stu, per, choose);
	}

}
void f_03(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose)
{
	window win(choose);
	win.Display();
	std::string temp;
	cin >> temp;
	while (cin.fail() || (temp != "1"&&temp != "2"&&temp != "3"&&temp != "4"&&temp != "5"))
	{
		std::cout << "Try again! " << endl;
		std::cin.clear();
		std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin >> temp;
	}
	choose = choose + temp;
	if (temp == "1")
		f_031(cour, stu, per, choose);
	else if (temp == "2")
		f_032(cour, stu, per, choose);
	else if (temp == "3")
		f_033(cour, stu, per, choose);
	else if (temp == "4")
	{
		choose = "0";
		f_0(cour, stu, per, choose);
	}
}
void f_04(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose)
{
	window win(choose);
	win.Display();
	std::string temp;
	cin >> temp;
	while (cin.fail() || (temp != "1"&&temp != "2"&&temp != "3"&&temp != "4"&&temp != "5"))
	{
		std::cout << "Try again! " << endl;
		std::cin.clear();
		std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin >> temp;
	}
	choose = choose + temp;
	if (temp == "1")
		f_041(cour, stu, per, choose);
	else if (temp == "2")
		f_042(cour, stu, per, choose);
	else if (temp == "3")
		f_043(cour, stu, per, choose);
	else if (temp == "4")
	{
		choose = "0";
		f_0(cour, stu, per, choose);
	}
}
void f_011(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose)
{
	std::string temp;
	bool flag = 1;
	while (flag)
	{
		string course_num, course_name, credit, teacher_name;
		std::cout << "请输入课程序号："; std::cin >> course_num;
		std::cout << "请输入课程名："; std::cin >> course_name;
		std::cout << "请输入学分："; std::cin >> credit;
		std::cout << "请输入教师姓名："; std::cin >> teacher_name;
		cour.push_back(course(course_num, course_name, credit, teacher_name));
		std::cout << "是否继续录入？[Y/N]";
		std::cin >> temp;
		while (cin.fail() || (temp != "y"&&temp != "Y" &&temp != "n"&&temp != "N"))
		{
			std::cout << "Try again! " << endl;
			std::cin.clear();
			std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cin >> temp;
		}
		if (temp == "n" || temp == "N")
			flag = 0;
	}
	Sync(cour, "course.txt");
	returnMenu(cour, stu, per, choose);
}
void f_012(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose)
{
	std::string temp;
	bool flag = 1;
	while (flag)
	{
		std::string student_id, student_name;
		std::cout << "请输入学号："; std::cin >> student_id;
		std::cout << "请输入学生姓名："; std::cin >> student_name;
		stu.push_back(student(student_id, student_name));
		std::cout << "是否继续录入？[Y/N]";
		std::cin >> temp;
		while (cin.fail() || (temp != "y"&&temp != "Y" &&temp != "n"&&temp != "N"))
		{
			std::cout << "Try again! " << endl;
			std::cin.clear();
			std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cin >> temp;
		}
		if (temp == "n" || temp == "N")
			flag = 0;
	}
	Sync(stu, "student.txt");
	returnMenu(cour, stu, per, choose);
}
void f_013(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose)
{
	window win(choose);
	win.Display();
	std::string temp;
	cin >> temp;
	while (cin.fail() || (temp != "1"&&temp != "2"&&temp != "3"&&temp != "4"))
	{
		std::cout << "Try again! " << endl;
		std::cin.clear();
		std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin >> temp;
	}
	if (temp == "1")
	{
		choose = "0131";
		f_0131(cour, stu, per, choose);
	}
	else if (temp == "2")
	{
		choose = "0132";
		f_0132(cour, stu, per, choose);
	}

	else if (temp == "3")
	{
		choose = "01";
		f_01(cour, stu, per, choose);
	}

	else if (temp == "4")
	{
		choose = "0";
		f_0(cour, stu, per, choose);
	}

}
void f_0131(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose)
{
	bool flag = 0;
	int i = 1;
	std::string temp;
	while (flag == 0)
	{
		std::string course_number;
		std::cout << "请输入课程序号："; std::cin >> course_number;
		i = Exist(cour, course_number);
		if (i < 0)
			cout << "Sorry, cannot find course '" << course_number << "'. Please input again." << endl;
		else
			flag = 1;
	}
	while (flag == 1)
	{
		std::string stu_id, stu_name, score;
		std::cout << "请输入学生学号：";
		std::cin >> stu_id;
		std::cout << "请输入学生姓名：";
		std::cin >> stu_name;
		std::cout << "请输入学生成绩：";
		std::cin >> score;
		per.push_back(performance(cour[i], stu_id, stu_name, score));
		std::cout << "录入成功，是否继续？[Y/N]";
		std::cin >> temp;
		while (std::cin.fail() || (temp != "y"&&temp != "Y"&&temp != "n"&&temp != "N"))
		{
			std::cout << "Try again! " << endl;
			std::cin.clear();
			std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cin >> temp;
		}
		if (temp == "n" || temp == "N")
			flag = 0;
	}
	Sync(cour, "course.txt");
	Sync(stu, "student.txt");
	Sync(per, "performance.txt");
	returnMenu(cour, stu, per, choose);
}
void f_0132(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose)
{
	string course_num, course_name, credit, teacher_name;
	string stu_id, stu_name, score, temp;
	bool flag = 1;
	while (flag == 1)
	{
		std::cout << "请输入课程序号："; std::cin >> course_num;
		std::cout << "请输入课程名："; std::cin >> course_name;
		std::cout << "请输入学分："; std::cin >> credit;
		std::cout << "请输入教师姓名："; std::cin >> teacher_name;
		std::cout << "请输入学生学号："; std::cin >> stu_id;
		std::cout << "请输入学生姓名："; std::cin >> stu_name;
		std::cout << "请输入学生成绩："; std::cin >> score;
		course *cp = new course(course_num, course_name, credit, teacher_name);
		cour.push_back(*cp);
		per.push_back(performance(*cp, stu_id, stu_name, score));
		delete cp;
		std::cout << "录入成功，是否继续？[Y/N]";
		std::cin >> temp;
		while (std::cin.fail() || (temp != "y"&&temp != "Y"&&temp != "n"&&temp != "N"))
		{
			std::cout << "Try again! " << endl;
			std::cin.clear();
			std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
			std::cin >> temp;
		}
		if (temp == "n" || temp == "N")
			flag = 0;
	}
	Sync(cour, "course.txt");
	Sync(stu, "student.txt");
	Sync(per, "performance.txt");
	returnMenu(cour, stu, per, choose);
}
void f_021(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose)
{
	std::string old_number, new_number, new_courseName, new_credit, new_teacherName;
	int i = 1;
	bool flag = 0;
	bool flag1 = 0;
	while (flag1 == 0)
	{
		while (flag == 0)
		{
			std::cout <<endl<< "请输入要修改的课程序号：";
			std::cin >> old_number;
			i = Exist(cour, old_number);
			if (i < 0)
				cout << "Sorry, cannot find course '" << old_number << "'. Please input again." << endl;
			else
			{
				flag = 1;
				std::cout << "提示：你将要修改课程 '" << old_number << ": " << cour[i].Get_name() << "'的信息，是否确定？[Y/N]";
				char c;
				std::cin >> c;
				while ((c != 'y'&&c != 'Y'&&c != 'n'&&c != 'N') || std::cin.fail())
				{
					std::cout << "Try again! [Y/N]" << endl;
					std::cin.clear();
					std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
					std::cin >> c;
				}
				if (c == 'y' || c == 'Y')
					break;
				else
					flag = 0;
			}
		}
		if (flag == 1)
		{
			std::cout << "请输入新的课程序号："; std::cin >> new_number;
			std::cout << "请输入新的课程名："; std::cin >> new_courseName;
			std::cout << "请输入新的学分："; std::cin >> new_credit;
			std::cout << "请输入新的开课教师："; std::cin >> new_teacherName;
			cour[i].Set_course(new_number, new_courseName, new_credit, new_teacherName);
			std::string temp;
			std::cout << "提示：修改成功！是否继续修改？[Y/N]";
			std::cin >> temp;
			while (std::cin.fail() || (temp != "y"&&temp != "Y"&&temp != "n"&&temp != "N"))
			{
				std::cout << "Try again! " << endl;
				std::cin.clear();
				std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
				std::cin >> temp;
			}
			if (temp == "y" || temp == "Y")
				flag = 0;
			else
				break;
		}
	}
	Sync(cour, "course.txt");
	returnMenu(cour, stu, per, choose);
}
void f_022(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose)
{
	std::string old_id, new_id, new_name;
	int i;
	bool flag = 0; //用于判断是否修改
	bool flag1 = 0;//用于判断修改成功后是否继续修改
	while (flag1 == 0)
	{
		while (flag == 0)
		{
			std::cout << "请输入要修改的学生学号：";
			std::cin >> old_id;
			i = Exist(stu, old_id);
			if (i < 0)
				cout << "Sorry, cannot find student '" << old_id << "'. Please input again." << endl;
			else
			{
				flag = 1;
				std::cout << "提示：你将要修改学生 '" << old_id << ": " << stu[i].Get_name() << "'的信息，是否确定？[Y/N]";
				char c;
				std::cin >> c;
				while ((c != 'y'&&c != 'Y'&&c != 'n'&&c != 'N') || std::cin.fail())
				{
					std::cout << "Try again! [Y/N]" << endl;
					std::cin.clear();
					std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
					std::cin >> c;
				}
				if (c == 'y' || c == 'Y')
					flag = 1;
				else
				{
					flag = 0;
					std::string temp;
					std::cout << "是否退出修改，返回主菜单？[Y /N]";
					std::cin >> temp;
					while (std::cin.fail() || (temp != "y"&&temp != "Y"&&temp != "n"&&temp != "N"))
					{
						std::cout << "Try again! " << endl;
						std::cin.clear();
						std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
						std::cin >> temp;
					}
					if (temp == "y" || temp == "Y")
						break;
				}
			}
		}
		if (flag == 1)
		{
			std::cout << "请输入新的学号："; std::cin >> new_id;
			std::cout << "请输入新的学生姓名："; std::cin >> new_name;
			stu[i].Set_student(new_id, new_name);
			std::string temp;
			std::cout << endl<<"提示：修改成功！是否继续修改？[Y/N]";
			std::cin >> temp;
			while (std::cin.fail() || (temp != "y"&&temp != "Y"&&temp != "n"&&temp != "N"))
			{
				std::cout << "Try again! " << endl;
				std::cin.clear();
				std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
				std::cin >> temp;
			}
			if (temp == "n" || temp == "N")
				flag1 = 1;
			else
				flag = 0;
		}
	}
	Sync(stu, "student.txt");
	returnMenu(cour, stu, per, choose);
}
void f_023(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose)
{
	int i;
	bool flag = 0;
	std::string course_number, student_id, new_score;
	while (flag == 0)
	{
		std::cout << "请输入课程序号：";
		std::cin >> course_number;
		i = Exist(cour, course_number);
		if (i < 0)
			cout << "Sorry, cannot find course '" << course_number << "'. Please input again." << endl;
		else
			flag = 1;
	}
	flag = 0;
	while (flag == 0)
	{
		std::cout << "请输入学生学号：";
		std::cin >> student_id;
		i = Exist(stu, student_id);
		if (i < 0)
			cout << "Sorry, cannot find student '" << student_id << "'. Please input again." << endl;
		else
			flag = 1;
	}
	flag = 0;
	std::cout << "请输入新成绩：";
	std::cin >> new_score;
	per[Exist(per, course_number + ',' + student_id)].Set(new_score);
	Sync(per, "performance.txt");
	returnMenu(cour, stu, per, choose);
}
void f_031(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose)
{
	int i = -1;
	bool flag = 1;
	while (flag == 1)
	{
		while (i < 0)
		{
			std::string course_number;
			std::cout << "请输入课程序号：";
			std::cin >> course_number;
			i = Exist(cour, course_number);
			if (i < 0)
				std::cout << "Sorry, cannot find course '" << course_number << "'. Please try again." << endl;
		}
		cour[i].Display();
		std::string temp;
		std::cout << endl << "是否继续查询？[Y/N]";
		std::cin >> temp;
		while (std::cin.fail() || (temp != "y"&&temp != "Y"&&temp != "n"&&temp != "N"))
		{
			std::cout << "Try again! " << endl;
			std::cin.clear();
			std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
			std::cin >> temp;
		}
		if (temp == "n" || temp == "N")
			flag = 0;
		else
			i = -1;
	}
	returnMenu(cour, stu, per, choose);
}
void f_032(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose)
{
	int i = -1;
	bool flag = 1;
	while (flag == 1)
	{
		while (i < 0)
		{
			std::string stu_id;
			std::cout << "请输入学号：";
			std::cin >> stu_id;
			i = Exist(stu, stu_id);
			if (i < 0)
				std::cout << "Sorry, cannot find student '" << stu_id << "'. Please try again." << endl;
		}
		stu[i].Display();
		std::string temp;
		std::cout << endl << "是否继续查询？[Y/N]";
		std::cin >> temp;
		while (std::cin.fail() || (temp != "y"&&temp != "Y"&&temp != "n"&&temp != "N"))
		{
			std::cout << "Try again! " << endl;
			std::cin.clear();
			std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
			std::cin >> temp;
		}
		if (temp == "n" || temp == "N")
			flag = 0;
		else
			i = -1;
	}
	returnMenu(cour, stu, per, choose);
}
void f_033(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose)
{
	std::string course_number;
	std::string stu_id;
	int i = -1;
	while (i < 0)
	{
		std::cout << "请输入课程序号：";
		std::cin >> course_number;
		i = Exist(cour, course_number);
		if (i < 0)
			std::cout << "Sorry, cannot find course '" << course_number << "'. Please try again." << endl;
	}
	int j = -1;
	while (j < 0)
	{
		std::cout << "请输入学号：";
		std::cin >> stu_id;
		j = Exist(stu, stu_id);
		if (j < 0)
			std::cout << "Sorry, cannot find student '" << stu_id << "'. Please try again." << endl;
	}
	for (int k = 0; k < per.size(); k++)
	{
		if (per[k].Get_info() == (course_number + ',' + stu_id))
		{
			per[k].Display();
			break;
		}
	}
	returnMenu(cour, stu, per, choose);
}
void f_041(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose)
{
	window *win = new window(choose);
	win->Display();
	std::string course_number;
	bool flag = 0;
	int i;
	while (flag == 0)
	{
		std::cout << "请输入要删除的课程序号："; std::cin >> course_number;
		i = Exist(cour, course_number);
		if (i < 0)
			std::cout << "Sorry, cannot find course '" << course_number << "'. Please input again." << endl;
		else
			flag = 1;
	}
	std::cout << "提示：你将要删除课程 '" << course_number << " " << cour[i].Get_name() << "' 的相关信息及其全部课程成绩，是否确定？[Y/N]" << endl;
	char c;
	std::cin >> c;
	while (cin.fail() || (c != 'y'&&c != 'Y'&&c != 'n'&&c != 'N'))
	{
		std::cout << "Try again! " << endl;
		std::cin.clear();
		std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin >> c;
	}
	if (c == 'y' || c == 'Y')
	{
		for (int j = i; j < cour.size() - 2; j++)
			cour[j] = cour[j + 1];
		cour.pop_back();
		int m;
		std::string temp1;
		for (int j = 0; j < stu.size(); j++)//按学生查找
		{
			flag = 0;
			temp1 = course_number + ',' + stu[j].Get_number();
			for (int k = 0; k < per.size(); k++)
			{
				m = Exist(per, temp1);
				if (m >= 0)
				{
					flag = 1;
					break;//某学生有该课程成绩
				}
			}
			if (flag == 1)
			{
				for (int k = m; k < per.size() - 2; k++)
					per[k] = per[k + 1];
				per.pop_back();
			}
			Sync(cour, "course.txt");
			Sync(per, "performance.txt");
			returnMenu(cour, stu, per, choose);
		}
	}
	else
	{
		std::cout << "Press 'R' to return to menu." << endl;
		std::cin >> c;
		while (cin.fail() || (c != 'r'&&c != 'R'))
		{
			std::cout << "Try again! " << endl;
			std::cin.clear();
			std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cin >> c;
		}
		choose = "0";
		f_0(cour, stu, per, choose);
	}
}
void f_042(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose)
{
	window *win = new window(choose);
	win->Display();
	std::string stu_id;
	bool flag = 0;
	int i;
	while (flag == 0)
	{
		std::cout << "请输入要删除学生的学号："; std::cin >> stu_id;
		i = Exist(stu, stu_id);
		if (i < 0)
			std::cout << "Sorry, cannot find course '" << stu_id << "'. Please input again." << endl;
		else
			flag = 1;
	}
	std::cout << "提示：你将要删除学生 '" << stu_id << " " << stu[i].Get_name() << "' 的相关信息及其全部课程成绩，是否确定？[Y/N]" << endl;
	char c;
	std::cin >> c;
	while (cin.fail() || (c != 'y'&&c != 'Y'&&c != 'n'&&c != 'N'))
	{
		std::cout << "Try again! " << endl;
		std::cin.clear();
		std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin >> c;
	}
	if (c == 'y' || c == 'Y')
	{
		for (int j = i; j < stu.size() - 2; j++)
			stu[j] = stu[j + 1];
		stu.pop_back();
		int m;
		std::string temp1;
		for (int j = 0; j < cour.size(); j++)//按课程查找
		{
			flag = 0;
			temp1 = cour[j].Get_number() + "," + stu_id;
			for (int k = 0; k < per.size(); k++)
			{
				m = Exist(per, temp1);
				if (m >= 0)
				{
					flag = 1;
					break;//该学生有某课程成绩
				}
			}
			if (flag == 1)
			{
				for (int k = m; k < per.size() - 2; k++)
					per[k] = per[k + 1];
				per.pop_back();
			}
			Sync(cour, "student.txt");
			Sync(per, "performance.txt");
			delete win;
			returnMenu(cour, stu, per, choose);
		}
	}
	else
	{
		std::cout << "Press 'R' to return to menu." << endl;
		std::cin >> c;
		while (cin.fail() || (c != 'r'&&c != 'R'))
		{
			std::cout << "Try again! " << endl;
			std::cin.clear();
			std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cin >> c;
		}
		delete win;
		choose = "0";
		f_0(cour, stu, per, choose);
	}
}
void f_043(vector<course> &cour, vector <student> &stu, vector <performance> &per, std::string &choose)
{
	window win("043");
	win.Display();
	std::string course_number, stu_id;
	bool flag = 0;
	int i, j;
	while (flag == 0)
	{
		std::cout << "请输入要删除的课程序号："; std::cin >> course_number;
		i = Exist(cour, course_number);
		if (i < 0)
			std::cout << "Sorry, cannot find course '" << course_number << "'. Please input again." << endl;
		else
			flag = 1;
	}
	flag = 0;
	while (flag == 0)
	{
		std::cout << "请输入要删除学生的学号："; std::cin >> stu_id;
		j = Exist(stu, stu_id);
		if (j < 0)
			std::cout << "Sorry, cannot find course '" << stu_id << "'. Please input again." << endl;
		else
			flag = 1;
	}
	std::cout << "提示：你将要删除学生 '" << stu_id << " " << stu[i].Get_name()
		<< "' 在课程 '" << course_number << " " << cour[j].Get_name() << "'的成绩，是否确定？[Y/N]" << endl;
	char c;
	std::cin >> c;
	while (cin.fail() || (c != 'y'&&c != 'Y'&&c != 'n'&&c != 'N'))
	{
		std::cout << "Try again! " << endl;
		std::cin.clear();
		std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin >> c;
	}
	if (c == 'y' || c == 'Y')
	{
		int m = Exist(per, cour[j].Get_number() + "," + stu[i].Get_number());
		if (m < 0)
		{
			std::cout << "Error: operation failed. Press 'R' to return to menu. ";
			std::cin >> c;
			while (cin.fail() || (c != 'r'&&c != 'R'))
			{
				std::cout << "Try again! " << endl;
				std::cin.clear();
				std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cin >> c;
			}
			f_0(cour, stu, per, choose);
		}
		else
		{
			for (i = m; i < per.size() - 2; i++)
				per[i] = per[i + 1];
			per.pop_back();
			Sync(per, "performance.txt");
			returnMenu(cour, stu, per, choose);
		}
	}
	else
	{
		std::cout << "Error: operation failed. Press 'R' to return to menu. ";
		std::cin >> c;
		while (cin.fail() || (c != 'r'&&c != 'R'))
		{
			std::cout << "Try again! " << endl;
			std::cin.clear();
			std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cin >> c;
		}
		f_0(cour, stu, per, choose);
	}
}
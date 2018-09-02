#include <iostream>

/* 10681289 
 Abu Kofi Mushud*/

using namespace std;
int main(int argc, char** argv) {
	
	int examScore;
	cout << "Enter you Exams Score: ";
	cin >> examScore;
	
	if(examScore >= 80 && examScore <= 100){
		cout << "A"<< endl;
	}else if (examScore >=75 && examScore < 80){
		cout << "B+" << endl;
	}else if (examScore >=70 && examScore < 75){
		cout << "B" << endl;
	}else if (examScore >=66 && examScore <70){
		cout << "C+" << endl;
	} else if (examScore >= 60 && examScore < 66){
		cout << "C" << endl;
	}else if (examScore >= 56 && examScore < 60){
		cout << "D+" << endl;
	}else if (examScore >= 50 && examScore < 56){
		cout << "D" << endl;
	}else if (examScore >= 45 && examScore < 50){
		cout << "E" << endl;
	}else if (examScore <45){
		cout << "F" <<endl;
	}
	return 0;
}

//#include <iostream>
//using namespace std;
//int main() {
//	int N;
//	int sec;
//	cin >> N;
//	int level[6] = { 0, };
//	int flag;
//	flag = 220 - N;
//	while (cin >> sec){
//		sec *= 100;
//		if (sec < flag * 60)
//			level[5]++;
//		else if(sec >= flag * 60 && sec < flag * 68)
//			level[4]++;
//		else if (sec >= flag * 68 && sec < flag * 75)
//			level[3]++;
//		else if (sec >= flag * 75 && sec < flag * 80)
//			level[2]++;
//		else if (sec >= flag * 80 && sec < flag * 90)
//			level[1]++;
//		else if (sec >= flag * 90)
//			level[0]++;
//	} 
//	for (int a : level) {
//		cout << a << " ";
//	}
//	cout << endl;
//	return 0;
//}
/*
問題文
イルカはプログラミングコンテスト好きで、今日はAtCoderのコンテストに参加します。
現在時刻は、24 時間表記 (0:00〜23:59) で A 時ちょうどであり、コンテストがちょうど B 時間後に始まります。
コンテストの開始時刻は、24 時間表記で何時ちょうどでしょうか?
*/

#include<iostream>

int main() {
	int current,remaining,start;
	std::cin >> current >> remaining;

	start = (current + remaining) % 24; //先週やった連番のやつ使いました　現在23時(current==23)　で2時間後(remaining==2)の場合　開始は1時から(start==1) に対応させた　(ただ足しただけだと25時になってしまう　これを24時間表記に直した)

	std::cout << start << std::endl;

	return 0;
}
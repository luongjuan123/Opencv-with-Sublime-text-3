#include <opencv2/opencv.hpp>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main() {
int n; cin >> n;
if(n != 123){
	cout << "FAIL";
	cv::waitKey(0);
	return 0;
}
cv::Mat a = cv::imread("D:/Untitled.jpg");
cv::imshow("Hình ảnh",a);
cv::waitKey(0);
cv::destroyAllWindows();
return 0;
}
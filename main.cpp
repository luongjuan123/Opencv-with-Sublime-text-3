
#include <opencv2/opencv.hpp>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main() {
int n; cin >> n;
if(n != 100){
	return 0;
}
cv::Mat a = cv::imread("tmp.jpg");
cv::imshow("Hình ảnh",a);
cv::imshow("Hình ảnh",a);
cv::waitKey(0);
cv::destroyAllWindows();
return 0;
}
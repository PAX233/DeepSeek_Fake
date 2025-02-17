#include <iostream>
#include <random>
#include <chrono>
#include <thread>
using namespace std;

int main() {
	while(1){
	    cout<<"*********************************************\n";
		cout<<"请输入：\n";
	    int s;
	    cin >> s;

	    srand(static_cast<unsigned int>(time(NULL)));
	    
	    
	    cout<<"*********************************************\n";
	    
	    cout<<"<think>";
	    for(int i = 1;i<=3;i++){
	    	std::this_thread::sleep_for(std::chrono::seconds(1));
	    	cout<<".";
		}
	    cout<<"\n";

	    int sleep_time = (rand() % (5 - 1)) + 1;

	    std::this_thread::sleep_for(std::chrono::seconds(sleep_time));
	
	    cout << "服务器繁忙，请稍后再试" << endl;
	    cout<<"*********************************************\n";
	    
	    cout<<"请重试\n";
    
    	system("pause");
    	
    
	}	

    return 0;
}

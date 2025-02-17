## 代码
1.获取用户输入
```c

cout<<"请输入：\n";
int s;
cin >> s;
```
2.伪装思考痕迹
```c
cout<<"<think>";
for(int i = 1;i<=3;i++){
	std::this_thread::sleep_for(std::chrono::seconds(1));
	cout<<".";
}
cout<<"\n";
```
3.深度伪装（DeepFake睡几秒）
```c
int sleep_time = (rand() % (5 - 1)) + 1;

std::this_thread::sleep_for(std::chrono::seconds(sleep_time));
```
4.加上灵魂（浇给）
```c
cout << "服务器繁忙，请稍后再试" << endl;
```
# 复刻

## 环境问题(可跳过)
以devC++为例
devC++ - Tool - Compiler Options
![在这里插入图片描述](https://i-blog.csdnimg.cn/direct/47a6de3ce7fb453fbacd1ea8f82d6af6.png)
在编译前加入命令
```
-std=c++11
```
![在这里插入图片描述](https://i-blog.csdnimg.cn/direct/d3b3fd9bede14dc4aeb3a315a33ce6ca.png)
## 完全代码
```c
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

```
## 准备DeepSeek图标ico
## 更改exe图标
1.准备DeepSeek图标ico
2.下载并安装 Resource Hacker
http://www.angusj.com/resourcehacker/
3.将exe文件与ico图标放置于Resource Hacker同一目录
4.在目录下运行终端
5.输入命令
```bash
ResourceHacker.exe -open "原文件.exe" -save "修改后的文件.exe" -action addoverwrite -res "图标文件.ico" -mask ICONGROUP,MAINICON,0
```
6.发给群友

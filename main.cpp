#include <iostream>
#include <string>
#include <unordered_map>

const int FOUNDER_ID = 1;
const int NOT_MY_ID = 12345;

using namespace std;
int main() {
    unordered_map<int, string> nameMapper({{FOUNDER_ID, "Founder"}});
    nameMapper.insert(pair<int, string>(NOT_MY_ID, "Mr. Peterson"));

    cout << "01: " << nameMapper.at(1) << endl;
    cout << "Me: " << nameMapper.at(NOT_MY_ID) << endl;


    return 0;
}

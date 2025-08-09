#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

//using std::cout, std::endl, std::string; //only for c++17

static void puts(string msg) {
    cout << msg;
}
static void puts(int val) {
    cout << val << endl;
}
static void puts(int val, string msg) {
    cout << val << msg;
}
static void puts(float val) {
    cout << val << endl;
}
static void puts(float val, string msg) {
    cout << val << msg;
}
static void puts(double val) {
    cout << val << endl;
}
static void puts(double val, string msg) {
    cout << val << msg;
}

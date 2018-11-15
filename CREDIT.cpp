#include <iostream>
using namespace std;

int main() {
  long int card = 0;
  long int account = 0;
  int time = 0; 
  cout << "Please enter your card number";
  cin >> card;
  account = card;
  if (card/1000000000000000 == 4 || card / 1000000000000 == 4) {
    int total = 0;
    int key = card % 10;
    int cnt = 2;
    for (long int a = 1000000000000000;time <= 15;a = a / 10) {
      int num = 0;
      num = card / a;
      card = card % a;
      int ten = 0;
      int one = 0;
      if (cnt <= 16) {
        if (cnt % 2 == 0) {
          if (num * 2 >= 10) {
            ten = num * 2 / 10;
            one = num * 2 % 10;
            total = total + ten + one;
          } else {
            total = total + num * 2;
          }
          cnt++;
        } else {
          total = total + num;
          cnt++;
        }
      }
      time++;
    }
    int last_num = 10-total%10;
    if (last_num == key || last_num == 10) {
      cout << "VISA卡，卡號" << account;
    } else {
      cout << "你不合法喔";
    }
  }else if (card / 1000000000000000 == 5) {
    long int test;
    test = card % 1000000000000000;
    if (test / 100000000000000 >= 1 && test / 100000000000000 <= 5) {
      int total = 0;
      int key = card % 10;
      int cnt = 2;
      for (long int a = 1000000000000000;time <= 15;a = a / 10) {
        int num = 0;
        num = card / a;
        card = card % a;
        int ten = 0;
        int one = 0;
        if (cnt <= 16) {
          if (cnt % 2 == 0) {
            if (num * 2 >= 10) {
              ten = num * 2 / 10;
              one = num * 2 % 10;
              total = total + ten + one;
            } else {
              total = total + num * 2;
            }
            cnt++;
          } else {
            total = total + num;
            cnt++;
          }
        }
        time++;
      }
      int last_num = 10-total%10;
      if (last_num == key || last_num == 10) {
        cout << "MASTER卡，卡號" << account;
      } else {
        cout << "你不合法喔";
      }
    }
  } else if (card / 1000000000000000 == 2) {
    int test = card / 10000000000;
    if ( test >= 222100 && test <= 272099) {
      int total = 0;
      int key = card % 10;
      int cnt = 2;
      for (long int a = 1000000000000000;time <= 15;a = a / 10) {
        int num = 0;
        num = card / a;
        card = card % a;
        int ten = 0;
        int one = 0;
        if (cnt <= 16) {
          if (cnt % 2 == 0) {
            if (num * 2 >= 10) {
              ten = num * 2 / 10;
              one = num * 2 % 10;
              total = total + ten + one;
            } else {
              total = total + num * 2;
            }
            cnt++;
          } else {
            total = total + num;
            cnt++;
          }
        }
        time++;
      }
    int last_num = 10-total%10;
    if (last_num == key || last_num == 10) {
      cout << "MASTER卡，卡號" << account;
    } else {
      cout << "你不合法喔";
    }
  } else {
    cout << "你不合法喔";
  }
}
}

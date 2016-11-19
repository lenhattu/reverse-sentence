#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

void reversePart(string &s, int first, int last) {
    while (first < last) {
        char tmp = s[first];
        s[first] = s[last];
        s[last] = tmp;
	first++;
	last--;
    }
}

int main()
{
  string s = "";
  getline(cin, s);
  int startIndex = -1;
  for (int i=0; i<s.length(); i++) {
      if (startIndex == -1 && s[i] != ' ') {
          startIndex = i;
      }
      if (startIndex != -1 && (s[i+1] == ' ' || s[i+1] == '\0')) {
          reversePart(s, startIndex, i);
          startIndex = -1;
      }
  }
  //reversePart(s, 0, 2);
  reversePart(s, 0, s.length()-1);
  cout << s << endl;
}

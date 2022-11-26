#include <bits/stdc++.h>
using namespace std;

signed main(){
    srand(time(NULL));
    for(int create = 1; create <= 10; create ++){
        string str,str2;
        str = to_string(create);
        str2 = str;
        str += ".in";
        str2 += ".out";
        fstream input_fstream;
        fstream output_fstream;
        input_fstream.open(str, std::ios_base::out);
        output_fstream.open(str2, std::ios_base::out);
        if (!output_fstream.is_open() || !input_fstream.is_open()) cout << "Failed to open " << '\n';
        else {
            input_fstream << "hi" << endl;
            output_fstream << "hi" << endl;
        }
        output_fstream.close();
        input_fstream.close();
        fstream ifs3;
        ifs3.open(str, ios_base::out);
        if (!ifs3.is_open()) cout << "Failed to open " << '\n'; 
        else {
            //generate .in file
            //ifs3 input
            //modify below
            bool yes = rand()%2;
            int len = rand()%100;
            string str = gen_randomstr(len);
            if(yes){
            for(int i = str.size(); i >= 0; i--){
                str+=str[i];
            }
            }
            ifs3 << str;
            //do not modify below
        }
        ifs3.close();
        ifstream ifs;
        ifs.open(str);
        fstream ifs2;
        ifs2.open(str2, ios_base::out);
        if(!ifs2.is_open() || !ifs.is_open()){
            cout << "Failed to open " << '\n';
        }
        else{
            //generate .out file
            //ifs input ifs2 output
            //modify below
            string s; ifs >> s;
            bool det = 1;
            for(int i = 0; i < s.size()/2; i++){
                if(s[s.size()-1-i]!=s[i]){
                    det = 0;
                    break;
                }
            }
            det?ifs2<<1:ifs2<<0;
            //do not modify below
        }
    }
}

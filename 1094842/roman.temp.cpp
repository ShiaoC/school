#include <iostream>
#include <string>
#include <map>

using namespace std;

class romanType
{
    private:
        string romanNum;
        int naturalNum;
    public:
        void setRoman(string); //設定羅馬數字、
        void roman2Natural(); //將羅馬數字轉換為正整數、
        int getNatural(); //取得正整數、
        string getRoman(); //取得羅馬數字；
        int R2N(char);

        romanType();
        romanType(string );
        ~romanType();
};


int main() {

	romanType *roman;
	string str;

	for(int i = 0; cin >> str; i++) {

		if(i % 2) {

			roman = new romanType();
			roman->setRoman(str);

		} else {

			roman = new romanType(str);
		}
		roman->roman2Natural();

		cout << roman->getRoman() << " = " << roman->getNatural() << endl;
	}
}

romanType::romanType(){
    romanNum = "";
    naturalNum = 0;
}
romanType::romanType(string s){
    romanNum = s;
    naturalNum = 0;
}
romanType::~romanType(){
}

//!!!!!!!!!!
void romanType::setRoman(string s){
    romanNum = s;
}
void romanType::roman2Natural(){
    int last = R2N(romanNum[0]);
    for(int i=1;i<romanNum.length();i++){
        if(last < R2N(romanNum[i])){
            naturalNum -= last;
        }
        else{
            naturalNum += last;
        }
        last = R2N(romanNum[i]);

    }
    naturalNum += last;

}
int romanType::getNatural(){
    return naturalNum;
}
string romanType::getRoman(){
    return romanNum;
}

int romanType::R2N(char c){
    if( c == 'M')   return 1000;
    else if( c == 'D') return 500;
    else if( c == 'C') return 100;
    else if( c == 'L') return 50;
    else if( c == 'X') return 10;
    else if( c == 'V') return 5;
    else if( c == 'I') return 1;
}


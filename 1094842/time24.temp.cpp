#include <iostream>
#include <string>

using namespace std;

class Time24 {
    private:
        int HOUR;
        int MINUTE;
        int SECOND;

    public:
        void setTime(int, int, int);
        void displayTimeIn24Hour();
		void displayTimeIn12Hour();
		void displayGreeting();
		Time24();
		~Time24();
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

	Time24 time24;
	int h, m, s;

	while(cin >> h >> m >> s) {

		time24.setTime(h, m, s);
		time24.displayTimeIn24Hour();
		time24.displayTimeIn12Hour();
		time24.displayGreeting();
	}
}

Time24::Time24(){
    HOUR = 0;
    MINUTE = 0;
    SECOND = 0;
}
Time24::~Time24(){
}

void Time24::setTime(int hr, int minu, int sec){
    if(hr>23 || hr < 0 || minu > 59 ||  minu < 0 || sec > 59 ||  sec < 0){
        HOUR = 0;
        MINUTE = 0;
        SECOND = 0;
    }
    else{
        HOUR = hr;
        MINUTE = minu;
        SECOND = sec;
    }
}
void Time24::displayTimeIn24Hour(){if(HOUR<10){
                cout<<'0';
            }
            cout<<HOUR<<':';
            if(MINUTE<10){
                cout<<'0';
            }
            cout<<MINUTE<<':';
            if(SECOND<10){
                cout<<'0';
            }
            cout<<SECOND<<'\n';
}
void Time24::displayTimeIn12Hour(){
    if(HOUR%12 == 0){
        cout<<"12:";
        if(MINUTE<10){
            cout<<'0';
        }
        cout<<MINUTE<<':';
        if(SECOND<10){
            cout<<'0';
        }
        cout<<SECOND;
    }
    else{
        if(HOUR%12<10){
            cout<<'0';
        }
        cout<<HOUR%12<<":";
        if(MINUTE<10){
                cout<<'0';
            }
            cout<<MINUTE<<':';
            if(SECOND<10){
                cout<<'0';
            }
            cout<<SECOND;
    }
    if(HOUR>=12){
        cout<<" PM"<<'\n';
    }
    else{
        cout<<" AM"<<'\n';
    }
}
void Time24::displayGreeting(){
    if(HOUR>=6 && HOUR<12){
        cout<<"Good Morning"<<'\n';
    }
    else if(HOUR>=12 && HOUR<18){
        cout<<"Good Afternoon"<<'\n';
    }
    else if(HOUR>=18 && HOUR<23){
        cout<<"Good Evening"<<'\n';
    }
    else{
        cout<<"Time to Sleep"<<'\n';
    }
}

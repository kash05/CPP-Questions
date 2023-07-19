
// 1 Dog can carry 1 OR 2 cats at a time.

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int c,d,l;
	    cin >> c >> d >> l;
        int j=0;
        int count=0;

        if(l<(d*4)){
            cout << "no" << endl;
            break;
        }

	    while(j<=c){
	 for(int i=0;i<=c;i++){
                if(((c-i)+d)*4==l){
                    count++;
                }
            }
            j++;
        }
        if(count >= 1){
            cout << "yes" << endl;
        }else{
            cout << "no" << endl;
        }
        
	}
	return 0;
}

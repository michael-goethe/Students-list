#include <cstdlib>
#include "iostream"
#include "iomanip"
using namespace std;
const int lon = 6;
struct students{
int *mas;
char name[100];

int arr[4]; // 1 - physics, 2-math, 3-informatic, 4-rus lang;
int sum;
int best;
int lenght;
};

class Myclass{
	private:
		int symbol[lon] = {65, 69, 73, 79, 85, 89};
			int n, random;
		students * mas;
		int midph, midmath, midinf, midrus, delelem;
		int delarray[100];
	public:
		void del(int elem);
	    bool randomsymbol(int i, int j);
		void randomname();
		void input();
		void count();
		void output();
		Myclass();
		};
	Myclass::Myclass(){
		
		cout << "How much students you want to assess?" << endl;
		cin >> n;
		mas = new students[n];
		delelem = 0;
		midph = 0;
		midmath = 0;
		midinf = 0;
		midrus = 0;
		for (int k = 0; k < 100; k++)
			delarray[k] = -1;
	}
	void Myclass::del(int elem){
		delarray[delelem] = elem;
		delelem++;
		        midph-=mas[elem].arr[0];
                midmath-=mas[elem].arr[1];
                midinf-=mas[elem].arr[2];
                midrus-=mas[elem].arr[3];
	}
	
	bool Myclass::randomsymbol(int i, int j){

	     bool cont = true;
			for (int k = 0; k < lon; k++){
			
			if (symbol[k] == (int)mas[i].name[j - 1])
			cont = false;
		}
			for (int k = 0; k < lon; k++){

		if (symbol[k] == (int)mas[i].name[j - 2])
		cont = false;
	}
	if (cont)
	return false;
	else return true;
}
	void Myclass::randomname(){
      
		for (int i = 0; i < n; i++){
		cout << endl;
			mas[i].lenght = rand() % 4 + 4;
			
			for (int j = 0; j < mas[i].lenght; j++){
			random = rand () % 25 + 65;	
			if (j > 1 && !randomsymbol(i, j)) // 2 пред - согласные
			random  = symbol[rand () % 5];
			mas[i].name[j] = random;	
			cout << mas[i].name[j];	
			}
		
	}
}
	void Myclass::input(){
		cout << endl;
			for (int i = 0; i < n; i++){
				mas[i].sum = 0;
            for (int j = 0; j < 4; j++){
            	cout << "type the score of " << i+1 << " student by subjects: physics, math, computer science and russian language (do it in order)" << endl;
            	cin >> mas[i].arr[j];
        }
		}
	}
	void Myclass::count(){
    

			for (int i = 0; i < n; i++){
				int m = 0;
				mas[i].sum;
				 midph+=mas[i].arr[0];
                midmath+=mas[i].arr[1];
                midinf+=mas[i].arr[2];
                midrus+=mas[i].arr[3];
                
            for (int j = 0; j < 4; j++){
            	mas[i].sum+=mas[i].arr[j];
            	if (mas[i].arr[j] > m){
            	mas[i].best = mas[i].arr[j];
            	m = mas[i].arr[j];
            }
        }
		}
	}
	void Myclass::output(){
		bool contin;
		for (int i = 0; i < n; i++){
			contin = true;
			for (int j = delelem; j > -1; j--)
				if (i == delarray[j]){
				contin = false;
			}
			if (contin){
		cout << endl << "the name of the " << i+1 << " student is ";
		for (int j = 0; j < mas[i].lenght; j++)
			cout << mas[i].name[j];
			
			
			
			cout << endl << "best of " << i+1 << " student - " << mas[i].best << endl;
            	cout << "sum of " << i+1 << " student - " << mas[i].sum << endl;
            }
        }
            cout << "averege score by physics - " << midph/(n-delelem) << endl;
            cout << "averege score by math - " << midmath/(n-delelem) << endl;
	cout << "averege score by computer science - " << midinf/(n-delelem) << endl;
            cout << "averege score by russian language - " << midrus/(n-delelem) << endl;
            
            
	}


int main()
{

  int num, delnum;	
  Myclass students;
  students.randomname();
  students.input();
  students.count();
  students.output();
   cout << "Do you want delete someone or add or output or reeditwelfmweamewal" << endl;
  // cin >> num;
   cout << "nfsjnsajsdfan";
   switch (num){
   	case '49':
   		cin >> delnum;
   		students.del(delnum);
   		break;
}
 
cin.get();
cin.get();
 return 0;
}
